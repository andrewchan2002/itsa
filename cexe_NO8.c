#include <stdio.h>
int checking(int);
int main()
{
	int number;
	scanf("%d",&number);
	if(checking(number)){
		printf("YES\n");
	}else{
		printf("NO\n");
	}
  return 0;
}
int checking(int num){
	int i;
	if(num==1){
		return 0;
	}
    else{
		for(i=2;i<num;i++){
			if(num%i==0){
				return 0;
			}
		}
	}
	return 1;
}
