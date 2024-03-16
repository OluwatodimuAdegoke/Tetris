#pragma once
#include "grid.h"
#include "blocks.cpp"

class Game{
    public:
        Game();
        void Draw();
        bool gameOver;
        Block GetRandomBlock();
        std::vector<Block> GetAllBlocks();
        Grid grid;
        void HandleInput();
        void MoveBlockLeft();
        void MoveBlockRight();
        void MoveBlockDown();

    private:
        bool BlockFits();
        void LockBlock();
        void RotateBlock();
        bool isBlockOutside();
        void Reset();
        std::vector<Block> blocks;
        Block currentBlock;
        Block nextBlock;
};