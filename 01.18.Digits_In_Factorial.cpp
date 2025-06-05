/*
Given an integer N. Find the number of digits that appear in its factorial. 
Factorial is defined as, factorial(n) = 1*2*3*4……..*N and factorial(0) = 1.
Expected Time Complexity : O(N)
Expected Auxilliary Space : O(1)

Approach : Use the logarithmic property to count digits without computing the full factorial: Number of digits in N ! = ⌊ log ⁡ 10 ( 1 ⋅ 2 ⋅ 3 ⋅ … ⋅ N ) ⌋ + 1 Number of digits in N!=⌊log 10 ​ (1⋅2⋅3⋅…⋅N)⌋+1

*/
class Solution {
  public:
    int digitsInFactorial(int N) {
        // code here
        if (N == 0 || N == 1) {
            return 1;
        }
        
        double digits = 0;
        for (int i = 2; i <= N; i++) {
            digits += log10(i);
        }
        return floor(digits) + 1;
    }
};