#pragma once
#include <vector>
#include <map>
#include "position.h"
#include "colors.h"
using namespace std;

class Block{
    public:
        Block();
        void Move(int rows, int columns);
        std::vector<Position> GetCellPositions();
        void Rotate();
        void UndoRotation();
        int id;
        map<int, vector<Position>> cells;
        void Draw();
        
    private:
        int cellSize;
        int rotationState;
        vector<Color> colors;

        int rowOffset;
        int columnOffset;
};