#include"DxLib.h"
#include"apple.h"

APPLE apple;

//�摜�ǂݍ���
int LoadImages() {
	//�^�C�g��
	if ((g_TitleImage = LoadGraph("images/Title.bmp")) == -1)return-1;
	//���j���[
	if ((g_Menu = LoadGraph("images/menu.bmp")) == -1)return-1;
	if ((g_Cone = LoadGraph("images/cone.bmp")) == -1)return-1;
	//�����L���O�摜�f�[�^�̓ǂݍ���
	if ((g_RankingImage = LoadGraph("images/Ranking.bmp")) == -1)return-1;

	//�G���f�B���O
	if ((g_EndImage = LoadGraph("images/End.bmp")) == -1)return-1;

	//�����S
	if ((apple.A = LoadGraph("images/apple/fruit_ringo.png")) == -1)return -1;

	//�v���C���[

	return 0;
}