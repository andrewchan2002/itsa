#include <stdio.h>

int main(){  
    int num;  
    int arr[8];  
    scanf("%d", &num); 
    if (num<0)  
    {  
        num = num + 256; //negative to push to positive
    }  
    for(int i = 7; i >= 0; i--)  
    {  
        arr[i]= num % 2;  
        num/=2;  
    }  
    for(int i = 0; i < 8; i++)  
    {  
        printf("%d",arr[i]); 
    }  
    printf("\n"); 
}