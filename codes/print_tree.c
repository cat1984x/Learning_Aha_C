#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i,j,row,space,star;
    space=4;
    star=1;
	for(row=1;row<=9;row++)
    {
		for(i=1;i<=space;i++)
        {
			printf(" ");
        }
        if(row<=4)
			space--;
        else
			space++;
		for(j=1;j<=star;j++)
        {
			printf("*");
        }
        if(row<=4)
			star=star+2;
        else
			star=star-2;
        printf("\n");
    }
	system("pause");
	return 0;
}
