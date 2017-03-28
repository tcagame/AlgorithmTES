#pragma once

void draw( int sx, int sy );
void draw( int sx, int sy, int tx, int ty, int tw, int th );
void draw( int sx, int sy, int sx2, int sy2, int tx, int ty, int tw, int th );

bool isArrowUp( );
bool isArrowDown( );
bool isArrowRight( );
bool isArrowLeft( );