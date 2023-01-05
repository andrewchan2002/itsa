#include <stdio.h>
int main(){
    int x,y,num;
 
    scanf("%d %d",&x,&y);
    num=x;
    for(int i=0;i<y-1;i++){
        x=x*num;
    }
    if(y==0){
        printf("1\n");
    }
    else  
        printf("%d\n",x);
}