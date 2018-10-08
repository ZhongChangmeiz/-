#include <stdio.h>
#include <malloc.h>
int main()
{
	int a[] = { 2,4,3,1,5,7,12,8,9,20 };
	int length = (sizeof(a) / sizeof(int));//求数组长度
	int t;
	/*冒泡排序*/
	for (int i = 1; i < length; i++)
	{
		for (int j = 0; j < length - i; j++)
		{
			if (a[j] > a[j + 1])
			{
				t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
			}
		}
	}
	for (int i = 0; i < length; i++)
		printf("%d ", a[i]);
	return 0;
}
