#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	printf("Hello World!\n");
//}

//��������
//char		�ַ���������
//short		������
//int		����				%d
//long		������
//float		�����ȸ�����		%f
//double	˫���ȸ�����		%lf

//int main()
//{
//	//�ַ�����
//	char ch = 'a';
//	//����
//	int age = 20;
//	//������
//	short num = 10;
//	//long
//	//long long
//
//	//�����ȸ�����
//	float weight = 55.5;
//	//˫���ȸ�����
//	double d = 0.0;
//
//	return 0;
//}

//int main()
//{
//	//printf("%d\n",100);  //��ӡһ������ - %d
//	//size of  -  �ؼ��� - ������ - �������ͻ��߱�����ռ�ռ�Ĵ�С
//	//��λΪ�ֽ�byte
//	//������еĵ�λ��
//	// bit-����λ��
//	// byte-�ֽ� = 8bit��
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

//���������ɱ�
//�������ɱ�

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

//ȫ�ֱ���-{}�ⲿ�����
//int a = 100;
//int main()
//{
//	//�ֲ�����-{}�ڲ������
//	//���ֲ�������ȫ�ֱ������ֳ�ͻ������£��ֲ�����
//	//һ������²������ȫ�ֱ����;ֲ�����������д��һ����
//	int a = 10;
//	printf("%d\n",a);
//}

//�����������ĺ�
int main()
{
	int a = 0;
	int b = 0;
	int sum = 0;
	scanf("%d,%d",&a,&b);	//���뺯��
	sum = a + b;
	printf("sum=%d\n",sum);
	return 0;
}