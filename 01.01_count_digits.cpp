/*
Count # of digits in given number logic : n = n/10 gives last digit
Time Complexity : Repeats # of digits - O(log10(n))
Auxiliary Space : O(1)
*/
int countdigit(int x) {
    int res = 0;
    while(x > 0) {
        x=x/10;
        res++;
    }
    return res;
}
/*
Time Complexity : Theta(d)
*/
