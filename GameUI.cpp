#include "GameUI.h"

GameUI::GameUI()
{
	for (int i = 0; i < MAXNUM; ++i)
	{
		number[i].color = (NumColor)(int)pow(2, i + 1);
	}
	number[0].num_UI[0] = (20, ' ');
}
void GameUI::BeginUI()
{
	string blank(35, ' ');
	string short_blank(25, ' ');
	cout << "\n\n\n\n\n\n\n\n\n";
	if (time(0) % 3 == 0)
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
	else if (time(0) % 3 == 1)
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
	cout << "\n\n\n\n\n\n\n";
	cout << "->����������κ�BUG���뿪������ϵ |" << endl;
	cout << "->If you find any BUG, please connect with the programmer |" << endl;
	return;
}