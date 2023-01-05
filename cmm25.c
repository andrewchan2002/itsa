#include <stdio.h>
int main(){
    int num = 0;
    int sum = 0;
    scanf("%d",&num);
    for(int i = 1; i < num+1; i++){
        if((i%3) == 0){
                sum = sum+ i;
            }
    }
        printf("%d\n", sum);
    }
