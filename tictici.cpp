#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        string board[3];
        for (int i = 0; i < 3; i++)
        {
            cin >> board[i];
        }
        bool colX = 0;
        bool colO = 0;
        bool sideX = 0;
        bool sideO = 0;
        bool diagX = 0;
        bool diagO = 0;
        bool tullu = 0;
        bool finished = 0;
        bool moveleft = 0;
        //checking whether the given thing is valid or not
        int O = 0;
        int X = 0;
        // for all _
        int under = 0;
        // all _ case
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (board[i][j] == '_')
                {
                    under++;
                }
            }
        }
        // corner case
        if (under == 9)
        {
            cout << "2" << endl;
        }
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (board[i][j] == 'X')
                    X++;
                else if (board[i][j] == 'O')
                    O++;
            }
        }

        // checking sideX
        for (int i = 0; i < 3; i++)
        {
            if (board[i][0] == board[i][1] &&
                board[i][1] == board[i][2] &&
                board[i][0] != '_' && board[i][0] != 'O')
            {
                sideX = 1;
            }
        }
        // checking sideO
        for (int i = 0; i < 3; i++)
        {
            if (board[i][0] == board[i][1] &&
                board[i][1] == board[i][2] &&
                board[i][0] != '_' && board[i][0] != 'X')
            {
                sideO = 1;
            }
        }
        //double side condition
        for (int i = 0; i < 3; i++)
        {
            if (board[i][0] == board[i][1] &&
                board[i][1] == board[i][2] &&
                board[i][0] == 'X')
            {
                for (int j = i + 1; j < 3; j++)
                {
                    if (board[j][0] == board[j][1] &&
                        board[j][1] == board[j][2] &&
                        board[j][0] == 'O')

                    {
                        tullu = 1;
                    }
                }
            }
        }
        for (int i = 0; i < 3; i++)
        {
            if (board[i][0] == board[i][1] &&
                board[i][1] == board[i][2] &&
                board[i][0] == 'O')
            {
                for (int j = i + 1; j < 3; j++)
                {
                    if (board[j][0] == board[j][1] &&
                        board[j][1] == board[j][2] &&
                        board[j][0] == 'X')

                    {
                        tullu = 1;
                    }
                }
            }
        }

        // checking colX
        for (int i = 0; i < 3; i++)
        {
            if (board[0][i] == board[1][i] &&
                board[1][i] == board[2][i] &&
                board[0][i] != '_' && board[0][i] != 'O')
            {
                colX = 1;
            }
        }
        // checking colX
        for (int i = 0; i < 3; i++)
        {
            if (board[0][i] == board[1][i] &&
                board[1][i] == board[2][i] &&
                board[0][i] != '_' && board[0][i] != 'X')
            {
                colO = 1;
            }
        }
        //double col condition
        for (int i = 0; i < 3; i++)
        {
            if (board[0][i] == board[1][i] &&
                board[1][i] == board[2][i] &&
                board[0][i] == 'X')
            {
                for (int j = i + 1; j < 3; j++)
                {
                    if (board[0][j] == board[1][j] &&
                        board[1][j] == board[2][j] &&
                        board[0][j] == 'O')
                    {
                        tullu = 1;
                    }
                }
            }
        }
        for (int i = 0; i < 3; i++)
        {
            if (board[0][i] == board[1][i] &&
                board[1][i] == board[2][i] &&
                board[0][i] == 'O')
            {
                for (int j = i + 1; j < 3; j++)
                {
                    if (board[0][j] == board[1][j] &&
                        board[1][j] == board[2][j] &&
                        board[0][j] == 'X')
                    {
                        tullu = 1;
                    }
                }
            }
        }

        // checking diagX
        if ((board[0][0] == board[1][1] &&
             board[1][1] == board[2][2] &&
             board[0][0] != '_' && board[0][0] != 'O') ||
            (board[0][2] == board[1][1] &&
             board[1][1] == board[2][0] &&
             board[0][2] != '_' && board[0][2] != 'O'))
        {
            diagX = 1;
        }
        // checking diagO
        if ((board[0][0] == board[1][1] &&
             board[1][1] == board[2][2] &&
             board[0][0] != '_' && board[0][0] != 'X') ||
            (board[0][2] == board[1][1] &&
             board[1][1] == board[2][0] &&
             board[0][2] != '_' && board[0][2] != 'X'))
        {
            diagO = 1;
        }
        // double diag condition
        /*if ((board[0][0] == board[1][1] &&
             board[1][1] == board[2][2] &&
             board[0][0] == 'X') &&
            (board[0][2] == board[1][1] &&
             board[1][1] == board[2][0] &&
             board[0][2] == 'X'))
        {
            tullu = 1;
        }
        if ((board[0][0] == board[1][1] &&
             board[1][1] == board[2][2] &&
             board[0][0] == 'O') &&
            (board[0][2] == board[1][1] &&
             board[1][1] == board[2][0] &&
             board[0][2] == 'O'))
        {
            tullu = 1;
        }
        */
        // checking whether the board is already filled or not
        // cout << "side: " << side << "    col: " << col << "    diag: " << diag << endl;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (board[i][j] != '_' && ((sideX != 1 && colX != 1 && diagX != 1) || (sideO != 1 && colO != 1 && diagO != 1)))
                {
                    finished = 1;
                }
                else
                {
                    moveleft = 1;
                }
            }
        }
        //condition for sidex sideo
        if (sideX == 1 && X - O != 1)
        {
            tullu = 1;
        }
        if (sideO == 1 && O != X)
        {
            tullu = 1;
        }

        //condition for colx colo
        if (colX == 1 && X - O != 1)
        {
            tullu = 1;
        }
        if (colO == 1 && O != X)
        {
            tullu = 1;
        }
        //condition for diagx diago
        if (diagX == 1 && X - O != 1)
        {
            tullu = 1;
        }
        if (diagO == 1 && O != X)
        {
            tullu = 1;
        }
        // tullu
        if (X - O > 1)
        {
            tullu = 1;
        }
        if (O > X)
        {
            tullu = 1;
        }

        //printing 3
        if (tullu == 1)
        {
            cout << "3" << endl;
        }

        //printin 1
        if ((finished == 1 && moveleft == 0 && tullu != 1) || (sideX == 1 && tullu != 1) || (diagX == 1 && tullu != 1) || (colX == 1 && tullu != 1) || (sideO == 1 && tullu != 1) || (diagO == 1 && tullu != 1) || (colO == 1 && tullu != 1))
        {
            cout << "1" << endl;
        }
        // printin 2
        if (finished == 1 && moveleft == 1 && sideX == 0 && diagX == 0 && colX == 0 && tullu != 1 && sideO == 0 && diagO == 0 && colO == 0)
        {
            cout << "2" << endl;
        }
        //checking bools
        /* cout << "ColX=" << colX << " "
             << "ColO=" << colO << " "
             << "SideX=" << sideX << " "
             << "SideO=" << sideO << " "
             << "DiagX=" << diagX << " "
             << "DiagO=" << diagO << " "
             << "tullu=" << tullu << " "
             << "finished=" << finished << " "
             << "X=" << X << " "
             << "O=" << O << " "
             << "moveleft=" << moveleft << endl;
             */
    }
    return 0;
}