#include <stdio.h>
int main(){
    char data[] = "0123456789ABCDEF";  // 16依字串排序
    char ans[16];                   
    int i = 0;
    int num = 0;
    scanf("%d", &num);
    while (num)
    {
        ans[i++] = data[num % 16];             //余数放进去格子
        num = num / 16;                        //得出的商
    }
    for (int j = i - 1; j >= 0; --j)            //因为倒序的情况所以我们从最后面开始print
        printf("%c", ans[j]);
    printf("\n");
}