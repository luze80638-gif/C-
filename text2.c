//
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//	void turn1(int arr[], int i);
//
//	int main(void)
//	{
//		int q = 0;
//		int arr[200];
//		
//		printf("请输入数字(输入负数结束)\n");
//
//		int g = 0;
//		for (g = 0;g < 200;g++)
//		{
//			scanf("%d", &arr[g]);
//
//			if (arr[g] < 0)
//			{
//				
//				break;
//			}
//		}
//
//
//
//
//
//
//
//		printf("正序输出:");
//		for (int a = 0;a < g ;a++)
//		{
//			printf("%d ", arr[a]);
//		}
//		printf("\n倒序输出:");
//		for (int k = 0;k < g - 1;k++)
//		{
//			if (arr[k] == arr[k + 1])
//			{
//				q = arr[k];
//				break;
//			}
//		}
//		turn1(arr, g);
//		for (int a = 0;a < g ;a++)
//		{
//			printf("%d ", arr[a]);
//		}
//
//		printf("\n第一个重复的数字:");
//		printf("%d", q);
//		return 0;
//
//	}
//	void turn1(int arr[], int i)
//	{
//
//		int temp = 0;
//		for (int a = 0;a < i / 2;a++)
//		{
//			temp = arr[i - a -1];
//			arr[i - a - 1] = arr[a];
//			arr[a] = temp;
//
//
//
//
//		}
//
//	}
