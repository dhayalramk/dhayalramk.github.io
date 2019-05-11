#include <stdio.h>

int main()  {
    char ch;
    char s[100];
    char str[100];

    scanf("%c", &ch);
    scanf("\n");
    scanf("%[^\n]%*c", s);
    scanf("\n");
    scanf("%[^\n]%*c", str);

    printf("%c\n", ch);
    printf("%s\n", s);
    printf("%s", str);

    return 0;
}

