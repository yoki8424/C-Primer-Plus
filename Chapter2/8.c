#include <stdio.h>
//函数原型
void one_three(void);
void two(void);
//函数定义
void one_three(void)
{
	printf("one\n");
	two();
	printf("three\n");
}

void two(void)
{
        printf("two\n");
}

int main(void)
{
	printf("starting now:\n");
	one_three();
	printf("done!\n");

	return 0;
}
