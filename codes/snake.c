#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
int main()
{
	char maze[16][17]={"¡ö¡ö¡ö¡ö¡ö¡ö¡ö¡ö¡ö¡ö¡ö¡ö¡ö¡ö¡ö¡ö",
					   "¡ö              ¡ö",
					   "¡ö              ¡ö",
                       "¡ö              ¡ö",
                       "¡ö              ¡ö",
                       "¡ö              ¡ö",
                       "¡ö              ¡ö",
                       "¡ö              ¡ö",
                       "¡ö              ¡ö",
                       "¡ö              ¡ö",
                       "¡ö              ¡ö",
                       "¡ö              ¡ö",
                       "¡ö              ¡ö",
                       "¡ö              ¡ö",
                       "¡ö              ¡ö",
                       "¡ö¡ö¡ö¡ö¡ö¡ö¡ö¡ö¡ö¡ö¡ö¡ö¡ö¡ö¡ö¡ö",
						};
	int i,j,len,win;
    char dir,key;
    int snake_x[100];
    int snake_y[100];
	int apple_x,apple_y;
    win=1;
	len=2;
    dir='w';    
    snake_x[0]=8;
    snake_y[0]=8;
    snake_x[1]=9;
    snake_y[1]=8;
        
    apple_x=4;
    apple_y=8;
    for(i=0;i<len;i++)
    {
		maze[snake_x[i]][snake_y[i]]='¡ö';
    }
    maze[apple_x][apple_y]='*';
    for(i=0;i<=15;i++)
		puts(maze[i]);
	while(len<=99)
    {
		key=getch();
        if(key=='w'||key=='s'||key=='a'||key=='d')
			dir=key;
        Sleep(200);
        if(dir=='w')
        {
			if(maze[snake_x[0]-1][snake_y[0]]==' ')
			{	
                maze[snake_x[len-1]][snake_y[len-1]]=' ';
				for(i=len-1;i>0;i--)
                {
					snake_x[i]=snake_x[i-1];
					snake_y[i]=snake_y[i-1];
                }
                snake_x[0]=snake_x[0]-1;
				snake_y[0]=snake_y[0];
                
            }
            else
            {
				if(maze[snake_x[0]-1][snake_y[0]]=='*')
                {
                    len++;
                    for(i=len-1;i>0;i--)
					{
						snake_x[i]=snake_x[i-1];
						snake_y[i]=snake_y[i-1];
					}  
					snake_x[0]=snake_x[0]-1;
					snake_y[0]=snake_y[0]; 
                    srand((unsigned)time(NULL));
					apple_x=rand()%13+1;
					apple_y=rand()%13+1;                                   	
                }
                else                            
				{
					if(maze[snake_x[0]-1][snake_y[0]]=='¡ö'||maze[snake_x[0]-1][snake_y[0]]=='#')
					{	
						win=0;
						break;                    
					}            
				}
            }        
        }
        if(dir=='s')
        {
			if(maze[snake_x[0]+1][snake_y[0]]==' ')
			{	
                maze[snake_x[len-1]][snake_y[len-1]]=' ';
				for(i=len-1;i>0;i--)
                {
					snake_x[i]=snake_x[i-1];
					snake_y[i]=snake_y[i-1];
                }
                snake_x[0]=snake_x[0]+1;
				snake_y[0]=snake_y[0];
                
            }
            else
            {
				if(maze[snake_x[0]+1][snake_y[0]]=='*')
                {
                    len++;
                    for(i=len-1;i>0;i--)
					{
						snake_x[i]=snake_x[i-1];
						snake_y[i]=snake_y[i-1];
					}  
					snake_x[0]=snake_x[0]+1;
					snake_y[0]=snake_y[0];                                    	
                    srand((unsigned)time(NULL));
					apple_x=rand()%13+1;
					apple_y=rand()%13+1;                                   	
                }
                else                            
				{
					if(maze[snake_x[0]+1][snake_y[0]]=='o'||maze[snake_x[0]+1][snake_y[0]]=='#')
					{	
						win=0;
						break;                    
					}            
				}
            }
        
        }
        if(dir=='a')
        {
			if(maze[snake_x[0]][snake_y[0]-1]==' ')
			{	
                maze[snake_x[len-1]][snake_y[len-1]]=' ';
				for(i=len-1;i>0;i--)
                {
					snake_x[i]=snake_x[i-1];
					snake_y[i]=snake_y[i-1];
                }
                snake_x[0]=snake_x[0];
				snake_y[0]=snake_y[0]-1;
                
            }
            else
            {
				if(maze[snake_x[0]][snake_y[0]-1]=='*')
                {
                    len++;
                    for(i=len-1;i>0;i--)
					{
						snake_x[i]=snake_x[i-1];
						snake_y[i]=snake_y[i-1];
					}  
					snake_x[0]=snake_x[0];
					snake_y[0]=snake_y[0]-1;                                    	
                    srand((unsigned)time(NULL));
					apple_x=rand()%13+1;
					apple_y=rand()%13+1;                                   	
                }
                else                            
				{
					if(maze[snake_x[0]][snake_y[0]-1]=='¡ö'||maze[snake_x[0]][snake_y[0]-1]=='#')
					{	
						win=0;
						break;                    
					}            
				}
            }
        
        }
        if(dir=='d')
        {
			if(maze[snake_x[0]][snake_y[0]+1]==' ')
			{	
                maze[snake_x[len-1]][snake_y[len-1]]=' ';
				for(i=len-1;i>0;i--)
                {
					snake_x[i]=snake_x[i-1];
					snake_y[i]=snake_y[i-1];
                }
                snake_x[0]=snake_x[0];
				snake_y[0]=snake_y[0]+1;
                
            }
            else
            {
				if(maze[snake_x[0]][snake_y[0]+1]=='*')
                {
                    len++;
                    for(i=len-1;i>0;i--)
					{
						snake_x[i]=snake_x[i-1];
						snake_y[i]=snake_y[i-1];
					}  
					snake_x[0]=snake_x[0];
					snake_y[0]=snake_y[0]+1;                                    	
                    srand((unsigned)time(NULL));
					apple_x=rand()%13+1;
					apple_y=rand()%13+1;                                   	
                }
                else                            
				{
					if(maze[snake_x[0]][snake_y[0]+1]=='o'||maze[snake_x[0]][snake_y[0]+1]=='#')
					{	
						win=0;
						break;                    
					}            
				}
            }
        
        }
        for(i=0;i<len;i++)
		{
            maze[snake_x[i]][snake_y[i]]='o';
		}
		maze[apple_x][apple_y]='*';
		system("cls");
        for(i=0;i<=15;i++)
			puts(maze[i]);
    }
    if(win)
		puts("####You win!####");
    else
		puts("####You Lose!###");
    while(1);
	system("pause");
	return 0;
}
