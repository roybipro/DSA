#include <stdio.h>
int main() {
    int n, x;
    scanf("%d", &n);
    x = n % 2;
    if (x == 0) {
        printf("%d is even\n", n);
    } else {
        printf("%d is odd\n", n);

    }
    return 0;
}