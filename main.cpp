#include<iostream>

using namespace std;
bool gameOver;
const int width = 20;
const int height = 20;
int x,y,fruitX,fruitY,score;
enum eDirection { STOP = 0 , LEFT , UP , DOWN };
eDirection  dir;
void setup(){
    gameOver = false;
    dir = STOP;
    x = width/2;
    y = height/2;
    fruitX = rand() % width;
    fruitY = rand() % height;
    score = 0;

}
void Draw()
{
    system("cls");
    for (int i = 0 ; i < width-1 ; i++)
        cout << "#";
        cout << endl;

    for (int i = 0 ; i < height ; i++)
    {
        for (int j = 0 ; j < width ; j++) 
        {
            if (j == 0)
            {
            cout <<"#";
            }
            else if ( (width-2) > j > 0)
            {
            cout <<" ";
                }
            else if (j == width-1)
            {
            cout <<"#";
            }
        }
        cout << endl;
    }   
        for (int i = 0 ; i < width-1 ; i++)
        cout << "#";        

    
        

}
void Input(){

}
void Logic(){

}
int main(){

    setup();
    while (!gameOver)
    {
        Draw();
        Input();
        Logic();
    }
    

}