/**
 * Author: dhayalaarthi.com
 * Email: dhayalram.k@gmail.com
**/
#include <stdio.h>

int main() {

    int n;
    scanf("%d",&n);

    char numbers[10][15] = {
      "one", "two", "three",
      "four", "five", "six",
      "seven", "eight", "nine"
    };

    int i=0;
    while(i<sizeof(numbers) / sizeof(int)){
        if(i == n) printf(numbers[i-1]);
        i++;
    }
    if(n > 9){
        printf("Greater than 9");
    }
    return 0;
}