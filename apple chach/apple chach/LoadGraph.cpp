#include"DxLib.h"
#include"apple.h"
#include"hensuu.h"

//�摜�ǂݍ���
int LoadImages() {
	//�^�C�g��
	if ((hen.g_TitleImage = LoadGraph("images/Title.bmp")) == -1)return-1;
	//���j���[
	if ((hen.g_Menu = LoadGraph("images/menu.bmp")) == -1)return-1;
	if ((hen.g_Cone = LoadGraph("images/cone.bmp")) == -1)return-1;
	//�����L���O�摜�f�[�^�̓ǂݍ���
	if ((hen.g_RankingImage = LoadGraph("images/Ranking.bmp")) == -1)return-1;

	//�G���f�B���O
	if ((hen.g_EndImage = LoadGraph("images/End.bmp")) == -1)return-1;

	//�����S
	if ((apple.A = LoadGraph("images/apple/fruit_ringo.png")) == -1)return -1;
	if ((apple.B = LoadGraph("images/apple/fruit_apple_yellow.png")) == -1)return -1;
	if ((apple.C = LoadGraph("images/apple/fruit_ao_ringo.png")) == -1)return -1;
	if ((apple.D = LoadGraph("images/apple/apple_doku_ringo.png")) == -1)return -1;

	//�v���C���[

	return 0;
}