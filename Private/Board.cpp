#include "../Public/Board.h"

//#include <complex.h>
#include <iostream>
#include <ostream>
#include <vector>
// used to clear console
#include <windows.h>
#include <xutility>
/**
 * 0 (R, A8) -- 1 (N, B8) -- 2 (B, C8) -- 3 (Q, D8) --  4 (K, E8) -- 5 (B , F8) -- 6 (N , G8) -- 7 (R , H8) 
*/

Board::Board()
{
    int lv_Row, lv_Column;
    BlackPieces[0].SetPiece(PieceName::E_Rook, false, nullptr);
    TSquares[0].SetSquare( &BlackPieces[0], 8, 1, "A8");
    BlackPieces[0].SetSquare(&TSquares[0]);
    
    BlackPieces[1].SetPiece(PieceName::E_Knight, false, nullptr);
    TSquares[1].SetSquare(&BlackPieces[1], 8, 2 , "B8");
    BlackPieces[1].SetSquare(&TSquares[1]);

    BlackPieces[2].SetPiece(PieceName::E_Bishop, false, nullptr);
    TSquares[2].SetSquare(&BlackPieces[2], 8, 3 , "C8");
    BlackPieces[2].SetSquare(&TSquares[2]);

    BlackPieces[3].SetPiece(PieceName::E_Queen, false, nullptr);
    TSquares[3].SetSquare(&BlackPieces[3], 8, 4 , "D8");
    BlackPieces[3].SetSquare(&TSquares[3]);

    BlackPieces[4].SetPiece(PieceName::E_King, false, nullptr);
    TSquares[4].SetSquare(&BlackPieces[4], 8, 5 , "E8");
    BlackPieces[4].SetSquare(&TSquares[4]);
    gv_SquareBlackKing = &TSquares[4];

    BlackPieces[5].SetPiece(PieceName::E_Bishop, false, nullptr);
    TSquares[5].SetSquare( &BlackPieces[5], 8, 6, "F8");
    BlackPieces[5].SetSquare(&TSquares[5]);
    
    BlackPieces[6].SetPiece(PieceName::E_Knight, false, nullptr);
    TSquares[6].SetSquare(&BlackPieces[6], 8, 7 , "G8");
    BlackPieces[6].SetSquare(&TSquares[6]);

    BlackPieces[7].SetPiece(PieceName::E_Rook, false, nullptr);
    TSquares[7].SetSquare(&BlackPieces[7], 8, 8 , "H8");
    BlackPieces[7].SetSquare(&TSquares[7]);

    lv_Row = 7;
    for(int i = 8; i< 16; ++i)
    {
        std::string lv_sCoordinate;
        lv_Column  =i-7;
        switch (i)
        {
            case 8:
                lv_sCoordinate = "A7";
            break;
            case 9:
                lv_sCoordinate = "B7";
            break;
            case 10:
                lv_sCoordinate = "C7";
            break;
            case 11:                
                lv_sCoordinate = "D7";
            break;
            case 12:
                lv_sCoordinate = "E7";
            break;
            case 13:
                lv_sCoordinate = "F7";
            break;
            case 14:
                lv_sCoordinate = "G7";
            break;
            case 15:
                lv_sCoordinate = "H7";
            break;
        }
        BlackPieces[i].SetPiece(PieceName::E_Pawn, false, nullptr);
        TSquares[i].SetSquare(&BlackPieces[i], 7, lv_Column , lv_sCoordinate);
        BlackPieces[i].SetSquare(&TSquares[i]);
    }// for 7th rank
    lv_Row = 6;
    for( int i = 16; i< 24; ++i)
        {
            int lv_ColumnCounter = i - 8;
            lv_Column = i-15;
            std::string lv_sCoordinate;
            switch (lv_ColumnCounter)
            {
                case 8:
                    lv_sCoordinate = "A6";
                    break;
                case 9:
                    lv_sCoordinate = "B6";
                break;
                case 10:
                    lv_sCoordinate = "C6";
                break;
                case 11:                
                    lv_sCoordinate = "D6";
                break;
                case 12:
                    lv_sCoordinate = "E6";
                break;
                case 13:
                    lv_sCoordinate = "F6";
                break;
                case 14:
                    lv_sCoordinate = "G6";
                break;
                case 15:
                    lv_sCoordinate = "H6";
                break;
            }
            TSquares[i].SetSquare(nullptr, lv_Row, lv_Column, lv_sCoordinate);
        }// for 6th rank
    lv_Row = 5;
    for(int i = 24; i< 32; ++i)
    {
        int lv_ColumnCounter = i - 16;
        lv_Column = i-23;
        std::string lv_sCoordinate;
        switch (lv_ColumnCounter)
        {
        case 8:
            lv_sCoordinate = "A5";
            break;
        case 9:
            lv_sCoordinate = "B5";
            break;
        case 10:
            lv_sCoordinate = "C5";
            break;
        case 11:                
            lv_sCoordinate = "D5";
            break;
        case 12:
            lv_sCoordinate = "E5";
            break;
        case 13:
            lv_sCoordinate = "F5";
            break;
        case 14:
            lv_sCoordinate = "G5";
            break;
        case 15:
            lv_sCoordinate = "H5";
            break;
        }
        TSquares[i].SetSquare(nullptr, lv_Row, lv_Column, lv_sCoordinate);
    }// for 5th rank
    lv_Row = 4;
    for(int i = 32; i<40 ; ++i)
    {
        int lv_ColumnCounter = i - 24;
        lv_Column = i-31;
        std::string lv_sCoordinate;
        switch (lv_ColumnCounter)
        {
        case 8:
            lv_sCoordinate = "A4";
            break;
        case 9:
            lv_sCoordinate = "B4";
            break;
        case 10:
            lv_sCoordinate = "C4";
            break;
        case 11:                
            lv_sCoordinate = "D4";
            break;
        case 12:
            lv_sCoordinate = "E4";
            break;
        case 13:
            lv_sCoordinate = "F4";
            break;
        case 14:
            lv_sCoordinate = "G4";
            break;
        case 15:
            lv_sCoordinate = "H4";
            break;
        }
        TSquares[i].SetSquare(nullptr, lv_Row, lv_Column, lv_sCoordinate);
    }// for 4th rank

    lv_Row = 3;
    for(int i = 40; i< 48; ++i)
    {
        int lv_ColumnCounter = i - 32;
        lv_Column = i-39;
        std::string lv_sCoordinate;
        switch (lv_ColumnCounter)
        {
        case 8:
            lv_sCoordinate = "A3";
            break;
        case 9:
            lv_sCoordinate = "B3";
            break;
        case 10:
            lv_sCoordinate = "C3";
            break;
        case 11:                
            lv_sCoordinate = "D3";
            break;
        case 12:
            lv_sCoordinate = "E3";
            break;
        case 13:
            lv_sCoordinate = "F3";
            break;
        case 14:
            lv_sCoordinate = "G3";
            break;
        case 15:
            lv_sCoordinate = "H3";
            break;
        }
        TSquares[i].SetSquare(nullptr, lv_Row, lv_Column, lv_sCoordinate);
    }// for 3rd rank
    lv_Row = 2;
    int lv_IndexwhitePieces = -1;
    for(int i = 48; i< 56; ++i)
    {
        lv_IndexwhitePieces +=1;
        lv_Column = i-47;
        std::string lv_sCoordinate;
        int lv_ColumnCounter = i - 40;
        
        switch (lv_ColumnCounter)
        {
        case 8:
            lv_sCoordinate = "A2";
            break;
        case 9:
            lv_sCoordinate = "B2";
            break;
        case 10:
            lv_sCoordinate = "C2";
            break;
        case 11:                
            lv_sCoordinate = "D2";
            break;
        case 12:
            lv_sCoordinate = "E2";
            break;
        case 13:
            lv_sCoordinate = "F2";
            break;
        case 14:
            lv_sCoordinate = "G2";
            break;
        case 15:
            lv_sCoordinate = "H2";
            break;
        }
        WhitePieces[lv_IndexwhitePieces].SetPiece(PieceName::E_Pawn, true, nullptr);
        TSquares[i].SetSquare(&WhitePieces[lv_IndexwhitePieces], 2, lv_Column , lv_sCoordinate);
        WhitePieces[lv_IndexwhitePieces].SetSquare(&TSquares[i]);
    }// for 2nd rank

    WhitePieces[8].SetPiece(PieceName::E_Rook, true, nullptr);
    TSquares[56].SetSquare( &WhitePieces[8], 1, 1, "A1");
    WhitePieces[8].SetSquare(&TSquares[56]);
    
    WhitePieces[9].SetPiece(PieceName::E_Knight, true, nullptr);
    TSquares[57].SetSquare(&WhitePieces[9], 1, 2 , "B1");
    WhitePieces[9].SetSquare(&TSquares[57]);

    WhitePieces[10].SetPiece(PieceName::E_Bishop, true, nullptr);
    TSquares[58].SetSquare(&WhitePieces[10], 1, 3 , "C1");
    WhitePieces[10].SetSquare(&TSquares[58]);

    WhitePieces[11].SetPiece(PieceName::E_Queen, true, nullptr);
    TSquares[59].SetSquare(&WhitePieces[11], 1, 4 , "D1");
    WhitePieces[11].SetSquare(&TSquares[59]);

    WhitePieces[12].SetPiece(PieceName::E_King, true, nullptr);
    TSquares[60].SetSquare(&WhitePieces[12], 1, 5 , "E1");
    WhitePieces[12].SetSquare(&TSquares[60]);
    gv_SquareWhiteKing = &TSquares[60];

    WhitePieces[13].SetPiece(PieceName::E_Bishop, true, nullptr);
    TSquares[61].SetSquare( &WhitePieces[13], 1, 6, "F1");
    WhitePieces[13].SetSquare(&TSquares[61]);
    
    WhitePieces[14].SetPiece(PieceName::E_Knight, true, nullptr);
    TSquares[62].SetSquare(&WhitePieces[14], 1, 7 , "G1");
    WhitePieces[14].SetSquare(&TSquares[62]);

    WhitePieces[15].SetPiece(PieceName::E_Rook, true, nullptr);
    TSquares[63].SetSquare(&WhitePieces[15], 1, 8 , "H1");
    WhitePieces[15].SetSquare(&TSquares[63]);

    ConstructSquarePointers();

    TEnumToString[0] = "No Piece!";
    TEnumToString[1] = "Pawn";
    TEnumToString[2] = "Knight";
    TEnumToString[3] = "Bishop";
    TEnumToString[4] = "Rook";
    TEnumToString[5] = "Queen";
    TEnumToString[6] = "King";
}

Square* Board::GetSquareByIndex(int Index)
{
    return &TSquares[Index];
}

bool Board::GetSquareByRowColumn(int row, int column, Square*& Square)
{
    if(row < 1 || row>8)
        return false;
    if(column<1 || column>8)
        return false;
    // 0 to 63 suares
    for(int i = 0; i<64; ++i)
    {
        if(TSquares[i].GetRow() == row && TSquares[i].GetColumn() == column)
        {
            Square = &TSquares[i];
            return true;
        }
    }
    return false;
}

void Board::Print()
{
    std::cout<<"___________________________"<<std::endl;
    //Rows
    int row = -8;
    for(int j =1; j<9; ++j)
    {
        row += 8;
        std::cout<<"|";
        for(int i = row; i<(row  +8); ++i )
        {
           std::cout<<" "<<TSquares[i].GetPrintCoordinate()<<" ";
        }
        std::cout<<" |"<<std::endl;
    }
    std::cout<<"___________________________"<<std::endl;
    
}

void Board::printneigh()
{
    for(auto i : TSquares)
    {
        i.DisplayNeighborCoordinates();
        std::cout<<std::endl;
    }
    
}

void Board::ConstructSquarePointers()
{
    for( Square& lv_EachSquare : TSquares)
    {
        int lv_Row = lv_EachSquare.GetRow();
        int lv_Column = lv_EachSquare.GetColumn();
        Square* lv_Neighbor;
        //TL
        if(GetSquareByRowColumn(lv_Row + 1, lv_Column-1, lv_Neighbor))
            lv_EachSquare.SetTopLeft(lv_Neighbor);
        //T
        if(GetSquareByRowColumn(lv_Row+1 , lv_Column, lv_Neighbor ))
            lv_EachSquare.SetTop(lv_Neighbor);
        //TR
        if(GetSquareByRowColumn(lv_Row+1 , lv_Column+1, lv_Neighbor ))
            lv_EachSquare.SetTopRight(lv_Neighbor);
        //L
        if(GetSquareByRowColumn(lv_Row , lv_Column-1, lv_Neighbor ))
            lv_EachSquare.SetLeft(lv_Neighbor);
        //R
        if(GetSquareByRowColumn(lv_Row , lv_Column+1, lv_Neighbor ))
            lv_EachSquare.SetRight(lv_Neighbor);
        //BL
        if(GetSquareByRowColumn(lv_Row-1 , lv_Column-1, lv_Neighbor ))
            lv_EachSquare.SetBottomLeft(lv_Neighbor);
        //B
        if(GetSquareByRowColumn(lv_Row-1 , lv_Column, lv_Neighbor ))
            lv_EachSquare.SetBottom(lv_Neighbor);
        //BR
        if(GetSquareByRowColumn(lv_Row-1 , lv_Column+1, lv_Neighbor ))
            lv_EachSquare.SetBottomRight(lv_Neighbor);
    }
}

void Board::MainMenu()
{
    std::cout<<"Welcome!"<<std::endl;
    std::cout<<"Please choose an option:"<<std::endl;
    std::cout<<"(P)lay  (E)nter PGN"<<std::endl;
    MainMenuInput();
    
}

void Board::MainMenuInput()
{
    std::cout<<std::endl;
    char lv_input;
    std::cin>>lv_input;
    if(lv_input =='p' || 'P')
        PlayGame();
    if(lv_input == 'e' || 'E')
        PlayPGN();
    std::cout<<"(P)lay  (E)nter PGN"<<std::endl;
    std::cout<<"Please enter valid input"<<std::endl;
    MainMenuInput();
}

void Board::PlayGame()
{
    bool bIsInputValid = false;
    std::cout<<"Play against:   (C)omputer  (H)uman"<<std::endl;
    std::cout<<std::endl;
    char lv_input; std::cin>>lv_input;
    if(lv_input =='c' || lv_input == 'C')
        DeterminePlayerPersonality(PlayerID::CPU);
    if(lv_input == 'h' || lv_input == 'H')
        DeterminePlayerPersonality(PlayerID::Human);
    while (!bIsInputValid)
    {
        std::cout<<"Please Enter valid input, C or H"<<std::endl;
        std::cout<<"Play against:   (C)omputer  (H)uman"<<std::endl;
        std::cin>>lv_input;
        if(lv_input =='c' || lv_input == 'C')
        {
            DeterminePlayerPersonality(PlayerID::CPU);
            bIsInputValid = true;
        }
        if(lv_input == 'h' || lv_input == 'H')
        {
            DeterminePlayerPersonality(PlayerID::Human);
            bIsInputValid = true;
        }

    }        
    return;
}

void Board::DeterminePlayerPersonality( PlayerID P2)
{
    Player1 = PlayerID::Human;
    Player2 = PlayerID::CPU;
    std::cout<<"Do you want to play (W)hite or (B)lack?"<<std::endl;
    char lv_input; std::cin>>lv_input;
    if(lv_input == 'w' || lv_input =='W')
        gv_Player1IsWhite = true;
    else
        gv_Player1IsWhite = false;
    
    Play();
}

void Board::Play()
{
    bool lv_WhiteToMove = true;
    bool lv_InCheck = false;
    bool lv_GameOver = false;
    while (!lv_GameOver)
    {
        Print();
        if(gv_Player1IsWhite)
            switch (Player1)
            {
        case CPU:
            AIMove();
                break;
        case Human:
            Playermove(lv_WhiteToMove, lv_InCheck);
                break;
            }
        else
        {
            switch (Player2)
            {
            case CPU:
                AIMove();
                break;
            case Human:
                Playermove(lv_WhiteToMove, lv_InCheck);
                break;
            }
        }
    }
}

void Board::Playermove(
    bool& bWhiteToMove,
    bool& bIsPlayerInCheck)
{
    // move variables
    FMove lv_FinalMove;
    PieceName lv_PieceType; int lv_Row, lv_Column;
    bool lv_bValidInput = false;
    while (!lv_bValidInput)
    {
        std::cout<<"Provide move as [(T)ype][Coordinate]"<<std::endl;
        std::string lv_Input; std::cin>>lv_Input;
        //std::cout<<lv_Input[0]<<std::endl; std::cout<<lv_Input[1]<<std::endl; std::cout<<lv_Input[2]<<std::endl;
       if(VerifyCoordinate(lv_Input, lv_PieceType, lv_Row,lv_Column))
       {
           std::cout<<"This is your move: "<<GetStringOfEnum(lv_PieceType)<<lv_Row<<lv_Column<<std::endl;
           if(VerifyMove(bWhiteToMove, lv_PieceType, lv_Row, lv_Column, lv_FinalMove))
            lv_bValidInput = true;
           else
               std::cout<<"This move is not possible"<<std::endl;    
       }
        else
            std::cout<<"This piece & coordinate input is not valid"<<std::endl;  
    }// while
    DoMove(lv_FinalMove, bWhiteToMove, bIsPlayerInCheck);
    
}

bool Board::VerifyCoordinate(
    std::string Input,
    PieceName& PieceType,
    int& Row,
    int& Column )
{
    switch (Input[0])
    {
    case 'N':
        PieceType = PieceName::E_Knight;
        break;
    case 'n':
        PieceType = PieceName::E_Knight;
        break;
    case 'k':
        PieceType = PieceName::E_King;
        break;
    case 'K':
        PieceType = PieceName::E_King;
        break;
    case 'q':
        PieceType = PieceName::E_Queen;
        break;
    case 'Q':
        PieceType = PieceName::E_Queen;
        break;
    case 'r':
        PieceType = PieceName::E_Rook;
        break;
    case 'R':
        PieceType = PieceName::E_Rook;
        break;
    case 'p':
        PieceType = PieceName::E_Pawn;
        break;
    case 'P':
        PieceType = PieceName::E_Pawn;
        break;
    case 'b':
        PieceType = PieceName::E_Bishop;
        break;
    case 'B':
        PieceType = PieceName::E_Bishop;
        break;
    default:
        std::cout<<"This input is not valid."<<std::endl;
        return false;
    }
    switch (Input[1])
    {
        case 'A':
            Column = 1;
        break;
        case 'a':
            Column = 1;
        break;
        case 'B':
            Column = 2;
        break;
        case 'b':
            Column = 2;
        break;
        case 'c':
            Column = 3;
        break;
        case 'C':
            Column = 3;
        break;
        case 'd':
            Column = 4;
        break;
        case 'D':
            Column = 4;
        break;
        case 'e':
            Column = 5;
        break;
        case 'E':
            Column = 5;
        break;
        case 'f':
            Column = 6;
        break;
        case 'F':
            Column = 6;
        break;
        case 'g':
            Column = 7;
        break;
        case 'G':
            Column =7;
        break;
        case 'h':
            Column = 8;
        break;
        case 'H':
            Column = 8;
        break;
        default:
            return false;
    }
    switch (Input[2])
    {
        case '1':
            Row = 1;
        return true;
        case '2':
            Row =2;
        return true;
        case '3':
            Row=3;
        return true;
        case '4':
            Row=4;
        return true;
        case '5':
            Row = 5;
        return true;
        case '6':
            Row = 6;
        return true;
        case '7':
            Row = 7;
        return true;
        case '8':
            Row=8;
        return true;
        default:
            std::cout<<"This input is not valid."<<std::endl;
            return false;
    }
}

bool Board::VerifyMove(
    bool IsWhite,
    PieceName Piece,
    int Row,
    int Column,
    FMove& FinalMove)
{
    int lv_RowMoveTo = Row;
    int lv_ColumnMoveTo = Column;

    // collection of candidate moves
    std::vector<FMove>Moves;
    
    if(IsWhite)
    {
        for(int i =0; i<16; ++i)
        {
            if(WhitePieces[i].GetPieceType()==Piece)
            {
                std::cout<<"found a matching piece for your move"<<std::endl;
                //Square* lv_Square = WhitePieces[i].GetSquare();
                FMove lv_move;
                switch (Piece)
                {
                    case PieceName::E_Queen:
                        if(VerifyQueenMove(lv_move, &WhitePieces[i], lv_RowMoveTo, lv_ColumnMoveTo, IsWhite))
                        {
                            std::cout<<"Pushing back move"<<std::endl;
                            Moves.push_back(lv_move);
                        }
                         break;
                    case PieceName::E_Knight:
                        if(VerifyKnightMove(lv_move, &WhitePieces[i], lv_RowMoveTo, lv_ColumnMoveTo, IsWhite))
                        {
                            std::cout<<"Pushing back move"<<std::endl;
                         Moves.push_back(lv_move);
                        }
                        break;
                    case PieceName::E_Bishop:
                        if(VerifyBishopMove(lv_move, &WhitePieces[i], lv_RowMoveTo, lv_ColumnMoveTo, IsWhite))
                        {
                            std::cout<<"Pushing back move"<<std::endl;
                            Moves.push_back(lv_move);
                        }
                        break;
                    case PieceName::E_Pawn:
                        if(VerifyPawnMove(lv_move, &WhitePieces[i], lv_RowMoveTo, lv_ColumnMoveTo, IsWhite))
                        {
                            std::cout<<"Pushing back move"<<std::endl;
                            Moves.push_back(lv_move);
                        }
                        break;
                    case PieceName::E_Rook:
                        if(VerifyRookMove(lv_move, &WhitePieces[i], lv_RowMoveTo, lv_ColumnMoveTo, IsWhite))
                        {
                            std::cout<<"Pushing back move"<<std::endl;
                            Moves.push_back(lv_move);
                        }
                        break;
                    case PieceName::E_King:
                        if(VerifyKingMove(lv_move, &WhitePieces[i], lv_RowMoveTo, lv_ColumnMoveTo, IsWhite))
                        {
                            std::cout<<"Pushing back move"<<std::endl;
                            Moves.push_back(lv_move);
                        }
                    break;
                    default:
                        std::cout<<"Not a piece on switch to verify move for"<<std::endl;
                }// switch
            }    
        }// for white pieces
    }// white's move
    else
    {
        for(int i = 0; i<16; ++i)
        {
            if(BlackPieces[i].GetPieceType() == Piece)
            {
                std::cout<<"found a matching piece for your move"<<std::endl;
                FMove lv_move;
                switch (Piece)
                {
                    case PieceName::E_Queen:
                        if(VerifyQueenMove(lv_move, &BlackPieces[i], lv_RowMoveTo, lv_ColumnMoveTo, IsWhite))
                        {
                            std::cout<<"Pushing back move"<<std::endl;
                            Moves.push_back(lv_move);
                        }
                         break;
                    case PieceName::E_Knight:
                        if(VerifyKnightMove(lv_move, &BlackPieces[i], lv_RowMoveTo, lv_ColumnMoveTo, IsWhite))
                        {
                            std::cout<<"Pushing back move"<<std::endl;
                         Moves.push_back(lv_move);
                        }
                        break;
                    case PieceName::E_Bishop:
                        if(VerifyBishopMove(lv_move, &BlackPieces[i], lv_RowMoveTo, lv_ColumnMoveTo, IsWhite))
                        {
                            std::cout<<"Pushing back move"<<std::endl;
                            Moves.push_back(lv_move);
                        }
                        break;
                    case PieceName::E_Pawn:
                        if(VerifyPawnMove(lv_move, &BlackPieces[i], lv_RowMoveTo, lv_ColumnMoveTo, IsWhite))
                        {
                            std::cout<<"Pushing back move"<<std::endl;
                            Moves.push_back(lv_move);
                        }
                        break;
                    case PieceName::E_Rook:
                        if(VerifyRookMove(lv_move, &BlackPieces[i], lv_RowMoveTo, lv_ColumnMoveTo, IsWhite))
                        {
                            std::cout<<"Pushing back move"<<std::endl;
                            Moves.push_back(lv_move);
                        }
                        break;
                    case PieceName::E_King:
                        if(VerifyKingMove(lv_move, &BlackPieces[i], lv_RowMoveTo, lv_ColumnMoveTo, IsWhite))
                        {
                            std::cout<<"Pushing back move"<<std::endl;
                            Moves.push_back(lv_move);
                        }
                    break;
                    default:
                        std::cout<<"Not a piece on switch to verify move for"<<std::endl;
                }// switch
            }
        }
    }
    if(Moves.size() < 1)
    {
        std::cout<<"No possible move found"<<std::endl;
        return false;
    }
    if(Moves.size() == 1)
    {
        FinalMove = Moves[0];
        return true;
    }
    else
    {
        std::cout<<"There are several pieces that can move to this square, please choose one:"<<std::endl;
        for (int i = 0; i< Moves.size(); ++i)
            std::cout<<"Enter "<<i<<" for piece on "<<Moves[i].MoveFrom->GetStringCoordinate()<<std::endl;
        bool lv_InputIsValid = false;
        int lv_Input;
        while(!lv_InputIsValid)
        {
            std::cin>>lv_Input;
            if( 0 <= lv_Input && lv_Input< Moves.size())
            {
                FinalMove = Moves[lv_Input];
                lv_InputIsValid =true;
            }
            else
            {
                std::cout<<"Please enter a valid index!"<<std::endl;
            }
        }// while
        return true;
    }// >1 move
}

bool Board::VerifyQueenMove(
    FMove& VerifiedMove,
    Piece* PieceMakingMove,
    int RowEnd,
    int ColumnEnd,
    bool MoveByWhite)
{
    Square* lv_Start = PieceMakingMove->GetSquare();
    Square* lv_MoveFrom = PieceMakingMove->GetSquare();
    int lv_RowStart = lv_Start->GetRow();
    int lv_ColumnStart = lv_Start->GetColumn();
    if(lv_ColumnStart == ColumnEnd)
    {
        if(lv_RowStart == RowEnd)
            return false;
        // MOVE DOWN
        if(lv_RowStart > RowEnd)
        {
            std::cout<<"This move is down"<<std::endl;
            while(lv_RowStart != RowEnd)
            {
                if(lv_Start->GetBottom()->GetPiece() == nullptr )
                {
                    lv_RowStart = lv_Start->GetBottom()->GetRow();
                    lv_Start = lv_Start->GetBottom();
                }
                else
                {
                    if(lv_Start->GetBottom()->GetRow() == RowEnd)
                    {
                        lv_Start = lv_Start->GetBottom();
                        // check if piece is of other color
                        if(lv_Start->GetPiece()->GetIsWhitePiece() != MoveByWhite)
                        {
                            VerifiedMove.bIsCapture = true;
                            VerifiedMove.bIsCheck = false;
                            VerifiedMove.PieceMove = PieceMakingMove;
                            VerifiedMove.MoveTo = lv_Start;
                            VerifiedMove.MoveFrom = lv_MoveFrom;
                            return true;
                        }
                        else
                        {
                            // cannot capture your own piece
                            return false;
                        }
                    }
                    else
                    {
                        //cannot move through pieces
                        return false;
                    }
                }
            }// while
            VerifiedMove.bIsCapture = false;
            VerifiedMove.bIsCheck = false;
            VerifiedMove.PieceMove = PieceMakingMove;
            VerifiedMove.MoveTo = lv_Start;
            VerifiedMove.MoveFrom = lv_MoveFrom;
            // no capture on arrival square
            return true;
        }// MOVE DOWN
        // 
        // ****************************************************************************************************
        // ****************************************************************************************************
        // 
        // MOVE UP
        else
        {
            std::cout<<"This move is up"<<std::endl;
            while (lv_RowStart != RowEnd)
            {
                if(lv_Start->GetTop()->GetPiece() == nullptr)
                {
                    lv_RowStart = lv_Start->GetTop()->GetRow();
                    lv_Start = lv_Start->GetTop();
                }
                else
                {
                    if(lv_Start->GetTop()->GetRow() == RowEnd)
                    {
                        lv_Start = lv_Start->GetTop();
                        // check if piece is of other color
                        if(lv_Start->GetPiece()->GetIsWhitePiece() != MoveByWhite)
                        {
                            VerifiedMove.bIsCapture = true;
                            VerifiedMove.bIsCheck = false;
                            VerifiedMove.PieceMove = PieceMakingMove;
                            VerifiedMove.MoveTo = lv_Start;
                            VerifiedMove.MoveFrom = lv_MoveFrom;
                            return true;
                        }
                        else
                        {
                            // cannot capture your own piece
                            return false;
                        }
                    }
                    else
                    {
                        //cannot move through pieces
                        return false;
                    }
                }
            }// while
            VerifiedMove.bIsCapture = false;
            VerifiedMove.bIsCheck = false;
            VerifiedMove.PieceMove = PieceMakingMove;
            VerifiedMove.MoveTo = lv_Start;
            VerifiedMove.MoveFrom = lv_MoveFrom;
            // no capture on arrival square
            return true;
        }// MOVE UP
    }// columnstart == columnend
    // 
    // ****************************************************************************************************
    // ****************************************************************************************************
    // 
    if(lv_RowStart == RowEnd)
    {
        // MOVE RIGHT
        if(lv_ColumnStart < ColumnEnd)
        {
            std::cout<<"This move is right"<<std::endl;
            while(lv_ColumnStart != ColumnEnd)
            {
                if(lv_Start->GetRight()->GetPiece() == nullptr)
                {
                    lv_Start = lv_Start->GetRight();
                    lv_ColumnStart = lv_Start->GetColumn();
                }
                else
                {
                    if(lv_Start->GetRight()->GetColumn() == ColumnEnd)
                    {
                        lv_Start = lv_Start->GetRight();
                        // check if piece is of other color
                        if(lv_Start->GetPiece()->GetIsWhitePiece() != MoveByWhite)
                        {
                            VerifiedMove.bIsCapture = true;
                            VerifiedMove.bIsCheck = false;
                            VerifiedMove.PieceMove = PieceMakingMove;
                            VerifiedMove.MoveTo = lv_Start;
                            VerifiedMove.MoveFrom = lv_MoveFrom;
                            return true;
                        }
                        else
                        {
                            // cannot capture your own piece
                            return false;
                        }
                    }
                    else
                    {
                        //cannot move through pieces
                        return false;
                    }
                }
            }// while
            VerifiedMove.bIsCapture = false;
            VerifiedMove.bIsCheck = false;
            VerifiedMove.PieceMove = PieceMakingMove;
            VerifiedMove.MoveTo = lv_Start;
            VerifiedMove.MoveFrom = lv_MoveFrom;
            // no capture on arrival square
            return true;
        }
        // 
        // ****************************************************************************************************
        // ****************************************************************************************************
        // 
        // MOVE LEFT
        else
        {
            std::cout<<"This move is left"<<std::endl;
            while(lv_ColumnStart != ColumnEnd)
            {
                if(lv_Start->GetLeft()->GetPiece() == nullptr)
                {
                    lv_Start = lv_Start->GetLeft();
                    lv_ColumnStart = lv_Start->GetColumn();
                }
                else
                {
                    if(lv_Start->GetLeft()->GetColumn() == ColumnEnd)
                    {
                        lv_Start = lv_Start->GetLeft();
                        // check if piece is of other color
                        if(lv_Start->GetPiece()->GetIsWhitePiece() != MoveByWhite)
                        {
                            VerifiedMove.bIsCapture = true;
                            VerifiedMove.bIsCheck = false;
                            VerifiedMove.PieceMove = PieceMakingMove;
                            VerifiedMove.MoveTo = lv_Start;
                            VerifiedMove.MoveFrom = lv_MoveFrom;
                            return true;
                        }
                        else
                        {
                            // cannot capture your own piece
                            return false;
                        }
                    }
                    else
                    {
                        //cannot move through pieces
                        return false;
                    }
                }
            }// while
            VerifiedMove.bIsCapture = false;
            VerifiedMove.bIsCheck = false;
            VerifiedMove.PieceMove = PieceMakingMove;
            VerifiedMove.MoveTo = lv_Start;
            VerifiedMove.MoveFrom = lv_MoveFrom;
            // no capture on arrival square
            return true;
        }
    }// rowstart == rowend
    // 
    // ****************************************************************************************************
    // ****************************************************************************************************
    // 
    // DIAGONAL MOVES
    if( std::abs(lv_RowStart-RowEnd) == std::abs(lv_ColumnStart - ColumnEnd))
    {
        std::cout<<"This move is diagonal"<<std::endl;
        // DIAGONAL UP
        if(lv_RowStart < RowEnd)
        {
            // diagonal up right
            if(lv_ColumnStart < ColumnEnd)
            {
                std::cout<<"This move is diagonal up right"<<std::endl;
                while (lv_ColumnStart != ColumnEnd)
                {
                    if(lv_Start->GetTopRight()->GetPiece() == nullptr)
                    {
                        lv_Start = lv_Start->GetTopRight();
                        lv_ColumnStart = lv_Start->GetColumn();
                    }
                    else
                    {
                        if(lv_Start->GetTopRight()->GetColumn() == ColumnEnd)
                        {
                            lv_Start = lv_Start->GetTopRight();
                            // check if piece is of opposite color
                            if(lv_Start ->GetPiece()->GetIsWhitePiece() != MoveByWhite)
                            {
                                VerifiedMove.bIsCapture = true;
                                VerifiedMove.bIsCheck = false;
                                VerifiedMove.PieceMove = PieceMakingMove;
                                VerifiedMove.MoveTo = lv_Start;
                                VerifiedMove.MoveFrom = lv_MoveFrom;
                                return true;
                            }
                            else
                            {
                                // cannot capture your own piece
                                return false;
                            }
                        }
                        else
                        {
                            // cannot move through pieces
                            return false;
                        }
                    }
                }// while
                VerifiedMove.bIsCapture = false;
                VerifiedMove.bIsCheck = false;
                VerifiedMove.PieceMove = PieceMakingMove;
                VerifiedMove.MoveTo = lv_Start;
                VerifiedMove.MoveFrom = lv_MoveFrom;
                // no capture on arrival square
                return true;
            }// diagonal up right
            // 
            // ****************************************************************************************************
            // ****************************************************************************************************
            //
            // diagonal up left
            else
            {
                std::cout<<"This move is diagonal up left"<<std::endl;
                while (lv_ColumnStart != ColumnEnd)
                {
                    if(lv_Start->GetTopLeft()->GetPiece() == nullptr)
                    {
                        lv_Start = lv_Start->GetTopLeft();
                        lv_ColumnStart = lv_Start->GetColumn();
                    }
                    else
                    {
                        if(lv_Start->GetTopLeft()->GetColumn() == ColumnEnd)
                        {
                            lv_Start = lv_Start->GetTopLeft();
                            // check if piece is of opposite color
                            if(lv_Start ->GetPiece()->GetIsWhitePiece() != MoveByWhite)
                            {
                                VerifiedMove.bIsCapture = true;
                                VerifiedMove.bIsCheck = false;
                                VerifiedMove.PieceMove = PieceMakingMove;
                                VerifiedMove.MoveTo = lv_Start;
                                VerifiedMove.MoveFrom = lv_MoveFrom;
                                return true;
                            }
                            else
                            {
                                // cannot capture your own piece
                                return false;
                            }
                        }
                        else
                        {
                            // cannot move through pieces
                            return false;
                        }
                    }
                }// while
                VerifiedMove.bIsCapture = false;
                VerifiedMove.bIsCheck = false;
                VerifiedMove.PieceMove = PieceMakingMove;
                VerifiedMove.MoveTo = lv_Start;
                VerifiedMove.MoveFrom = lv_MoveFrom;
                // no capture on arrival square
                return true;
            }// diagonal up left
        }// rowstart < rowend
        // 
        // ****************************************************************************************************
        // ****************************************************************************************************
        //
        // DIAGONAL DOWN
        else
        {
            // diagonal down right
            if(lv_ColumnStart < ColumnEnd)
            {
                std::cout<<"This move is diagonal down right"<<std::endl;
                while (lv_ColumnStart != ColumnEnd)
                {
                    if(lv_Start->GetBottomRight()->GetPiece() == nullptr)
                    {
                        lv_Start = lv_Start->GetBottomRight();
                        lv_ColumnStart = lv_Start->GetColumn();
                    }
                    else
                    {
                        if(lv_Start->GetBottomRight()->GetColumn() == ColumnEnd)
                        {
                            lv_Start = lv_Start->GetBottomRight();
                            // check if piece is of opposite color
                            if(lv_Start ->GetPiece()->GetIsWhitePiece() != MoveByWhite)
                            {
                                VerifiedMove.bIsCapture = true;
                                VerifiedMove.bIsCheck = false;
                                VerifiedMove.PieceMove = PieceMakingMove;
                                VerifiedMove.MoveTo = lv_Start;
                                VerifiedMove.MoveFrom = lv_MoveFrom;
                                return true;
                            }
                            else
                            {
                                // cannot capture your own piece
                                return false;
                            }
                        }
                        else
                        {
                            // cannot move through pieces
                            return false;
                        }
                    }
                }// while
                VerifiedMove.bIsCapture = false;
                VerifiedMove.bIsCheck = false;
                VerifiedMove.PieceMove = PieceMakingMove;
                VerifiedMove.MoveTo = lv_Start;
                VerifiedMove.MoveFrom = lv_MoveFrom;
                // no capture on arrival square
                return true;
            }// diagonal up right
            // 
            // ****************************************************************************************************
            // ****************************************************************************************************
            // 
            // diagonal down left
            else
            {
                std::cout<<"This move is diagonal down left"<<std::endl;
                while (lv_ColumnStart != ColumnEnd)
                {
                    if(lv_Start->GetBottomLeft()->GetPiece() == nullptr)
                    {
                        lv_Start = lv_Start->GetBottomLeft();
                        lv_ColumnStart = lv_Start->GetColumn();
                    }
                    else
                    {
                        if(lv_Start->GetBottomLeft()->GetColumn() == ColumnEnd)
                        {
                            lv_Start = lv_Start->GetBottomLeft();
                            // check if piece is of opposite color
                            if(lv_Start ->GetPiece()->GetIsWhitePiece() != MoveByWhite)
                            {
                                VerifiedMove.bIsCapture = true;
                                VerifiedMove.bIsCheck = false;
                                VerifiedMove.PieceMove = PieceMakingMove;
                                VerifiedMove.MoveTo = lv_Start;
                                VerifiedMove.MoveFrom = lv_MoveFrom;
                                return true;
                            }
                            else
                            {
                                // cannot capture your own piece
                                return false;
                            }
                        }
                        else
                        {
                            // cannot move through pieces
                            return false;
                        }
                    }
                }// while
                VerifiedMove.bIsCapture = false;
                VerifiedMove.bIsCheck = false;
                VerifiedMove.PieceMove = PieceMakingMove;
                VerifiedMove.MoveTo = lv_Start;
                VerifiedMove.MoveFrom = lv_MoveFrom;
                // no capture on arrival square
                return true;
            }// diagonal down left
        }// DIAGONAL DOWN
    }
    // move is not rook-like nor diagonal
    else
    {
        return false;
    }
}

bool Board::VerifyPawnMove(
    FMove& VerifiedMove,
    Piece* PieceMakingMove,
    int RowEnd,
    int ColumnEnd,
    bool MoveByWhite)
{
    Square* lv_Start = PieceMakingMove->GetSquare();
    Square* lv_MoveFrom = lv_Start;
    int lv_RowStart = lv_Start->GetRow();
    int lv_ColumnStart = lv_Start->GetColumn();
    // check for capture
    if(MoveByWhite)
    {
        if(std::abs(lv_ColumnStart - ColumnEnd ) == 1 && RowEnd == lv_RowStart + 1 )
        {
            if(ColumnEnd == lv_ColumnStart + 1)
            {
                if(lv_Start->GetTopRight()->GetPiece()!= nullptr)
                {
                    if(lv_Start->GetTopRight()->GetPiece()->GetIsWhitePiece() != MoveByWhite)
                    {
                        lv_Start = lv_Start->GetTopRight();
                        PawnMoveIsCheck(VerifiedMove, true, lv_MoveFrom, lv_Start, PieceMakingMove);
                        return true;
                    }
                    else
                        // cannot capture your own piece
                        return false;
                }
                else
                    // cannot move diagonal without capture
                    return false;
            }
            if(ColumnEnd == lv_ColumnStart-1)
            {
                if(lv_Start->GetTopLeft()->GetPiece() != nullptr)
                {
                    if(lv_Start->GetTopLeft()->GetPiece()->GetIsWhitePiece() != MoveByWhite)
                    {
                        lv_Start = lv_Start->GetTopLeft();
                        PawnMoveIsCheck(VerifiedMove, true, lv_MoveFrom, lv_Start, PieceMakingMove);
                        return true;
                    }
                    else
                        // cannot capture your own piece
                        return false;
                }
                else
                    // cannot move diagonal without capture
                    return false;
            }
        }// check for capture
        // check for normal move
        if(lv_ColumnStart == ColumnEnd && RowEnd == lv_RowStart + 1)
        {
            // upward move has no capture
            if(lv_Start->GetTop()->GetPiece() == nullptr)
            {
                lv_Start = lv_Start->GetTop();
                PawnMoveIsCheck(VerifiedMove, false, lv_MoveFrom, lv_Start, PieceMakingMove);
                return true;
            }
            else
                // cannot move on piece
                return false;
        }
        // check for double move
        if(RowEnd == lv_RowStart + 2 && lv_ColumnStart == ColumnEnd)
        if( (MoveByWhite && lv_RowStart ==2) || (!MoveByWhite && lv_ColumnStart))
        {
            while (lv_RowStart != RowEnd)
            {
                if(lv_Start->GetTop()->GetPiece() == nullptr)
                {
                    lv_Start = lv_Start->GetTop();
                    lv_RowStart = lv_Start->GetRow();
                }
                else
                    // cannot move through piece
                    return false;
            }
            PawnMoveIsCheck(VerifiedMove, false, lv_MoveFrom, lv_Start, PieceMakingMove);
            return true;
        }
    }// white's move
    else
    {
        if(std::abs(lv_ColumnStart - ColumnEnd ) == 1 && RowEnd == lv_RowStart - 1 )
        {
            if(ColumnEnd == lv_ColumnStart + 1)
            {
                if(lv_Start->GetBottomRight()->GetPiece()!= nullptr)
                {
                    if(lv_Start->GetBottomRight()->GetPiece()->GetIsWhitePiece() != MoveByWhite)
                    {
                        lv_Start = lv_Start->GetBottomRight();
                        PawnMoveIsCheck(VerifiedMove, true, lv_MoveFrom, lv_Start, PieceMakingMove);
                        return true;
                    }
                    else
                        // cannot capture your own piece
                        return false;
                }
                else
                    // cannot move diagonal without capture
                    return false;
            }
            if(ColumnEnd == lv_ColumnStart-1)
            {
                if(lv_Start->GetBottomLeft()->GetPiece() != nullptr)
                {
                    if(lv_Start->GetBottomLeft()->GetPiece()->GetIsWhitePiece() != MoveByWhite)
                    {
                        lv_Start = lv_Start->GetBottomLeft();
                        PawnMoveIsCheck(VerifiedMove, true, lv_MoveFrom, lv_Start, PieceMakingMove);
                        return true;
                    }
                    else
                        // cannot capture your own piece
                        return false;
                }
                else
                    // cannot move diagonal without capture
                    return false;
            }
        }// check for capture
        // check for normal move
        if(lv_ColumnStart == ColumnEnd && RowEnd == lv_RowStart - 1)
        {
            // upward move has no capture
            if(lv_Start->GetBottom()->GetPiece() == nullptr)
            {
                lv_Start = lv_Start->GetBottom();
                PawnMoveIsCheck(VerifiedMove, false, lv_MoveFrom, lv_Start, PieceMakingMove);
                return true;
            }
            else
                // cannot move on piece
                return false;
        }
        // check for double move
        if(RowEnd == lv_RowStart - 2 && lv_ColumnStart == ColumnEnd)
            if( (!MoveByWhite && lv_RowStart ==7))
            {
                while (lv_RowStart != RowEnd)
                {
                    if(lv_Start->GetBottom()->GetPiece() == nullptr)
                    {
                        lv_Start = lv_Start->GetBottom();
                        lv_RowStart = lv_Start->GetRow();
                    }
                    else
                        // cannot move through piece
                        return false;
                }
                PawnMoveIsCheck(VerifiedMove, false, lv_MoveFrom, lv_Start, PieceMakingMove);
            return true;
        }
    }
    
    return false;
}

void Board::PawnMoveIsCheck(
    FMove& VerifiedMove,
    bool bMoveEndsInCapture,
    Square* MoveFrom,
    Square* MoveTo,
    Piece* PieceMakingMove)
{
    VerifiedMove.bIsCapture = bMoveEndsInCapture;
    VerifiedMove.MoveFrom = MoveFrom;
    VerifiedMove.MoveTo = MoveTo;
    VerifiedMove.PieceMove = PieceMakingMove;

    Square* lv_KingSquare;

    if(PieceMakingMove->GetIsWhitePiece())
    {
        lv_KingSquare = gv_SquareBlackKing;
        if(MoveTo->GetTopLeft() == lv_KingSquare || MoveTo->GetTopRight() == lv_KingSquare)
        {
            VerifiedMove.bIsCheck = true;
            gv_TPiecesGivingCheck.push_back(PieceMakingMove);
            std::cout<<"Direct check from pawn"<<std::endl;
            IsDiscoveryCheck(MoveFrom,MoveTo,PieceMakingMove);
        }
    }// white move
    else
    {
        lv_KingSquare = gv_SquareWhiteKing;
        if(MoveTo->GetBottomLeft() == lv_KingSquare || MoveTo->GetBottomLeft() == lv_KingSquare)
        {
            VerifiedMove.bIsCheck = true;
            gv_TPiecesGivingCheck.push_back(PieceMakingMove);
            std::cout<<"Direct check from pawn"<<std::endl;
            IsDiscoveryCheck(MoveFrom,MoveTo,PieceMakingMove);
        }
    }// black move
}

bool Board::VerifyBishopMove(
    FMove& VerifiedMove,
    Piece* PieceMakingMove,
    int RowEnd,
    int ColumnEnd,
    bool MoveByWhite)
{
    Square* lv_Start = PieceMakingMove->GetSquare();
    Square* lv_MoveFrom = lv_Start;
    int lv_RowStart = lv_Start->GetRow();
    int lv_ColumnStart = lv_Start->GetColumn();
     // DIAGONAL MOVES
    if( std::abs(lv_RowStart-RowEnd) == std::abs(lv_ColumnStart - ColumnEnd))
    {
        std::cout<<"This move is diagonal"<<std::endl;
        // DIAGONAL UP
        if(lv_RowStart < RowEnd)
        {
            // diagonal up right
            if(lv_ColumnStart < ColumnEnd)
            {
                std::cout<<"This move is diagonal up right"<<std::endl;
                while (lv_ColumnStart != ColumnEnd)
                {
                    if(lv_Start->GetTopRight()->GetPiece() == nullptr)
                    {
                        lv_Start = lv_Start->GetTopRight();
                        lv_ColumnStart = lv_Start->GetColumn();
                    }
                    else
                    {
                        if(lv_Start->GetTopRight()->GetColumn() == ColumnEnd)
                        {
                            lv_Start = lv_Start->GetTopRight();
                            // check if piece is of opposite color
                            if(lv_Start ->GetPiece()->GetIsWhitePiece() != MoveByWhite)
                            {
                                BishopMoveIsCheck(VerifiedMove, true, lv_MoveFrom, lv_Start, PieceMakingMove);
                                return true;
                            }
                            else
                            {
                                // cannot capture your own piece
                                return false;
                            }
                        }
                        else
                        {
                            // cannot move through pieces
                            return false;
                        }
                    }
                }// while
                BishopMoveIsCheck(VerifiedMove, false, lv_MoveFrom, lv_Start, PieceMakingMove);
                // no capture on arrival square
                return true;
            }// diagonal up right
            // 
            // ****************************************************************************************************
            // ****************************************************************************************************
            //
            // diagonal up left
            else
            {
                std::cout<<"This move is diagonal up left"<<std::endl;
                while (lv_ColumnStart != ColumnEnd)
                {
                    if(lv_Start->GetTopLeft()->GetPiece() == nullptr)
                    {
                        lv_Start = lv_Start->GetTopLeft();
                        lv_ColumnStart = lv_Start->GetColumn();
                    }
                    else
                    {
                        if(lv_Start->GetTopLeft()->GetColumn() == ColumnEnd)
                        {
                            lv_Start = lv_Start->GetTopLeft();
                            // check if piece is of opposite color
                            if(lv_Start ->GetPiece()->GetIsWhitePiece() != MoveByWhite)
                            {
                                BishopMoveIsCheck(VerifiedMove, true, lv_MoveFrom, lv_Start, PieceMakingMove);
                                return true;
                            }
                            else
                            {
                                // cannot capture your own piece
                                return false;
                            }
                        }
                        else
                        {
                            // cannot move through pieces
                            return false;
                        }
                    }
                }// while
                BishopMoveIsCheck(VerifiedMove, false, lv_MoveFrom, lv_Start, PieceMakingMove);
                // no capture on arrival square
                return true;
            }// diagonal up left
        }// rowstart < rowend
        // 
        // ****************************************************************************************************
        // ****************************************************************************************************
        //
        // DIAGONAL DOWN
        else
        {
            // diagonal down right
            if(lv_ColumnStart < ColumnEnd)
            {
                std::cout<<"This move is diagonal down right"<<std::endl;
                while (lv_ColumnStart != ColumnEnd)
                {
                    if(lv_Start->GetBottomRight()->GetPiece() == nullptr)
                    {
                        lv_Start = lv_Start->GetBottomRight();
                        lv_ColumnStart = lv_Start->GetColumn();
                    }
                    else
                    {
                        if(lv_Start->GetBottomRight()->GetColumn() == ColumnEnd)
                        {
                            lv_Start = lv_Start->GetBottomRight();
                            // check if piece is of opposite color
                            if(lv_Start ->GetPiece()->GetIsWhitePiece() != MoveByWhite)
                            {
                                BishopMoveIsCheck(VerifiedMove, true, lv_MoveFrom, lv_Start, PieceMakingMove);
                                return true;
                            }
                            else
                            {
                                // cannot capture your own piece
                                return false;
                            }
                        }
                        else
                        {
                            // cannot move through pieces
                            return false;
                        }
                    }
                }// while
                BishopMoveIsCheck(VerifiedMove, false, lv_MoveFrom, lv_Start, PieceMakingMove);
                // no capture on arrival square
                return true;
            }// diagonal up right
            // 
            // ****************************************************************************************************
            // ****************************************************************************************************
            // 
            // diagonal down left
            else
            {
                std::cout<<"This move is diagonal down left"<<std::endl;
                while (lv_ColumnStart != ColumnEnd)
                {
                    if(lv_Start->GetBottomLeft()->GetPiece() == nullptr)
                    {
                        lv_Start = lv_Start->GetBottomLeft();
                        lv_ColumnStart = lv_Start->GetColumn();
                    }
                    else
                    {
                        if(lv_Start->GetBottomLeft()->GetColumn() == ColumnEnd)
                        {
                            lv_Start = lv_Start->GetBottomLeft();
                            // check if piece is of opposite color
                            if(lv_Start ->GetPiece()->GetIsWhitePiece() != MoveByWhite)
                            {
                                BishopMoveIsCheck(VerifiedMove, true, lv_MoveFrom, lv_Start, PieceMakingMove);
                                return true;
                            }
                            else
                            {
                                // cannot capture your own piece
                                return false;
                            }
                        }
                        else
                        {
                            // cannot move through pieces
                            return false;
                        }
                    }
                }// while
                BishopMoveIsCheck(VerifiedMove, false, lv_MoveFrom, lv_Start, PieceMakingMove);
                // no capture on arrival square
                return true;
            }// diagonal down left
        }// DIAGONAL DOWN
    }
    else
    {
        std::cout<<"Not a diagonal move"<<std::endl;
        return false;
    }
}

void Board::BishopMoveIsCheck(
    FMove& VerifiedMove,
    bool bMoveEndsInCapture,
    Square* MoveFrom,
    Square* MoveTo,
    Piece* PieceMakingMove)
{
    VerifiedMove.bIsCapture = bMoveEndsInCapture;
    VerifiedMove.MoveFrom = MoveFrom;
    VerifiedMove.MoveTo = MoveTo;
    VerifiedMove.PieceMove = PieceMakingMove;

    Square* lv_KingSquare;

    if(PieceMakingMove->GetIsWhitePiece())
    {
        lv_KingSquare = gv_SquareBlackKing;
    }// white move
    else
    {
        lv_KingSquare = gv_SquareWhiteKing;
    }// black move
    if(std::abs(MoveTo->GetColumn() - lv_KingSquare->GetColumn()) ==
        std::abs(MoveTo->GetRow()-lv_KingSquare->GetRow()))
    {
        int lv_RowStart = MoveTo->GetRow();
        int lv_ColumnStart = MoveTo->GetColumn();
        int lv_RowEnd = lv_KingSquare->GetRow();
        int lv_ColumnEnd = lv_KingSquare->GetColumn();
        Square* lv_Start = MoveTo;
        if(lv_RowStart < lv_RowEnd)
        {
            // diagonal up right
            if(lv_ColumnStart < lv_ColumnEnd)
            {
                std::cout<<"Enemy king is diagonal up right from this piece"<<std::endl;
                while (lv_ColumnStart != lv_ColumnEnd)
                {
                    if(lv_Start->GetTopRight()->GetPiece() == nullptr)
                    {
                        lv_Start = lv_Start->GetTopRight();
                        lv_ColumnStart = lv_Start->GetColumn();
                    }
                    else
                    {
                        if(lv_Start->GetTopRight() == lv_KingSquare)
                        {
                            VerifiedMove.bIsCheck =true;
                            std::cout<<"Direct check from bishop"<<std::endl;
                            IsDiscoveryCheck(MoveFrom, MoveTo, PieceMakingMove);
                            return;
                        }
                        VerifiedMove.bIsCheck = IsDiscoveryCheck(MoveFrom, MoveTo, PieceMakingMove);
                        return;
                    }
                }// while
                VerifiedMove.bIsCheck=true;
                gv_TPiecesGivingCheck.push_back(PieceMakingMove);
                IsDiscoveryCheck(MoveFrom, MoveTo, PieceMakingMove);
                return;
            }// diagonal up right
            // 
            // ****************************************************************************************************
            // ****************************************************************************************************
            //
            // diagonal up left
            else
            {
                std::cout<<"Enemy king is diagonal up left from this piece"<<std::endl;
                while (lv_ColumnStart != lv_ColumnEnd)
                {
                    if(lv_Start->GetTopLeft()->GetPiece() == nullptr)
                    {
                        lv_Start = lv_Start->GetTopLeft();
                        lv_ColumnStart = lv_Start->GetColumn();
                    }
                    else
                    {
                        if(lv_Start->GetTopLeft() == lv_KingSquare)
                        {
                            VerifiedMove.bIsCheck =true;
                            std::cout<<"Direct check from bishop"<<std::endl;
                            IsDiscoveryCheck(MoveFrom, MoveTo, PieceMakingMove);
                            return;
                        }
                        VerifiedMove.bIsCheck = IsDiscoveryCheck(MoveFrom, MoveTo, PieceMakingMove);
                        return;
                    }
                }// while
                VerifiedMove.bIsCheck=true;
                gv_TPiecesGivingCheck.push_back(PieceMakingMove);
                IsDiscoveryCheck(MoveFrom, MoveTo, PieceMakingMove);
                return;
            }// diagonal up left
        }// rowstart < rowend
        // 
        // ****************************************************************************************************
        // ****************************************************************************************************
        //
        // DIAGONAL DOWN
        else
        {
            // diagonal down right
            if(lv_ColumnStart < lv_ColumnEnd)
            {
                while (lv_ColumnStart != lv_ColumnEnd)
                {
                    if(lv_Start->GetBottomRight()->GetPiece() == nullptr)
                    {
                        lv_Start = lv_Start->GetBottomRight();
                        lv_ColumnStart = lv_Start->GetColumn();
                    }
                    else
                    {
                        VerifiedMove.bIsCheck = IsDiscoveryCheck(MoveFrom, MoveTo, PieceMakingMove);
                        return;
                    }
                }// while
                std::cout<<"Direct check from bishop top left of king"<<std::endl;
                VerifiedMove.bIsCheck=true;
                gv_TPiecesGivingCheck.push_back(PieceMakingMove);
                IsDiscoveryCheck(MoveFrom, MoveTo, PieceMakingMove);
                return;
            }// diagonal up right
            // 
            // ****************************************************************************************************
            // ****************************************************************************************************
            // 
            // diagonal down left
            else
            {
                
                while (lv_ColumnStart != lv_ColumnEnd)
                {
                    if(lv_Start->GetBottomLeft()->GetPiece() == nullptr)
                    {
                        lv_Start = lv_Start->GetBottomLeft();
                        lv_ColumnStart = lv_Start->GetColumn();
                    }
                    else
                    {
                        VerifiedMove.bIsCheck = IsDiscoveryCheck(MoveFrom, MoveTo, PieceMakingMove);
                        return;
                    }
                }// while
                VerifiedMove.bIsCheck=true;
                std::cout<<"Direct check from bishop top right of king"<<std::endl;
                gv_TPiecesGivingCheck.push_back(PieceMakingMove);
                IsDiscoveryCheck(MoveFrom, MoveTo, PieceMakingMove);
                return;
            }// diagonal down left
        }// DIAGONAL DOWN
    }// Diagonal move
    
}

bool Board::VerifyRookMove(
    FMove& VerifiedMove,
    Piece* PieceMakingMove,
    int RowEnd,
    int ColumnEnd,
    bool MoveByWhite)
{
    Square* lv_Start = PieceMakingMove->GetSquare();
    Square* lv_MoveFrom = PieceMakingMove->GetSquare();
    int lv_RowStart = lv_Start->GetRow();
    int lv_ColumnStart = lv_Start->GetColumn();
    if(lv_ColumnStart == ColumnEnd)
    {
        if(lv_RowStart == RowEnd)
            return false;
        // MOVE DOWN
        if(lv_RowStart > RowEnd)
        {
            std::cout<<"This move is down"<<std::endl;
            while(lv_RowStart != RowEnd)
            {
                if(lv_Start->GetBottom()->GetPiece() == nullptr )
                {
                    lv_RowStart = lv_Start->GetBottom()->GetRow();
                    lv_Start = lv_Start->GetBottom();
                }
                else
                {
                    if(lv_Start->GetBottom()->GetRow() == RowEnd)
                    {
                        lv_Start = lv_Start->GetBottom();
                        // check if piece is of other color
                        if(lv_Start->GetPiece()->GetIsWhitePiece() != MoveByWhite)
                        {
                            RookMoveIsCheck(VerifiedMove,true, lv_MoveFrom,
                                lv_Start, PieceMakingMove);
                            return true;
                        }
                        else
                        {
                            // cannot capture your own piece
                            return false;
                        }
                    }
                    else
                    {
                        //cannot move through pieces
                        return false;
                    }
                }
            }// while
            RookMoveIsCheck(VerifiedMove, false, lv_MoveFrom,
                lv_Start,PieceMakingMove);
            // no capture on arrival square
            return true;
        }// MOVE DOWN
        // 
        // ****************************************************************************************************
        // ****************************************************************************************************
        // 
        // MOVE UP
        else
        {
            std::cout<<"This move is up"<<std::endl;
            while (lv_RowStart != RowEnd)
            {
                if(lv_Start->GetTop()->GetPiece() == nullptr)
                {
                    lv_RowStart = lv_Start->GetTop()->GetRow();
                    lv_Start = lv_Start->GetTop();
                }
                else
                {
                    if(lv_Start->GetTop()->GetRow() == RowEnd)
                    {
                        lv_Start = lv_Start->GetTop();
                        // check if piece is of other color
                        if(lv_Start->GetPiece()->GetIsWhitePiece() != MoveByWhite)
                        {
                            RookMoveIsCheck(VerifiedMove, true, lv_MoveFrom,
                                lv_Start, PieceMakingMove);
                            return true;
                        }
                        else
                        {
                            // cannot capture your own piece
                            return false;
                        }
                    }
                    else
                    {
                        //cannot move through pieces
                        return false;
                    }
                }
            }// while
            RookMoveIsCheck(VerifiedMove,false,lv_MoveFrom,
                lv_Start,PieceMakingMove);
            // no capture on arrival square
            return true;
        }// MOVE UP
    }// columnstart == columnend
    // 
    // ****************************************************************************************************
    // ****************************************************************************************************
    // 
    if(lv_RowStart == RowEnd)
    {
        // MOVE RIGHT
        if(lv_ColumnStart < ColumnEnd)
        {
            std::cout<<"This move is right"<<std::endl;
            while(lv_ColumnStart != ColumnEnd)
            {
                if(lv_Start->GetRight()->GetPiece() == nullptr)
                {
                    lv_Start = lv_Start->GetRight();
                    lv_ColumnStart = lv_Start->GetColumn();
                }
                else
                {
                    if(lv_Start->GetRight()->GetColumn() == ColumnEnd)
                    {
                        lv_Start = lv_Start->GetRight();
                        // check if piece is of other color
                        if(lv_Start->GetPiece()->GetIsWhitePiece() != MoveByWhite)
                        {
                            RookMoveIsCheck(VerifiedMove,true,lv_MoveFrom,
                            lv_Start,PieceMakingMove);
                            return true;
                        }
                        else
                        {
                            // cannot capture your own piece
                            return false;
                        }
                    }
                    else
                    {
                        //cannot move through pieces
                        return false;
                    }
                }
            }// while
            RookMoveIsCheck(VerifiedMove,false,lv_MoveFrom,
            lv_Start,PieceMakingMove);
            // no capture on arrival square
            return true;
        }
        // 
        // ****************************************************************************************************
        // ****************************************************************************************************
        // 
        // MOVE LEFT
        else
        {
            std::cout<<"This move is left"<<std::endl;
            while(lv_ColumnStart != ColumnEnd)
            {
                if(lv_Start->GetLeft()->GetPiece() == nullptr)
                {
                    lv_Start = lv_Start->GetLeft();
                    lv_ColumnStart = lv_Start->GetColumn();
                }
                else
                {
                    if(lv_Start->GetLeft()->GetColumn() == ColumnEnd)
                    {
                        lv_Start = lv_Start->GetLeft();
                        // check if piece is of other color
                        if(lv_Start->GetPiece()->GetIsWhitePiece() != MoveByWhite)
                        {
                            RookMoveIsCheck(VerifiedMove,true,lv_MoveFrom,
                             lv_Start,PieceMakingMove);
                            return true;
                        }
                        else
                        {
                            // cannot capture your own piece
                            return false;
                        }
                    }
                    else
                    {
                        //cannot move through pieces
                        return false;
                    }
                }
            }// while
            RookMoveIsCheck(VerifiedMove,false,lv_MoveFrom,
            lv_Start,PieceMakingMove);
            // no capture on arrival square
            return true;
        }
    }// rowstart == rowend
    else
    {
        std::cout<<"Not a rook move"<<std::endl;
        return false;
    }
}

void Board::RookMoveIsCheck(
    FMove& VerifiedMove,
    bool bMoveEndsInCapture,
    Square* MoveFrom,
    Square* MoveTo,
    Piece* PieceMakingMove)
{
    VerifiedMove.bIsCapture = bMoveEndsInCapture;
    VerifiedMove.MoveFrom = MoveFrom;
    VerifiedMove.MoveTo = MoveTo;
    VerifiedMove.PieceMove = PieceMakingMove;

    Square* lv_KingSquare;
    Square* lv_Square;

    if(PieceMakingMove->GetIsWhitePiece())
    {
        lv_KingSquare = gv_SquareBlackKing;
    }// white move
    else
    {
        lv_KingSquare = gv_SquareWhiteKing;
    }// black move
    if(MoveTo->GetRow() == lv_KingSquare->GetRow())
    {
        if(MoveTo->GetColumn() < lv_KingSquare->GetColumn())
        {
            lv_Square = MoveTo;
            while(lv_Square != lv_KingSquare)
            {
                lv_Square = lv_Square->GetRight();
                if(lv_Square->GetPiece() != nullptr)
                    break;

                if(lv_Square == lv_KingSquare)
                {
                    std::cout<<"Direct check from rook on left"<<std::endl;
                    gv_TPiecesGivingCheck.push_back(PieceMakingMove);
                    VerifiedMove.bIsCheck =true;
                    IsDiscoveryCheck(MoveFrom, MoveTo, PieceMakingMove);
                    return;
                }
            }// while
        }// left from king
        else
        {
            lv_Square = MoveTo;
            while(lv_Square != lv_KingSquare)
            {
                lv_Square = lv_Square->GetLeft();
                if(lv_Square->GetPiece() != nullptr)
                    break;

                if(lv_Square == lv_KingSquare)
                {
                    std::cout<<"Direct check from rook on right"<<std::endl;
                    gv_TPiecesGivingCheck.push_back(PieceMakingMove);
                    VerifiedMove.bIsCheck =true;
                    IsDiscoveryCheck(MoveFrom, MoveTo, PieceMakingMove);
                    return;
                }
            }// while
        }// right of king
        VerifiedMove.bIsCheck = IsDiscoveryCheck(MoveTo,MoveFrom,PieceMakingMove);
        return;
    }//same row
    if(MoveTo->GetColumn() == lv_KingSquare->GetColumn())
    {
        if(MoveTo->GetRow() < lv_KingSquare->GetRow())
        {
            lv_Square = MoveTo;
            while(lv_Square != lv_KingSquare)
            {
                lv_Square = lv_Square->GetTop();
                if(lv_Square->GetPiece() != nullptr)
                    break;

                if(lv_Square == lv_KingSquare)
                {
                    std::cout<<"Direct check from rook below"<<std::endl;
                    gv_TPiecesGivingCheck.push_back(PieceMakingMove);
                    VerifiedMove.bIsCheck =true;
                    IsDiscoveryCheck(MoveFrom, MoveTo, PieceMakingMove);
                    return;
                }
            }// while
        }// below
        else
        {
            lv_Square = MoveTo;
            while(lv_Square != lv_KingSquare)
            {
                lv_Square = lv_Square->GetBottom();
                if(lv_Square->GetPiece() != nullptr)
                    break;

                if(lv_Square == lv_KingSquare)
                {
                    std::cout<<"Direct check from rook above"<<std::endl;
                    gv_TPiecesGivingCheck.push_back(PieceMakingMove);
                    VerifiedMove.bIsCheck =true;
                    IsDiscoveryCheck(MoveFrom, MoveTo, PieceMakingMove);
                    return;
                }
            }// while
        }// above
        VerifiedMove.bIsCheck = IsDiscoveryCheck(MoveTo,MoveFrom,PieceMakingMove);
        return;
    }// same column
    VerifiedMove.bIsCheck = IsDiscoveryCheck(MoveTo,MoveFrom,PieceMakingMove);
    return;
    
}

bool Board::VerifyKnightMove(
    FMove& VerifiedMove,
    Piece* PieceMakingMove,
    int RowEnd,
    int ColumnEnd,
    bool MoveByWhite)
{
    Square* lv_Start = PieceMakingMove->GetSquare();
    Square* lv_MoveFrom = PieceMakingMove->GetSquare();
    int lv_RowStart = lv_Start->GetRow();
    int lv_ColumnStart = lv_Start->GetColumn();


    //********************************************************************************
    //                      HORIZONTAL L
    //********************************************************************************
    
    if(std::abs(ColumnEnd - lv_ColumnStart) ==2 && std::abs(RowEnd - lv_RowStart) ==1)
    {
        // right
        if(lv_ColumnStart < ColumnEnd)
        {
            // upper right
            if(lv_RowStart < RowEnd)
            {
                lv_Start = lv_Start->GetRight()->GetRight()->GetTop();
                if(lv_Start->GetPiece() == nullptr)
                {
                    KnightMoveIsCheck(VerifiedMove,false,
                        lv_MoveFrom, lv_Start, PieceMakingMove);
                    return true;
                }
                else
                {
                    if(lv_Start->GetPiece()->GetIsWhitePiece() != MoveByWhite)
                    {
                        KnightMoveIsCheck(VerifiedMove,true,
                            lv_MoveFrom, lv_Start, PieceMakingMove);
                        return true;
                    }
                    else
                        // cannot capture your own pieces
                        return false;
                }
            }
            // lower left
            else
            {
                lv_Start = lv_Start->GetRight()->GetRight()->GetBottom();
                if(lv_Start->GetPiece() == nullptr)
                {
                    KnightMoveIsCheck(VerifiedMove,false,
                       lv_MoveFrom, lv_Start, PieceMakingMove);
                    return true;
                }
                else
                {
                    if(lv_Start->GetPiece()->GetIsWhitePiece() != MoveByWhite)
                    {
                        KnightMoveIsCheck(VerifiedMove,true,
                            lv_MoveFrom, lv_Start, PieceMakingMove);
                        return true;
                    }
                    else
                        // cannot capture your own pieces
                        return false;
                }
            }// lower left
        }// left
        // Left
        else
        {
            // upper left
            if(lv_RowStart < RowEnd)
            {
                lv_Start = lv_Start->GetLeft()->GetLeft()->GetTop();
                if(lv_Start->GetPiece() == nullptr)
                {
                    KnightMoveIsCheck(VerifiedMove,false,
                        lv_MoveFrom, lv_Start, PieceMakingMove);
                    return true;
                }
                else
                {
                    if(lv_Start->GetPiece()->GetIsWhitePiece() != MoveByWhite)
                    {
                        KnightMoveIsCheck(VerifiedMove,true,
                            lv_MoveFrom, lv_Start, PieceMakingMove);
                        return true;
                        return true;
                    }
                    else
                        // cannot capture your own pieces
                        return false;
                }
            }
            // lower right
            else
            {
                lv_Start = lv_Start->GetLeft()->GetLeft()->GetBottom();
                if(lv_Start->GetPiece() == nullptr)
                {
                    KnightMoveIsCheck(VerifiedMove,false,
                      lv_MoveFrom, lv_Start, PieceMakingMove);
                    return true;
                }
                else
                {
                    if(lv_Start->GetPiece()->GetIsWhitePiece() != MoveByWhite)
                    {
                        KnightMoveIsCheck(VerifiedMove,true,
                            lv_MoveFrom, lv_Start, PieceMakingMove);
                        return true;
                    }
                    else
                        // cannot capture your own pieces
                        return false;
                }
            }// lower right
        }// right
    }// horizontal L

    //********************************************************************************
    //              VERTICAL L
    //********************************************************************************
    
    // vertical L
    if(std::abs(RowEnd - lv_RowStart) == 2 && std::abs(ColumnEnd - lv_ColumnStart) == 1)
    {
        //upper vertical
        if(lv_RowStart < RowEnd)
        {
            // upper vertical right
            if(lv_ColumnStart < ColumnEnd)
            {
                lv_Start = lv_Start->GetTop()->GetTop()->GetRight();
                if(lv_Start->GetPiece() == nullptr)
                {
                    KnightMoveIsCheck(VerifiedMove,false,
                lv_MoveFrom, lv_Start, PieceMakingMove);
                    return true;
                }
                else
                {
                    if(lv_Start->GetPiece()->GetIsWhitePiece() != MoveByWhite)
                    {
                        KnightMoveIsCheck(VerifiedMove,true,
                            lv_MoveFrom, lv_Start, PieceMakingMove);
                        return true;
                    }
                    else
                        // cannot capture your own pieces
                        return false;
                }
            }
            // upper vertical left
            else
            {
                lv_Start = lv_Start->GetTop()->GetTop()->GetLeft();
                if(lv_Start->GetPiece() == nullptr)
                {
                    KnightMoveIsCheck(VerifiedMove,false,
                        lv_MoveFrom, lv_Start, PieceMakingMove);
                    return true;
                }
                else
                {
                    if(lv_Start->GetPiece()->GetIsWhitePiece() != MoveByWhite)
                    {
                        KnightMoveIsCheck(VerifiedMove,true,
                         lv_MoveFrom, lv_Start, PieceMakingMove);
                        return true;
                    }
                    else
                        // cannot capture your own pieces
                        return false;
                }
            }
        }// upper vertical L
        // lower vertical L
        else
        {
            // lower vertical right
            if(lv_ColumnStart < ColumnEnd)
            {
                lv_Start = lv_Start->GetBottom()->GetBottom()->GetRight();
                if(lv_Start->GetPiece() == nullptr)
                {
                    KnightMoveIsCheck(VerifiedMove,false,
                        lv_MoveFrom, lv_Start, PieceMakingMove);
                    return true;
                }
                else
                {
                    if(lv_Start->GetPiece()->GetIsWhitePiece() != MoveByWhite)
                    {
                        KnightMoveIsCheck(VerifiedMove,true,
                        lv_MoveFrom, lv_Start, PieceMakingMove);
                        return true;
                    }
                    else
                        // cannot capture your own pieces
                        return false;
                }
            }
            // lower vertical left
            else
            {
                lv_Start = lv_Start->GetBottom()->GetBottom()->GetLeft();
                if(lv_Start->GetPiece() == nullptr)
                {
                    KnightMoveIsCheck(VerifiedMove,false,
                        lv_MoveFrom, lv_Start, PieceMakingMove);
                    return true;
                }
                else
                {
                    if(lv_Start->GetPiece()->GetIsWhitePiece() != MoveByWhite)
                    {
                        KnightMoveIsCheck(VerifiedMove,true,
                            lv_MoveFrom, lv_Start, PieceMakingMove);
                        return true;
                    }
                    else
                        // cannot capture your own pieces
                        return false;
                }
            }
        }// lower vertical L
    }
    else
    {
        std::cout<<"Not a knight move!"<<std::endl;
        return false;
    }
}

void Board::KnightMoveIsCheck(
    FMove& VerifiedMove,
    bool bMoveEndsInCapture,
    Square* MoveFrom,
    Square* MoveTo,
    Piece* PieceMakingMove)
{
    VerifiedMove.bIsCapture = bMoveEndsInCapture;
    VerifiedMove.MoveFrom = MoveFrom;
    VerifiedMove.MoveTo = MoveTo;
    VerifiedMove.PieceMove = PieceMakingMove;
    if(PieceMakingMove->GetIsWhitePiece())
    {
        if((std::abs(gv_SquareBlackKing->GetRow() - MoveTo->GetRow()) ==1 &&
            std::abs(gv_SquareBlackKing->GetColumn() - MoveTo->GetColumn()) ==2) ||
            (std::abs(gv_SquareBlackKing->GetRow() - MoveTo->GetRow()) ==2 &&
            std::abs(gv_SquareBlackKing->GetColumn() - MoveTo->GetColumn()) ==1))
        {
            std::cout<<"direct Check from knight"<<std::endl;
            gv_TPiecesGivingCheck.push_back(PieceMakingMove);
            VerifiedMove.bIsCheck = true;
            IsDiscoveryCheck(MoveFrom, MoveTo, PieceMakingMove);
            return;
        }
        else
        {
            VerifiedMove.bIsCheck = IsDiscoveryCheck(MoveFrom, MoveTo, PieceMakingMove);
            return;
        }
    }
    else
    {
        if((std::abs(gv_SquareWhiteKing->GetRow() - MoveTo->GetRow()) ==1 &&
         std::abs(gv_SquareWhiteKing->GetColumn() - MoveTo->GetColumn()) ==2) ||
        (std::abs(gv_SquareWhiteKing->GetRow() - MoveTo->GetRow()) ==2 &&
        std::abs(gv_SquareWhiteKing->GetColumn() - MoveTo->GetColumn()) ==1))
        {
            std::cout<<"direct Check from knight"<<std::endl;
            gv_TPiecesGivingCheck.push_back(PieceMakingMove);
            VerifiedMove.bIsCheck = true;
            IsDiscoveryCheck(MoveFrom, MoveTo, PieceMakingMove);
            return;
        }
        else
        {
            VerifiedMove.bIsCheck = IsDiscoveryCheck(MoveFrom, MoveTo, PieceMakingMove);
            return;
        }
    }
    
}

bool Board::VerifyKingMove(
    FMove& VerifiedMove,
    Piece* PieceMakingMove,
    int RowEnd,
    int ColumnEnd,
    bool MoveByWhite)
{
    Square* lv_Start = PieceMakingMove->GetSquare();
    Square* lv_MoveFrom = lv_Start;
    int lv_RowStart = lv_Start->GetRow();
    int lv_ColumnStart = lv_Start->GetColumn();
    // normal move
    if(lv_RowStart == RowEnd)
    {
        switch (lv_ColumnStart - ColumnEnd)
        {
            case 0:
                return false;
            case 1:
                // check left
                    if(lv_Start->GetLeft()->GetPiece() == nullptr)
                    {
                        if(!CheckIfSquareAttacked(lv_Start->GetLeft(), !MoveByWhite))
                        {
                            VerifiedMove.bIsCapture = false;
                            VerifiedMove.bIsCheck = IsDiscoveryCheck(lv_MoveFrom, lv_Start->GetLeft(), PieceMakingMove);
                            VerifiedMove.MoveFrom = lv_MoveFrom;
                            VerifiedMove.PieceMove = PieceMakingMove;
                            VerifiedMove.MoveTo = lv_Start->GetLeft();
                            return true;
                        }
                        else
                        {
                            std::cout<<"This square is defended!"<<std::endl;
                            return false;
                        }
                    }
                    else
                    {
                        if(lv_Start->GetLeft()->GetPiece()->GetIsWhitePiece() == MoveByWhite)
                            // cannot move through friendlies
                            return false;
                        else
                        {
                            if(!CheckIfSquareAttacked(lv_Start->GetLeft(), !MoveByWhite))
                            {
                                // not a defended piece
                                VerifiedMove.bIsCapture = true;
                                VerifiedMove.bIsCheck = IsDiscoveryCheck(lv_MoveFrom, lv_Start->GetLeft(), PieceMakingMove);
                                VerifiedMove.MoveFrom = lv_MoveFrom;
                                VerifiedMove.MoveTo = lv_Start->GetLeft();
                                VerifiedMove.PieceMove = PieceMakingMove;
                                return true;
                            }
                            else
                            {
                                std::cout<<"This square with piece is defended!"<<std::endl;
                                return false;
                            }
                        }
                    }
            case -1:
                    // check right
                    if(lv_Start->GetRight()->GetPiece() == nullptr)
                    {
                        if(!CheckIfSquareAttacked(lv_Start->GetRight(), !MoveByWhite))
                        {
                            VerifiedMove.bIsCapture = false;
                            VerifiedMove.bIsCheck = IsDiscoveryCheck(lv_MoveFrom, lv_Start->GetRight(), PieceMakingMove);
                            VerifiedMove.MoveFrom = lv_MoveFrom;
                            VerifiedMove.PieceMove = PieceMakingMove;
                            VerifiedMove.MoveTo = lv_Start->GetRight();
                            return true;
                        }
                        else
                        {
                            std::cout<<"This square is defended!"<<std::endl;
                            return false;
                        }
                    }
                    else
                    {
                        if(lv_Start->GetRight()->GetPiece()->GetIsWhitePiece() == MoveByWhite)
                            // cannot move through friendlies
                            return false;
                        else
                        {
                            if(!CheckIfSquareAttacked(lv_Start->GetRight(), !MoveByWhite))
                            {
                                // not a defended piece
                                VerifiedMove.bIsCapture = true;
                                VerifiedMove.bIsCheck = IsDiscoveryCheck(lv_MoveFrom, lv_Start->GetRight(), PieceMakingMove);
                                VerifiedMove.MoveFrom = lv_MoveFrom;
                                VerifiedMove.MoveTo = lv_Start->GetRight();
                                VerifiedMove.PieceMove = PieceMakingMove;
                                return true;
                            }
                            else
                            {
                                std::cout<<"This square with piece is defended!"<<std::endl;
                                return false;
                            }
                        }
                    }
                
                default:
                    return  false;
        }// switch
    }// rowstart == rowend
    if(lv_RowStart == RowEnd-1)
    {
        switch (lv_ColumnStart - ColumnEnd)
        {
            case 0:
                if(lv_Start->GetTop()->GetPiece() == nullptr)
                {
                    if(!CheckIfSquareAttacked(lv_Start->GetTop(), !MoveByWhite))
                    {
                        VerifiedMove.bIsCapture = false;
                        VerifiedMove.bIsCheck = IsDiscoveryCheck(lv_MoveFrom, lv_Start->GetTop(), PieceMakingMove);
                        VerifiedMove.MoveFrom = lv_MoveFrom;
                        VerifiedMove.PieceMove = PieceMakingMove;
                        VerifiedMove.MoveTo = lv_Start->GetTop();
                        return true;
                    }
                    else
                    {
                        std::cout<<"This square is defended!"<<std::endl;
                        return false;
                    }
                }
                else
                {
                    if(lv_Start->GetTop()->GetPiece()->GetIsWhitePiece() == MoveByWhite)
                        // cannot move through friendlies
                        return false;
                    else
                    {
                        if(!CheckIfSquareAttacked(lv_Start->GetTop(), !MoveByWhite))
                        {
                            // not a defended piece
                            VerifiedMove.bIsCapture = true;
                            VerifiedMove.bIsCheck = IsDiscoveryCheck(lv_MoveFrom, lv_Start->GetTop(), PieceMakingMove);
                            VerifiedMove.MoveFrom = lv_MoveFrom;
                            VerifiedMove.MoveTo = lv_Start->GetTop();
                            VerifiedMove.PieceMove = PieceMakingMove;
                            return true;
                        }
                        else
                        {
                            std::cout<<"This square with piece is defended!"<<std::endl;
                            return false;
                        }
                    }
                }
            case 1:
                // check topleft
                    if(lv_Start->GetTopLeft()->GetPiece() == nullptr)
                    {
                        if(!CheckIfSquareAttacked(lv_Start->GetTopLeft(), !MoveByWhite))
                        {
                            VerifiedMove.bIsCapture = false;
                            VerifiedMove.bIsCheck = IsDiscoveryCheck(lv_MoveFrom, lv_Start->GetTopLeft(), PieceMakingMove);
                            VerifiedMove.MoveFrom = lv_MoveFrom;
                            VerifiedMove.PieceMove = PieceMakingMove;
                            VerifiedMove.MoveTo = lv_Start->GetTopLeft();
                            return true;
                        }
                        else
                        {
                            std::cout<<"This square is defended!"<<std::endl;
                            return false;
                        }
                    }
                    else
                    {
                        if(lv_Start->GetTopLeft()->GetPiece()->GetIsWhitePiece() == MoveByWhite)
                            // cannot move through friendlies
                            return false;
                        else
                        {
                            if(!CheckIfSquareAttacked(lv_Start->GetTopLeft(), !MoveByWhite))
                            {
                                // not a defended piece
                                VerifiedMove.bIsCapture = true;
                                VerifiedMove.bIsCheck = IsDiscoveryCheck(lv_MoveFrom, lv_Start->GetTopLeft(), PieceMakingMove);
                                VerifiedMove.MoveFrom = lv_MoveFrom;
                                VerifiedMove.MoveTo = lv_Start->GetTopLeft();
                                VerifiedMove.PieceMove = PieceMakingMove;
                                return true;
                            }
                            else
                            {
                                std::cout<<"This square with piece is defended!"<<std::endl;
                                return false;
                            }
                        }
                    }
            case -1:
                    // check right
                    if(lv_Start->GetTopRight()->GetPiece() == nullptr)
                    {
                        if(!CheckIfSquareAttacked(lv_Start->GetTopRight(), !MoveByWhite))
                        {
                            VerifiedMove.bIsCapture = false;
                            VerifiedMove.bIsCheck = IsDiscoveryCheck(lv_MoveFrom, lv_Start->GetTopRight(), PieceMakingMove);
                            VerifiedMove.MoveFrom = lv_MoveFrom;
                            VerifiedMove.PieceMove = PieceMakingMove;
                            VerifiedMove.MoveTo = lv_Start->GetTopRight();
                            return true;
                        }
                        else
                        {
                            std::cout<<"This square is defended!"<<std::endl;
                            return false;
                        }
                    }
                    else
                    {
                        if(lv_Start->GetTopRight()->GetPiece()->GetIsWhitePiece() == MoveByWhite)
                            // cannot move through friendlies
                            return false;
                        else
                        {
                            if(!CheckIfSquareAttacked(lv_Start->GetTopRight(), !MoveByWhite))
                            {
                                // not a defended piece
                                VerifiedMove.bIsCapture = true;
                                VerifiedMove.bIsCheck = IsDiscoveryCheck(lv_MoveFrom, lv_Start->GetTopRight(), PieceMakingMove);
                                VerifiedMove.MoveFrom = lv_MoveFrom;
                                VerifiedMove.MoveTo = lv_Start->GetTopRight();
                                VerifiedMove.PieceMove = PieceMakingMove;
                                return true;
                            }
                            else
                            {
                                std::cout<<"This square with piece is defended!"<<std::endl;
                                return false;
                            }
                        }
                    }
                
                default:
                    return  false;
        }// switch
    }// rowstart == rowend - 1
    if(lv_RowStart == (RowEnd + 1))
    {
        switch (lv_ColumnStart - ColumnEnd)
        {
            case 0:
                if(lv_Start->GetBottom()->GetPiece() == nullptr)
                {
                    if(!CheckIfSquareAttacked(lv_Start->GetBottom(), !MoveByWhite))
                    {
                        VerifiedMove.bIsCapture = false;
                        VerifiedMove.bIsCheck = IsDiscoveryCheck(lv_MoveFrom, lv_Start->GetBottom(), PieceMakingMove);
                        VerifiedMove.MoveFrom = lv_MoveFrom;
                        VerifiedMove.PieceMove = PieceMakingMove;
                        VerifiedMove.MoveTo = lv_Start->GetBottom();
                        return true;
                    }
                    else
                    {
                        std::cout<<"This square is defended!"<<std::endl;
                        return false;
                    }
                }
                else
                {
                    if(lv_Start->GetBottom()->GetPiece()->GetIsWhitePiece() == MoveByWhite)
                        // cannot move through friendlies
                        return false;
                    else
                    {
                        if(!CheckIfSquareAttacked(lv_Start->GetBottom(), !MoveByWhite))
                        {
                            // not a defended piece
                            VerifiedMove.bIsCapture = true;
                            VerifiedMove.bIsCheck = IsDiscoveryCheck(lv_MoveFrom, lv_Start->GetBottom(), PieceMakingMove);
                            VerifiedMove.MoveFrom = lv_MoveFrom;
                            VerifiedMove.MoveTo = lv_Start->GetBottom();
                            VerifiedMove.PieceMove = PieceMakingMove;
                            return true;
                        }
                        else
                        {
                            std::cout<<"This square with piece is defended!"<<std::endl;
                            return false;
                        }
                    }
                }
            case 1:
                // check bottomleft
                    if(lv_Start->GetBottomLeft()->GetPiece() == nullptr)
                    {
                        if(!CheckIfSquareAttacked(lv_Start->GetBottomLeft(), !MoveByWhite))
                        {
                            VerifiedMove.bIsCapture = false;
                            VerifiedMove.bIsCheck = IsDiscoveryCheck(lv_MoveFrom, lv_Start->GetBottomLeft(), PieceMakingMove);
                            VerifiedMove.MoveFrom = lv_MoveFrom;
                            VerifiedMove.PieceMove = PieceMakingMove;
                            VerifiedMove.MoveTo = lv_Start->GetBottomLeft();
                            return true;
                        }
                        else
                        {
                            std::cout<<"This square is defended!"<<std::endl;
                            return false;
                        }
                    }
                    else
                    {
                        if(lv_Start->GetBottomLeft()->GetPiece()->GetIsWhitePiece() == MoveByWhite)
                            // cannot move through friendlies
                            return false;
                        else
                        {
                            if(!CheckIfSquareAttacked(lv_Start->GetBottomLeft(), !MoveByWhite))
                            {
                                // not a defended piece
                                VerifiedMove.bIsCapture = true;
                                VerifiedMove.bIsCheck = IsDiscoveryCheck(lv_MoveFrom, lv_Start->GetBottomLeft(), PieceMakingMove);
                                VerifiedMove.MoveFrom = lv_MoveFrom;
                                VerifiedMove.MoveTo = lv_Start->GetBottomLeft();
                                VerifiedMove.PieceMove = PieceMakingMove;
                                return true;
                            }
                            else
                            {
                                std::cout<<"This square is defended!"<<std::endl;
                                return false;
                            }
                        }
                    }
            case -1:
                    // check bottom right
                    if(lv_Start->GetBottomRight()->GetPiece() == nullptr)
                    {
                        if(!CheckIfSquareAttacked(lv_Start->GetBottomRight(), !MoveByWhite))
                        {
                            VerifiedMove.bIsCapture = false;
                            VerifiedMove.bIsCheck = IsDiscoveryCheck(lv_MoveFrom, lv_Start->GetBottomRight(), PieceMakingMove);
                            VerifiedMove.MoveFrom = lv_MoveFrom;
                            VerifiedMove.PieceMove = PieceMakingMove;
                            VerifiedMove.MoveTo = lv_Start->GetBottomRight();
                            return true;
                        }
                        else
                        {
                            std::cout<<"This square is defended!"<<std::endl;
                            return false;
                        }
                    }
                    else
                    {
                        if(lv_Start->GetBottomRight()->GetPiece()->GetIsWhitePiece() == MoveByWhite)
                            // cannot move through friendlies
                            return false;
                        else
                        {
                            if(!CheckIfSquareAttacked(lv_Start->GetBottomRight(), !MoveByWhite))
                            {
                                // not a defended piece
                                VerifiedMove.bIsCapture = true;
                                VerifiedMove.bIsCheck = IsDiscoveryCheck(lv_MoveFrom, lv_Start->GetBottomRight(), PieceMakingMove);
                                VerifiedMove.MoveFrom = lv_MoveFrom;
                                VerifiedMove.MoveTo = lv_Start->GetBottomRight();
                                VerifiedMove.PieceMove = PieceMakingMove;
                                return true;
                            }
                            else
                            {
                                std::cout<<"This square with piece is defended!"<<std::endl;
                                return false;
                            }
                        }
                    }
                
                default:
                    return  false;
        }// switch
    }
    return false;
}

bool Board::CheckIfSquareAttacked(
    Square* SquareToCheck,
    bool IsAttackedByWhite)
{
    Square* OriginalSquare = SquareToCheck;
    // ***************************************************************************
    // check diagonals for queens and bishops
    // ***************************************************************************
    // 
    // top left diagonal
    while (SquareToCheck->GetTopLeft() != nullptr)
    {
        SquareToCheck = SquareToCheck->GetTopLeft();
        if(SquareToCheck->GetPiece() != nullptr)
        {
            if(SquareToCheck->GetPiece()->GetPieceType() == PieceName::E_Bishop ||
                SquareToCheck->GetPiece()->GetPieceType() == PieceName::E_Queen)
            {
                if(SquareToCheck->GetPiece()->GetIsWhitePiece() == IsAttackedByWhite)
                {
                    return true;
                }
                else
                    // blocked by own bishop or queen
                    break;
            }
            else
            {
                // no need to look further on the diagonal, it is blocked
                break;
            }
        }
    }// while top left
    SquareToCheck = OriginalSquare;
    while(SquareToCheck->GetTopRight() != nullptr)
    {
                SquareToCheck = SquareToCheck->GetTopRight();
                if(SquareToCheck->GetPiece() != nullptr)
                {
                    if(SquareToCheck->GetPiece()->GetPieceType() == PieceName::E_Bishop ||
                        SquareToCheck->GetPiece()->GetPieceType() == PieceName::E_Queen)
                    {
                        if(SquareToCheck->GetPiece()->GetIsWhitePiece() == IsAttackedByWhite)
                        {
                            return true;
                        }
                        else
                            // blocked by own bishop or queen
                            break;
                    }
                    else
                    {
                        // no need to look further on the diagonal, it is blocked
                        break;
                    }
                }
    }// top right while
    SquareToCheck = OriginalSquare;
    while (SquareToCheck->GetBottomLeft() != nullptr)
    {
        SquareToCheck = SquareToCheck->GetBottomLeft();
        if(SquareToCheck->GetPiece() != nullptr)
        {
            if(SquareToCheck->GetPiece()->GetPieceType() == PieceName::E_Bishop ||
                SquareToCheck->GetPiece()->GetPieceType() == PieceName::E_Queen)
            {
                if(SquareToCheck->GetPiece()->GetIsWhitePiece() == IsAttackedByWhite)
                {
                    return true;
                }
                else
                    // blocked by own bishop or queen
                    break;
            }
            else
            {
                // no need to look further on the diagonal, it is blocked
                break;
            }
        }
    }// bottom left while
    SquareToCheck = OriginalSquare;
    while (SquareToCheck->GetBottomRight())
    {
        SquareToCheck = SquareToCheck->GetBottomRight();
        if(SquareToCheck->GetPiece() != nullptr)
        {
            if(SquareToCheck->GetPiece()->GetPieceType() == PieceName::E_Bishop ||
                SquareToCheck->GetPiece()->GetPieceType() == PieceName::E_Queen)
            {
                if(SquareToCheck->GetPiece()->GetIsWhitePiece() == IsAttackedByWhite)
                {
                    return true;
                }
                else
                    // blocked by own bishop or queen
                    break;
            }
            else
            {
                // no need to look further on the diagonal, it is blocked
                break;
            }
        }
    }// bottom right

    // ***************************************************************************
    // Check vertical and horizontal for rooks and queens
    // ***************************************************************************

    SquareToCheck = OriginalSquare;
    while(SquareToCheck->GetRight() != nullptr)
    {
        SquareToCheck = SquareToCheck->GetRight();
        if(SquareToCheck->GetPiece() != nullptr)
        {
            if(SquareToCheck->GetPiece()->GetPieceType() == PieceName::E_Rook ||
                SquareToCheck->GetPiece()->GetPieceType() == PieceName::E_Queen)
            {
                if(SquareToCheck->GetPiece()->GetIsWhitePiece() == IsAttackedByWhite)
                {
                    return true;
                }
                else
                {
                    // blocked by own rook or queen
                    break;
                }
            }
            else
            {
                // no need to look further on the diagonal, it is blocked
                break;
            }
        }
    }// while right
    SquareToCheck = OriginalSquare;
    while(SquareToCheck->GetLeft() != nullptr)
    {
        SquareToCheck = SquareToCheck->GetLeft();
        if(SquareToCheck->GetPiece() != nullptr)
        {
            if(SquareToCheck->GetPiece()->GetPieceType() == PieceName::E_Rook ||
                SquareToCheck->GetPiece()->GetPieceType() == PieceName::E_Queen)
            {
                if(SquareToCheck->GetPiece()->GetIsWhitePiece() == IsAttackedByWhite)
                {
                    return true;
                }
                else
                {
                    // blocked by own rook or queen
                    break;
                }
            }
            else
            {
                // no need to look further on the diagonal, it is blocked
                break;
            }
        }
    }// while left
    SquareToCheck = OriginalSquare;
    while(SquareToCheck->GetTop() != nullptr)
    {
        SquareToCheck = SquareToCheck->GetTop();
        if(SquareToCheck->GetPiece() != nullptr)
        {
            if(SquareToCheck->GetPiece()->GetPieceType() == PieceName::E_Rook ||
                SquareToCheck->GetPiece()->GetPieceType() == PieceName::E_Queen)
            {
                if(SquareToCheck->GetPiece()->GetIsWhitePiece() == IsAttackedByWhite)
                {
                    return true;
                }
                else
                {
                    // blocked by own rook or queen
                    break;
                }
            }
            else
            {
                // no need to look further on the diagonal, it is blocked
                break;
            }
        }
    }// while top
    SquareToCheck = OriginalSquare;
    while(SquareToCheck->GetBottom() != nullptr)
    {
        SquareToCheck = SquareToCheck->GetBottom();
        if(SquareToCheck->GetPiece() != nullptr)
        {
            if(SquareToCheck->GetPiece()->GetPieceType() == PieceName::E_Rook ||
                SquareToCheck->GetPiece()->GetPieceType() == PieceName::E_Queen)
            {
                if(SquareToCheck->GetPiece()->GetIsWhitePiece() == IsAttackedByWhite)
                {
                    return true;
                }
                else
                {
                    // blocked by own rook or queen
                    break;
                }
            }
            else
            {
                // no need to look further on the diagonal, it is blocked
                break;
            }
        }
    }// while bottom

    // ***************************************************************************
    // Check for pawns
    // ***************************************************************************
    SquareToCheck = OriginalSquare;
    if(IsAttackedByWhite)
    {
        if(SquareToCheck->GetBottomLeft() != nullptr)
        {
            if(SquareToCheck->GetBottomLeft()->GetPiece() != nullptr)
                if(SquareToCheck->GetBottomLeft()->GetPiece()->GetPieceType() == PieceName::E_Pawn &&
                    SquareToCheck->GetBottomLeft()->GetPiece()->GetIsWhitePiece() == true)
                {
                    return true;
                }
        }
        if(SquareToCheck->GetBottomRight() != nullptr)
        {
            if(SquareToCheck->GetBottomRight()->GetPiece() != nullptr)
                if(SquareToCheck->GetBottomRight()->GetPiece()->GetPieceType() == PieceName::E_Pawn &&
                    SquareToCheck->GetBottomRight()->GetPiece()->GetIsWhitePiece() == true)
                {
                    return true;
                }
        }
    }
    else
    {
        if(SquareToCheck->GetTopLeft() != nullptr)
        {
            if(SquareToCheck->GetTopLeft()->GetPiece() != nullptr)
                if(SquareToCheck->GetTopLeft()->GetPiece()->GetPieceType() == PieceName::E_Pawn &&
                    SquareToCheck->GetTopLeft()->GetPiece()->GetIsWhitePiece() == false)
                {
                    return true;
                }
        }
        if(SquareToCheck->GetTopRight() != nullptr)
        {
            if(SquareToCheck->GetTopRight()->GetPiece() != nullptr)
                if(SquareToCheck->GetTopRight()->GetPiece()->GetPieceType() == PieceName::E_Pawn &&
                    SquareToCheck->GetTopRight()->GetPiece()->GetIsWhitePiece() == true)
                {
                    return true;
                }
        }
    }
    // ***************************************************************************
    // Check for King
    // ***************************************************************************
    if(IsAttackedByWhite)
    {
        if((std::abs(gv_SquareWhiteKing->GetRow() - SquareToCheck->GetRow()) == 1 &&
            std::abs(gv_SquareWhiteKing->GetColumn() - SquareToCheck->GetColumn()) <= 1 ) ||
            (gv_SquareWhiteKing->GetRow() == SquareToCheck->GetRow() &&
                std::abs(gv_SquareWhiteKing->GetColumn() - SquareToCheck->GetColumn()) == 1))
        {
            return true;
        }
    }
    else
    {
        if((std::abs(gv_SquareBlackKing->GetRow() - SquareToCheck->GetRow()) == 1 &&
    std::abs(gv_SquareBlackKing->GetColumn() - SquareToCheck->GetColumn()) <= 1 ) ||
    (gv_SquareBlackKing->GetRow() == SquareToCheck->GetRow() &&
        std::abs(gv_SquareBlackKing->GetColumn() - SquareToCheck->GetColumn()) == 1))
        {
            return true;
        }
    }
    // ***************************************************************************
    // Check for Knight
    // ***************************************************************************
    if(IsAttackedByWhite)
    {
        for(int i = 0; i<16; ++i)
        {
            if(WhitePieces[i].GetPieceType() == E_Knight)
            {
                int lv_row = WhitePieces[i].GetSquare()->GetRow();
                int lv_column = WhitePieces[i].GetSquare()->GetColumn();
                if( (std::abs(SquareToCheck->GetRow() - lv_row) == 1 && std::abs(SquareToCheck->GetColumn() - lv_column) ==2 )
                    || (std::abs(SquareToCheck->GetRow() - lv_row )==2 && std::abs(SquareToCheck->GetColumn() - lv_column) == 1) )
                {
                    return true;
                }
            }
        }
    }
    else
    {
        // 16 == size of array
        for(int i = 0; i<16; ++i)
        {
            if(BlackPieces[i].GetPieceType() == E_Knight)
            {
                int lv_row = BlackPieces[i].GetSquare()->GetRow();
                int lv_column = BlackPieces[i].GetSquare()->GetColumn();
                if( (std::abs(SquareToCheck->GetRow() - lv_row) == 1 && std::abs(SquareToCheck->GetColumn() - lv_column) ==2 )
                    || (std::abs(SquareToCheck->GetRow() - lv_row )==2 && std::abs(SquareToCheck->GetColumn() - lv_column) == 1) )
                {
                    return true;
                }
            }
        }
    }
    return false;
}

bool Board::IsDiscoveryCheck(Square* MoveFrom,
    Square* MoveTo,
    Piece* PieceMakingMove)
{
    int lv_Row, lv_Column;
    int lv_KingRow, lv_KingColumn;
    Square* lv_KingSquare;
    lv_Row = MoveFrom->GetRow();
    lv_Column = MoveFrom->GetColumn();
    int lv_ToRow = MoveTo->GetRow();
    int lv_ToColumn = MoveTo->GetColumn();
    if(PieceMakingMove->GetIsWhitePiece())
    {
        lv_KingSquare = gv_SquareBlackKing;
        lv_KingColumn = gv_SquareBlackKing->GetColumn();
        lv_KingRow = gv_SquareBlackKing->GetRow();
    }
    else
    {
        lv_KingSquare = gv_SquareWhiteKing;
        lv_KingColumn = gv_SquareWhiteKing->GetColumn();
        lv_KingRow = gv_SquareWhiteKing->GetRow();
    }
        if(lv_Row == lv_KingRow)
        {
            if(lv_ToRow == lv_Row)
            {
                if(lv_Column < lv_KingColumn)
                {
                    // not in between
                    if(!(lv_ToColumn< lv_KingColumn && lv_Column < lv_ToColumn))
                    {
                        Square* S = lv_KingSquare;
                        while (S->GetLeft() != nullptr)
                        {
                            S = S->GetLeft();
                            // dont check piece to be moved
                            if(S != MoveFrom)
                            {
                                if(S->GetPiece() != nullptr)
                                {
                                    if(S->GetPiece()->GetIsWhitePiece() == PieceMakingMove->GetIsWhitePiece())
                                    {
                                        if(S->GetPiece()->GetPieceType() == PieceName::E_Rook ||
                                            S->GetPiece()->GetPieceType() == PieceName::E_Queen )
                                        {
                                            std::cout<<"discovery check by rook or queen LEFT"<<std::endl;
                                            gv_TPiecesGivingCheck.push_back(S->GetPiece());
                                            return true;
                                        }
                                        else
                                        {
                                            std::cout<<"Left of king blocked for discovery"<<std::endl;
                                            break;
                                        }
                                    }
                                    else
                                    {
                                        std::cout<<"Left of king blocked for discovery"<<std::endl;
                                        break;
                                    }
                                }
                            }
                        }//while
                    }
                }
                else
                {
                    // not in between
                    if( !(lv_ToColumn > lv_KingColumn && lv_ToColumn<lv_Column))
                    {
                        Square* S = lv_KingSquare;
                        while (S->GetRight() != nullptr )
                        {
                            S = S->GetRight();
                            if(S != MoveFrom)
                            {
                                if(S->GetPiece() != nullptr)
                                {
                                    if(S->GetPiece()->GetIsWhitePiece() == PieceMakingMove->GetIsWhitePiece())
                                    {
                                        if(S->GetPiece()->GetPieceType() == PieceName::E_Rook ||
                                            S->GetPiece()->GetPieceType() == PieceName::E_Queen )
                                        {
                                            std::cout<<"discovery check by rook or queen RIGHT"<<std::endl;
                                            gv_TPiecesGivingCheck.push_back(S->GetPiece());
                                            return true;
                                        }
                                        else
                                        {
                                            std::cout<<"right of king blocked for discovery"<<std::endl;
                                            break;
                                        }
                                    }
                                    else
                                    {
                                        std::cout<<"right of king blocked for discovery"<<std::endl;
                                        break;
                                    }
                                }
                            }
                        }//while
                    }
                }
            }// moverow on same row
            else
            {
                if(lv_Column < lv_KingColumn)
                {
                    Square* S = lv_KingSquare;
                    while (S->GetLeft() != nullptr)
                    {
                        S = S->GetLeft();
                        if(S != MoveFrom)
                        {
                            if(S->GetPiece() != nullptr)
                            {
                                if(S->GetPiece()->GetIsWhitePiece()== PieceMakingMove->GetIsWhitePiece())
                                {
                                    if(S->GetPiece()->GetPieceType() == PieceName::E_Rook ||
                                        S->GetPiece()->GetPieceType() == PieceName::E_Queen )
                                    {
                                        std::cout<<"discovery check by rook or queen LEFT"<<std::endl;
                                        gv_TPiecesGivingCheck.push_back(S->GetPiece());
                                        return true;
                                    }
                                    else
                                    {
                                        std::cout<<"Left of king blocked for discovery"<<std::endl;
                                        break;
                                    }
                                }
                                else
                                {
                                    std::cout<<"Left of king blocked for discovery"<<std::endl;
                                    break;
                                }
                            }
                        }
                    }//while
                }
                else
                {
                    Square* S = lv_KingSquare;
                    while (S->GetRight() != nullptr )
                    {
                        S = S->GetRight();
                        if(S != MoveFrom)
                        {
                            if(S->GetPiece() != nullptr)
                            {
                                if(S->GetPiece()->GetIsWhitePiece()== PieceMakingMove->GetIsWhitePiece())
                                {
                                    if(S->GetPiece()->GetPieceType() == PieceName::E_Rook ||
                                        S->GetPiece()->GetPieceType() == PieceName::E_Queen )
                                    {
                                        std::cout<<"discovery check by rook or queen RIGHT"<<std::endl;
                                        gv_TPiecesGivingCheck.push_back(S->GetPiece());
                                        return true;
                                    }
                                    else
                                    {
                                        std::cout<<"right of king blocked for discovery"<<std::endl;
                                        break;
                                    }
                                }
                                else
                                {
                                    std::cout<<"right of king blocked for discovery"<<std::endl;
                                    break;
                                }
                            }
                        }
                    }//while
                }
            }// move not on same row
        }// rowstart == rowking
        if(lv_Column == lv_KingColumn)
        {
            if(lv_Column == lv_ToColumn)
            {
                if(lv_Row < lv_KingRow)
                {
                    // not inbetween
                    if(!(lv_Row < lv_ToRow && lv_KingRow < lv_ToRow))
                    {
                        Square* S = lv_KingSquare;
                        while (S->GetBottom() != nullptr )
                        {
                            S = S->GetBottom();
                            if(S != MoveFrom)
                            {
                                if(S->GetPiece() != nullptr)
                                {
                                    if(S->GetPiece()->GetIsWhitePiece()== PieceMakingMove->GetIsWhitePiece())
                                    {
                                        if(S->GetPiece()->GetPieceType() == PieceName::E_Rook ||
                                            S->GetPiece()->GetPieceType() == PieceName::E_Queen )
                                        {
                                            std::cout<<"discovery check by rook or queen BTM"<<std::endl;
                                            gv_TPiecesGivingCheck.push_back(S->GetPiece());
                                            return true;
                                        }
                                        else
                                        {
                                            std::cout<<"bottom of king blocked for discovery"<<std::endl;
                                            break;
                                        }
                                    }
                                    else
                                    {
                                        std::cout<<"bottom of king blocked for discovery"<<std::endl;
                                        break;
                                    }
                                }
                            }
                        }//while
                    }
                }// row < kingrow
                else
                {
                    // not in between
                    if( !(lv_ToRow > lv_KingRow && lv_ToRow < lv_Row))
                    {
                        Square* S = lv_KingSquare;
                        while (S->GetTop() != nullptr )
                        {
                            S = S->GetTop();
                            if(S != MoveFrom)
                            {
                                if(S->GetPiece() != nullptr)
                                {
                                    if(S->GetPiece()->GetIsWhitePiece()== PieceMakingMove->GetIsWhitePiece())
                                    {
                                        if(S->GetPiece()->GetPieceType() == PieceName::E_Rook ||
                                            S->GetPiece()->GetPieceType() == PieceName::E_Queen )
                                        {
                                            std::cout<<"discovery check by rook or queen TOP"<<std::endl;
                                            gv_TPiecesGivingCheck.push_back(S->GetPiece());
                                            return true;
                                        }
                                        else
                                        {
                                            std::cout<<"top of king blocked for discovery"<<std::endl;
                                            break;
                                        }
                                    }
                                    else
                                    {
                                        std::cout<<"top of king blocked for discovery"<<std::endl;
                                        break;
                                    }
                                }
                            }
                        }//while
                    }
                }
            }// Columnto == ColumnFrom
            else
            {
                if(lv_Row < lv_KingRow)
                {
                    Square* S = lv_KingSquare;
                    while (S->GetBottom() != nullptr )
                    {
                        S = S->GetBottom();
                        if(S != MoveFrom)
                        {
                            if(S->GetPiece() != nullptr)
                            {
                                if(S->GetPiece()->GetIsWhitePiece()== PieceMakingMove->GetIsWhitePiece())
                                {
                                    if(S->GetPiece()->GetPieceType() == PieceName::E_Rook ||
                                        S->GetPiece()->GetPieceType() == PieceName::E_Queen )
                                    {
                                        std::cout<<"discovery check by rook or queen"<<std::endl;
                                        gv_TPiecesGivingCheck.push_back(S->GetPiece());
                                        return true;
                                    }
                                    else
                                    {
                                        std::cout<<"bottom of king blocked for discovery"<<std::endl;
                                        break;
                                    }
                                }
                                else
                                {
                                    std::cout<<"bottom of king blocked for discovery"<<std::endl;
                                    break;
                                }
                            }
                        }
                    }//while
                }
                else
                {
                    Square* S = lv_KingSquare;
                    while (S->GetTop() != nullptr )
                    {
                        S = S->GetTop();
                        if(S != MoveFrom)
                        {
                            if(S->GetPiece() != nullptr)
                            {
                                if(S->GetPiece()->GetIsWhitePiece()== PieceMakingMove->GetIsWhitePiece())
                                {
                                    if(S->GetPiece()->GetPieceType() == PieceName::E_Rook ||
                                        S->GetPiece()->GetPieceType() == PieceName::E_Queen )
                                    {
                                        std::cout<<"discovery check by rook or queen TOP"<<std::endl;
                                        gv_TPiecesGivingCheck.push_back(S->GetPiece());
                                        return true;
                                    }
                                    else
                                    {
                                        std::cout<<"Top of king blocked for discovery"<<std::endl;
                                        break;
                                    }
                                }
                                else
                                {
                                    std::cout<<"Top of king blocked for discovery"<<std::endl;
                                    break;
                                }
                            }
                        }
                    }//while
                }
            }
  
        }// columnstart == columnking
    if(std::abs(lv_Row - lv_KingRow) == std::abs(lv_Column - lv_KingColumn))
    {
        // top diagonal
        if(lv_KingRow > lv_Row)
        {
            if(lv_KingColumn > lv_Column)
            {
                Square* S = lv_KingSquare;
                while (S->GetTopRight() != nullptr )
                {
                    S = S->GetTopRight();
                    if(S != MoveFrom)
                    {
                        if(S->GetPiece() != nullptr)
                        {
                            if(S->GetPiece()->GetIsWhitePiece()== PieceMakingMove->GetIsWhitePiece())
                            {
                                if(S->GetPiece()->GetPieceType() == PieceName::E_Bishop ||
                                    S->GetPiece()->GetPieceType() == PieceName::E_Queen )
                                {
                                    std::cout<<"discovery check by bishop or queen TR"<<std::endl;
                                    gv_TPiecesGivingCheck.push_back(S->GetPiece());
                                    return true;
                                }
                                else
                                {
                                    std::cout<<"TR of king blocked for discovery"<<std::endl;
                                    break;
                                }
                            }
                            else
                            {
                                std::cout<<"TR of king blocked for discovery"<<std::endl;
                                break;
                            }
                        }
                    }
                }//while
            }// top right
            else
            {
                Square* S = lv_KingSquare;
                while (S->GetTopLeft() != nullptr )
                {
                    S = S->GetTopLeft();
                    if(S != MoveFrom)
                    {
                        if(S->GetPiece() != nullptr)
                        {
                            if(S->GetPiece()->GetIsWhitePiece()== PieceMakingMove->GetIsWhitePiece())
                            {
                                if(S->GetPiece()->GetPieceType() == PieceName::E_Bishop ||
                                    S->GetPiece()->GetPieceType() == PieceName::E_Queen )
                                {
                                    std::cout<<"discovery check by bishop or queen TL"<<std::endl;
                                    gv_TPiecesGivingCheck.push_back(S->GetPiece());
                                    return true;
                                }
                                else
                                {
                                    std::cout<<"TL of king blocked for discovery"<<std::endl;
                                    break;
                                }
                            }
                            else
                            {
                                std::cout<<"TL of king blocked for discovery"<<std::endl;
                                break;
                            }
                        }
                    }
                }//while
            }
        }// top diagonal; KingRow > Row
        else
        {
            if(lv_KingColumn > lv_Column)
            {
                Square* S = lv_KingSquare;
                while (S->GetBottomRight() != nullptr )
                {
                    S = S->GetBottomRight();
                    if(S != MoveFrom)
                    {
                        if(S->GetPiece() != nullptr)
                        {
                            if(S->GetPiece()->GetIsWhitePiece()== PieceMakingMove->GetIsWhitePiece())
                            {
                                if(S->GetPiece()->GetPieceType() == PieceName::E_Bishop ||
                                    S->GetPiece()->GetPieceType() == PieceName::E_Queen )
                                {
                                    std::cout<<"discovery check by bishop or queen BR"<<std::endl;
                                    gv_TPiecesGivingCheck.push_back(S->GetPiece());
                                    return true;
                                }
                                else
                                {
                                    std::cout<<"BR of king blocked for discovery"<<std::endl;
                                    break;
                                }
                            }
                            else
                            {
                                std::cout<<"BR of king blocked for discovery"<<std::endl;
                                break;
                            }
                        }
                    }
                }//while
            }//bottom right
            else
            {
                Square* S = lv_KingSquare;
                while (S->GetBottomLeft() != nullptr )
                {
                    S = S->GetBottomLeft();
                    if(S != MoveFrom)
                    {
                        if(S->GetPiece() != nullptr)
                        {
                            if(S->GetPiece()->GetIsWhitePiece()== PieceMakingMove->GetIsWhitePiece())
                            {
                                if(S->GetPiece()->GetPieceType() == PieceName::E_Bishop ||
                                    S->GetPiece()->GetPieceType() == PieceName::E_Queen )
                                {
                                    std::cout<<"discovery check by bishop or queen BL"<<std::endl;
                                    gv_TPiecesGivingCheck.push_back(S->GetPiece());
                                    return true;
                                }
                                else
                                {
                                    std::cout<<"BL of king blocked for discovery"<<std::endl;
                                    break;
                                }
                            }
                            else
                            {
                                std::cout<<"BL of king blocked for discovery"<<std::endl;
                                break;
                            }
                        }
                    }
                }//while
            }
        }// Bottom diagonal; KingRow < Row
    }//diagonal
    return false;
}

void Board::DoMove(FMove Move, bool& bIsMoveByWhite, bool& bIsPlayerInCheck)
{
    if(Move.bIsCapture)
    {
        // kill piece
        Move.MoveTo->GetPiece()->KillPiece();
    }
    // Remove old Piece Pointer and set new one
    Move.MoveTo->SetPiece(Move.PieceMove);
    // Empty start square
    Move.MoveFrom->SetPiece(nullptr);
    // Set new square for moved piece
    Move.PieceMove->SetSquare(Move.MoveTo);
    bIsMoveByWhite = !bIsMoveByWhite;
    bIsPlayerInCheck = Move.bIsCheck;
    return;
}

void Board::AIMove()
{
    std::cout<<"We do an AI move now"<<std::endl;
    return;
}

std::string Board::GetStringOfEnum(PieceName Type)
{
    return TEnumToString[Type];

}

void Board::PlayPGN()
{
    return;
}

void Board::Clear() {
    COORD topLeft  = { 0, 0 };
    HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO screen;
    DWORD written;

    GetConsoleScreenBufferInfo(console, &screen);
    FillConsoleOutputCharacterA(
        console, ' ', screen.dwSize.X * screen.dwSize.Y, topLeft, &written
    );
    FillConsoleOutputAttribute(
        console, FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_BLUE,
        screen.dwSize.X * screen.dwSize.Y, topLeft, &written
    );
    SetConsoleCursorPosition(console, topLeft);
}
