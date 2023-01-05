#include <stdio.h>
int main(){
    int up,down,height;
    double area;
    scanf("%d %d %d",&up,&down,&height);
    area= 0.5*(up+down)*height;
    printf("Trapezoid area:%.1lf\n",area);
}