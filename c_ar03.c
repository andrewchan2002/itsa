#include <stdio.h>
int main(){
    int arr[6];
    int sum=0;
    for(int i = 0; i<6; i++){
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i<6; i++){
       arr[i]=arr[i]*arr[i]*arr[i];
       sum = sum + arr[i];
    }   
        printf("%d\n", sum);
    return 0;
}