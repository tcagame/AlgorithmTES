#include "AlgorithmTES.h"
#include "DxLib.h"

// プロトタイプ宣言
void update();

//
// グローバル変数
//
int _handle = -1;

//
// パブリック関数
//

void draw(int sx, int sy, int tx, int ty, int tw, int th) {
	if (_handle < 0) {
		return;
	}
	DrawRectGraph( sx, sy, tx, ty, tw, th, _handle, TRUE, FALSE );
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
// プライベート関数
//
void load() {
	_handle = LoadGraph("resource.png");
}

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	ChangeWindowMode(TRUE);
	SetGraphMode(1280, 720, 32);
	SetMainWindowText( "AlgorithmTES 201704131131" );

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