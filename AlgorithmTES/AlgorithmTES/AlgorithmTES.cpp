#include "AlgorithmTES.h"
#include "DxLib.h"

// �v���g�^�C�v�錾
void update();

//
// �O���[�o���ϐ�
//
int handle;

//
// �p�u���b�N�֐�
//

void draw(int sx, int sy, int tx, int ty, int tw, int th) {
	// dxlib�̕`��֐�������
	DrawRectGraph( sx, sy, tx, ty, tw, th, handle, TRUE, FALSE );
}

bool isArrowUp( ) {
	return CheckHitKey( KEY_INPUT_UP ) == 1;
}

bool isArrowDown( ) {
	return CheckHitKey( KEY_INPUT_DOWN ) == 1;
}

bool isArrowRight( ) {
	return CheckHitKey( KEY_INPUT_RIGHT ) == 1;
}

bool isArrowLeft( ) {
	return CheckHitKey( KEY_INPUT_LEFT ) == 1;
}

//
// �v���C�x�[�g�֐�
//
void load() {
	handle = LoadGraph("resource.png");
}

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	ChangeWindowMode(TRUE);
	SetGraphMode(1280, 700, 32);

	if (DxLib_Init() == -1) {
		return -1;
	}

	SetDrawScreen(DX_SCREEN_BACK);

	load();

	while (true) {
		if (ProcessMessage()) break;
		if (CheckHitKey(KEY_INPUT_ESCAPE)) break;
		ClearDrawScreen();
		update();
		ScreenFlip();
	}

	DxLib_End();

	return 0;
}