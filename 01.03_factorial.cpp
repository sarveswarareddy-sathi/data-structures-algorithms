/*
---> Factorial Recursive - Multiplication of all numbers less than or equal to given number
---> n! = n*(n-1)!, n = 1 for n==0 or n==1
---> Time Complexity - O(n)
---> Auxiliary Space - O(n)

---> Factorial Iterative - res* = i using for loop()
---> Time Complexity - O(n)
---> Auxiliary Space - O(1)
*/

#include <stdio.h>

int factorial(int in) {
    int res = 1;

    for (int i = 2; i <= in; i++) {
        res = res*i;
    }
    return res;
}

//Time complxity - O(n) & Space Complexity = O(1)

int recur_factorial(int in) {
    if (in == 0) {
        return 1;
    }
    return in*recur_factorial(in - 1);
}

// Time cmplexity = O(n), Space O(n) - Auxilary
