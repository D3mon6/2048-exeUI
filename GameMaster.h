#pragma once
#include "Define.h"
#include "GameUI.h"

class GameMaster
{
	friend class GameUI;
private:
	string player_name;
	int game_board[4][4] = { 0 };//��Ϊ2048�������ݵĴ洢��ʽ
	int score = 0;
	//mutable vector<int> mod{ 0 };//��ΪĿǰ��ʹ��ģʽ�ı�־����
public:
	GameMaster() = default;//Ĭ�ϵĹ��캯��
	GameMaster(string input_name);//�����û���֮��ĳ�ʼ��
	~GameMaster() { }
	void InitGameBoard();//��ʼ��������Լ���Ϸ��
	bool RandPlace(int &row, int &col) const;//�������2048��Ϸ���ϵ�ĳһ����Чλ��
	int GetOperate() const;
	int DoOperate(int method);//����ֵ���ڸ���UI��һ���Ķ���
	bool MoveNum(int direction);//���ڷ�������ƶ��Ƿ��ǺϷ���
};