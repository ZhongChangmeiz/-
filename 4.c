#include <stdio.h>
void SubString(char b[], int start, int end);
int main()
{
	char a[]="We are VR Studio!";
	SubString(a, 3, 4);
	return 0;
}
/*
SubString函数:
入口:b[],start,end
类型:void
原理:从start-1到end读取字符串
*/
void SubString(char b[],int start, int end)
{
	for (int i = start-1; i <= end; i++)
	{
		printf("%c\n", b[i]);
	}
}
