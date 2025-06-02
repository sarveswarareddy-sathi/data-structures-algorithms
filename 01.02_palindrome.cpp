/*
Palindrome Number : 78987. reverse number = number, if satisifies the return yes.align. 
single number always palindrme
---> INT max value should be less than 10^18
---> Approach : first obtain reverse of given number and then Compare
---> Obtaining Reverse - reverse = reverse * 10 + n%10
---> % - obtain last digit and / - obtain digits without last digit
---> Time Complexity - O(log10(n))
---> Auxiliary Space - O(1)
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
