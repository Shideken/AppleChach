#pragma once

class Chara {
public:
	int flg;				// �g�p�t���O
	int x, y;				// ���Wx, y
	int w, h;				// �� w ���� h
	double angle;			// �@�̂̌��� 
	int count;				/// �^�C�~���O�p
	int point;
	int speed;
	int A, B, C, D;
	int charaimgs[4];

public:
	void PlayerControl();
};
extern Chara g_player;