//Analysis of Common Loops

int loop1() {
    int sum = 0;
    for (int i = 1; i <= n; i = i + c) {
        sum = sum + i;
    }
    return sum;
}

/*
Loop1 Analysis : 
    Loop Runs ceil(n/c) times --> Time Complexity : O(n)
*/

int loop2() {
    int sum = 0;
    for (int i = n; i > 0; i = i - c) {
        sum = sum + i;
    }
    return sum;
}

/*
Loop2 Analysis : 
    Loop Runs ceil(n/c) times --> Time Complexity : O(n)
*/

int loop3() {
    int sum = 0;
    for (int i = 1; i < n; i = i * c) {
        sum = sum + i;
    }
    return sum;
}

/*
Loop3 Analysis : 
    Loop Runs log{c}{n} times --> Time Complexity : O(log{c}n)
    C^0, C^1, .......C^(K-1);
    C^(k-1) < n
    k < log{c}{n} + 1
*/

int loop4() {
    int sum = 0;
    for (int i = n; i > 1; i = i/c) {
        sum = sum + i;
    }
    return sum;
}

/*
Loop4 Analysis : 
    n/c^0, n/c, n/c^2,......, n/c^(k-1)
    last term > 1
    n/c^(k-1) > 1
    --> log on both sides
    k-1 < log{c}{n}
    k < log{c}{n} + 1
    --> THETA(log{c}{n})
*/

int loop5() {
    int sum = 0;
    for (int i = 2; i < n; i = pow(i,c)) {
        sum = sum + i;
    }
    return sum;
}

/*
Loop5 Analysis : 
    2, 2^c, (2^c)^^2,.....2^c^^k-1
    2^c^^k-1 < n
    c^k-1 < log{c}{n}
    k-1 < log{c}log{2}n + 1
    THETA(log{2}{c}n)

*/