#include <stdio.h>

int main(void) {
    printf("enter an integer:\n");
    int n;
    if (scanf("%d", &n) == 1) {
        printf("you entered %d\n", n);
        return 0;
    } else {
        printf("not an integer\n");
        return 1;
    }
}
