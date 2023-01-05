#include <stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    if(num == 3 || num == 4 || num == 5)
        printf("Spring\n");
    else if(num == 6 || num == 7 || num == 8)
        printf("Summer\n");
    else if(num == 9 || num == 10 || num == 11)
        printf("Autumn\n");
    else if(num == 12 || num == 1 || num == 2 )
        printf("Winter\n");
    else
        return 0;
}
