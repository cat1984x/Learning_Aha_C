#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a,b,c;
    a=1;
    c=1;
    while(a<=5)   
    {
		b=1;
		while(b<=a)
        {
            printf("%d ",c);
            b++;
            c++;
        }
        a++;
        printf("\n");
    }
	system("pause");
	return 0;
}
