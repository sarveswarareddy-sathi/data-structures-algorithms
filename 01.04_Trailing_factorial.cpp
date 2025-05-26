//Count # of zeros in n!

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