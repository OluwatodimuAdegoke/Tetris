#pragma once
#include <vector>
#include <raylib.h>

using namespace std;

class Grid{
public:
    Grid();
    void Initialize();
    void Print();
    void Draw();
    int grid[20][10];
    bool IsCellOutside(int row, int column);
    bool IsCellEmpty(int row, int column);
    int ClearFullRows();

private:
    int numRows;
    int numCols;
    int cellSize;
    bool IsRowFull(int row);
    void ClearRow(int row);
    void MoveRowDown(int row, int numRows);
    vector<Color> colors;
};