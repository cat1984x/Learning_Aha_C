#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a,b;
    a=1;
    b=1;
    for(b=1;b<=9;b++)
    {
		for(a=1;a<=b;a++)
        {
			printf("%d*%d=%d ",a,b,a*b);
        }
        printf("\n");
    }
        
	system("pause");
	return 0;
}
