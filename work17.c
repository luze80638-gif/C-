//#include<stdio.h>
//int find(int len, int arr[], int num);
//void main()
//{
//	int arr[] = { 7,23,79,81,103,127,131,147 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	//设置数组的最大值和最小值
//	int num = 131;
//	int v = find(len, arr, num);
//
//	printf("%d", v + 1);
//
//}
////设计一个2分发查询的函数
//int find(int len,int arr[],int num)
//{
//	int max = len - 1, min = 0;
//	while (min <= max)
//	{
//		int mid = (max + min) / 2;
//		if (arr[mid] < num)
//		{
//			min = mid + 1;
//		}
//		else if (arr[mid] > num)
//		{
//			max = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//
//}