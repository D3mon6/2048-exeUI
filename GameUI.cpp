#include "GameUI.h"

GameUI::GameUI()
{
	for (int i = 0; i < MAXNUM + 1; ++i)
	{
		number[i].color = (NumColor)(int)pow(2, i);
		number[i].num_UI[0] = (30, ' ');
		number[i].num_UI[1] = (30, ' ');
		number[i].num_UI[7] = (30, ' ');
		number[i].num_UI[8] = (30, ' ');
	}

	//0
	{
		for (int i = 2; i < 7; ++i)
			number[0].num_UI[i] = (30, ' ');
	}

	//2
	{
		number[1].num_UI[2] = "            ������            ";
		number[1].num_UI[3] = "                ��            ";
		number[1].num_UI[4] = "            ������            ";
		number[1].num_UI[5] = "            ��                ";
		number[1].num_UI[6] = "            ������            ";
	}

	//4
	{
		number[2].num_UI[2] = "            ��  ��            ";
		number[2].num_UI[3] = "            ��  ��            ";
		number[2].num_UI[4] = "            ������            ";
		number[2].num_UI[5] = "                ��            ";
		number[2].num_UI[6] = "                ��            ";
	}

	//8
	{
		number[3].num_UI[2] = "            ������            ";
		number[3].num_UI[3] = "            ��  ��            ";
		number[3].num_UI[4] = "            ������            ";
		number[3].num_UI[5] = "            ��  ��            ";
		number[3].num_UI[6] = "            ������            ";
	}

	//16
	{
		number[4].num_UI[2] = "          �� ������           ";
		number[4].num_UI[3] = "          �� ��               ";
		number[4].num_UI[4] = "          �� ������           ";
		number[4].num_UI[5] = "          �� ��  ��           ";
		number[4].num_UI[6] = "          �� ������           ";
	}

}

void GameUI::VersionUI() const
{
	string blank(50, ' ');
	string short_blank(25, ' ');
	cout << "\n\n\n\n";
	cout << blank << "VERSION �汾��Ϣ" << endl << endl << endl << endl;
	cout << short_blank << "��2048С��Ϸ exeUI��" << endl << endl;
	cout << short_blank << "��version 2.0" << endl << endl;
	cout << short_blank << "�񿪷�ʱ�䣺2018.8.9 - 2018.8.12" << endl << endl;
	cout << short_blank << "�񿪷���/Programmer��GaoRP" << endl << endl;
	cout << short_blank << "����ϵ��ʽ/E-mail��HELLORPG2017@gmail.com" << endl << endl;
	return;
}

void GameUI::BeginUI()
{
	system("color 3F");

	string blank(50, ' ');
	string short_blank(40, ' ');
	cout << "\n\n\n\n\n\n\n";

	int time_get = time(0);
	if (time_get % 3 == 0)
	{
		cout << blank << "   �X�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�[   " << endl;
		cout << blank << "   �U   .d888b.  .d88b.    j88D  .d888b.   �U   " << endl;
		cout << blank << "   �U   VP  `8D .8P  88.  j8~88  88   8D   �U   " << endl;
		cout << blank << "   �U      odD' 88  d'88 j8' 88  `VoooY'   �U   " << endl;
		cout << blank << "   �U    .88'   88 d' 88 V88888D .d~~~b.   �U   " << endl;
		cout << blank << "   �U   j88.    `88  d8'     88  88   8D   �U   " << endl;
		cout << blank << "   �U   888888D  `Y88P'      VP  `Y888P'   �U   " << endl;
		cout << blank << "   �^�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�a   " << endl;
	}
	else if (time_get % 3 == 1)
	{
		cout << blank << "�X�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�[" << endl;
		cout << blank << "�U  ..#######....#####...##.........#######.  �U" << endl;
		cout << blank << "�U  .##.....##..##...##..##....##..##.....##  �U" << endl;
		cout << blank << "�U  ........##.##.....##.##....##..##.....##  �U" << endl;
		cout << blank << "�U  ..#######..##.....##.##....##...#######.  �U" << endl;
		cout << blank << "�U  .##........##.....##.#########.##.....##  �U" << endl;
		cout << blank << "�U  .##.........##...##........##..##.....##  �U" << endl;
		cout << blank << "�U  .#########...#####.........##...#######.  �U" << endl;
		cout << blank << "�^�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�a" << endl;
	}
	else
	{
		cout << short_blank << "�X�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�[" << endl;
		cout << short_blank << "�U    .--~*teu.        .n~~%x.             xeee       u+=~~~+u.     �U" << endl;
		cout << short_blank << "�U   dF     988Nx    x88X   888.          d888R     z8F      `8N.   �U" << endl;
		cout << short_blank << "�U  d888b   `8888>  X888X   8888L        d8888R    d88L       98E   �U" << endl;
		cout << short_blank << "�U  ?8888>  98888F X8888X   88888       @ 8888R    98888bu.. .@*    �U" << endl;
		cout << short_blank << "�U   \"**\"  x88888~ 88888X   88888X    .P  8888R    \"88888888NNu.    �U" << endl;
		cout << short_blank << "�U        d8888*`  88888X   88888X   :F   8888R     \" * 8888888888  �U" << endl;
		cout << short_blank << "�U      z8**\"`   : 88888X   88888f  x\"    8888R     .zf\"\"*8888888L  �U" << endl;
		cout << short_blank << "�U    :?.....  ..F 48888X   88888  d8eeeee88888eer d8F      ^%888E  �U" << endl;
		cout << short_blank << "�U   <\"\"888888888~  ?888X   8888\"         8888R    88>        `88~  �U" << endl;
		cout << short_blank << "�U   8:  \"888888*    \"88X   88*`          8888R    '%N.       d*\"   �U" << endl;
		cout << short_blank << "�U   \"\"    \"**\"`       ^\"===\"`         \"*%%%%%%**~    ^\"=====\"`     �U" << endl;
		cout << short_blank << "�^�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�a" << endl;
	}
	cout << blank << blank << "         " << endl;
	cout << blank << blank << "          version 2.0" << endl;
	cout << blank << blank << "          By RP��G 2018.8.11" << endl;
	cout << blank << blank << "      �\�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T" << endl;

	//cout << "\n\n\n\n\n\n\n";
	cout << endl << endl;
	cout << blank << "   �X�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�[   " << endl;
	cout << blank << "   �U           ���س�����ʼ��Ϸ           �U   " << endl;
	cout << blank << "   �U    Press ENTER to enter the game!    �U   " << endl;
	cout << blank << "   �^�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�a   " << endl;
	cout << endl << endl << endl << endl;

	cout << "->����������κ�BUG���뿪������ϵ |" << endl;
	cout << "->If you find any BUG, please connect with the programmer |" << endl;

	do
	{
		int get = (_getch());
		if (get == 13)
			break;
		else if (get == 'v')
		{
			system("CLS");
			this->VersionUI();
		}
	} while (1);

	system("CLS");

	return;
}

void GameUI::PrintGameBoard(class GameMaster game) const
{
	//��Ϸ�̵Ĵ�СӦ����94�ĳ��ȣ��߶���34��
	int print_board[4][4];//���Ǵ�ӡ�����ݣ����Է���Ѱ�ҵ���Ҫ��numUI
	for (int i = 0; i < FOUR; ++i)
	{
		for (int j = 0; j < FOUR; ++j)
		{
			if (game.game_board[i][j] == 0)
				print_board[i][j] = 0;
			else
				print_board[i][j] = log(game.game_board[i][j]) / log(2);
		}
	}

	cout << endl;
	cout << "�X";
	for (int i = 1; i < 4 * NUMWIDTH + 4; ++i)
		cout << "�T";
	cout << "�[" << endl;
	//ǰ�����������Ϸ�̵�ͷ

	for (int i = 1; i < 4 * NUMHEIGHT + 4; ++i)
	{
		cout << "->" << endl;
	}

	return;
}

