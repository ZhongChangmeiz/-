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
/*
冒泡排序原理:比较相邻的元素。如果第一个比第二个大，就交换他们两个。对每一对相邻元素做同样的工作，从开始第一对到结尾的最后一对。在这一点，最后的元素应该会是最大的数。
针对所有的元素重复以上的步骤，除了最后一个。持续每次对越来越少的元素重复上面的步骤，直到没有任何一对数字需要比较。
*/
