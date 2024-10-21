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
//int main()
//{
//	{
//		int a = 10;
//		printf("%d\n", a);
//	}
//	return 0;
//}


//#define MAX 10000
//
//int main()
//{
//	//1.  字面常量
//	//3.14;
//	//10;
//	//'a';
//	//"abcdef";
//
//	//2.const修饰的常变量
//	//const int num = 10;//num就是常变量 - 具有常属性（不能被改变的属性）
//	//num = 20;
//	//printf("%d\n",num);
//
//	//3.#define 定义的标识符常量
//	//MAX = 20000;//error
//	//int n = MAX;
//	//printf("n=%d\n",n);
//
//	
//
//	return 0;
//}

enum Sex
{
	//这种枚举类型的变量的未来可能取值
	//枚举常量
	MALE = 3,//赋初值
	FEMALE,
	SECRET
};

int main()
{
	//4.枚举常量:可以一一列举的常量
	//关键词enum

	enum SEX s = MALE;
	//MAL = 3;//error
	printf("%d\n",MALE);
	printf("%d\n", FEMALE);
	printf("%d\n", SECRET);

	return 0;
}