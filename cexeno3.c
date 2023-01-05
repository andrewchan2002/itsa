#include <stdio.h>
int main(){
    int x;
    int y;
    int r=100;
    int distance;
    scanf("%d %d",&x,&y); 
    distance = (x*x + y*y);  
    if(distance <= (r*r))  
    {  
        printf("inside\n");  
    }  
    else if(distance > (r*r))  
    {  
        printf("outside\n");  
    } 
}