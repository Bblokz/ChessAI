#include "../Public/Square.h"
#include <iostream>

Square::Square()
{
    Row = 0;
    Column = 0;
    PieceOnSquare = nullptr;
    StringCoordinate = "O";
    TopSquare = nullptr;
    TopLeftSquare = nullptr;
    TopRightSquare = nullptr;
    LeftSquare = nullptr;
    RightSquare = nullptr;
    BottomSquare = nullptr;
    BottomLeftSquare = nullptr;
    BottomRightSquare = nullptr;
}

void Square::SetSquare(
    Piece* PieceOnStartingSquare,
    int row,
    int column,
    std::string CoordinateSquare)
{
    Row  = row;
    Column = column;
    StringCoordinate = CoordinateSquare;
    PieceOnSquare = PieceOnStartingSquare;
}

void Square::GetCoordinate(
    int& RowOfSquare,
    int& ColumnOfSquare)
{
    RowOfSquare = Row;
    ColumnOfSquare = Column;
}


void Square::DisplayNeighborCoordinates()
{
    std::string TL= "NULL",T= "NULL",TR= "NULL",L= "NULL",R= "NULL",BL= "NULL",B= "NULL",BR = "NULL";
    if(TopLeftSquare)
        TL = TopLeftSquare->GetStringCoordinate();
    if(TopSquare)
        T = TopSquare->GetStringCoordinate();
    if(TopRightSquare)
        TR = TopRightSquare->GetStringCoordinate();
    if(LeftSquare)
        L = LeftSquare->GetStringCoordinate();
    if(RightSquare)
        R = RightSquare->GetStringCoordinate();
    if(BottomLeftSquare)
        BL = BottomLeftSquare->GetStringCoordinate();
    if(BottomSquare)
        B = BottomSquare->GetStringCoordinate();
    if(BottomRightSquare)
        BR = BottomRightSquare->GetStringCoordinate();
    std::cout<<TL<<"--"<<T<<"--"<<TR<<std::endl
    <<L<<"--"<<"X"<<"--"<<R<<std::endl
    <<BL<<"--"<<B<<"--"<<BR<<std::endl;
}


const char* Square::GetPrintCoordinate()
{
    if(PieceOnSquare != nullptr)
        return PieceOnSquare->GetDisplayCharacter();
    else
    {
        if(Row % 2 ==0)
            if(Column % 2 ==0)
                return u8"\u2B1C";
            else
                return u8"\u2B1B";
        else
            if(Column % 2 == 1)
                return u8"\u2B1C";
            else
                return u8"\u2B1B";
    
    }
}

void Square::SetTopLeft(Square* TopLeft)
{
   TopLeftSquare= TopLeft;
}

void Square::SetTop(Square* Top)
{
    TopSquare = Top;
}

void Square::SetTopRight(Square* TopRight)
{
    TopRightSquare = TopRight;
}

void Square::SetLeft(Square* Left)
{
    LeftSquare = Left;
}

void Square::SetRight(Square* Right)
{
    RightSquare = Right;
}

void Square::SetBottomLeft(Square* BottomLeft)
{
    BottomLeftSquare = BottomLeft;
}

void Square::SetBottom(Square* Bottom)
{
    BottomSquare = Bottom;
}

void Square::SetBottomRight(Square* BottomRight)
{
    BottomRightSquare = BottomRight;
}



