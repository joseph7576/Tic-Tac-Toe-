#include <iostream>
#include <conio.h>

using namespace std;


//  (odd) -    1 ---> O ---> 79
//  (even) -   2 ---> X ---> 88
//  X --> 88
//  O --> 79
//
// int GameShape(){
//
//     cout<<"_|_|_\n_|_|_\n | | ";
//
//     return 0;
// }

int GameSwitch(int a, int b,int c,int Array[3][3]){

    if(c % 2 == 0){
        Array[a][b] = 2;
    }
    else
    {
        Array[a][b] = 1;
    }
 
    return Array[a][b];
}

int GamePlace(int a){

    if (a == 2)
    {
        return 'X';
    }
    else
    {
        return 'O';
    }

}

int main(){
    
    int GameBase[3][3] = {0};
    int Try = 1;
    int i = 0, j = 0;
    int x, y;
    int Sw, Pl;

    cin >> x >> y;
    
    Sw = GameSwitch(x, y, Try, GameBase);
    Pl = GamePlace(Sw);

    cout<< Pl;
    
    
    getch();
    return 0;
}



