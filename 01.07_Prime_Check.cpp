/*
---> A prime number is a natural number greater than 1, which is divisible by itself and '1'.
---> fact1 : '1' cant be prime or composite.
---> fact2 : All even except '2' are not prime. All prime numbers are ODD.
---> fact3 : Every prime number can be represented as 6n+1 or 6n-1 except the prime 2 & 3. Where n is natural number.
---> fact4 : '2' and '3' are only two consecutive prime numbers.
---> fact5 : Every even integer > 2 can be represented as sum of two primes
---> Theorem : natural number p > 1 is prime only if --> (p-1)! = (p-1)modp
---> fermat therem : If 'n' is a prime, then for every a, 1 <= a < n
        ---> a^(n-1) = 1modn
---> theorem : The probability that a given, randomly chosen number n is prime is inversely proportional to its number of digits, or to the logarithm of n.
---> Any odd integer greater than 5 can be expressed as a sum of an odd prime (all primes other than 2 are odd) and an even semiprime. A semiprime number is a product of two prime numbers. This is called Lemoine’s conjecture

Properties :
---> Every number greater than 1 can be divided by at least one prime number
---> Every even integer > 2 can be represented as sum of two primes
---> Two prime numbers are always co-prime to each other
---> Each composite number can be factored into prime factors
---> Co-prime means no common factors other than '1'. GCF is always '1'

Checking PRIME or NOT?
Naive Solution : Iterate through all numbers '2' to 'sqrt(n)' and check if it divides or not. n % i = 0
Time Complexity : O(sqrt(n))
Auxiliary Space : O(1)

Approach 2 : 1st check 2 & 3 divisible or not. then check (6n+1) or (6n-1) are divisble or not. Iterate 5 to sqrt(n) by (i+6) increment and check i or i+2 divisible or not.
and every composite number will have prime factor.
Time Complexity : O(sqrt(n))
Auxiliary Space : O(1)
*/

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
