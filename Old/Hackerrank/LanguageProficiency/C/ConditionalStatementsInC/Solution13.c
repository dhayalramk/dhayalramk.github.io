/**
 * Author: dhayalaarthi.com
 * Email: dhayalram.k@gmail.com
**/
#include <stdio.h>

int main() {

    int n;
    scanf("%d",&n);

    char numbers[10][15] = {
      "Greater than 9", 
      "one", "two", "three",
      "four", "five", "six",
      "seven", "eight", "nine"
    };
    puts(numbers[n < 10 ? n : 0]);
    return 0;
}