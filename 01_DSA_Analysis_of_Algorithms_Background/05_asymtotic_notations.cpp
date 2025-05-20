/*
Asymtotic Notations -------------
1. Big O - exact or upper bound
2. Theta - Exact
3. Omega - Exact or lower bound
*/

int search(int arr[], int n, int x){
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            return i;
        }
    }
    return -1;
}
// arr[] = [10, 5, 30, 40, 80]
// worst case - linear time, best case - constant time
// it is O(N) because it can be O(n^2) - higher