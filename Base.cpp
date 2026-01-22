//22-01-2026 updated code to include:
//A robot (R) with a position
//Simple sensor to measure distance to the nearest wall
//Sensing in 4 directions (up, down, left, right) 
//Prints sensor inputs to verify 

#include <iostream>
#include <vector>
using namespace std;

struct Cell 
{
    bool is_wall{};
};

using Grid = vector<vector<Cell>>;

struct Robot 
{
    int x;
    int y;
};

Grid Map(int width, int height) 
{
    Grid grid(height, vector<Cell>(width, {false}));

    // Borders
    for (int y = 0; y < height; ++y) 
    {
        for (int x = 0; x < width; ++x) {
            if (x == 0 || y == 0 || x == width - 1 || y == height - 1) 
            {
                grid[y][x].is_wall = true;
            }
        }
    }

    // Internal wall
    for (int x = 3; x < width - 3; ++x) 
    {
        grid[height / 2][x].is_wall = true;
    }

    return grid;
}

void printMap(const Grid & grid, const Robot & robot) 
{
    for (int y = 0; y < grid.size(); ++y) {
        for (int x = 0; x < grid[y].size(); ++x) 
        {
            if (robot.x == x && robot.y == y) 
            {
                cout << 'R';
            } 
            else 
            {
                cout << (grid[y][x].is_wall ? '#' : '.');
            }
        }
        cout << '\n';
    }
}

// Distance sensor
int sense(const Grid & grid, int start_x, int start_y, int dx, int dy) 
{
    int distance = 0;
    int x = start_x;
    int y = start_y;

    while (true) 
    {
        x += dx;
        y += dy;
        distance++;

        if (grid[y][x].is_wall) 
        {
            break;
        }
    }
    return distance;
}

int main() 
{
    Grid world = Map(20, 10);

    Robot robot{5, 3};

    printMap(world, robot);

    cout << "\nSensor readings:\n";
    cout << "Up:    " << sense(world, robot.x, robot.y, 0, -1) << endl;
    cout << "Down:  " << sense(world, robot.x, robot.y, 0, 1) << endl;
    cout << "Left:  " << sense(world, robot.x, robot.y, -1, 0) << endl;
    cout << "Right: " << sense(world, robot.x, robot.y, 1, 0) << endl;

    return 0;
}