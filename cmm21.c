#include <stdio.h>

int main()
{
    int num;
    long factorial = 1;
    scanf("%d", &num);
    if(num==0)
        printf("1\n");
    else{
    for(int i=1; i<=num; ++i){
            factorial *= i;        
        }
        printf("%ld\n",factorial);
    }
}