#include <stdio.h>
//函数原型
void jolly(void);
void deny(void);
//定义函数
void jolly(void)
{
	printf("For he's jolly good fellow!\n");
}
void deny(void)
{
	printf("Which nobody can deny!\n");
}

int main(void)
{
	jolly();
	jolly();
	jolly();
	deny();

	return 0;
}
