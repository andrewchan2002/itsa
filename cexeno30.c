#include <stdio.h>
int main(){
    int num1, num2;
    scanf("%d %d",&num1, &num2);
    if (num1 == 12){ 
        if (num2 < 22)
            printf("Sagittarius\n");
        else
            printf("Capricorn\n");
    }
    else if(num1 == 1){
        if (num2 < 20)
            printf("Capricorn\n");
        else
            printf("Aquarius\n");
    }
    else if(num1 == 2){
        if (num2 < 19)
            printf("Aquarius\n");
        else
            printf("Pisces\n");
    }
    else if(num1 == 3){
        if (num2 < 21)
            printf("Pisces\n");
        else
            printf("Aries\n");
    }
    else if(num1 == 4){
        if (num2 < 20)
            printf("Aries\n");
        else
            printf("Taurus\n");
    }
    else if(num1 == 5){
        if (num2 < 19)
            printf("Taurus\n");
        else
            printf("Gemini\n");
    }
     else if(num1 == 6){
        if (num2 < 21)
            printf("Gemini\n");
        else
            printf("Cancer\n");
    }
     else if(num1 == 7){
        if (num2 < 23)
            printf("Cancer\n");
        else
            printf("Leo\n");
    }
     else if(num1 == 8){
        if (num2 < 23)
            printf("Leo\n");
        else
            printf("Virgo\n");
    }
     else if(num1 == 9){
        if (num2 < 23)
            printf("Virgo\n");
        else
            printf("Libra\n");
    }
     else if(num1 == 10){
        if (num2 < 23)
            printf("Libra\n");
        else
            printf("Scorpio\n");
    }
     else if(num1 == 11){
        if (num2 < 22)
            printf("Scorpio\n");
        else
            printf("Sagittarius\n");
    }
}


