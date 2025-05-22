/*
Big O Notation ------------ o(C1) == o(1)
Direct way - 
1. Ignore lower order term
2. Ignore the leading term constant
Example :
1. 3*n^2 + 5n + 6    --> O(n^2)
2. 3n - 10nlogn + 3  --> O(nlogn)
3. 10*n^3 + 40n + 10 --> O(n^3)

Big O Theortical Concept ---------
We say f(n) = O(g(n)) iff there exist constants C and n. Such that f(n) <= Cg(n) for all n >= n.
Example :
    f(n) = 2n + 3 
    can be written as O(n),
    lets take C = 3,
    2n + 3 <= 3n
    3 <= n
    after values '3' f(n) <= c*g(n)

Big O notation works for multiple variables also ----------
    100n^2 + 1000*m + n :  O(n^2 + m)
    1000m^2 + 200mn + 30m + 20n : O(n^2 + mn)

Application og Big O - When have an upper bound

*/

bool isprime(int n) {
    if(n == 1) return false;
    if(n ==2 || n==3) return true;
    if(n%2 == 0 || n%3 == 0) return false;
    for(int i = 5; i*i <=n; i=i+6) {
        if(n%i == 0 || n%(i+2) == 0) {
            return false;
        }
    }
    return true;
}