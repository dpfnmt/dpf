#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

char show_mine[ROW][COL] = {0};
char real_mine[ROW][COL] = {0};

void init_mine()
{
	int i = 0;
	int j = 0;
	for (i=0; i<ROW; i++)
	{
		for (j=0; j<COL; j++)
		{
			show_mine[i][j] = '*';
			real_mine[i][j] = '0';
		}
	}
}


void print_player()
{
	int i = 0;
	int j = 0;
	printf(" 0 ");
	for (i=1; i<ROW-1; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i=1; i<ROW-2; i++)
	{
		printf(" %d ", i);
        for (j=1; j<COL-1; j++)
		{
			printf("%c ", show_mine[i][j]);
		}
		printf("\n");
	}
	printf("10 ");
    for (i=1; i<ROW-1; i++)
	{
		printf("%c ", show_mine[10][i]);
	}
	printf("\n");
}


void print_mine()
{
	int i = 0;
	int j = 0;
	printf(" 0 ");
	for (i=1; i<ROW-1; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i=1; i<ROW-2; i++)
	{
		printf(" %d ", i);
        for (j=1; j<COL-1; j++)
		{
			printf("%c ", real_mine[i][j]);
		}
		printf("\n");
	}
	printf("10 ");
    for (i=1; i<ROW-1; i++)
	{
		printf("%c ", real_mine[10][i]);
	}
	printf("\n");
}



void set_mine()
{
	int x = 0;
	int y = 0;
	int count = COUNT;
	srand((unsigned) time (NULL));
	while (count)
	{
		int x = rand() % 10 + 1;
		int y = rand() % 10 + 1;
		if(real_mine[x][y] == '0')
		{
			real_mine[x][y] = '*';
			count--;
		}
	}
}


int count_mine(int x, int y)
{
	int count = 0;
	if (real_mine[x-1][y-1] == '*')
	{
		count++;
	}
    if (real_mine[x-1][y] == '*')
	{
		count++;
	}
	if (real_mine[x-1][y+1] == '*')
	{
		count++;
	}
	if (real_mine[x][y-1] == '*')
	{
		count++;
	}
	if (real_mine[x][y+1] == '*')
	{
		count++;
	}
	if (real_mine[x+1][y-1] == '*')
	{
		count++;
	}
	if (real_mine[x+1][y] == '*')
	{
		count++;
	}
	if (real_mine[x+1][y+1] == '*')
	{
		count++;
	}
	return count;
}


void safe_mine()//�����һ��ը��
{
	int x = 0;
	int y = 0;
	int count = 0;
	
	int ch = 0;
    printf("\n");
	printf("��������ɨ��:> ");

	while(1)
	{
		scanf("%d%d", &x, &y);
		printf("\n");
		if ((x >= 1 && x <= 10) && (y >=1 && y <= 10))
		{
			if (real_mine[x][y] == '*')//��һ�βȵ��ײ���
			{
				real_mine[x][y] = '0';
				ch = count_mine(x, y);
				show_mine[x][y] = ch + '0';//�ŵ����ַ�����
				open_mine(x, y);
				srand((unsigned) time (NULL));//���������
				while (1)
				{
					int x = rand() % 10 + 1;
                    int y = rand() % 10 + 1;
					if (real_mine[x][y] == '0')
					{
						real_mine[x][y] = '*';
						break;
					}
				}
				break;
			}
			if (real_mine[x][y] == '0')
			{
				ch = count_mine(x, y);
				show_mine[x][y] = ch + '0';
				open_mine(x, y);
				break;
			}
		}
		else
		{
			printf("�����������������\n\n");
		}
	}
}


void open_mine(int x, int y)//������Χչ������
{
	if(real_mine[x-1][y-1] == '0')
	{
		show_mine[x-1][y-1] = count_mine(x-1, y-1) + '0';
	}
	if(real_mine[x-1][y] == '0')
	{
		show_mine[x-1][y] = count_mine(x-1, y) + '0';
	}
	if(real_mine[x-1][y+1] == '0')
	{
		show_mine[x-1][y+1] = count_mine(x-1, y+1) + '0';
	}
	if(real_mine[x][y-1] == '0')
	{
		show_mine[x][y-1] = count_mine(x, y-1) + '0';
	}
	if(real_mine[x][y+1] == '0')
	{
		show_mine[x][y+1] = count_mine(x, y+1) + '0';
	}
	if(real_mine[x+1][y-1] == '0')
	{
		show_mine[x+1][y-1] = count_mine(x+1, y-1) + '0';
	}
	if(real_mine[x+1][y] == '0')
	{
		show_mine[x+1][y] = count_mine(x+1, y) + '0';
	}
	if(real_mine[x+1][y+1] == '0')
	{
		show_mine[x+1][y+1] = count_mine(x-1, y+1) + '0';
	}
}

 
int sweep_mine()//ɨ�׺���
{
	   int x = 0;
	   int y = 0;
	   int count = 0;
	   int ch = 0;
	   printf("\n");
	 while(1)
     {
	   printf("��������ɨ��:> ");
	   scanf("%d%d", &x, &y);
	   printf("\n\n");
	   if ((x >= 1 && x <= 10) && (y >=1 && y <= 10))
	   {
			if (real_mine[x][y] == '0')
			{
				ch = count_mine(x, y);
				show_mine[x][y] = ch + '0';
				open_mine(x, y);
               /* if (count_show_mine() == COUNT)
				{
					print_mine();
					printf("���Ӯ��\n\n");
					return 0;
				}*/
				return 0;
			}
			else if (real_mine[x][y] == '*')
			{
				return 1;
			}
	     }
		else
		{
			printf("\n");
			printf("�����������������\n\n");
		}
	 }
}


int count_show_mine()
{
	
	int i = 0;
	int j = 0;
	int count = 0;
	for(i=1; i<=ROW-2; i++)
	{
		for(j=1; j<=COL-2; j++)
		{
			if (show_mine[i][j] == '*')
			{
				count++;
			}
		}
	}
	return count;
}

//double start, finish;

void game()
{
	int ret = 0;
	init_mine();//��ʼ��������̺���������� 
	set_mine();//����������̲���
    system("CLS");
	print_mine();//��ӡ��������̣����Բ���ӡ��
    printf("\n\n");
	print_player();//��ӡ�������
	//start = clock();//
	safe_mine();//�����һ�α�ը��

	if (count_show_mine() == COUNT)//һ����Ӯ�����
	{
		print_mine();
		printf("���Ӯ��\n\n");
		return;
	}
	printf("\n");
	system("CLS");
    print_mine();//��ӡ��������� (���Բ���ӡ)
    printf("\n\n");
	print_player();//��ӡ�������

	while(1)
	{
		//system("CLS");
	    ret = sweep_mine();//ɨ�ף����׷���1��û�ȷ���0
		if (count_show_mine() == COUNT)//���������̵ġ�*��������������Ŀ��ɨ����ɣ���Ϸʤ��
		{
			print_mine();//��ӡ���������
			printf("\n");
			printf("���Ӯ��\n\n");
			//finish = clock();//ȡ����ʱ��
			//printf("��ʱ%d��\n", (int) (finish - start) / CLOCKS_PER_SEC);
			printf("\n\n");
			break;
		}
		if (ret)
		{
			printf("\n");
			printf("����ը��\n\n");
			//finish = clock();//ȡ����ʱ��
            //printf("��ʱ%d��\n", (int) (finish - start) / CLOCKS_PER_SEC);
			print_mine();//��ӡ���������鿴�׵ķֲ�
			printf("\n\n\n");
			break;
		}
	    printf("\n");
	    system("CLS");
        print_mine();//��ӡ��������� (���Բ���ӡ)
        printf("\n");
		print_player();//��ӡ�������
	}
}