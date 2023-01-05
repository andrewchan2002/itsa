#include <stdio.h>
int fib(int num) {
    if (num <= 1) 
        return num;
    else
        return fib(num-2)+fib(num - 1);
}

int main() {
    int num;
    scanf("%d", &num);
    printf("%d\n", fib(num));
    return 0;
}