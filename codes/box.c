#include <stdio.h>
#include <stdlib.h>
int main()
{
	char maze1[20][20]={"################",
					   "########@#######",
                       "######## #######",
                       "######## #######",
                       "######## #######",
                       "######## #######",
                       "######## #######",
                       "########$#######",
                       "#@     $ $    @#",
                       "########$#######",
                       "######## #######",
                       "######## #######",
                       "######## #######",
                       "######## #######",
                       "########@#######",
                       "################",
						};
	char maze[20][20]={"################",
					   "########@#######",
                       "######## #######",
                       "######## #######",
                       "######## #######",
                       "######## #######",
                       "######## #######",
                       "######  $#######",
                       "#@   # $ $    @#",
                       "###  # #$#######",
                       "###      #######",
                       "###    # #######",
                       "######## #######",
                       "######## #######",
                       "########@#######",
                       "################",
						};
	int x,y,i,j,goal;
    char key;
    x=8;y=8;
    goal=4;
    maze[x][y]='o';
    for(i=0;i<=15;i++)
		puts(maze[i]);
	while(goal>0)
        {
			key=getch();
			if(key=='w')
            {
				if(maze[x-1][y]==' ')
                {
					maze[x][y]=' ';
                    x--;
                    maze[x][y]='o';
                                        
				}
                else
                {
					if(maze[x-1][y]=='$')
                    {
						if(maze[x-2][y]==' ')
                        {
							maze[x][y]=' ';
                            x--;
                            maze[x][y]='o';
                            maze[x-1][y]='$';
                        }
                        else
                        {
							if(maze[x-2][y]=='@')
                            {
								maze[x][y]=' ';
                                x--;
                                maze[x][y]='o';
                                maze[x-1][y]='G';
                                goal--;
                            }
                        }
                    }
                }
            }
            if(key=='s')
            {
				if(maze[x+1][y]==' ')
                {
					maze[x][y]=' ';
                    x++;
                    maze[x][y]='o';
                                        
				}
                else
                {
					if(maze[x+1][y]=='$')
                    {
						if(maze[x+2][y]==' ')
                        {
							maze[x][y]=' ';
                            x++;
                            maze[x][y]='o';
                            maze[x+1][y]='$';
                        }
                        else
                        {
							if(maze[x+2][y]=='@')
                            {
								maze[x][y]=' ';
                                x++;
                                maze[x][y]='o';
                                maze[x+1][y]='G';
                                goal--;
                            }
                        }
                    }
                }
            }
            if(key=='a')
            {
				if(maze[x][y-1]==' ')
                {
					maze[x][y]=' ';
                    y--;
                    maze[x][y]='o';
                                        
				}
                else
                {
					if(maze[x][y-1]=='$')
                    {
						if(maze[x][y-2]==' ')
                        {
							maze[x][y]=' ';
                            y--;
                            maze[x][y]='o';
                            maze[x][y-1]='$';
                        }
                        else
                        {
							if(maze[x][y-2]=='@')
                            {
								maze[x][y]=' ';
                                y--;
                                maze[x][y]='o';
                                maze[x][y-1]='G';
                                goal--;
                            }
                        }
                    }
                }
            }
            if(key=='d')
            {
				if(maze[x][y+1]==' ')
                {
					maze[x][y]=' ';
                    y++;
                    maze[x][y]='o';
                                        
				}
                else
                {
					if(maze[x][y+1]=='$')
                    {
						if(maze[x][y+2]==' ')
                        {
							maze[x][y]=' ';
                            y++;
                            maze[x][y]='o';
                            maze[x][y+1]='$';
                        }
                        else
                        {
							if(maze[x][y+2]=='@')
                            {
								maze[x][y]=' ';
                                y++;
                                maze[x][y]='o';
                                maze[x][y+1]='G';
                                goal--;
                            }
                        }
                    }
                }
            }
			system("cls");
            for(i=0;i<=15;i++)
				puts(maze[i]);
            
		}
        puts("####You win!####");
        while(1);
	system("pause");
	return 0;
}
