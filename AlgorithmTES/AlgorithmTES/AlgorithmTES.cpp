#include "AlgorithmTES.h"
#include "DxLib.h"

void draw(int sx, int sy, int tx, int ty, int tw, int th) {
	// dxlibの描画関数を書く
	int handle = LoadGraph( "../Resouce.png");
	DrawRectGraph( sx, sy, tx, ty, tw, th, handle, TRUE, FALSE );

}

