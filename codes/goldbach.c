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
			//���a�Ƿ�����			
            fa=0;
			for(i=2;i<=a-1;i++)
            {
                if(a%i==0)
                {
					fa=1;//a��������
                    break;
                }
            }  

            b= num-a;
 			//���b�Ƿ�����			
            fb=0;
			for(i=2;i<=b-1;i++)
            {
				if(b%i==0)
                {
					fb=1;//b��������
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
