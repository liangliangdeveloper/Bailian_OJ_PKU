#include<stdio.h>

int main(){
	int n;
	for(int i = 0; i < 3;i ++){
		scanf("%d", &n);
		printf("%8d",n);
		if(i != 3-1){
			printf(" ");
		}
	}
	return 0;
}
