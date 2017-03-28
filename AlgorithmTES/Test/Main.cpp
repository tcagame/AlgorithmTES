#include "AlgorithmTES.h"

int sx = 0;
int sy = 0;

void update( ) {
	if ( isArrowUp( ) ) {
		sy--;
	}
	if ( isArrowDown( ) ) {
		sy++;
	}
	if ( isArrowRight( ) ) {
		sx++;
	}
	if ( isArrowLeft( ) ) {
		sx--;
	}
	//draw( 100, 100 );
	draw( sx, sy, 0, 0, 225, 225 );
	//draw( 10, 10, 20, 20, 30, 30, 40, 40 );
	
}

