#include<stdio.h>
int main (){
	float s,area;
	const float pi = 3.14;
	
	printf("Enter the the value of side\n");
	scanf("%f",&s);
	
	area = s*s;
	
	printf("The area of side is %.2f\n",area);
	
	return 0;
}
