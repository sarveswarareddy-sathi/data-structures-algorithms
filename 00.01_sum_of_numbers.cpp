#include<stdio.h>

//sum on number complexity - different strategies will have different complexity

//using the formula
int fun1(int n) {
    return n * (n+1) / 2 ;
}

//using loop
int fun2(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum = sum + i;
    }
    return sum;
}
//output - 1 + 2 + 3 + ..... + n

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
//output = 1 + (1+1) + (1+1+1) + .........+ (n)

//which one is more efficient?? --> next module - asymptotic analysis
