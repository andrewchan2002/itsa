#include <stdio.h>
int main(){
    int num1;
    int sum=2;
    scanf("%d",&num1);
    
    for(int i=1; i<num1; i++){
        sum = sum*2;
    }
    if(num1>=31){
        printf("Value of more than 31\n");
    }
    else
        printf("%d\n",sum);
    return 0;
}