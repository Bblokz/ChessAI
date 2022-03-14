#pragma once
#include "Square.h"
#include <string>
#include <vector>

#include "Piece.h"



enum PlayerID
{
    Human,
    CPU
};

/**
 * A collection of params required to execute a move, MoveFrom is needed to undo a move
 * @bIsCaputure: if the move results in capturing a piece
 * @bIsCheck: if the move results in putting the enemy's king in check
 * @PieceMove: The piece that is moved
 * @MoveTo: The square said piece is moved to
 * @MoveFrom: The square of the piece prior to move
 */
struct FMove
{
    bool bIsCapture;
    bool bIsCheck;
    Piece* PieceMove;
    Square* MoveTo;
    Square* MoveFrom;
};

class Board
{
public:
    Board();
    Square* GetSquareByIndex(int Index);

    // References the Square at given coordinates, returns  true if the square is found
    bool GetSquareByRowColumn(int row, int column, Square*& Square);

    // Print MainMenu
    void MainMenu();
    // Print the board
    void Print();

    void printneigh();

   // Array containing all pieces owned by White
   // no need to dynamically allocate, we destroy pieces by setting Type = Dead
   Piece WhitePieces[16];
   // Array containing all pieces owned by Black
   // no need to dynamically allocate, we destroy pieces by setting Type = Dead
   Piece BlackPieces[16];

private:
    // Array of ptr Squares, squares contain piece, if the piece is owned by white
    // ,if the piece is pinned and the coordinate
    Square TSquares[64];

    // Array of ptr Pieces, contains all pieces that are checking the king
    std::vector<Piece*>gv_TPiecesGivingCheck;

    //Used to construct all pointers from squares that lie next to eachother
    void ConstructSquarePointers();

    // Used in main menu input
    void MainMenuInput();
    //Start the Game
    void PlayGame();
    // Play chess vs an AI
    void DeterminePlayerPersonality( PlayerID P2);

   void Play();

    /**
     * @brief Prepares a move using player input.
     * @param bWhiteToMove: Whether the move is made by white.
     * @param bIsPlayerInCheck: Whether the player to move is in check.
     */
    void Playermove(
        bool& bWhiteToMove,
        bool& bIsPlayerInCheck);
    
    /**
     * @brief Returns if the move's coordinate is on the board or not. Always returns false on invalid input.
     * @param Input: String input provided by user..
     * @param PieceType: Returns the type of piece used in the move.
     * @param Row: Returns the row of the coordinate.
     * @param Column: Returns the column of the coordinate passed on.
     */ 
    bool VerifyCoordinate(
        std::string Input,
        PieceName& PieceType,
        int& Row,
        int& Column );

    /**
     * @return if the move is possible given the piece and coordinate.
     * This function loops through the array with pieces and for each matching type checks if it can move
     * to the given row and column (using a sub function), if so, the move is added to a dynamic array
     * on more than 1 candidate pieces for a move, this function will ask the player to select one.
     * @param IsWhite: If white makes this move.
     * @param Piece: The pieceType which makes the move.
     * @param Row: Row to which the piece moves.
     * @param Column: Column to which the piece moves.
     * @param FinalMove: Struct containing all move properties, is used if the move is valid.
     */ 
    bool VerifyMove(
        bool IsWhite,
        PieceName Piece,
        int Row,
        int Column,
        FMove& FinalMove);

    /**
    * @return If a queen can move from one given square to another.
    * @note This function does not account for the player being in check.
    * @param VerifiedMove: Move that can be used when verified by this function.
    * @param PieceMakingMove: Piece that is moved.
    * @param RowEnd: row of square where the move ends.
    * @param ColumnEnd: column of square where the move ends.
    * @param MoveByWhite: if white wants to make this move.
    */ 
    bool VerifyQueenMove(
        FMove& VerifiedMove,
        Piece* PieceMakingMove,
        int RowEnd,
        int ColumnEnd,
        bool MoveByWhite);

    /**
    * @return If a pawn can move from one given square to another.
    * @note This function does not account for the player being in check.
    * @param VerifiedMove: Move that can be used when verified by this function.
    * @param PieceMakingMove: Piece that is moved.
    * @param RowEnd: row of square where the move ends.
    * @param ColumnEnd: column of square where the move ends.
    * @param MoveByWhite: if white wants to make this move.
    */
    bool VerifyPawnMove(
        FMove& VerifiedMove,
        Piece* PieceMakingMove,
        int RowEnd,
        int ColumnEnd,
        bool MoveByWhite);

    /**
     * @return the verified move struct with all members and checks if the given move ends in check.
     * Also adds all units that give check due to this move to gv_TPiecesGivingCheck.
     * @param VerifiedMove: move struct for DoMove function.
     * @param bMoveEndsInCapture: sets member of move struct.
     * @param MoveFrom: sets member of move struct.
     * @param MoveTo: sets member of move struct.
     * @param PieceMakingMove: sets member of move struct.
     */ 
    void PawnMoveIsCheck(
        FMove& VerifiedMove,
        bool bMoveEndsInCapture,
        Square* MoveFrom,
        Square* MoveTo,
        Piece* PieceMakingMove);

    /**
     * @return If a bishop can move from one given square to another.
     * @note This function does not account for the player being in check.
     * @param VerifiedMove: Move that can be used when verified by this function.
     * @param PieceMakingMove: Piece that is moved.
     * @param RowEnd: Row of square where the move ends.
     * @param ColumnEnd: Column of square where the move ends.
     * @param MoveByWhite: If white wants to make this move.
     */ 
    bool VerifyBishopMove(
        FMove& VerifiedMove,
        Piece* PieceMakingMove,
        int RowEnd,
        int ColumnEnd,
        bool MoveByWhite);

    /**
     * @return the verified move struct with all members and checks if the given move ends in check.
     * Also adds all units that give check due to this move to gv_TPiecesGivingCheck.
     * @param VerifiedMove: Move struct for DoMove function.
     * @param bMoveEndsInCapture: Sets member of move struct.
     * @param MoveFrom: Sets member of move struct.
     * @param MoveTo: Sets member of move struct.
     * @param PieceMakingMove: Sets member of move struct.
     */ 
    void BishopMoveIsCheck(
        FMove& VerifiedMove,
        bool bMoveEndsInCapture,
        Square* MoveFrom,
        Square* MoveTo,
        Piece* PieceMakingMove);

    /**
     * @return if a rook can move from one given square to another.
     * @note This function does not account for the player being in check.
     * @param VerifiedMove: Move that can be used when verified by this function.
     * @param PieceMakingMove: Piece that is moved.
     * @param RowEnd: row of square where the move ends.
     * @param ColumnEnd: column of square where the move ends.
     * @param MoveByWhite: if white wants to make this move.
     */ 
    bool VerifyRookMove(
        FMove& VerifiedMove,
        Piece* PieceMakingMove,
        int RowEnd,
        int ColumnEnd,
        bool MoveByWhite);

    /**
     * @return the verified move struct with all members and checks if the given move ends in check.
     * Also adds all units that give check due to this move to gv_TPiecesGivingCheck.
     * @param VerifiedMove: move struct for DoMove function.
     * @param bMoveEndsInCapture: sets member of move struct.
     * @param MoveFrom: sets member of move struct.
     * @param MoveTo: sets member of move struct.
     * @param PieceMakingMove: sets member of move struct.
     */ 
    void RookMoveIsCheck(
        FMove& VerifiedMove,
        bool bMoveEndsInCapture,
        Square* MoveFrom,
        Square* MoveTo,
        Piece* PieceMakingMove);
    
    /**
     * @return if a knight can move from one given square to another
     * @note This function does not account for the player being in check
     * @param VerifiedMove: Move that can be used when verified by this function
     * @param PieceMakingMove: Piece that is moved
     * @param RowEnd: row of square where the move ends
     * @param ColumnEnd: column of square where the move ends
     * @param MoveByWhite: if white wants to make this move
     */ 
    bool VerifyKnightMove(
        FMove& VerifiedMove,
        Piece* PieceMakingMove,
        int RowEnd,
        int ColumnEnd,
        bool MoveByWhite);

    /**
     * @return the verified move struct with all members and checks if the given move ends in check.
     * Also adds all units that give check due to this move to gv_TPiecesGivingCheck.
     * @param VerifiedMove: move struct for DoMove function.
     * @param bMoveEndsInCapture: sets member of move struct.
     * @param MoveFrom: sets member of move struct.
     * @param MoveTo: sets member of move struct.
     * @param PieceMakingMove: sets member of move struct.
     */ 
    void KnightMoveIsCheck(
        FMove& VerifiedMove,
        bool bMoveEndsInCapture,
        Square* MoveFrom,
        Square* MoveTo,
        Piece* PieceMakingMove);

    /**
     * @return if a king can move from one given square to another. 
     * @param VerifiedMove: Move that can be used when verified by this function.
     * @param PieceMakingMove: Piece that is moved.
     * @param RowEnd: row of square where the move ends.
     * @param ColumnEnd: column of square where the move ends.
     * @param MoveByWhite: if white wants to make this move.
     */ 
    bool VerifyKingMove(
        FMove& VerifiedMove,
        Piece* PieceMakingMove,
        int RowEnd,
        int ColumnEnd,
        bool MoveByWhite);

    /**
     * @return if a square is attacked by any piece of the given bool-color.
     * @note This function is relatively expensive.
     * @param SquareToCheck: Square that is checked.
     * @param IsAttackedByWhite: if we check for white or black pieces attacking.
     */ 
    bool CheckIfSquareAttacked(
        Square* SquareToCheck,
        bool IsAttackedByWhite);

    /**
     * @return whether the combination of a piece moving from MoveFrom to MoveTo results in giving check.
     * by a piece that was behind the moved piece. If a piece gives discovery check then.
     * it is added into gv_TPiecesGivingCheck.
     * @param MoveFrom: Square the move starts, used to check alignment with enemy king.
     * @param MoveTo: Square the move ends, used to check if the moves ends blocking alignment.
     * @param PieceMakingMove: To check which color makes the move.
     */ 
    bool IsDiscoveryCheck(
        Square* MoveFrom,
        Square* MoveTo,
        Piece* PieceMakingMove);
    
    // @Param Move: move executed on the board
    // @Param bIsMoveByWhite: changed after the move is made
    // @Param bIsPlayerInCheck: changed if the move results in giving check 
    void DoMove(FMove Move, bool& bIsMoveByWhite, bool& bIsPlayerInCheck);
    void AIMove();

    // Array indexed by enum, provides the string of each Type
    std::string TEnumToString[7];
    // returns the string corresponding to the given enum Type
    std::string GetStringOfEnum(PieceName Type);
    
    // Maak bord met pgn
    void PlayPGN();

    PlayerID Player1, Player2;
    bool gv_Player1IsWhite;

    Square* gv_SquareWhiteKing;
    Square* gv_SquareBlackKing;

    bool gv_WhiteKingHasMoved, gv_BlackKingHasMoved;

    // Clear the console
    void Clear();



public:
    
};


