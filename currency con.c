#include <stdio.h>

int main() {
int A;
if (scanf("%d", &A) ==1) {
    double usd = (double)A / 85.0;
    printf("%.3f", usd);
} 
    return 0;
}