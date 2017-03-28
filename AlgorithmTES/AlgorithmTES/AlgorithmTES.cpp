#include "AlgorithmTES.h"
#include "DxLib.h"

void draw(int sx, int sy, int tx, int ty, int tw, int th) {
	// dxlib‚Ì•`‰æŠÖ”‚ğ‘‚­
	int handle = LoadGraph( "../Resouce.png");
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

