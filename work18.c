//#include<stdio.h>
//int max(int arr[], int len);
//int min(int arr[], int len);
//int main(void)
//{
//	//要将下以数组重新排序(从小到大)
//	int arr[] = { 3,5,2,1,4 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	int max_1 = max(arr, len);
//	int min_1 = min(arr, len);
//	
//	for (int b = 0;b <= len - 1;b++)
//	{
//		for (int a = 0;a <= len - 1 - 1;a++)
//		{
//			if (arr[a] > arr[a + 1])
//			{
//				int temp = arr[a];
//				arr[a] = arr[a + 1];
//				arr[a + 1] = temp;
//
//			}
//
//		}
//	}
//	for(int s = 0;s <= len - 1;s++)
//	{ 
//		printf("%d", arr[s]);
//	}
//	
//	return 0;
//
//
//}
//int max(int arr[], int len)
//{
//	int max = 0;
//	for (int b = 0;b <= len - 1;b++)
//	{
//		if (arr[b] > max)
//		{
//			max = arr[b];
//		}
//		
//	}
//	return max;
//}
//int min(int arr[], int len)
//{
//	int min = 1000000;
//	for (int b = 0;b <= len - 1;b++)
//	{
//		if (arr[b] < min)
//		{
//			min = arr[b];
//		}
//	}
//	return min;
//}
