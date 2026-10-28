//#include<stdio.h>
//int main()
//{
//	int a, b, c;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a + b > c && a + c > b && b + c > a)
//	{
//		if (a == b || a == c || b == c)
//		{
//
//			if (a == b && a == c)
//			{
//				printf("等边三角形");
//				return 0;
//			}
//			printf("等腰三角形");
//			return 0;
//		}
//		printf("普通三角形");
//		return 0;
//
//	}
//}
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main(void)
//{
//	int m, n, c;
//	scanf("%d %d", &m, &n);
//	c = m < n ? m : n;
//	for (int i = c;i > 0;i--)
//	{
//		int a, b;
//		a = m % i, b = n % i;
//		if (a == 0 && b == 0)
//		{
//			printf("%d", i);
//			return 0;
//	}
//
//
//}
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int xuan_huan(int a);
//int zhi(int a, int c);
//int main(void)
//{
//	int a;
//	scanf("%d", &a);
//	long long int u = 0;
//	long long int b = xuan_huan(a);
//	for (int c = 0;c < b;c++)
//	{
//		long long int s = 1;
//		long long int x = zhi(a, c);
//		for (int g = 0;g < b;g++)
//		{
//			 s = s * x;
//		}
//		u = u + s;
//	}
//	if (u == a)
//	{
//		printf("为阿姆斯特朗数");
//	}
//	else        printf("不是\n");
//}
//int xuan_huan(int a)
//{
//	int b = 0;
//	while (a != 0)
//	{
//		a = a / 10;
//		b++;
//	}
//	return b;
//}
//int zhi(int a, int c)
//{
//	int y = 0;
//	for (int f = 0;f < c;f++)
//	{
//		
//		a = a / 10;
//
//	}
//	return a % 10;
//}
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//
//int main(void)
//{
//	//设置变量记录三角形的行数
//	int n;
//	scanf("%d", &n);
//	//for循环实现行数
//	int e = 1;
//	for (int a = 1;a <= n;a++)
//	{
//		//每行需要循环的次数为a
//		//分为奇数行和偶数行
//		for (int s = 0; s < (n - a) * 2; s++)
//		{
//			printf(" ");
//		}
//		if (a % 2 != 0)//奇数
//		{
//			
//			for (int b = 1;b <= a; b++)
//			{
//				
//				printf("%4d", e);
//				e++;
//				
//
//			}
//			printf("\n");
//		}
//		if (a % 2 == 0)//偶数
//		{
//			
//			for (int b = 1;b <= a; b++)
//			{
//				
//				printf("%4d", e + a - b);
//				
//
//			}
//			e = e + a;
//			printf("\n");
//		}
//	}
//}
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//void turn1(int* arr, int len);
//void turn2(int* arr, int len);
//
//int main(void)
//{
//	int len;
//	int arr1[1000];
//	int arr2[1000];
//	scanf("%d", &len);
//	for (int a = 0;a < len;a++)
//	{
//		scanf("%d", &arr1[a]);
//	}
//	for (int a = 0;a < len;a++)
//	{
//		scanf("%d", &arr2[a]);
//	}
//	turn1(arr1, len);
//	turn2(arr2, len);
//	int q = 0;
//	for (int a = 0;a < len;a++)
//	{
//		q = q + arr1[a] * arr2[a];
//	}
//	printf("%d", q);
//}
//void turn1(int* arr, int len)
//{
//	for (int b = 0;b < len - 1;b++)
//	{
//		for (int a = 0;a < len - 1;a++)
//		{
//			if (arr[a] > arr[a + 1])
//			{
//				int temp = 0;
//				temp = arr[a];
//				arr[a] = arr[a + 1];
//				arr[a + 1] = temp;
//			}
//		}
//	}
//	
//}
//void turn2(int* arr, int len)
//{
//	for (int b = 0;b < len - 1;b++)
//	{
//		for (int a = 0;a < len - 1;a++)
//		{
//			if (arr[a] < arr[a + 1])
//			{
//				int temp = 0;
//				temp = arr[a];
//				arr[a] = arr[a + 1];
//				arr[a + 1] = temp;
//			}
//		}
//	}
//	
//}
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//void gongneng1(char* mima, int* e);
//void gongneng2(int v, int e);
//
//int main(void)
//{
//	int e = 0;//记录改了几次密码
//	int v = 0;//记录输入了几次密码
//	char mima[12];
//	char putin[9];
//	strcpy(mima, "lock2024");
//	for (int a = 0;a < 3;a++)
//	{
//		
//		
//		
//		printf("请输入原密码\n");
//		scanf("%s", putin);
//		v++;
//		int b = strcmp(putin, mima);
//		if (b == 0)
//		{
//			break;
//		}
//		if (b != 0)
//		{
//			printf("密码错误\n");
//			
//		}
//		if (a == 2)
//		{
//			printf("锁定");
//			return 0;
//			
//		}
//		printf("还剩%d次", 3 - 1 - a);
//		
//	}
//	printf("密码正确\n");
//	while (1)
//	{
//		
//		printf("进入功能选择界面\n");
//		printf("功能一;修改密码\n");
//		printf("功能二;查看密码\n");
//		printf("功能三;退出\n");
//		int s;
//		scanf("%d", &s);
//		if (s == 1)
//		{
//			gongneng1(mima, &e);
//		}
//		if (s == 2)
//		{
//			gongneng2(v, e);
//		}
//		if (s == 3)
//		{
//			return 0;
//		}
//
//	}
//	
//	
//
//}
//void gongneng1(char* mima,int* p)
//{
//
//	printf("请输入新密码:");
//	scanf("%s", mima);
//	printf("%s\n", mima);
//	printf("修改成功");
//	*p = *p + 1;
//	
//
//}
//void gongneng2(int v,int e)
//{
//	printf("输入了%d次密码\n", v);
//	printf("修改了%d次密码", e);
//}