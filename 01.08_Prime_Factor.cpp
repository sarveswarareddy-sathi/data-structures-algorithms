// Prime Number = 2, 3, 5, 7, 11, .........


void prime_fact_naive(int n) {
    for (int i = 2; i < n; i++) {
        if (isprime(i)) {
            int x = i;
            while(n % x == 0) {
                print(i);
                x = x*i;
            }
        }
    }
}