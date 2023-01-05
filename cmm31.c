#include <stdio.h>

int main(){
    int num = 0;
    int sum=0;
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
		if(i%2==0 && i%3==0 && i%12!=0){
            sum=sum+i;
        }
    }
    printf("%d\n",sum);
}    
