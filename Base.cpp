#include <iostream>
#include <vector>
using namespace std;

struct Cell
{
    bool is_wall{};
};

using Grid = vector<vector<Cell>>;

Grid Map(int width, int height) {
    Grid grid(height, vector<Cell>(width, {false}));

    // Borders walls
    for (int y = 0; y < height; ++y) {
        for (int x = 0; x < width; ++x) {
            if (x == 0 || y == 0 || x == width - 1 || y == height - 1) {
                grid[y][x].is_wall = true;
            }
        }
    }

    // Internal wall
    for (int x = 3; x < width - 3; ++x) {
        grid[height / 2][x].is_wall = true;
    }

    return grid;
}

void printMap(const Grid & grid) {
    for (const auto & row : grid) {
        for (const auto & cell : row) {
            std::cout << (cell.is_wall ? '#' : '.');
        }
        std::cout << '\n';
    }

}
int main(){
    Grid world = Map(20, 10);
    printMap(world);
    return 0;
}

