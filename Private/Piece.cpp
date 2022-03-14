#include "../Public/Piece.h"

Piece::Piece()
{
    
}

void Piece::SetPiece(PieceName Type, bool OwnedByWhite, class Square* StartSquare)
{
    bIsPinned = false;
    PieceType = Type;
    bIsWhite = OwnedByWhite;
    Square = StartSquare;
    switch (Type)
    {
    case PieceName::E_King:
        if(bIsWhite)
            DisplayCharacter = u8"\u265A";
        else
            DisplayCharacter = u8"\u2654";
        break;
    case PieceName::E_Queen:
        if(bIsWhite)
            DisplayCharacter = u8"\u265B";
        else
            DisplayCharacter = u8"\u2655";
        break;    
    case PieceName::E_Rook:
        if(bIsWhite)
            DisplayCharacter = u8"\u265C";
        else
            DisplayCharacter = u8"\u2656";
        break;
    case PieceName::E_Bishop:
        if(bIsWhite)
            DisplayCharacter = u8"\u265D";
        else
            DisplayCharacter = u8"\u2657";
        break;
    case PieceName::E_Knight:
        if(bIsWhite)
            DisplayCharacter = u8"\u265E";
        else
            DisplayCharacter = u8"\u2658";
        break;
    case PieceName::E_Pawn:
        if(bIsWhite)
            DisplayCharacter = u8"\u265F";
        else
            DisplayCharacter = u8"\u2659";
        break;
   }// switch
}


void Piece::KillPiece()
{
    PieceType = E_NoPiece;
    DisplayCharacter = "O"; 
}


