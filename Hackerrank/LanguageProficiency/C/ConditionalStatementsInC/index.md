<p align="center">
    <a href="../../../">
        <img src="../../../logo.svg"/>
    </a>
    <br>All efficient solutions to HackerRank problems
</p>

<b>Link:</b> <a href="https://www.hackerrank.com/challenges/conditional-statements-in-c/">Conditional Statements in C</a>

<b>Objective:</b> Use conditional statement to solve the problem.

<b>Points:</b> 10

<b>Difficulty:</b> Easy

<b>Assumptions</b> 
* The input n should be greater or equals to 1 and lesser than or equals to 10 power of 9

<b>Solutions</b>

1) <a href="Solution.c" target="_blank">Solution.c</a> - Simple solution using if, else if, else and printf
2) <a href="Solution2.c" target="_blank">Solution2.c</a> - Solution using array of string with printf
3) <a href="Solution3.c" target="_blank">Solution3.c</a> - Simple solution using if, else if, else and puts
4) <a href="Solution4.c" target="_blank">Solution4.c</a> - Solution using array of string with puts
5) <a href="Solution5.c" target="_blank">Solution5.c</a> - Solution using switch case and printf
6) <a href="Solution6.c" target="_blank">Solution6.c</a> - Solution using switch case and puts
7) <a href="Solution7.c" target="_blank">Solution7.c</a> - Solution using switch case, using tempravary variable and printf
8) <a href="Solution8.c" target="_blank">Solution8.c</a> - Solution using switch case, using tempravary variable and puts
9) <a href="Solution9.c" target="_blank">Solution9.c</a> - Solution using if statement and printf alone
10) <a href="Solution10.c" target="_blank">Solution10.c</a> - Solution using if statement and puts alone
11) <a href="Solution11.c" target="_blank">Solution11.c</a> - Solution using string array and for loop 
12) <a href="Solution12.c" target="_blank">Solution12.c</a> - Solution using printf and multi ternary operator
13) <a href="Solution13.c" target="_blank">Solution13.c</a> - Solution using string array and printf
14) <a href="Solution14.c" target="_blank">Solution14.c</a> - Soluion using string array and while loop
15) <a href="Solution15.c" target="_blank">Solution15.c</a> - Solution using enum, string array and switch case

---
## 1) Solution.c - Simple solution using if, else if, else and printf.

<b>Code</b>
```c
    int n;
    scanf("%d",&n);

    if (n == 1)         printf("one");
    else if (n == 2)    printf("two");
    else if (n == 3)    printf("three");
    else if (n == 4)    printf("four");
    else if (n == 5)    printf("five");
    else if (n == 6)    printf("six");
    else if (n == 7)    printf("seven");
    else if (n == 8)    printf("eight");
    else if (n == 9)    printf("nine");
    else                printf("Greater than 9");
```

<b>Explanation</b>

1. ```int n;```  Declaring variable "n" and allocating memory as integer, which is specific to the compilers few compilers allocated 4 bytes and recent compilers allocating 8 bytes. As we didn't mentioned anything before the int, it takes as ```unsigned int a;``` which can store negative value also as value.

2. ```scanf("%d",&n);``` scanf is the functio allows program to get input from standard in which is generally from keyboard. As developer specified ```%d``` it reads input as int and store in the location of n which specified as ```&n```.

3. ```if (n == 1) printf("one");``` If is a conditional check statement, it knows only true(1) or false(0). Inside ``` n == 1 ``` is the condition, which returns true/false based on the value of n. When the value returns true it will go inside the execution. Here execution is ```printf("one");``` Which prints the output. When the condition is true, it will skip the upcoming "else if" and "else" statement. 

4. ```else if (n == 2) printf("two");``` "else if" is the condition which comes after "if" or some other "else if". When the previous condition fails, then it will come to this statment. Works same like if statement. "else if" is the optional condition and can't declare without giving "if" condition.

5. ```else printf("Greater than 9");``` "else" is the condition which comes after "if" or "else if". When all the previous condition fails then it will execute. "else" is optional condition and can't declate without giving "if" condition

6. Program checks ```if (n == 1)```. When the given value is 1, then prints the output as "one" and skips else if and else conditions in execution.

7. When point no. 6 fails then it will check ```else if (n == 2)```, When the given value is 2, then prints the output as "two" and skips else if and else conditions in execution.

8. When point no. 7 fails then it will check ```else if (n == 3)```, When the given value is 3, then prints the output as "three" and skips else if and else conditions in execution.

9. When point no. 8 fails then it will check ```else if (n == 4)```, When the given value is 4, then prints the output as "four" and skips else if and else conditions in execution.

10. When point no. 9 fails then it will check ```else if (n == 5)```, When the given value is 5, then prints the output as "five" and skips else if and else conditions in execution.

11. When point no. 10 fails then it will check ```else if (n == 6)```, When the given value is 6, then prints the output as "six" and skips else if and else conditions in execution.

12. When point no. 11 fails then it will check ```else if (n == 7)```, When the given value is 7, then prints the output as "seven" and skips else if and else conditions in execution.

13. When point no. 12 fails then it will check ```else if (n == 8)```, When the given value is 8, then prints the output as "eight" and skips else if and else conditions in execution.

14. When point no. 13 fails then it will check ```else if (n == 9)```, When the given value is 9, then prints the output as "nine" and skips else if and else conditions in execution.

15. When point no. 14 fails then it will execute ```else```, It will reach here when all the above conditions failed, then prints the output as "Greater than 9".

<b>More points from Dhayal</b>

1. Giving ``` { } ``` for ```if, else if, ```  and ```else``` is the good practice. It will make the developers and editor to understand better way. For single line statement we don't need to specifically mention ```{ }```. 

2. When the given ```n``` is more than 9, then it is suppose to go inside the condition of ```if``` and 8 ```else if``` which takes "CPU" cost to execute the program. So this code is not very efficient in process wise.

3. Having multiple ```printf``` statment will confuse the developers.

---

## 2) Solution2.c - Solution using array of string with printf

<b>Code</b>

```c
    int n;
    scanf("%d",&n);

    char numbers[10][15] = {
      "Greater than 9",  "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"
    };

    if(n > 9){
        n = 0;
    }
    printf(numbers[n]);
```

<b>Explanation</b>

1. ```int n;```  Declaring variable "n" and allocating memory as integer, which is specific to the compilers few compilers allocated 4 bytes and recent compilers allocating 8 bytes. As we didn't mentioned anything before the int, it takes as ```unsigned int a;``` which can store negative value also as value.

2. ```scanf("%d",&n);``` scanf is the functio allows program to get input from standard in which is generally from keyboard. As developer specified ```%d``` it reads input as int and store in the location of n which specified as ```&n```.

3. ```char numbers[10][15] = { "Greater than 9",  "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };``` Declaring variable "numbers" and allocating memory as char 2 dimentional array with space 10 * 15 = 150. Each character takes 1 byte of memory, so total 150 byte of memory. Keeping respective numbers to each and every memory location. Memory location 1 have "one", Memory location 2 have "two", Memory location 3 have "three", Memory location 4 have "four", Memory location 5 have "five", Memory location 6 have "six", Memory location 7 have "seven", Memory location 8 have "eight", Memory location 9 have "nine". Keeping "Greater than 9" in memory location as 0, so our logic will replace the n value as 0 if it's greater than 9, So it will help to print the value.

4. ```if(n > 9){ n = 0; }``` Checking the value "n" is lesser than 9, when it returns true it will reassign the n value as 0.

5. ```printf(numbers[n]);``` Memory location of "n" in numbers which will print the string representation of n from 1-9, other wise it will take "0" which prints "Greater than 9"

<b>More points from Dhayal</b>

1. Declaring "Greater than 9" in location of ```numbers``` as 0 is not a good idea, which will mislead the developers to assume wrong.
2. Allocating additional memory for ```numbers``` variable
2. Printing using index memory is good which will avoid loops and multiple conditions.

---

## 3) Solution3.c - Simple solution using if, else if, else and puts

<b>Code</b>

```c
    int n;
    scanf("%d",&n);

    if (n == 1)         puts("one");
    else if (n == 2)    puts("two");
    else if (n == 3)    puts("three");
    else if (n == 4)    puts("four");
    else if (n == 5)    puts("five");
    else if (n == 6)    puts("six");
    else if (n == 7)    puts("seven");
    else if (n == 8)    puts("eight");
    else if (n == 9)    puts("nine");
    else                puts("Greater than 9");
```

<b>Explanation</b>

1. ```int n;```  Declaring variable "n" and allocating memory as integer, which is specific to the compilers few compilers allocated 4 bytes and recent compilers allocating 8 bytes. As we didn't mentioned anything before the int, it takes as ```unsigned int a;``` which can store negative value also as value.

2. ```scanf("%d",&n);``` scanf is the functio allows program to get input from standard in which is generally from keyboard. As developer specified ```%d``` it reads input as int and store in the location of n which specified as ```&n```.

3. ```if (n == 1) puts("one");``` If is a conditional check statement, it knows only true(1) or false(0). Inside ``` n == 1 ``` is the condition, which returns true/false based on the value of n. When the value returns true it will go inside the execution. Here execution is ```puts("one");``` Which prints the output. When the condition is true, it will skip the upcoming "else if" and "else" statement. 

4. ```else if (n == 2) puts("two");``` "else if" is the condition which comes after "if" or some other "else if". When the previous condition fails, then it will come to this statment. Works same like if statement. "else if" is the optional condition and can't declare without giving "if" condition.

5. ```else puts("Greater than 9");``` "else" is the condition which comes after "if" or "else if". When all the previous condition fails then it will execute. "else" is optional condition and can't declate without giving "if" condition

6. Program checks ```if (n == 1)```. When the given value is 1, then prints the output as "one" and skips else if and else conditions in execution.

7. When point no. 6 fails then it will check ```else if (n == 2)```, When the given value is 2, then prints the output as "two" and skips else if and else conditions in execution.

8. When point no. 7 fails then it will check ```else if (n == 3)```, When the given value is 3, then prints the output as "three" and skips else if and else conditions in execution.

9. When point no. 8 fails then it will check ```else if (n == 4)```, When the given value is 4, then prints the output as "four" and skips else if and else conditions in execution.

10. When point no. 9 fails then it will check ```else if (n == 5)```, When the given value is 5, then prints the output as "five" and skips else if and else conditions in execution.

11. When point no. 10 fails then it will check ```else if (n == 6)```, When the given value is 6, then prints the output as "six" and skips else if and else conditions in execution.

12. When point no. 11 fails then it will check ```else if (n == 7)```, When the given value is 7, then prints the output as "seven" and skips else if and else conditions in execution.

13. When point no. 12 fails then it will check ```else if (n == 8)```, When the given value is 8, then prints the output as "eight" and skips else if and else conditions in execution.

14. When point no. 13 fails then it will check ```else if (n == 9)```, When the given value is 9, then prints the output as "nine" and skips else if and else conditions in execution.

15. When point no. 14 fails then it will execute ```else```, It will reach here when all the above conditions failed, then prints the output as "Greater than 9".

<b>More points from Dhayal</b>

1. Giving ``` { } ``` for ```if, else if, ```  and ```else``` is the good practice. It will make the developers and editor to understand better way. For single line statement we don't need to specifically mention ```{ }```. 

2. When the given ```n``` is more than 9, then it is suppose to go inside the condition of ```if``` and 8 ```else if``` which takes "CPU" cost to execute the program. So this code is not very efficient in process wise.

3. Having multiple ```puts``` statment will confuse the developers.

---

## 4) Solution4.c - Solution using array of string with puts

<b>Code</b>

```c
    int n;
    scanf("%d",&n);

    char numbers[10][15] = {
      "Greater than 9", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"
    };

    if(n > 9){
        n = 0;
    }
    puts(numbers[n]);
```


<b>Explanation</b>

1. ```int n;```  Declaring variable "n" and allocating memory as integer, which is specific to the compilers few compilers allocated 4 bytes and recent compilers allocating 8 bytes. As we didn't mentioned anything before the int, it takes as ```unsigned int a;``` which can store negative value also as value.

2. ```scanf("%d",&n);``` scanf is the functio allows program to get input from standard in which is generally from keyboard. As developer specified ```%d``` it reads input as int and store in the location of n which specified as ```&n```.

3. ```char numbers[10][15] = { "Greater than 9",  "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };``` Declaring variable "numbers" and allocating memory as char 2 dimentional array with space 10 * 15 = 150. Each character takes 1 byte of memory, so total 150 byte of memory. Keeping respective numbers to each and every memory location. Memory location 1 have "one", Memory location 2 have "two", Memory location 3 have "three", Memory location 4 have "four", Memory location 5 have "five", Memory location 6 have "six", Memory location 7 have "seven", Memory location 8 have "eight", Memory location 9 have "nine". Keeping "Greater than 9" in memory location as 0, so our logic will replace the n value as 0 if it's greater than 9, So it will help to print the value.

4. ```if(n > 9){ n = 0; }``` Checking the value "n" is lesser than 9, when it returns true it will reassign the n value as 0.

5. ```puts(numbers[n]);``` Memory location of "n" in numbers which will print the string representation of n from 1-9, other wise it will take "0" which prints "Greater than 9"

<b>More points from Dhayal</b>

1. Declaring "Greater than 9" in location of ```numbers``` as 0 is not a good idea, which will mislead the developers to assume wrong.
2. Allocating additional memory for ```numbers``` variable
2. Printing using index memory is good which will avoid loops and multiple conditions.
---

## Solution5.c - Solution using switch case and printf

<b>Code</b>

```c
    int n;
    scanf("%d",&n);

    switch( n ){
        case 1: printf("one"); break;
        case 2: printf("two"); break;
        case 3: printf("three"); break;
        case 4: printf("four"); break;
        case 5: printf("five"); break;
        case 6: printf("six"); break;
        case 7: printf("seven"); break;
        case 8: printf("eight"); break;
        case 9: printf("nine"); break;
        default: printf("Greater than 9");
    }
```

<b>Explanation</b>

1. ```int n;```  Declaring variable "n" and allocating memory as integer, which is specific to the compilers few compilers allocated 4 bytes and recent compilers allocating 8 bytes. As we didn't mentioned anything before the int, it takes as ```unsigned int a;``` which can store negative value also as value.

2. ```scanf("%d",&n);``` scanf is the functio allows program to get input from standard in which is generally from keyboard. As developer specified ```%d``` it reads input as int and store in the location of n which specified as ```&n```.

3. ```switch( n ){``` A "switch" statement allows a variable to check against each and every case.  Here "n" is the variable which going to tested by every case.

4. ```case 1: printf("one"); break;``` Checking the value of "n" is equals to 1, in that case printing the output as "one" and breaking the switch case, other wise it will try to execute the next line of case also until end of switch case or reaching another break condition.

5. ```case 2: printf("two"); break;``` Checking the value of "n" is equals to 2, in that case printing the output as "two" and breaking the switch case.

6. ```case 3: printf("three"); break;``` Checking the value of "n" is equals to 3, in that case printing the output as "three" and breaking the switch case.

7. ```case 4: printf("four"); break;``` Checking the value of "n" is equals to 4, in that case printing the output as "four" and breaking the switch case.

8. ```case 5: printf("five"); break;``` Checking the value of "n" is equals to 5, in that case printing the output as "five" and breaking the switch case.

9. ```case 6: printf("six"); break;``` Checking the value of "n" is equals to 6, in that case printing the output as "six" and breaking the switch case.

10. ```case 7: printf("seven"); break;``` Checking the value of "n" is equals to 7, in that case printing the output as "seven" and breaking the switch case.

11. ```case 8: printf("eight"); break;``` Checking the value of "n" is equals to 8, in that case printing the output as "eight" and breaking the switch case.

12. ```case 9: printf("nine"); break;``` Checking the value of "n" is equals to 9, in that case printing the output as "nine" and breaking the switch case.

13. ```default: printf("Greater than 9");``` In switch case if nothing is matching then it will execute the default, in that case printing the output as "Greater than 9". Default is optional and break is not needed for default case as this is end of the switch case.

14. ```}``` Closing the switch case.

<b>More points from Dhayal</b>

1. Using switch case is better than multiple if else conditions as performance wise.

2. Having multiple ```printf``` statment will confuse the developers.

3. Good to use default statement whenever it's possible.

---

## Solution6.c - Solution using switch case and puts

<b>Code</b>

```c
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
```

<b>Explanation</b>

1. ```int n;```  Declaring variable "n" and allocating memory as integer, which is specific to the compilers few compilers allocated 4 bytes and recent compilers allocating 8 bytes. As we didn't mentioned anything before the int, it takes as ```unsigned int a;``` which can store negative value also as value.

2. ```scanf("%d",&n);``` scanf is the functio allows program to get input from standard in which is generally from keyboard. As developer specified ```%d``` it reads input as int and store in the location of n which specified as ```&n```.

3. ```switch( n ){``` A "switch" statement allows a variable to check against each and every case.  Here "n" is the variable which going to tested by every case.

4. ```case 1: puts("one"); break;``` Checking the value of "n" is equals to 1, in that case printing the output as "one" and breaking the switch case, other wise it will try to execute the next line of case also until end of switch case or reaching another break condition.

5. ```case 2: puts("two"); break;``` Checking the value of "n" is equals to 2, in that case printing the output as "two" and breaking the switch case.

6. ```case 3: puts("three"); break;``` Checking the value of "n" is equals to 3, in that case printing the output as "three" and breaking the switch case.

7. ```case 4: puts("four"); break;``` Checking the value of "n" is equals to 4, in that case printing the output as "four" and breaking the switch case.

8. ```case 5: puts("five"); break;``` Checking the value of "n" is equals to 5, in that case printing the output as "five" and breaking the switch case.

9. ```case 6: puts("six"); break;``` Checking the value of "n" is equals to 6, in that case printing the output as "six" and breaking the switch case.

10. ```case 7: puts("seven"); break;``` Checking the value of "n" is equals to 7, in that case printing the output as "seven" and breaking the switch case.

11. ```case 8: puts("eight"); break;``` Checking the value of "n" is equals to 8, in that case printing the output as "eight" and breaking the switch case.

12. ```case 9: puts("nine"); break;``` Checking the value of "n" is equals to 9, in that case printing the output as "nine" and breaking the switch case.

13. ```default: puts("Greater than 9");``` In switch case if nothing is matching then it will execute the default, in that case printing the output as "Greater than 9". Default is optional and break is not needed for default case as this is end of the switch case.

14. ```}``` Closing the switch case.

<b>More points from Dhayal</b>

1. Using switch case is better than multiple if else conditions as performance wise.

2. Having multiple ```puts``` statment will confuse the developers.

3. Good to use default statement whenever it's possible.
---

## Solution7.c - Solution using switch case, using tempravary variable and printf

<b>Code</b>

```c
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
```

<b>Explanation</b>

1. ```int n;```  Declaring variable "n" and allocating memory as integer, which is specific to the compilers few compilers allocated 4 bytes and recent compilers allocating 8 bytes. As we didn't mentioned anything before the int, it takes as ```unsigned int a;``` which can store negative value also as value.

2. ```char result[15] = "";``` Declaring variable "result" and allocating memory as char array with space 15. Each character takes 1 byte of memory, so total 15 byte of memory. 

3. ```scanf("%d",&n);``` scanf is the functio allows program to get input from standard in which is generally from keyboard. As developer specified ```%d``` it reads input as int and store in the location of n which specified as ```&n```.

4. Program checks ```if (n == 1) strcpy(result,"one");```. When the given value is 1, then stores as "one" in "result" and skips else if and else conditions in execution.

5. When point no. 4 fails then it will check ```else if (n == 2) strcpy(result,"two");```, When the given value is 2, then stores as "two" in "result" and skips else if and else conditions in execution.

6. When point no. 5 fails then it will check ```else if (n == 3) strcpy(result,"three");```, When the given value is 3, then stores as "three" in "result" and skips else if and else conditions in execution.

7. When point no. 6 fails then it will check ```else if (n == 4) strcpy(result,"four");```, When the given value is 4, then stores as "four" in "result" and skips else if and else conditions in execution.

8. When point no. 7 fails then it will check ```else if (n == 5) strcpy(result,"five");```, When the given value is 5, then stores as "five" in "result" and skips else if and else conditions in execution.

9. When point no. 8 fails then it will check ```else if (n == 6) strcpy(result,"six");```, When the given value is 6, then stores as "six" in "result" and skips else if and else conditions in execution.

10.  When point no. 9 fails then it will check ```else if (n == 7) strcpy(result,"seven");```, When the given value is 7, then stores as "seven" in "result" and skips else if and else conditions in execution.

11. When point no. 10 fails then it will check ```else if (n == 8) strcpy(result,"eight");```, When the given value is 8, then stores as "eight" in "result" and skips else if and else conditions in execution.

12. When point no. 11 fails then it will check ```else if (n == 9) strcpy(result,"nine");```, When the given value is 9, then stores as "nine" in "result" and skips else if and else conditions in execution.

13. When point no. 13 fails then it will execute ```else```, It will reach here when all the above conditions failed, then sores as "Greater than 9" in "result".

14. ```printf(result);``` Prints the value in the result

<b>More points from Dhayal</b>

1. Giving ``` { } ``` for ```if, else if, ```  and ```else``` is the good practice. It will make the developers and editor to understand better way. For single line statement we don't need to specifically mention ```{ }```.

2. Having single ```printf``` better than multiple.

---

## Solution8.c - Solution using switch case, using tempravary variable and puts

<b>Code</b>

```c
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

    puts(result);
```

<b>Explanation</b>

1. ```int n;```  Declaring variable "n" and allocating memory as integer, which is specific to the compilers few compilers allocated 4 bytes and recent compilers allocating 8 bytes. As we didn't mentioned anything before the int, it takes as ```unsigned int a;``` which can store negative value also as value.

2. ```char result[15] = "";``` Declaring variable "result" and allocating memory as char array with space 15. Each character takes 1 byte of memory, so total 15 byte of memory. 

3. ```scanf("%d",&n);``` scanf is the functio allows program to get input from standard in which is generally from keyboard. As developer specified ```%d``` it reads input as int and store in the location of n which specified as ```&n```.

4. Program checks ```if (n == 1) strcpy(result,"one");```. When the given value is 1, then stores as "one" in "result" and skips else if and else conditions in execution.

5. When point no. 4 fails then it will check ```else if (n == 2) strcpy(result,"two");```, When the given value is 2, then stores as "two" in "result" and skips else if and else conditions in execution.

6. When point no. 5 fails then it will check ```else if (n == 3) strcpy(result,"three");```, When the given value is 3, then stores as "three" in "result" and skips else if and else conditions in execution.

7. When point no. 6 fails then it will check ```else if (n == 4) strcpy(result,"four");```, When the given value is 4, then stores as "four" in "result" and skips else if and else conditions in execution.

8. When point no. 7 fails then it will check ```else if (n == 5) strcpy(result,"five");```, When the given value is 5, then stores as "five" in "result" and skips else if and else conditions in execution.

9. When point no. 8 fails then it will check ```else if (n == 6) strcpy(result,"six");```, When the given value is 6, then stores as "six" in "result" and skips else if and else conditions in execution.

10.  When point no. 9 fails then it will check ```else if (n == 7) strcpy(result,"seven");```, When the given value is 7, then stores as "seven" in "result" and skips else if and else conditions in execution.

11. When point no. 10 fails then it will check ```else if (n == 8) strcpy(result,"eight");```, When the given value is 8, then stores as "eight" in "result" and skips else if and else conditions in execution.

12. When point no. 11 fails then it will check ```else if (n == 9) strcpy(result,"nine");```, When the given value is 9, then stores as "nine" in "result" and skips else if and else conditions in execution.

13. When point no. 13 fails then it will execute ```else```, It will reach here when all the above conditions failed, then sores as "Greater than 9" in "result".

14. ```puts(result);``` Prints the value in the result

<b>More points from Dhayal</b>

1. Giving ``` { } ``` for ```if, else if, ```  and ```else``` is the good practice. It will make the developers and editor to understand better way. For single line statement we don't need to specifically mention ```{ }```.

2. Having single ```puts``` better than multiple.
---

## Solution9.c - Solution using if statement and printf alone

<b>Code</b>

```c
    int n;
    scanf("%d", &n);

    if (n == 1) printf("one");
    if (n == 2) printf("two");
    if (n == 3) printf("three");
    if (n == 4) printf("four");
    if (n == 5) printf("five");
    if (n == 6) printf("six");
    if (n == 7) printf("seven");
    if (n == 8) printf("eight");
    if (n == 9) printf("nine");
    if (n > 9)  printf("Greater than 9");
```

<b>Explanation</b>

1. ```int n;```  Declaring variable "n" and allocating memory as integer, which is specific to the compilers few compilers allocated 4 bytes and recent compilers allocating 8 bytes. As we didn't mentioned anything before the int, it takes as ```unsigned int a;``` which can store negative value also as value.

2. ```scanf("%d",&n);``` scanf is the functio allows program to get input from standard in which is generally from keyboard. As developer specified ```%d``` it reads input as int and store in the location of n which specified as ```&n```.

3. ```if (n == 1) printf("one");``` If is a conditional check statement, it knows only true(1) or false(0). Inside ``` n == 1 ``` is the condition, which returns true/false based on the value of n. When the value returns true it will go inside the execution. Here execution is ```printf("one");``` Which prints the output. 

4. ```if (n == 2) printf("two");``` If is a conditional check statement, it knows only true(1) or false(0). Inside ``` n == 2 ``` is the condition, which returns true/false based on the value of n. When the value returns true it will go inside the execution. Here execution is ```printf("two");``` Which prints the output. 

5. ```if (n == 3) printf("three");``` If is a conditional check statement, it knows only true(1) or false(0). Inside ``` n == 3 ``` is the condition, which returns true/false based on the value of n. When the value returns true it will go inside the execution. Here execution is ```printf("three");``` Which prints the output. 

6. ```if (n == 4) printf("four");``` If is a conditional check statement, it knows only true(1) or false(0). Inside ``` n == 4 ``` is the condition, which returns true/false based on the value of n. When the value returns true it will go inside the execution. Here execution is ```printf("four");``` Which prints the output. 

7. ```if (n == 5) printf("five");``` If is a conditional check statement, it knows only true(1) or false(0). Inside ``` n == 5 ``` is the condition, which returns true/false based on the value of n. When the value returns true it will go inside the execution. Here execution is ```printf("five");``` Which prints the output. 

8. ```if (n == 6) printf("six");``` If is a conditional check statement, it knows only true(1) or false(0). Inside ``` n == 6 ``` is the condition, which returns true/false based on the value of n. When the value returns true it will go inside the execution. Here execution is ```printf("six");``` Which prints the output. 

9. ```if (n == 7) printf("seven");``` If is a conditional check statement, it knows only true(1) or false(0). Inside ``` n == 7 ``` is the condition, which returns true/false based on the value of n. When the value returns true it will go inside the execution. Here execution is ```printf("seven");``` Which prints the output. 

10. ```if (n == 8) printf("eight");``` If is a conditional check statement, it knows only true(1) or false(0). Inside ``` n == 8 ``` is the condition, which returns true/false based on the value of n. When the value returns true it will go inside the execution. Here execution is ```printf("eight");``` Which prints the output. 

11. ```if (n == 9) printf("nine");``` If is a conditional check statement, it knows only true(1) or false(0). Inside ``` n == 9 ``` is the condition, which returns true/false based on the value of n. When the value returns true it will go inside the execution. Here execution is ```printf("nine");``` Which prints the output. 

12. ```if (n > 9) printf("Greater than 9");``` If is a conditional check statement, it knows only true(1) or false(0). Inside ``` n > 9 ``` is the condition, which returns true/false based on the value of n. When the value returns true it will go inside the execution. Here execution is ```printf("Greater than 9");``` Which prints the output. 

<b>More points from Dhayal</b>

1. Having multiple ```printf``` statment will confuse the developers.

2. Having multiple ```if``` is a bad idea for this logical statement. Which take 10 "CPU" cost even it's passing the first condition which ```n==1```

---

## Solution10.c - Solution using if statement and puts alone

<b>Code</b>

```c
    int n;
    scanf("%d", &n);

    if (n == 1) puts("one");
    if (n == 2) puts("two");
    if (n == 3) puts("three");
    if (n == 4) puts("four");
    if (n == 5) puts("five");
    if (n == 6) puts("six");
    if (n == 7) puts("seven");
    if (n == 8) puts("eight");
    if (n == 9) puts("nine");
    if (n > 9)  puts("Greater than 9");
```

<b>Explanation</b>

1. ```int n;```  Declaring variable "n" and allocating memory as integer, which is specific to the compilers few compilers allocated 4 bytes and recent compilers allocating 8 bytes. As we didn't mentioned anything before the int, it takes as ```unsigned int a;``` which can store negative value also as value.

2. ```scanf("%d",&n);``` scanf is the functio allows program to get input from standard in which is generally from keyboard. As developer specified ```%d``` it reads input as int and store in the location of n which specified as ```&n```.

3. ```if (n == 1) puts("one");``` If is a conditional check statement, it knows only true(1) or false(0). Inside ``` n == 1 ``` is the condition, which returns true/false based on the value of n. When the value returns true it will go inside the execution. Here execution is ```puts("one");``` Which prints the output. 

4. ```if (n == 2) puts("two");``` If is a conditional check statement, it knows only true(1) or false(0). Inside ``` n == 2 ``` is the condition, which returns true/false based on the value of n. When the value returns true it will go inside the execution. Here execution is ```puts("two");``` Which prints the output. 

5. ```if (n == 3) puts("three");``` If is a conditional check statement, it knows only true(1) or false(0). Inside ``` n == 3 ``` is the condition, which returns true/false based on the value of n. When the value returns true it will go inside the execution. Here execution is ```puts("three");``` Which prints the output. 

6. ```if (n == 4) puts("four");``` If is a conditional check statement, it knows only true(1) or false(0). Inside ``` n == 4 ``` is the condition, which returns true/false based on the value of n. When the value returns true it will go inside the execution. Here execution is ```puts("four");``` Which prints the output. 

7. ```if (n == 5) puts("five");``` If is a conditional check statement, it knows only true(1) or false(0). Inside ``` n == 5 ``` is the condition, which returns true/false based on the value of n. When the value returns true it will go inside the execution. Here execution is ```puts("five");``` Which prints the output. 

8. ```if (n == 6) puts("six");``` If is a conditional check statement, it knows only true(1) or false(0). Inside ``` n == 6 ``` is the condition, which returns true/false based on the value of n. When the value returns true it will go inside the execution. Here execution is ```puts("six");``` Which prints the output. 

9. ```if (n == 7) puts("seven");``` If is a conditional check statement, it knows only true(1) or false(0). Inside ``` n == 7 ``` is the condition, which returns true/false based on the value of n. When the value returns true it will go inside the execution. Here execution is ```puts("seven");``` Which prints the output. 

10. ```if (n == 8) puts("eight");``` If is a conditional check statement, it knows only true(1) or false(0). Inside ``` n == 8 ``` is the condition, which returns true/false based on the value of n. When the value returns true it will go inside the execution. Here execution is ```puts("eight");``` Which prints the output. 

11. ```if (n == 9) puts("nine");``` If is a conditional check statement, it knows only true(1) or false(0). Inside ``` n == 9 ``` is the condition, which returns true/false based on the value of n. When the value returns true it will go inside the execution. Here execution is ```puts("nine");``` Which prints the output. 

12. ```if (n > 9) puts("Greater than 9");``` If is a conditional check statement, it knows only true(1) or false(0). Inside ``` n > 9 ``` is the condition, which returns true/false based on the value of n. When the value returns true it will go inside the execution. Here execution is ```puts("Greater than 9");``` Which prints the output. 

<b>More points from Dhayal</b>

1. Having multiple ```puts``` statment will confuse the developers.

2. Having multiple ```if``` is a bad idea for this logical statement. Which take 10 "CPU" cost even it's passing the first condition which ```n==1```
---

## Solution11.c - Solution using string array and for loop

<b>Code</b>

```c
    int n;
    scanf("%d",&n);

    char numbers[9][15] = {
      "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"
    };

    for(int i=0;i<sizeof(numbers) / sizeof(int); i++){
        if(i == n) printf(numbers[i-1]);
    }
    if(n > 9){
        printf("Greater than 9");
    }
```

<b>Explanation</b>

1. ```int n;```  Declaring variable "n" and allocating memory as integer, which is specific to the compilers few compilers allocated 4 bytes and recent compilers allocating 8 bytes. As we didn't mentioned anything before the int, it takes as ```unsigned int a;``` which can store negative value also as value.

2. ```scanf("%d",&n);``` scanf is the functio allows program to get input from standard in which is generally from keyboard. As developer specified ```%d``` it reads input as int and store in the location of n which specified as ```&n```.

3. ```char numbers[9][15] = { "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };``` Declaring variable "numbers" and allocating memory as char 2 dimentional array with space 9 * 15 = 135. Each character takes 1 byte of memory, so total 135 byte of memory. Memory location 0 have "one", Memory location 1 have "two", Memory location 2 have "three", Memory location 3 have "four", Memory location 4 have "five", Memory location 5 have "six", Memory location 6 have "seven", Memory location 7 have "eight", Memory location 8 have "nine". 

4. ```for(int i=0;i<sizeof(numbers) / sizeof(int); i++){``` Declaring i = 0, and looping the size of array "numbers" and incrementing "i" in each and every loop.

5. ```if(i == n) printf(numbers[i-1]);``` Checking the i and n are same, in that case printing the array index i-1 which will take respective. 

6. ``` if(n > 9){ printf("Greater than 9"); }``` Checking n greater than 9, if that case printing "Greater than 9". It will reach only when all for loop is not passed any condition

<b>More points from Dhayal</b>

1. Loop for this logic without any other condition is a bad idea, where you might have given direct "n-1" behalf of "i-1"

---

## Solution12.c - Solution using printf and multi ternary operator

<b>Code</b>

```c
    int n;
    scanf("%d", &n);
    printf(
        ( n == 1 ) ? "one" :
        ( n == 2 ) ? "two" :
        ( n == 3 ) ? "three" :
        ( n == 4 ) ? "four" :
        ( n == 5 ) ? "five" :
        ( n == 6 ) ? "six" :
        ( n == 7 ) ? "seven" :
        ( n == 8 ) ? "eight" :
        ( n == 9 ) ? "nine" :
        "Greater than 9"
    );
```

<b>Explanation</b>

1. ```int n;```  Declaring variable "n" and allocating memory as integer, which is specific to the compilers few compilers allocated 4 bytes and recent compilers allocating 8 bytes. As we didn't mentioned anything before the int, it takes as ```unsigned int a;``` which can store negative value also as value.

2. ```scanf("%d",&n);``` scanf is the functio allows program to get input from standard in which is generally from keyboard. As developer specified ```%d``` it reads input as int and store in the location of n which specified as ```&n```.

3. ``` printf( ``` printf which prints the output.

4. ``` ( n == 1 ) ? "one" : ``` Ternary operator which acts like if else condition, checking "n == 1" when the condition is true then it return "one" else it checks ":" which is point no.5.

5. ``` ( n == 2 ) ? "two" : ``` Ternary operator which acts like if else condition, checking "n == 2" when the condition is true then it return "two" else it checks ":" which is point no.6.

6. ``` ( n == 3 ) ? "three" : ``` Ternary operator which acts like if else condition, checking "n == 3" when the condition is true then it return "three" else it checks ":" which is point no.7.

7. ``` ( n == 4 ) ? "four" : ``` Ternary operator which acts like if else condition, checking "n == 4" when the condition is true then it return "four" else it checks ":" which is point no.8.

8. ``` ( n == 5 ) ? "five" : ``` Ternary operator which acts like if else condition, checking "n == 5" when the condition is true then it return "five" else it checks ":" which is point no.9.

9. ``` ( n == 6 ) ? "six" : ``` Ternary operator which acts like if else condition, checking "n == 6" when the condition is true then it return "six" else it checks ":" which is point no.10.

10. ``` ( n == 7 ) ? "seven" : ``` Ternary operator which acts like if else condition, checking "n == 7" when the condition is true then it return "seven" else it checks ":" which is point no.11.

11. ``` ( n == 8 ) ? "eight" : ``` Ternary operator which acts like if else condition, checking "n == 8" when the condition is true then it return "eight" else it checks ":" which is point no.12.

12. ``` ( n == 9 ) ? "nine" : ``` Ternary operator which acts like if else condition, checking "n == 9" when the condition is true then it return "nine" else it checks ":" which is point no.13.

13. ```"Greater than 9"``` When all the above condition fails it will return "Greater than 9".

<b>More points from Dhayal</b>

1. Using ternary this much depth will takes more "CPU" cost as it increases stack memory and not easy to understand.


---

## Solution13.c - Solution using string array and printf

<b>Code</b>

```c
  int n;
  scanf("%d",&n);

  char numbers[10][15] = {
    "Greater than 9",  "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"
  };
  puts(numbers[n < 10 ? n : 0]);
```

<b>Explanation</b>

1. ```int n;```  Declaring variable "n" and allocating memory as integer, which is specific to the compilers few compilers allocated 4 bytes and recent compilers allocating 8 bytes. As we didn't mentioned anything before the int, it takes as ```unsigned int a;``` which can store negative value also as value.

2. ```scanf("%d",&n);``` scanf is the functio allows program to get input from standard in which is generally from keyboard. As developer specified ```%d``` it reads input as int and store in the location of n which specified as ```&n```.

3. ```char numbers[10][15] = { "Greater than 9",  "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };``` Declaring variable "numbers" and allocating memory as char 2 dimentional array with space 10 * 15 = 150. Each character takes 1 byte of memory, so total 150 byte of memory. Keeping respective numbers to each and every memory location. Memory location 1 have "one", Memory location 2 have "two", Memory location 3 have "three", Memory location 4 have "four", Memory location 5 have "five", Memory location 6 have "six", Memory location 7 have "seven", Memory location 8 have "eight", Memory location 9 have "nine". Keeping "Greater than 9" in memory location as 0, so our logic will replace the n value as 0 if it's greater than 9, So it will help to print the value.

4. ```puts(numbers[n < 10 ? n : 0]);``` Printing the index of numbers as n when the n is greater than 10 then taking the index of 0 in "numbers" variable


---

## Solution14.c - Soluion using string array and while loop

<b>Code</b>

```c
    int n;
    scanf("%d",&n);

    char numbers[10][15] = {
      "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"
    };

    int i=0;
    while(i<sizeof(numbers) / sizeof(int)){
        if(i == n) printf(numbers[i-1]);
        i++;
    }
    if(n > 9){
        printf("Greater than 9");
    }
```


<b>Explanation</b>

1. ```int n;```  Declaring variable "n" and allocating memory as integer, which is specific to the compilers few compilers allocated 4 bytes and recent compilers allocating 8 bytes. As we didn't mentioned anything before the int, it takes as ```unsigned int a;``` which can store negative value also as value.

2. ```scanf("%d",&n);``` scanf is the functio allows program to get input from standard in which is generally from keyboard. As developer specified ```%d``` it reads input as int and store in the location of n which specified as ```&n```.

3. ```char numbers[9][15] = { "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };``` Declaring variable "numbers" and allocating memory as char 2 dimentional array with space 9 * 15 = 135. Each character takes 1 byte of memory, so total 135 byte of memory. Memory location 0 have "one", Memory location 1 have "two", Memory location 2 have "three", Memory location 3 have "four", Memory location 4 have "five", Memory location 5 have "six", Memory location 6 have "seven", Memory location 7 have "eight", Memory location 8 have "nine". 

4. ```int i=0;``` Initializing i as 0.

5. ```while(i<sizeof(numbers) / sizeof(int)){``` Looping the size of array "numbers" 

6. ```if(i == n) printf(numbers[i-1]);``` Checking the i and n are same, in that case printing the array index i-1 which will take respective. 

7. ```i++``` Incrementing "i" in each and every loop which condition.

6. ``` if(n > 9){ printf("Greater than 9"); }``` Checking n greater than 9, if that case printing "Greater than 9". It will reach only when all for loop is not passed any condition

<b>More points from Dhayal</b>

1. Loop for this logic without any other condition is a bad idea, where you might have given direct "n-1" behalf of "i-1"
---

## Solution15.c - Solution using enum, string array and switch case

<b>Code</b>

```c
    int n;
    enum numbers { one = 1, two, three, four, five, six, seven, eight, nine };
    char numS[10][15] = {
        "Greater than 9", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"
    };
  
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
```
<b>Explanation</b>

1. ```int n;```  Declaring variable "n" and allocating memory as integer, which is specific to the compilers few compilers allocated 4 bytes and recent compilers allocating 8 bytes. As we didn't mentioned anything before the int, it takes as ```unsigned int a;``` which can store negative value also as value.

2. ```enum numbers { one = 1, two, three, four, five, six, seven, eight, nine };``` Declaring enum variable numbers and others as one = 1, two = 2, three = 3, four = 4, five = 5, six = 6, seven = 7, eight = 8, nine = 9. As first one declared with a number, the upcoming will take the incremental of the number.

3. ```char numS[10][15] = { "Greater than 9", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };``` Declaring numS variable character two dimentional array, which allocated memory as 150 bytes 10*15*1. 

4. ```scanf("%d",&n);``` scanf is the functio allows program to get input from standard in which is generally from keyboard. As developer specified ```%d``` it reads input as int and store in the location of n which specified as ```&n```.

3. ```switch( n ){``` A "switch" statement allows a variable to check against each and every case.  Here "n" is the variable which going to tested by every case.

4. ```case one : printf(numS[one]); break;``` Checking the value of "n" is equals to 1, in that case printing the output as "one" which stores in num5 index and breaking the switch case, other wise it will try to execute the next line of case also until end of switch case or reaching another break condition.

5. ```case two : printf(numS[two]); break;``` Checking the value of "n" is equals to 2, in that case printing the output as "two" which stores in num5 index and breaking the switch case.

6. ```case three : printf(numS[three]); break;``` Checking the value of "n" is equals to 3, in that case printing the output as "three" which stores in num5 index and breaking the switch case.

7. ```case four : printf(numS[four]); break;``` Checking the value of "n" is equals to 4, in that case printing the output as "four" which stores in num5 index and breaking the switch case.

8. ```case five : printf(numS[five]); break;``` Checking the value of "n" is equals to 5, in that case printing the output as "five" which stores in num5 index and breaking the switch case.

9. ```case six : printf(numS[six]); break;``` Checking the value of "n" is equals to 6, in that case printing the output as "six" which stores in num5 index and breaking the switch case.

10. ```case seven : printf(numS[seven]); break;``` Checking the value of "n" is equals to 7, in that case printing the output as "seven" which stores in num5 index and breaking the switch case.

11. ```case eight : printf(numS[eight]); break;``` Checking the value of "n" is equals to 8, in that case printing the output as "eight" which stores in num5 index and breaking the switch case.

12. ```case nine : printf(numS[nine]); break;``` Checking the value of "n" is equals to 9, in that case printing the output as "nine" which stores in num5 index and breaking the switch case.

13. ```default : printf(numS[0]);``` In switch case if nothing is matching then it will execute the default, in that case printing the output as "Greater than 9" which stores in num5 index. Default is optional and break is not needed for default case as this is end of the switch case.

14. ```}``` Closing the switch case.

<b>More points from Dhayal</b>

1. Using switch case is better than multiple if else conditions as performance wise.

2. Having multiple ```printf``` statment will confuse the developers.

3. Good to use default statement whenever it's possible.

4. Using enum will make the developers more clear about the values.

---