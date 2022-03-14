#pragma once
#include "PieceEnum.h"

// Forward Declaration
class Square;

class Piece
{
public:
    Piece();
    void SetPiece(PieceName Type, bool OwnedByWhite, Square* StartSquare);

    // Returns the type of this piece.
    inline PieceName GetPieceType(){return PieceType;};

    // Sets the piece in death-state.
    void KillPiece();

    // Returns the character used to print this piece on the screen.
    const char* GetDisplayCharacter(){return DisplayCharacter;};
    
    // Returns the square this piece is placed on.
    inline Square* GetSquare(){return Square;};

    /**
    * @brief Sets square on which the piece is placed.
    * @param NewSquare: Pointer to the square where the piece is moved to.
    */ 
    inline void SetSquare(Square* NewSquare){ Square = NewSquare;};

    // Returns whether white owns this piece.
    inline bool GetIsWhitePiece(){ return bIsWhite;};

    // Pin or Unpin this piece.
    inline void SetIsPinned(bool IsPin) {bIsPinned = IsPin;};
    
    // Returns if this piece is pinned to the king.
    inline bool GetIsPinned(){return bIsPinned;};

private:
    const char* DisplayCharacter;
    PieceName PieceType;
    bool bIsWhite;
    Square* Square;
    bool bIsPinned;
    
    
};
