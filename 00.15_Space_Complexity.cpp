/*
Space Complexity : Order of growth of memory or RAM space interms of input size
*/

int getSum1(int n) {
    return n*(n+1)/2;
}
//constant space

int getSum2(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum = sum + i;
    }

    return sum;
}
//need three variables - also constant
// O(1) or THETA(1)

int arrSum(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum = sum + arr[i];
    }
    return sum;
}

//arr[] - dynamic and linear - THETA(n)

// Auxiliary SPACE : order of growth of extra space or temporary space in terms of input size
int arrSum(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum = sum + arr[i];
    }
    return sum;
}
//space - theta(1)

int func(int n) {
    if (n <= 0) {
        return 0;
    }
    reuturn n + fun(n-1);
}
//need auxiliary space in funciton STACK - THETA(n)

int fib(int n) {
    if (n==0 || n == 1) {
        return n;
    }
    return fib(n-1) + fib(n-2);
}
/*
        C            --> C
    C       C        --> 2C
C   C   C    C       --> 4C

C + 2c + 4c + ...... height of tree --> THETA(n)
*/


int fib(int n) {
    int f[n+1];
    f[0] = 0;
    f[1]  1;
    for (int i =2; i <=n; i++) {
        f[i] = f[i-1] + f[i-2];
    }
    return f[n];
}
//spoace complexity - theta(n)

//optimize prev space
int fib(int n) {
    if(n == 0 || n == 1) {
        return 0;
    }
    int a  = 0; b = 1;
    for (int i = 2; i <=n; i++) {
        c=a+b;
        a=b;
        b=c;
    }
    return C;
}
//space - constant