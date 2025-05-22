/*
Asympotic Analysis ---------------------
1. The idea is to measure order of growth - time taken growing interms of input size
2. Does not depend upon machine, programming language,... -- mostly we deal worst case scenario
3. No need to implment, can judge by asymptotic analysis.
*/

#include<stdio.h>

//using the formula
int fun1(int n) {
    return n * (n+1) / 2 ;
}

// Time taken : C1
// We always assume that operations takes constant time.
// Order of growth = C1

//using loop
int fun2(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum = sum + i;
    }
    return sum;
}
//output - 1 + 2 + 3 + ..... + n
// Some operations executing 'n' times. some executing constant number of times.
// Time taken : c2*n + c3
// Order of growth = LINEAR . Always can ignore non-leading terms

//using nested loop
int fun3(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            sum++;
        }
    }
    return sum;
}
// output = 1 + (1+1) + (1+1+1) + .........+ (n)
// Time taken : n*(n+1)/2 --> c4n^2 + c5n + c6
// Order of growth = QUADRADIC

//which one is more efficient?? --> - asymptotic analysis
// Lets says constant are machine dependent - c1 = 1000, c2 = 1, c3 = 1
// Using asymptonic anlaysis, even machine is fast, after certain point of 'n' --> always linear func perf will be low after certain 'n' size
