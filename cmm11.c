int main(){
    int num = 0;
    int ten=0,five=0;
    scanf("%d",&num);
    while(num >= 10){
        num = num- 10;
        ten = ten + 1;
    }
    while(num >= 5){
        num = num- 5;
        five= five+1;
    }
    printf("NT10=%d\n",ten);
    printf("NT5=%d\n",five);
    printf("NT1=%d\n",num);
    return 0;
}