/*
Time complexity - O(n)
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