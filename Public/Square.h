#pragma once
#include "PieceEnum.h"
#include <string>
#include <vector>

#include "Piece.h"
class Piece;

/**
 * @brief Contains information about the row, column at which this square is positioned
 * and has a pointer to a piece on it.
 */ 
class Square
{
public:
    Square();
    void SetSquare(Piece* PieceOnStartingSquare, int row, int column,
        std::string CoordinateSquare);

    // Reference the row and column of the square
    void GetCoordinate( int& RowOfSquare, int& ColumnOfSquare);
   
    // Returns the coordinate in string-format.
    inline std::string GetStringCoordinate() {return StringCoordinate;};

    // Displays all the neighbors their string coordinates from TL to BR.
    void DisplayNeighborCoordinates();

    inline int GetRow(){return Row;};
    inline int GetColumn(){return Column;};

    // Returns the piece placed on the square.
    inline Piece* GetPiece(){return PieceOnSquare;};

    // Sets the piece placed on the square.
    inline void SetPiece(Piece* NewPiecePtr){PieceOnSquare = NewPiecePtr;};

    // Returns the coordinate for printing.
    const char* GetPrintCoordinate();

    //Set the neighbors:
    void SetTopLeft(Square* TopLeft);
    void SetTop(Square* Top);
    void SetTopRight(Square* TopRight);
    void SetLeft(Square* Left);
    void SetRight(Square* Right);
    void SetBottomLeft(Square* BottomLeft);
    void SetBottom(Square* Bottom);
    void SetBottomRight(Square* BottomRight);

    // Get the neighbors
    inline Square* GetTopLeft(){return TopLeftSquare;};
    inline Square* GetTop(){return TopSquare;};
    inline Square* GetTopRight(){return TopRightSquare;};
    inline Square* GetLeft(){return LeftSquare;};
    inline Square* GetRight(){return RightSquare;};
    inline Square* GetBottomLeft(){return BottomLeftSquare;};
    inline Square* GetBottom(){return BottomSquare;};
    inline Square* GetBottomRight(){return BottomRightSquare;};

private:
    
    int Row;
    int Column;
    Piece* PieceOnSquare;
    std::string StringCoordinate;
    Square* TopLeftSquare;
    Square* TopSquare;
    Square* TopRightSquare;
    Square* LeftSquare;
    Square* RightSquare;
    Square* BottomLeftSquare;
    Square* BottomSquare;
    Square* BottomRightSquare;
  

    
};
