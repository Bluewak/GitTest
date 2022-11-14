#include<stdio.h>

int main(){

	int num;
	int sum, i;
	int o_sum;
	int e_sum;

	float ave;

	sum = 0;
	o_sum = 0;
	e_sum = 0;

	//전체합계
	for (i = 1;i <= 10;i += 2)
	{
		sum = sum + i;
	}
	printf("합계 :%d\n", sum);

	//홀수합계
	for(i = 1;i <= 10;i += 2) 
	{
		o_sum = o_sum + i;
	}
	printf("홀수합계 :%d\n", o_sum);

	//짝수합계
	for (i = 2;i <= 10;i += 2)
	{
		e_sum = e_sum + i;
	}
	printf("짝수합계 :%d\n", e_sum);
	return 0;
}//나중에 조건문 사용해서 포문 하나로 작성해볼것