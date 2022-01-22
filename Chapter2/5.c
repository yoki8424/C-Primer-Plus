#include <stdio.h>
//函数原型
void br(void);
void ic(void);
//定义函数
void br(void)
{
	printf("Brazil, Russia, ");
}

void ic(void)
{
        printf("India, China,\n");
}

int main(void)
{
	br();
	ic();
	printf("India, China,\n");
	printf("Brazil, Russia\n");

	return 0;
}
