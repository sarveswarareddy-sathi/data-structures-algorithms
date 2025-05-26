// Largest common divisor of both operands - GCD

// Naive Solution
// Time complexity - O(min(a,b)) & Space Complexity - O(1)
int naive_gcd(int a, int b) {
    int res = min(a, b);

    while (res > 0) {
        if (a%res == 0 && b%res == 0) break;
        res--;
    }
    return res;
}

// More Efficient Approach - Euclidean Algorithm
// Using mod
int eff_gcd(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return gcd(b, a%b);
    }
}