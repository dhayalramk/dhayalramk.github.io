/**
 * Author: dhayalaarthi.com
 * Email: dhayalram.k@gmail.com
**/
#include <stdio.h>

int main() {

    int n;
    enum numbers { one = 1, two, three, four, five, six, seven, eight, nine };
    char numS[10][15] = {"Greater than 9", "one", "two",   "three", "four",
                          "five",           "six", "seven", "eight", "nine"};
  
    scanf("%d", &n);
    switch( n ){
        case one : printf(numS[one]); break;
        case two : printf(numS[two]); break;
        case three : printf(numS[three]); break;
        case four : printf(numS[four]); break;
        case five : printf(numS[five]); break;
        case six : printf(numS[six]); break;
        case seven : printf(numS[seven]); break;
        case eight : printf(numS[eight]); break;
        case nine : printf(numS[nine]); break;
        default : printf(numS[0]);
    }

    return 0;
}