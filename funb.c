#include<stdio.h>
int add(int,int);
int main(){
	int x,y;
	printf("enter the numbers");
	scanf("%d%d",x,y);
	int sum = add(x,y);
	printf("the sum of numbers is:%d ",sum);	
}
int add(int A,int B){
	int sum=A+B;
	return sum;
}