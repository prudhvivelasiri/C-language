#include <stdio.h>

int main() {
    int num, count = 0;
    printf("Enter an integer: ");
    scanf("%d", &num);

    while(num != 0) {
        count++;
        num /= 10;
    }

    printf("Total digits: %d\n", count);

    return 0;
}