#include <stdio.h>
int main()
{
	int n = 865751897;
	int factor = 2;
	int lastfactor = 1;
	while (n > 1)
	{
		if (n%factor == 0)
		{
			lastfactor = factor;
			n = n / factor;
			while (n % factor == 0)
			{
				n = n / factor;
			}	
		}
		factor++;
	}
	printf("%d\n", lastfactor);
}
/*
对于给定的n, 使factor = 2, 3, 4, 5, 6...,对于每个factor, 当factor能被n完全整除时, 就到下一个factor.
可以预见, 所有被整除的factor都是质因数,
当所有小的因数都被整除时, n将会变为1
如n为20, factor为2时, 20 % 2 = 0, n = n / 2, n变为10,
return factor为10,
10 % 2 = 0, n = n / 2, n变为5, (整除时将某一个因数整除完)
然后下一个factor3, 4, 5, n % 5 = 0,
return factor = 5, n变为1, 跳出循环
*/
