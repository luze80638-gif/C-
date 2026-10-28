//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//long long int mima = 123456;
//double a = 3;//起步价
//double b = 1.5;//每公里价格
//double c = 55;//速度
//double jife(double juli);
//double time(double juli);
//
//int main(void)
//{
// 	long long int d;//用于存入输入密码
//	double juli;
//	printf("请输入行驶距离:");
//	scanf("%lf", &juli);
//	double jiage = jife(juli);
//	printf("\n价格为:%.2f", jiage);
//	double time1 = time(juli);
//
//	printf("\n时间为:%.2lf", time1);
//	
//	
//	printf("\n\n管理入口,请输入密码进入:");
//	scanf("%lld",&d);
//	if (d == mima)
//	{
//		int p;//用以记录进入的功能
//		printf("\n进入管理页面\n");
//		printf("1.查询历史订单及总金额\n");
//		printf("2.修改密码\n");
//		printf("3调整起步价与每公里价格\n\n");
//		printf("请输入你想进入的功能:\n");
//		scanf("%d", &p);
//		if (p == 1)
//		{
//			printf("上次订单的价格为:%f", jiage);
//		}
//		if (p == 2)
//		{
//			printf("请输入你想更改的密码:");
//			scanf("%lld", &d);
//			mima = d;
//		}
//		if (p == 3)
//		{
//			double m = 0;
//			printf("请输入你想更改的价格,起步价请输入1,每公里价格请输入2");
//			scanf("%lf", &m);
//			double h = 0;
//			if (m == 1)
//			{
//				
//				printf("\n请输入新价格:");
//				scanf("%lf", &h);
//				a = h;
//				
//			}
//			if(m == 2)
//			{
//				printf("\n请输入新价格:");
//				scanf("%lf", &h);
//				b = h;
//
//			}
//		}
//
//				
//
//
//	}
//	else
//	{
//		printf("\n密码错误,请稍后重试");
//	}
//
//	return 0;
//}
//double jife(double juli)
//{
//	double jiag = 0;
//	if (juli <= 1)
//	{
//		jiag = a;
//	}
//	else 
//	{
//		jiag = a + (juli - 1) * b;
//	}
//	return jiag;
//}
//double time(double juli)
//{
//	double time1 = juli / c;
//	return time1;
//}
