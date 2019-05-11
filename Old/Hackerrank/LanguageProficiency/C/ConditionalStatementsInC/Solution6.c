/**
 * Author: dhayalaarthi.com
 * Email: dhayalram.k@gmail.com
**/
#include <stdio.h>

int main() {
    
    int n;
    scanf("%d",&n);

    switch( n ){
        case 1: puts("one"); break;
        case 2: puts("two"); break;
        case 3: puts("three"); break;
        case 4: puts("four"); break;
        case 5: puts("five"); break;
        case 6: puts("six"); break;
        case 7: puts("seven"); break;
        case 8: puts("eight"); break;
        case 9: puts("nine"); break;
        default: puts("Greater than 9");
    }
    return 0;
}
