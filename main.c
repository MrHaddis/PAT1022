#include <stdio.h>
#include <math.h>

void main() {
    int n, a, sum = 0, i = 0;
    scanf("%d", &n);
    while (n) {
        a = n % 8;
        n = n / 8;
        sum += a * pow(10, i);
        i++;
    }
    printf("%d", sum);
}