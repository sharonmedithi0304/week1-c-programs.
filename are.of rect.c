#include<stdio.h>
int main (){
	float area;
	int l,b;
	
	
	printf("Enter the the value of length and breadth\n");
	scanf("%d%d",&l,&b);
	
	area = l*b;
	
	printf("The area of side is %.2f\n",area);
	
	return 0;
}
