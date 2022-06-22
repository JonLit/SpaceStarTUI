#include <iostream>

using namespace std;

char display[40][20];
int posX;
int posY;

int main(int argc, char* argv[]){

    posX = 20;
    posY = 10;



    while (true) {
        for (int y = 0; y < 20; y++){
            for (int x = 0; x < 40; x++){
                display[x][y] = ' ';
            }
        }
        for (int i = 0; i < 40; i++){
            display[i][0] = '#';
            display[i][19] = '#';
        }
        for (int i = 0; i < 20; i++){
            display[0][i] = '#';
            display[39][i] = '#';
        }

        display[posX][posY] = 'A';
        system("clear");
        for (int y = 0; y < 20; y++){
            for (int x = 0; x < 40; x++){
                cout << display[x][y];
            }
            cout << "\n";
        }
        system("/bin/stty raw");
        char in;
        cin >> in;
        if (in == 'q')return 0;
        if (in == 'a')posX--;
        if (in == 'd')posX++;
        if (in == 'w')posY--;
        if (in == 's')posY++;
        if (posX < 0) posX = 0;
        if (posX > 40) posX = 40;
        if (posY < 0) posY = 0;
        if (posY > 20) posY= 20;
        system("/bin/stty cooked");
    }
    return 0;
}
