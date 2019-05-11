#include <stdio.h>

void update(int *a,int *b) {
    int c = *a - *b;
    *a = *a + *b;
    *b = (c < 0 ? c*-1 : c);
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}

