/*
 --> Prime numbers less than given number
 Sieve of Eratosthenes : works well < 10 million or so
 naive - O(n*sqrt(n))
 sieve - O(n*log(log(n))) & O(n)

 Sieve of Eratosthenes : 
 1. Create an array of true values - representing potential primes 2 to n
 2. Start with smallest prime '2' - mark all multiples of '2' not prime
 3. repeat it for '3', '5' and continue it till sqrt(n)
*/

void printPrime_naive(int n) {
    for (int i = 2; i <= n; i++) {
        if (isprime(i)) {
            printf(i);
        }
    }
}

/*
Sieve of Eratosthenes -
    --> begins with certain number and marks its multiplications as FALSE. 
    '2' - 4, 6, 8, 10,..... 
    '3' - 6, 9, 12,...... 
    complexity - O(nloglogn)
*/

void sieve(int n) {
    vector<bool> isprime(n+1, true);
    for (int i=2; i*i <=n ; i++) {
        if(isPrime[i]) {
            for (int j = 2*i; j<=n ; j = j+1) {
                isprime[j] =  false;
            }
        }

        for (int i=2; i <=n; i++) {
            if (isprime[i]) {
                cout << i << " " ;
            }
        }
    }
}

//Optimised - i^2, i^2, i^2+2i,.........

void sieve(int n) {
    vector<bool> isprime(n+1, true);
    for (int i=2; i<=n; i++) {
        if (isprime(i)) {
            cout << i << "";
            for (int j=i*i; j <=n; j=j+i) {
                isprime[j] = false;
            }
        }
    }
}
