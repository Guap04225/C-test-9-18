#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//�Ż���Ĵ���

int main()
{
	int i = 0;
	int n = 0;
	int ret = 1;
	int sum = 0;
	for (n = 1; n <= 10; n++)
	{
		ret = ret * n;
		sum = sum + ret;
	}
	printf("���Ϊ��%d\n", sum);
	return 0;
}


//����1��10�Ľ׳����

//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 3; n++)
//	{
//		 ret = 1;
//		for (i = 1; i <= n; i++)
//		{
//			ret = ret * i;
//		}
//		sum = sum + ret;
//	}
//	//ret = 1*1
//	//ret = 1*1*2
//	//ret = 1*1*2*3*2
//	printf("���Ϊ��%d\n", sum);
//	return 0;
//}


//����n�Ľ׳�

//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	printf("����������n\n");
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	printf("%d�Ľ׳�Ϊ�� %d",n, ret);
//	return 0;
//}



//do whileѭ��

//int main()
//{
//	int i = 1;
//	do
//	{
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//
//	return 0;
//}

//forѭ��

//int main()
//{
//	for (int i = 1; i <= 10; i++)
//
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//	}
//	//for (int i = 1; i <= 10; i++)
//	//{
//	//	if (i == 5)
//	//		break;
//	//	printf("%d ", i);
//	//}
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//		i++;
//	}
//
//	//while (i <= 10)
//	//{
//	//	if (i == 5)
//	//		break;
//	//	printf("%d ",i);
//	//	i++;
//	//}
//	return 0;
//}


//whileѭ��

//int main()
//{
//	while (1)
//		printf("1\n");
//	return 0;
//}


//int main()
//{
//	int day = 0;
//	int n = 1;
//	scanf("%d", &day);
//	switch (day)
//	{
//
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//	case 7:
//		printf("��Ϣ��\n");
//		break;
//	default:
//		printf("�������\n");
//		break;
//	}
//	return 0;
//}
