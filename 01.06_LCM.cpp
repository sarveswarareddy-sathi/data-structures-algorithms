/*
---> LCM of two members is the smallest number which can be divided by both numbers
---> LCM is smallest 'x' : x%a == 0 (I.E., X is a multiple of 'a')
--->                 'x' : x%b == 0 (I.E., X is a multiple of 'b')
---> Smallest common multiples
---> Efficient Apporach 1 : LCM can be atleast as large as larger of the two - max(a,b) and largest possible a*b. Iterate over max(a,b) to a*b
*/
// least common divisible by both
// For co-prime - a*b

int naive_lcm(int a, int b) {
    int res = max(a,b);
    while(true) {
        if(res % a == 0 && res % b == 0) return res;
        res++;
    }
    return res;
}

//time complexity - O(a*b - max(a,b))

// efficient a*b = gcd(a,b) * lcm(a,b)

// gcd comp - log (min(a,b))
