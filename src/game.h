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

    private:
        std::vector<Block> blocks;
        Block currentBlock;
        Block nextBlock;
};