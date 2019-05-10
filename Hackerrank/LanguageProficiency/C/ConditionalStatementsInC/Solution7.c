/**
 * Author: dhayalaarthi.com
 * Email: dhayalram.k@gmail.com
**/
#include <stdio.h>

int main() {
    
    int n;
    char result[15] = "";
    scanf("%d",&n);

    if (n == 1)         strcpy(result,"one");
    else if (n == 2)    strcpy(result,"two");
    else if (n == 3)    strcpy(result,"three");
    else if (n == 4)    strcpy(result,"four");
    else if (n == 5)    strcpy(result,"five");
    else if (n == 6)    strcpy(result,"six");
    else if (n == 7)    strcpy(result,"seven");
    else if (n == 8)    strcpy(result,"eight");
    else if (n == 9)    strcpy(result,"nine");
    else                strcpy(result,"Greater than 9");

    printf(result);
    return 0;
}
