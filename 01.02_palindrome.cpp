/*
Palindrome Number : 78987. reverse number = number, if satisifies the return yes.align. 
single number always palindrme
*/

#include <stdio.h>

bool palindrome(int in1) {
    int rev = 0;
    int check = in1;
    
    while (in1 > 0) {
        rev = rev*10 + (in1%10);
        in1 = in1/10;
    }

    if (rev == check) {
        return true;
    }

    return false;
}