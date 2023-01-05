#include <stdio.h>
int main(){
    int num1,num2;
    int sum=0;
    scanf("%d %d",&num1,&num2);
    for(int i=num1; i<=num2; i++){
        sum = sum+i;
    }
    printf("%d\n",sum);
    return 0;
}