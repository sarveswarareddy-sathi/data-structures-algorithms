/*
---> Find number of trailing zeros in factorial of n
---> Naive Approach : 1st calculate n! and then count trailing 0's - count trailing 0s by repeatedly dividing the factorial by 10 till remainfer is '0'
    ---> Overflow issue even for slightly bigger numbers as factorial numbers shoot-up easily
---> Efficient Approach : Idea is to consider prime factors of a factorial 'n'. A trailing zero is always produced by prime factors '2' and '5'
    ---> Task is to find prime factors and count the number of 5's and 2's.
    ---> Observation : # of 2's in prime factors always more than or equal to number of 5's --> So count 5s in prime factors
    ---> Formula for counting trailing 0's in n! : count of 5's in prime factors of n!
    ---> floor(n/5) + floor(n/25) + floor(n/125) + ..........
    ---> logic - loop over (int i = 5; n / i >= 1; i *= 5)
    Time Complexity - O(log5(n))
    Auxiliary Space - O(1)
*/

#include <stdio.h>

int count_zero(int n) {
    int res =1;
    int count = 0;

    for (int i = 2; i <= n; i++) {
        res = res * i; 
    }

    while (res > 0) {
        if (res % 10 == 0) {
            count++;
        } else {
            return count;
        }
        res = res / 10;
    }

    return count;
}

/*
Efficient Method - 
Trailing Zero Count - floor(n/5) + floor(n/25) + floor(n/125) + ..........
*/

int count_zero2(int n){
    int res = 0;
    for (int i = 5; i <= n; i = i*5) {
        res = res + n/i;
    }
    return res;
}
