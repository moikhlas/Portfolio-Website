#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;
using std::ifstream;

void drow_board(char TTT_array[3][3]) {
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << TTT_array[i][j] << "|";
            if(j == 3) {
                cout << "equal  to 3" << endl;
            }
        }
    }
}

bool CheckWin(char array[3][3])
{
  for (int i = 0; i < 3; i++)
  {
    if (array[i][0] == 'X' && array[i][1] == 'X' && array[i][2] == 'X' ||
        array[i][0] == 'O' && array[i][1] == 'O' && array[i][2] == 'O')
    {
      return true;
    }
    if (array[0][i] == 'X' && array[1][i] == 'X' && array[2][i] == 'X' ||
        array[0][i] == 'O' && array[1][i] == 'O' && array[2][i] == 'O')
    {
      return true;
    }
    if (array[0][0] == 'X' && array[1][1] == 'X' && array[2][2] == 'X' ||
        array[0][0] == 'O' && array[1][1] == 'O' && array[2][2] == 'O' ||
        array[0][2] == 'X' && array[1][1] == 'X' && array[2][0] == 'X' ||
        array[0][2] == 'O' && array[1][1] == 'O' && array[2][0] == 'O')
    {
      return true;
    }
  }
  return false;
}

int main() {
    bool game_state = false;
    char TTT_Squares[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
    cout << "Tic-Tac-Toe Game" << endl;

   drow_board(TTT_Squares);
    

}