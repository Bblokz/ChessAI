#include <iostream>
#include <string>
#include <cwchar>
#include <locale>
#include <ostream>
#include <windows.h>

#include "Public/Board.h"

int main(int argc, char* argv[])
{
    Board GameBoard;
    //for(Piece p: GameBoard.WhitePieces)
       // std::cout<<p.GetDisplayCharacter()<<std::endl;
    //for(Piece b: GameBoard.BlackPieces)
      //  std::cout<<b.GetDisplayCharacter()<<std::endl;
   GameBoard.MainMenu();
   // GameBoard.Print();
    //GameBoard.printneigh();
    return 0;
}


// acces special characters
// _setmode(_fileno(stdout), _O_U16TEXT);