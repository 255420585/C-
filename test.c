#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	printf("Hello World!\n");
//}

//数据类型
//char		字符数据类型
//short		短整型
//int		整型				%d
//long		长整型
//float		单精度浮点型		%f
//double	双精度浮点型		%lf

//int main()
//{
//	//字符类型
//	char ch = 'a';
//	//整型
//	int age = 20;
//	//短整型
//	short num = 10;
//	//long
//	//long long
//
//	//单精度浮点型
//	float weight = 55.5;
//	//双精度浮点型
//	double d = 0.0;
//
//	return 0;
//}

//int main()
//{
//	//printf("%d\n",100);  //打印一个整数 - %d
//	//size of  -  关键字 - 操作符 - 计算类型或者变量所占空间的大小
//	//单位为字节byte
//	//计算机中的单位：
//	// bit-比特位；
//	// byte-字节 = 8bit；
//	// kb = 1024byte;
//	// mb = 1024kb;
//	// gb = 1024mb;
//	// tb = 1024gb;
//	// pb = 1024tb;
//
//	printf("%d\n",sizeof(char));
//	printf("%d\n",sizeof(short));
//	printf("%d\n",sizeof(int));
//	printf("%d\n",sizeof(long));
//	printf("%d\n",sizeof(long long));
//	printf("%d\n",sizeof(float));
//	printf("%d\n",sizeof(double));
//}

//常量：不可变
//变量：可变

//int main()
//{
//	int age = 20;
//	double weight = 68.2;
//
//	age = age + 1;
//	weight = weight - 10;
//	printf("%d\n",age);
//	printf("%lf\n",weight);
//	return 0;
//}

//全局变量-{}外部定义的
//int a = 100;
//int main()
//{
//	//局部变量-{}内部定义的
//	//当局部变量和全局变量名字冲突的情况下，局部优先
//	//一般情况下不建议把全局变量和局部变量的名字写成一样的
//	int a = 10;
//	printf("%d\n",a);
//}

//求两个整数的和
int main()
{
	int a = 0;
	int b = 0;
	int sum = 0;
	scanf("%d,%d",&a,&b);	//输入函数
	sum = a + b;
	printf("sum=%d\n",sum);
	return 0;
}