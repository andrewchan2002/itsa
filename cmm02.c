#include <stdio.h>
int main(){
    int down,height;
    double area;
    scanf("%d %d",&down,&height);
    area= 0.5*down*height;
    printf("%.1lf\n",area);
}