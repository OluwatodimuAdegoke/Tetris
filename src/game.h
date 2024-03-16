#pragma once
#include "grid.h"
#include "blocks.cpp"

class Game{
    public:
        Game();
        void Draw();
        Block GetRandomBlock();
        std::vector<Block> GetAllBlocks();
        Grid grid;
        void HandleInput();
        void MoveBlockLeft();
        void MoveBlockRight();
        void MoveBlockDown();

    private:
        void RotateBlock();
        bool isBlockOutside();
        std::vector<Block> blocks;
        Block currentBlock;
        Block nextBlock;
};