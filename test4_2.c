#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

////�ֲ������������򣺾��Ǳ������ڵľֲ���Χ
////ȫ�ֱ�������������������
// 
// //int g_val = 2021;//ȫ�ֱ���
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

//�ֲ��������������ڣ�����ֲ���Χ������ʼ�����ֲ���Χ��������
//ȫ�ֱ������������ڣ��������ڵ���������
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
//	//1.  ���泣��
//	//3.14;
//	//10;
//	//'a';
//	//"abcdef";
//
//	//2.const���εĳ�����
//	//const int num = 10;//num���ǳ����� - ���г����ԣ����ܱ��ı�����ԣ�
//	//num = 20;
//	//printf("%d\n",num);
//
//	//3.#define ����ı�ʶ������
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
	//����ö�����͵ı�����δ������ȡֵ
	//ö�ٳ���
	MALE = 3,//����ֵ
	FEMALE,
	SECRET
};

int main()
{
	//4.ö�ٳ���:����һһ�оٵĳ���
	//�ؼ���enum

	enum SEX s = MALE;
	//MAL = 3;//error
	printf("%d\n",MALE);
	printf("%d\n", FEMALE);
	printf("%d\n", SECRET);

	return 0;
}