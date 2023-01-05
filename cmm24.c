#include <stdio.h>

int main(){
    int wages = 0, hour = 0;
    double ans = 0;
    scanf("%d %d",&hour, &wages);
    if(hour > 120){
        hour -= 60;
        ans = wages * 60;
        hour -= 60;
        ans = ans+ wages * 60 * 1.33;
        ans = ans+ wages * hour * 1.66;
    }
    else if(hour > 60 && hour <= 120){
        hour -= 60;
        ans =  wages * 60;
        ans = ans+  wages * hour * 1.33;
    }
    else{
        ans = hour * wages;
    }
        printf("%.1lf\n",ans);
}
