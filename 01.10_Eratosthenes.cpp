/*
 --> Prime numbers less than given number
 naive - O(n*sqrt(n))
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