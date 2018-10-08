#include <stdio.h>
#include <string.h>
int num=0, letter=0, space=0, other=0;
int main()
{
	
	char a[]="We are VR studio!";
        /*字数统计*/
	for (int i = 0; i < strlen(a); i++)
	{
		if (a[i] >= 'a'&&a[i] <= 'z' || a[i] >= 'A'&&a[i] <= 'Z')
			letter++;
		else if (a[i] >= '0'&&a[i] <= '9')
			num++;
		else if (a[i] == ' ')
			space++;
		other++;
	}
	printf("字母:%d个\n数字:%d个\n空格:%d个\n其他:%d个\n", letter, num, space, other);
	return 0;
}
/*统计各类型字数原理:当字符为字母是，字母数量+1，数字，空格，其他字符同理*/
