#include <cstdlib>
#include <ncurses.h>


bool gameOver;
const int width = 20, height = 20;
int x, y, FruitX, FruitY, score;
enum eDirection { STOP = 0, LEFT, RIGHT, UP, DOWN};
eDirection dir;


void Setup()
{
    initscr();
    clear();
    noecho();
    cbreak();
    curs_set(0);

    gameOver = false;
    dir = STOP;
    x = width / 2;
    y = height / 2;
    fruitX = (rand() % width) + 1;
    fruitY = (rand() % height) + 1;
    score = 0;
}

void Draw()
{
// snake head controlls up, down, left, right
// tail follows head
// fruit increase tails
// if the head hits the tail or the wall, you loose
    // system("clear");
    // for (int i = 0; i < width; i++) 
    //     cout << "#";
    // cout << endl;

    // for (int i = 0; i < height + 2; i++)
    // {
    //     for (int j = 0; j < width; j++)
    //     {
    //         if (j == 0)
    //             cout << "#";
    //         if (i == y && j == x)
    //             cout << "O";
    //         else if (i == fruitY && j == fruitX)
    //             cout << "F";
    //         else
    //             cout << " ";

    //         if (j == width-1)
    //             cout << "#";
    //     }
    //     cout << endl;
    // }
    
    // for (int i = 0; i < width + 2; i++) 
    //     cout << "#";
    // cout << endl;
}

void Input()
{

}

void Logic()
{

}

int main() 
{
    Setup();
    while (!gameOver)
    {
        Draw();
        Input();
        Logic();
        //Sleep(10); sleep(10);
    }
    

    return 0;
// }