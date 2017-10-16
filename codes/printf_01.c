#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
	int hour,min;
    hour = 2;
    min =0;
    system("color 0a");

		while(hour>=0&&min>=0)
        {
			system("cls");
        	printf("%d:%d",hour,min);
            Sleep(100);
			if(min==0)
            {
				hour--;
                min=59;
            }
            else
				min--;
        }
    

	system("pause");
	return 0;
}
