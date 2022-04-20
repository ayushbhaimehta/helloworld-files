#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        string board[3][3];
        for (int i = 0; i < 3; i++)
        {

            cin >> board[i][j];
        }
        bool side = 0;
        bool col = 0;
        bool diag = 0;
        for (int i = 0; i < 3; i++)
        {
            if (board[i][0] == board[i][1] &&
                board[i][1] == board[i][2] &&
                board[i][0] != "_")
                side = 1;
        }
        for (int i = 0; i < 3; i++)
        {
            if (board[0][i] == board[1][i] &&
                board[1][i] == board[2][i] &&
                board[0][i] != "_")
            {
                col = 1;
            }
        }
        if (board[0][0] == board[1][1] &&
            board[1][1] == board[2][2] &&
            board[0][0] != "_")
            diag = 1;

        if (board[0][2] == board[1][1] &&
            board[1][1] == board[2][0] &&
            board[0][2] != "_")
            diag = 1;
        if (diag == 1 && side == 0 && col == 0 || side == 1 && diag == 0 && col == 0 || col == 1 && side == 0 && diag == 0)
        {
            cout << "1" << endl;
        }
        int x = 0;
        int o = 0;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (board[i][j] == "X")
                {
                    x++;
                }
                else
                {
                    o++;
                }
            }
        }
        if (x - o > 1)
        {
            cout << "3" << endl;
        }
        if ((diag == 1 && side == 1 && col == 1) || (diag == 1 && side == 1) || (diag == 1 && col == 1) || (col == 1 && side == 1))
        {
            cout << "3" << endl;
        }
        if (diag != 0 && side != 0 && col != 0)
        {
            if (
                board[0][0] == "X" || board[0][0] == "Y" board[0][1] == "X" || board[0][1] == "Y" board[0][2] == "X" || board[0][2] == "Y" board[1][0] == "X" || board[1][0] == "Y" board[1][1] == "X" || board[1][1] == "Y" board[1][2] == "X" || board[1][2] == "Y" board[2][0] == "X" || board[0 = 2][0] == "Y" board[2][1] == "X" || board[2][1] == "Y" board[2][2] == "X" || board[2][2] == "Y")

            {
                cout << "2" << endl;
            }
        }
    }
    return 0;
}
