/*
---> GCD : Largest common divisor of both operands
---> GCD Naive Approach : Repeat Subraction, carrying the result forward each time until the result is equal to any one number being subtracted.
    --> Let 'b' be smaller than 'a', then gcd(a,b) = gcd(a-b, b)
    --> Lets say, 'd' = gcd(a,b) this means 'd' divides both 'a' and 'b'
    --> The 'd' must also divide a-b which is common divisor of 'a-b' and 'b'
---> GCD Efficient Approach : GCD(a,b) = GCD(b, a%b)
Example : The real-world analogy compares finding the GCD to dividing a rope (or chocolates) into equal pieces without leftovers. Each step involves cutting a portion, then working with the leftover part to find the largest possible equal division.
Start with a long rope (or chocolates) and try dividing into equal pieces.
Leftover portion is what couldn’t be evenly divided.
Repeat the process with the leftover, treating it as the new total.
Continue until there’s no leftover, meaning the last divisor used is the GCD.

This step-by-step reduction mirrors the mathematical formula:
gcd(𝑎,𝑏) = gcd(𝑏, 𝑎 mod 𝑏)
where we swap the large number with the smaller one and replace the smaller number with the remainder until we reach zero.

Note : Any common divisor of 'a' and 'b' will also divide a%b
Time Complexity: O(log(min(a,b))|
Auxiliary Space: O(log(min(a,b))
*/

// Naive Solution
// Time complexity - O(min(a,b))
//Space Complexity - O(1)
int naive_gcd(int a, int b) {
    int res = min(a, b);

    while (res > 0) {
        if (a%res == 0 && b%res == 0) break;
        res--;
    }
    return res;
}

/*
Euclidean Algorithm : 
--> Let 'b' be smaller than 'a', then gcd(a,b) = gcd(a-b, b)
--> Lets say, 'd' = gcd(a,b) this means 'd' divides both 'a' and 'b'
--> The 'd' must also divide a-b which is common divisor of 'a-b' and 'b'

Let’s say, a = 15, b = 6 :
Step 1: a > b → a = 15 - 6 = 9
Step 2: a > b → a = 9 - 6 = 3
Step 3: b > a → b = 6 - 3 = 3
Now a == b == 3 → return 3


Let’s say, a = 9, b = 4 :
a > b → a = 9 - 4 = 5
a > b → a = 5 - 4 = 1
b > a → b = 4 - 1 = 3
b > a → b = 3 - 1 = 2
b > a → b = 2 - 1 = 1
Now a == b == 1 → return 1


*/

//Euclidean Algo - Approach 1
int gcd_aproch1(int a, int b) {
    while (a!=b) {
        if (a > b) {
            a = a - b;
        } else {
            b = b - a;
        }
    }
    return a;
}

// More Efficient Approach - Euclidean Algorithm
// Using mod
// gcd(a,b) = gcd(b,a % b)
// Time Complexity: O(max(a,b))
// Auxiliary Space: O(max(a,b))
int eff_gcd(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return gcd(b, a%b);
    }
}
