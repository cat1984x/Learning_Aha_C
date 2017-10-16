#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i,sum;
    sum =1;
    for(i=1;i<=10;i++)
    {
		sum = sum*i;
    }
    printf("%d",sum);
	system("pause");
	return 0;
}
