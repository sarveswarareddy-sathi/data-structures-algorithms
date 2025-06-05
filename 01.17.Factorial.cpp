//Given a positive integer N. The task is to find factorial of N.
//Expected Time Complexity : O(N)
//Expected Auxilliary Space : O(1)

class Solution {
  public:
    // Complete this function
    long long factorial(int N) {
        // Your code here
        long long res = 1;
        if (N < 0 || N > 18) {
            return 0;
        }
        for (int i = 2; i <= N; i++) {
            res = res * i;
        }
        return res;
    }
};