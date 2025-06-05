/*
Given a quadratic equation ax2 + bx + c = 0, find its roots. If the roots are imaginary, return only one integer -1. Always return the roots as the greatest integers less than or equal to the actual roots, with the maximum root first followed by the minimum root.

Expected Time Complexity: O(1)
Expected Auxiliary Space : O(1)
*/
class Solution {
  public:
    vector<int> quadraticRoots(int a, int b, int c) {
        // code here
        vector<int> root = {0, 0};
        int deter = b*b - 4*a*c;
        if (deter < 0) {
            //printf("Imaginary");
            return {-1};
        } else {
            root = {floor((-b + sqrt(deter))/(2.0*a)), floor((-b - sqrt(deter))/(2.0*a))};
            if (root[0] < root[1]) {
                root[0] = root[0] + root[1];
                root[1] = root[0] - root[1];
                root[0] = root[0] - root[1];
            }
            return root;
        }
        return root;
    }
};