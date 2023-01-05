#include <stdio.h>
int main(){
    int second;
    int days,hours,min;
    scanf("%d",&second);
    days = second/86400;
    second = second-86400*days;
    hours = second/3600;
    second = second-3600*hours;
    min= second/60;
    second=second-min*60;
    printf("%d days\n%d hours\n%d minutes\n%d seconds\n",days,hours,min,second);
    return 0;
}