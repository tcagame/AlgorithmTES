#include "DxLib.h"

void update( );

int WINAPI WinMain( HINSTANCE, HINSTANCE, LPSTR, int ) {
	ChangeWindowMode( TRUE );
	SetGraphMode( 1280, 700, 32 );

	if ( DxLib_Init( ) == -1 ) {
		return -1;
	}

	SetDrawScreen(DX_SCREEN_BACK);

	while ( true ) {
		if ( ProcessMessage( ) ) break;
		if ( CheckHitKey( KEY_INPUT_ESCAPE ) ) break;
		ClearDrawScreen( );
		update( );
		ScreenFlip( );
	}

	DxLib_End( );

	return 0;
}