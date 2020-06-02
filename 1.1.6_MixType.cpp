#include<stdio.h>

int main(){
	char a;
	int b;
	float c;
	double d;
	scanf("%c",&a);
	scanf("%d",&b);
	scanf("%f",&c);
	scanf("%lf",&d);
	printf("%c",a);
	printf(" ");
	printf("%d",b);
	printf(" ");
	printf("%.6f",c);
	printf(" ");
	printf("%.6lf",d);
	return 0;
}
