#include <stdio.h>
int main(){
    int len, weight;
    scanf("%d %d",&len, &weight);
    if( len <= 100 && len>=0 && weight <= 100 && weight>=0)
        printf("inside\n");
    else
        printf("outside\n");
}