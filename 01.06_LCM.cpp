// least common divisible by both
// For co-prime - a*b

int naive_lcm(int a, int b) {
    int res = max(a,b);
    while(true) {
        if(res % a == 0 && res % b == 0) return res;
        res++;
    }
    return res;
}

//time complexity - O(a*b - max(a,b))

// efficient a*b = gcd(a,b) * lcm(a,b)
// gcd comp - log (min(a,b))