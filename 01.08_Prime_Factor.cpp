// Prime Number = 2, 3, 5, 7, 11, .........
// Prime divisors called prime factors. Need to further rewrite the composite numbers to prime diviros


/*
1. compute power's of 'i' are dividing 'n' - example : '12'
    --> i = 2 then print '2'
    --> i = 2^2 then print '2' once more
    --> i = 2^2 then NOT -- then go to '3'
    --> repeat for '3'
    --> repeat for '4' to '11'
2. Time Complexity : O(nlogn)
*/
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

//Efficient Solution
/*
    --> Divisors always appear in pairs. Example : 30 : (1,30), (2,15), (3,10), (5,6)
    --> Let (x,y) be pair x*y = n, If x <= y, x*x <= n then x <= sqrt(n)
    --> '2' to sqrt(n)

    --> A number can be written as multiplications of power of prime factors. 
*/

int prime_fact_eff1(int n){
    if ( n <= 1) {
        return -1;
    }

    for (int i = 2; i*i <= n; i++) {
        while(n%i == 0) {
            print(i);
            n=n/i;
        }
    }
    if (n > 1) print(n);
}

int primefactor(int n) {
    if (n <= 1) return -1;
    while(n%2 == 0) {
        print(2); 
        n = n/2;
    }

    while(n%3 == 0) {
        print(3);
        n = n/3;
    }

    for (int i = 5; i*i <= n; i = i + 6) {
        while(n%i == 0) {
            print(i); n=n/i;
        }
        while(n%(i+2) == 0) {
            print(i+2);
            n = n/(i+2);
        }
    }
    if (n>3) {
        print(n);
    }
}