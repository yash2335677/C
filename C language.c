#include <stdio.h>
#include <stdbool.h>
int main () {
int time = 20;
bool isday = time > 18;
if (isday) {
    printf("Good Afternoon");
}
else {
    printf("good evening");
}
    return 0;
}