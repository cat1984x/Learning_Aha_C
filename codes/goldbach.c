#include <stdio.h>
#include <stdlib.h>
int main()
{
	int num,a,b,i,fa,fb;
    
    
    //printf("%d",(2%2));

    for(num=4;num<=500;num+=2)
    {
		printf("%d",num);
		for(a=2;a<=num/2;a++)
        {
			//检查a是否质数			
            fa=0;
			for(i=2;i<=a-1;i++)
            {
                if(a%i==0)
                {
					fa=1;//a不是质数
                    break;
                }
            }  

            b= num-a;
 			//检查b是否质数			
            fb=0;
			for(i=2;i<=b-1;i++)
            {
				if(b%i==0)
                {
					fb=1;//b不是质数
                    break;
                }
            }  

            if((fa==0)&&(fb==0))
                printf("=%d+%d",a,b);                     
        }
        printf("\n");
    }
	system("pause");
	return 0;
}
