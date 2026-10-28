//#include<stdio.h>
//
//void minmax(const int *arr, int *pmax, int *pmin, int len);
//int main()
//{
//	int max = 0, min = 0;
//	int* pmax = &max;
//	int* pmin = &min;
//	int arr[ ] = { 33,44,11,88,55,66 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	int* p = &arr[0];
//	minmax(arr,pmax,pmin,len);
//	printf("最大值为:%d,最小值为:%d", max, min);
//}
//void minmax(const int *arr, int *pmax, int *pmin,int len)
//{
//	*pmax = arr[0];
//	*pmin = arr[0];
//	for (int a = 0;a < len;a++)
//	{
//		int temp = 0;
//		if (*pmax <= arr[a])
//		{
//			*pmax = arr[a];
//		}
//		if (*pmin >= arr[a])
//		{
//			*pmin = arr[a];
//		}
//	}
//}
//
//
