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

    if(n > 9){
        n = 0;
    }
    puts(numbers[n]);
    return 0;
}