#ifndef _PIECES_
#define _PIECES_

class Pieces
{
    public:

    int GetBlockType (int pPiece, int pRotation, int pX, int pY);
    int GetXInitialPosition (int pPiece, int pRotation);
    int GetYInitialPosition (int pPiece, int pRotation);

    /*
    pPiece: Piece to draw
    pRotation: 1 of 4 possiblr rotations
    pX: Horizontal position in blocks
    pY: Vertical position in blocks
    */
};

#endif