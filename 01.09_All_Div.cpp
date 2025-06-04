/*
Given a natural number 'n', print all distinct divisors of it.
Approach 1 : Iterate all numbers from '1' to 'n'/'sqrt(n)', checking if that number divides 'n'. need print both 'i' and 'n/i'
Time complexity - O(n)
Auxiliary Space - O(1)

Sorted Order Approach 2 :
1. '1' to 'sqrt(n)' : print 'i'
2. If exactly equals to sqrt(n) 
3. Reverse loop - every divisor 'i' has complemantary divisor 'n/i' except i == sqrt(n)
Time complexity - O(SQRT(n))
Auxiliary Space - O(1)
*/
void printDiv_naive(int n) {
    for (int i = 1; i <=n ; i++) {
        if (n%i == 0) {
            printf(i);
        }
    }
} 

/*
    -->Efficient Solution
    --> Idea -  Divisor always appear in pairs. One of the pair should be less than or equal to sqrt(n)
*/

void printDiv_Eff(int n) {
    for (int i = 2; i*i <= n; i++) {
        if (n%i == 0){
            printf(i);
            if(i != n/i) {
                printf(n/i);
            }

        }
    }
}
