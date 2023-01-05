#include <stdio.h>
int main(){
    int x,y,z,num;
    scanf("%d %d %d",&x,&y,&z);
    num= (x*20)+(y*25)+(z*30);
    if(x/3 && y/2){
        num-=30;
    }
    printf("%d\n",num);
}
