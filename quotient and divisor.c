#include <stdio.h>
int main() {
    int A,B;
    if (scanf("%d %d", &A,&B) == 2);
    int quotient = A / B;
    int remainder = A % B;
    printf("Quotient = %d, Remainder = %d\n", quotient, remainder); 
    return 0;
}