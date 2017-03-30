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

	draw( sx, sy, 0, 0, 225, 225 );
}

