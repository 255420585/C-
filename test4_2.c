#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

////局部变量的作用域：就是变量所在的局部范围
////全局变量的作用域：整个工程
// 
// //int g_val = 2021;//全局变量
//int main() 
//{
//	printf("1:%d\n",g_val);
//	printf("hehe\n");
//	{
//		printf("2:%d\n", g_val);
//
//		int a = 10;
//		printf("%d\n", a);
//	}
//	printf("3:%d\n", g_val);
//	
//	return 0;
//}

//局部变量的生命周期：进入局部范围生命开始，出局部范围生命结束
//全局变量的生命周期：整个周期的生命周期
int main()
{
	{
		int a = 10;
		printf("%d\n", a);
	}
	return 0;
}