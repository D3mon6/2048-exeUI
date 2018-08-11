#include "GameMaster.h"

GameMaster::GameMaster(string input_name)
{
	player_name = input_name;//�û����Ĵ���
}

bool GameMaster::RandPlace(int &row, int &col) const
{
	bool any_blank = false;
	for (int i = 0; i < FOUR; ++i)
	{
		for (int j = 0; j < FOUR; ++j)
		{
			if (game_board[i][j] == 0)
			{
				any_blank = true;
			}
		}
	}
	if (!any_blank)
		return false;//���ʱ���Ѿ�û�����κο�λ

	do
	{
		row = rand() % 4;
		col = rand() % 4;
	} while (game_board[row][col] != 0);
	return true;
}

void GameMaster::InitGameBoard()
{
	for (int i = 0; i < FOUR; ++i)
	{
		for (int j = 0; j < FOUR; ++j)
		{
			game_board[i][j] = 0;
		}
	}
	//��Ҫ�����ҵ�λ�ù��㣬��Ϊһ�����ղ���
#if RANDTEST == 1
	cout << "---------->���������Ϊ��" << srand(time(0)) << endl;
#else
	srand(time(0));
#endif
	game_board[rand()][rand()] = TWO;
	int i = 0, j = 0;
	this->RandPlace(i, j);
	game_board[i][j] = TWO;
	return;
}

int GameMaster::GetOperate() const
{
	int ret = FALSEOPERATE;//0����Ч�Ĳ�׽ֵ
	switch (_getch())
	{
	case 224://���ʱ���ǹ��ܼ�
	{
		switch (_getch())
		{
		case UP:ret = UP; break;
		case DOWN:ret = DOWN; break;
		case LEFT:ret = LEFT; break;
		case RIGHT:ret = RIGHT; break;
		default:ret = FALSEOPERATE; break;
		}
		break;
	}
	case 'w':ret = UP; break;
	case 's':ret = DOWN; break;
	case 'a':ret = LEFT; break;
	case 'd':ret = RIGHT; break;
	case 'i':ret = INPUT; break;
	case ESC:ret = QUIT; break;
	case 'v':ret = VERSION; break;
	default:break;
	}
	return ret;
}

bool GameMaster::MoveNum(int direction, int mode)
{
	bool flag = false;//��Ϊ�Ƿ��гɹ��ƶ��ı�־
	int add_score = 0;//�����ƶ�֮�����ӵķ���
	int game_board_copy[4][4];//ͨ����ͬ��copy��ʽ�ﵽ��ͬ���ƶ�����

	switch (direction)
	{
	case UP:
	{
		for (int i = 0; i < FOUR; ++i)
			for (int j = 0; j < FOUR; ++j)
				game_board_copy[i][j] = game_board[i][j];
	}break;
	case DOWN:
	{
		for (int i = 0; i < FOUR; ++i)
			for (int j = 0; j < FOUR; ++j)
				game_board_copy[i][j] = game_board[FOUR - 1 - i][FOUR - 1 - j];
	}break;
	case LEFT:
	{
		for (int i = 0; i < FOUR; ++i)
			for (int j = 0; j < FOUR; ++j)
				game_board_copy[i][j] = game_board[FOUR - 1 - j][i];
	}break;
	case RIGHT:
	{
		for (int i = 0; i < FOUR; ++i)
			for (int j = 0; j < FOUR; ++j)
				game_board_copy[i][j] = game_board[j][FOUR - 1 - i];
	}break;
	default:cout << "---------->��;���������ݴ���Ĵ�����������⵽����Ⱦ������ϵ���򿪷��߽��з����ͽ��" << endl; exit(-1); break;
	}

	//����2048�ƶ��Ĺؼ�����
	for (int i = 0; i < FOUR; ++i)
	{
		for (int j = 0; j < FOUR; ++j)
		{
			//��Ҫ�ֳ���������������ۣ�һ���Ǹ�λ���ǿհ׵ģ�һ���Ǹ�λ��������
			if (game_board_copy[i][j] == 0)
			{
				for (int find = i + 1; find < FOUR; ++find)
				{
					if (game_board_copy[find][j] != 0)//��������0�����ݾ�ƽ�Ƶ���ǰ��λ��
					{
						game_board_copy[i][j] = game_board_copy[find][j];
						flag = true;
						break;
					}
				}
			}
			else
			{
				for (int find = i + 1; find < FOUR; ++find)
				{
					if (game_board_copy[find][j] != 0 && game_board_copy[find][j] != game_board_copy[i][j])
						break;
					if (game_board_copy[find][j] == game_board_copy[i][j])
					{
						game_board_copy[i][j] += game_board_copy[i][j];
						game_board_copy[find][j] = 0;
						flag = true;
						++add_score;
						break;
					}
				}
			}
		}
	}
	//������2048�ƶ��Ĺؼ�����

	//��Ҫ��ԭ�����е����ݻ���ԭ������Ϸ��
	if (mode == 1)
	{
		switch (direction)
		{
		case UP:
		{
			for (int i = 0; i < FOUR; ++i)
				for (int j = 0; j < FOUR; ++j)
					game_board[i][j] = game_board_copy[i][j];
		}break;
		case DOWN:
		{
			for (int i = 0; i < FOUR; ++i)
				for (int j = 0; j < FOUR; ++j)
					game_board[FOUR - 1 - i][FOUR - 1 - j] = game_board_copy[i][j];
		}break;
		case LEFT:
		{
			for (int i = 0; i < FOUR; ++i)
				for (int j = 0; j < FOUR; ++j)
					game_board[FOUR - 1 - j][i] = game_board_copy[i][j];
		}break;
		case RIGHT:
		{
			for (int i = 0; i < FOUR; ++i)
				for (int j = 0; j < FOUR; ++j)
					game_board[j][FOUR - 1 - i] = game_board_copy[i][j];
		}break;
		default:cout << "---------->��;���������ݴ���Ĵ�����������⵽����Ⱦ������ϵ���򿪷��߽��з����ͽ��" << endl; exit(-1); break;
		}
	}

	score += add_score;//����������

	return flag;
}

int GameMaster::DoOperate(int method)
{
	int ret = FALSEOPERATE;
	switch (method)
	{
	case FALSEOPERATE:ret = FALSEOPERATE; break;
	case INPUT:ret = INPUT; break;
	case VERSION:ret = VERSION; break;
	case QUIT:ret = QUIT; break;
	}
	return ret;
}

bool GameMaster::AddNum()
{
	int i = 0, j = 0;
	bool result = this->RandPlace(i, j);
	if (!result)
		return false;//��ʱ�޷��������
	else
	{
		if (rand() % 2 == 0)
			game_board[i][j] = 2;
		else
			game_board[i][j] = 4;
		return true;
	}
}