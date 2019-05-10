<p align="center">
    <a href="https://www.hackerrank.com/dhayalramk">
        <img height=85 src="https://d3keuzeb2crhkn.cloudfront.net/hackerrank/assets/styleguide/logo_wordmark-f5c5eb61ab0a154c3ed9eda24d0b9e31.svg">
    </a>
    <br>All efficient solutions to HackerRank problems
</p>

<b>Link:</b> <a href="https://www.hackerrank.com/challenges/hello-world-c/">"Hello World!" in C</a>

<b>Objective:</b> Read input and write output in C Programming.

<b>Solutions</b>
1) [Solution.c](solution.c)  - Normal solution
2) <a href="https://github.com/DhayalAarthi/CompetitiveProgramming/blob/Hackerrank/Hackerrank/C/HelloWorld/Solution2.c">Solution2.c</a> - Removed unnecessary include headers
3) <a href="https://github.com/DhayalAarthi/CompetitiveProgramming/blob/Hackerrank/Hackerrank/C/HelloWorld/Solution3.c">Solution3.c</a> - Using gets
4) <a href="https://github.com/DhayalAarthi/CompetitiveProgramming/blob/Hackerrank/Hackerrank/C/HelloWorld/Solution4.c">Solution4.c</a> - Using gets & puts
5) <a href="https://github.com/DhayalAarthi/CompetitiveProgramming/blob/Hackerrank/Hackerrank/C/HelloWorld/Solution5.c">Solution5.c</a> - printf without %s
6) <a href="https://github.com/DhayalAarthi/CompetitiveProgramming/blob/Hackerrank/Hackerrank/C/HelloWorld/Solution6.c">Solution6.c</a> - scanf inside printf
7) <a href="https://github.com/DhayalAarthi/CompetitiveProgramming/blob/Hackerrank/Hackerrank/C/HelloWorld/Solution7.c">Solution7.c</a> - gets inside printf
8) <a href="https://github.com/DhayalAarthi/CompetitiveProgramming/blob/Hackerrank/Hackerrank/C/HelloWorld/Solution8.c">Solution8.c</a> - scanf different format input
9) <a href="https://github.com/DhayalAarthi/CompetitiveProgramming/blob/Hackerrank/Hackerrank/C/HelloWorld/Solution9.c">Solution9.c</a> - printf using character by character
10) <a href="https://github.com/DhayalAarthi/CompetitiveProgramming/blob/Hackerrank/Hackerrank/C/HelloWorld/Solution10.c">Solution10.c</a> - using fgets

## 1) Solution.c - Normal solution

```c
char s[100];
scanf("%[^\n]%*c", &s);
printf("Hello, World!\n"); 
printf("%s", s);
```
<b>Explanation:</b> 

```char s[100];```

* Declaration for the character array size 100, assuming input length won't exceed more than 100 characters which is not specified in the requirement.
* char is a keyword refering to character which allocated single byte of memory (8 bits) which is to store ACSII reference value

```scanf("%[^\n]%*c", &s);```

* scanf is library function in c programming
* scanf function reads the input from stdin
* first parameter we can pass is "format" which is pointer to the null terminator
* % - matches literal 
* [] set - matching non empty characters
* \n - new line escape sequence
* %[^\n] - Will search till it reaches "new line"
* "%[^\n]%*c" - Will search till the "new line" repeatedly and read a character
* &s - Store in address of "s" variable 

```printf("Hello, World!\n");```

* printf is library function in c programming
* printf function writes the output to stdout
* first parameter which we are passing is *format
* prints "Hello, World!" and new line 

```printf("%s", s);```

* % - Introductory character in format which will look for the next parameter in the code.
* In format we are spefifying %s which will look for string or array of characters, here we refering as s. 
* When we pass s, it will pass first character address and prints till it reaches '\0' which we call as null. 

## 2) Solution2.c - Removed unnecessary include headers

```#include <stdio.h>```

* Standard input and output option 
* As we are using printf and scanf, this header file has those definitions

## 3) Solution3.c - Using gets

```c
char s[100];
gets(s);
```
<b>Explanation</b>

``` gets(s)```

* reads from stdin till the reaches End of the file(EOL) or New Line (\n)
* gets reading from input and storing the value in the address of s

## 4) Solution4.c - Using gets & puts

```c
char s[100];
gets(s);
puts("Hello, World!");
puts(s);
```
<b>Explanation</b>

``` gets(s); ```
* Gets input till new line or end of the file and storing in address of s variable

```puts("Hello, World!");```
* Prints all the character till it reaches null "\0" and prints new line "\n" at the end of the string
* Here prints "Hello, World!" as output in the screen.

``` puts(s); ```
* Printing variable value of s, till it reaches null "\0" value and adds new line at the end "\n"

## 5) Solution5.c - printf without %s

```c
char s[100];
scanf("%[^\n]%*c", &s);
printf("Hello, World!\n"); 
printf(s);
```

<b>Explanation</b>

``` printf(s); ```
* it's not that compulsary we need to provide "%s" and pass the parameter of char array, we can print the string by passing the variable directly as it's an array of characters. 

## 6) Solution6.c - scanf inside printf

```c
char s[100];
printf("Hello, World!\n%s", s, scanf("%[^\n]%*c", &s));
```
<b>Explantion</b>
* printf function execute the funtion from right to left parameter, so it's processing scanf operation first which store the stdin value in address of s and then prints the value as 2nd and 1st parameter format input.

## 7) Solution7.c - gets inside printf

```c
printf("Hello, World!\n%s", s, gets(s));
```

<b>Explanation</b>
* printf function execute the funtion from right to left parameter, so it's processing gets operation first which store the stdin value in address of s and then prints the value as 2nd and 1st parameter format input.

## 8) Solution8.c - scanf different format input
```c
scanf("%[^\n]%", &s);
```

<b>Explanation</b>
* "%[^\n]%" - Which read till all the characters till it reaches new line "\n"

## 9) Solution9.c - printf using character by character

```c
char s[100];
scanf("%[^\n]%", &s);
printf("Hello, World!\n");
int i = 0;
while( s[i] != '\0' ){
    printf("%c", s[i]);
    ++i;
}
```

<b>Explanation</b>
* Loop using while with the condition till it reaches null character "\0", so it breaks when it's reach null.
* Incrementing using a flag as i. So loop each and every character one by one.

## 10) Solution10.c - using fgets

```c
char s[100];
fgets(s, sizeof(s), stdin);
printf("Hello, World!\n%s", s);
```

<b>Explanation</b>

``` fgets(s, sizeof(s), stdin); ```
* parameters ( *str, count, FILE )
* "*str" - Place or address where to store the information
* count - no. of characters to read from the 3rd parameter where it's providing
* FILE - Place which we try to get the input