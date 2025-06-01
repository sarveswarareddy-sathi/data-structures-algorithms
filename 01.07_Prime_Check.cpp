// To be prime - if it is only have of divisors are itself and one.
// all even except '2' are not prime. '1' is not composite or nor prime too.

#include<stdio.h>

bool prime_check_naive(int n) {
    if (n == 1) return false;

    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

//Complexity - O(n)


//Efficient Method - Divisors always appear in PAIRS
// 30 : (1, 30) (2, 15) (3,10) (5, 6)
// 65 : (1, 65) (5, 13) (1, 25) (5, 5)
// If (x,y) is a pair x * y = n and if x <= y, x*x <= n ==> x <= sqrt(n)
// just to check till 2 to sqrt(n)

bool prime_eff(int n) {
    if (n == 1) return false;

    for (int i = 2; i*i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

//Complexity - O(sqrt(n))


//Furthuer Optimize 
// Idea : By checking n % 2 == 0 and n % 3 == 0, we can save many iterations for large 'n'
bool prime_eff2(int n) {
    if (n == 1) return false;
    if (n == 2 || n == 3) return true;
    if (n%2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i*i <= n; i = i+6) {
        if (n%i == 0 || n%(i+2) == 0) return false;
    }
    return true;
}