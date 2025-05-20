
// Best, Average and Worst Cases ..............

int getSum (int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum = sum + arr[i];
    }
    return sum;
}
// Time taken - c1*n + c2
// Order of growth  - n

int getSum(int arr[], int n) {
    if (n % 2 == 0)
        return 0;
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum = sum + arr[i];
    return sum;
}
// cant guess the order of growwth easily -------------
// Best - when input is even --> O(C) = C
// Avg - assumption half time even and half time odd --> calc mean --> ((c1*n + c2) +  (c3))/2 --> O(n)
// Worst - always not even = c1*n + c2 --> O(n)