#include<stdio.h>
int main()
{
    int num1, num2, num3;
    scanf("%d %d %d", &num1, &num2, &num3);
    if(num1 + num2 > num3 && num2 + num3 > num1 && num1 + num3 > num2)
        printf("fit\n");
    else
        printf("unfit\n");
    return 0;
}
