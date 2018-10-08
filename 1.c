#include<stdio.h>
int main()
{
	static int a[100000]; //设置一个超大数组来存储乘积结果。
	int n = 1008;//要求的n的阶乘
	int jw;//用来表示进位
	int i, j;//控制循环
	int len = 1;//初始化数组长度为1
	int temp;//过程变量
	int sum = 0,wei=0;
	a[1] = 1;
	for (i = 2; i <= n; i++)//遍历。从1到n
	{
		jw = 0; 
		for (j = 1; j <= len; j++)//从数组的低位开始乘
		{
			temp = a[j] * i + jw;//变量存储结果
			a[j] = temp % 10;//将变量最后一位放入数组。
			jw = temp / 10;//表示除了最后一位需要进位的数
			if (j >= len && jw != 0)
				len++;//数组长度加一 
		}
	}
	for (i = len; i >= 1; i--)//逆序输出数组就是结果
	{
		sum += (a[i] * 10 * i);
	}
	printf("%I32d\n", sum/25);
	return 0;
}
