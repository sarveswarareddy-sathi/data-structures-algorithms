/*
Quotient Remainder Theorem : For any pair of integers 'a' and 'b', there exist two unique integers 'q' and 'r' such that
   ---> a = b*q + r where 0 <= r < b;

Rules :
   ---> (a+b)modm = ((a mod m) + (b mod m)) mod m
   ---> (a*b)modm = ((amodm)(bmodm))modm
   ---> (a/b)modm = (a * (inv of b if exists)) mod m

---> Modular Inverse : The modular inverse of a mod m exists only if a and m are relatively prime i.e gcd(a,m) = 1.
    Hence, for finding the inverse of an under modulo 'm', if (a*b) mod m = 1 then 'b' is the modular inverse of a

---> Modular Exponentation : a^b
      --> Recursive
      --> Iterative
      
   x^n mod m with complexity of O(logn) :
      x^n = 1 when n = 0
      x^n = x^(n/2)*x^(n/2) when 'n' is EVEN
      x^n = x^(n-1)*x  when 'n' is ODD
*/

#include<bits/stdc++.h>
#include<iostream>

using namespace std;

//function that calculate modular exponentiation x^n mod m.
int modpower(int x, int n, int m) 
{
    if (n == 0) //base case 
        return 1%m; 
    long long u = modpower(x,n/2,m);  
    u = (u*u)%m;
    if (n%2 == 1) //when 'n' is odd
        u = (u*x)%m;
    return u;
}

//driver function
int main()
{ 
    cout<<modpower(5,2,7)<<endl;
    return 0;
}