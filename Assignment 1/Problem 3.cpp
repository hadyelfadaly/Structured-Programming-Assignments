//Name: Hady Hassan Sayed Hassan El Fadaly ID:20236113
//Name: Haneen Hisham Soliman ID:20236032

#include <iostream>

using namespace std;

int main()
{

    char h2, h3, h4, h5, h6, h7, h8, h9, choice;
    char h1 = h2 = h3 = h4 = h5 = h6 = h7 = h8 = h9 = '-'; //variables to print playing board

    choice = 'y'; //user chose y or yes to play

    while (choice == 'y')
    {

        char h1 = h2 = h3 = h4 = h5 = h6 = h7 = h8 = h9 = '-';

        //prints playing board without x-o characters yet
        cout << h1 << h2 << h3 << endl;
        cout << h4 << h5 << h6 << endl;
        cout << h7 << h8 << h9 << endl;
        cout << "Enter your move(player one): ";

        int move;

        cin >> move; //player 1 inputs their move

        cout << "The Board Current:\n";

        if (move == 11)
        {

            //11: first row, first column
            h1 = 'o';

            cout << h1 << h2 << h3 << endl;
            cout << h4 << h5 << h6 << endl;
            cout << h7 << h8 << h9 << endl;

        }
        else if (move == 12)
        {

            //12: first row, second column
            h2 = 'o';

            cout << h1 << h2 << h3 << endl;
            cout << h4 << h5 << h6 << endl;
            cout << h7 << h8 << h9 << endl;

        }
        else if (move == 13)
        {

            //13: first row, third column
            h3 = 'o';

            cout << h1 << h2 << h3 << endl;
            cout << h4 << h5 << h6 << endl;
            cout << h7 << h8 << h9 << endl;

        }
        else if (move == 21)
        {

            //21: second row, first column
            h4 = 'o';

            cout << h1 << h2 << h3 << endl;
            cout << h4 << h5 << h6 << endl;
            cout << h7 << h8 << h9 << endl;

        }
        else if (move == 22)
        {

            //22: second row, second column
            h5 = 'o';

            cout << h1 << h2 << h3 << endl;
            cout << h4 << h5 << h6 << endl;
            cout << h7 << h8 << h9 << endl;

        }
        else if (move == 23)
        {

            //23: second row, third column
            h6 = 'o';

            cout << h1 << h2 << h3 << endl;
            cout << h4 << h5 << h6 << endl;
            cout << h7 << h8 << h9 << endl;

        }
        else if (move == 31)
        {

            //31: third row, first column
            h7 = 'o';

            cout << h1 << h2 << h3 << endl;
            cout << h4 << h5 << h6 << endl;
            cout << h7 << h8 << h9 << endl;

        }
        else if (move == 32)
        {

            //32: third row, second column
            h8 = 'o';

            cout << h1 << h2 << h3 << endl;
            cout << h4 << h5 << h6 << endl;
            cout << h7 << h8 << h9 << endl;

        }
        else if (move == 33)
        {

            //33: third row, third column
            h9 = 'o';

            cout << h1 << h2 << h3 << endl;
            cout << h4 << h5 << h6 << endl;
            cout << h7 << h8 << h9 << endl;

        }
        else cout<<"Invalid, Move"<<endl;

        //asks player 2 for their move
        cout << "Enter your move(player two): ";

        cin >> move;

        cout << "The Board Current:\n";

        // exact same board placements as player 1
        if (move == 11 && h1 == '-')
        {

            h1 = 'x';

            cout << h1 << h2 << h3 << endl;
            cout << h4 << h5 << h6 << endl;
            cout << h7 << h8 << h9 << endl;

        }
        else if (move == 12 && h2 == '-')
        {

            h2 = 'x';

            cout << h1 << h2 << h3 << endl;
            cout << h4 << h5 << h6 << endl;
            cout << h7 << h8 << h9 << endl;

        }
        else if (move == 13 && h3 == '-')
        {

            h3 = 'x';

            cout << h1 << h2 << h3 << endl;
            cout << h4 << h5 << h6 << endl;
            cout << h7 << h8 << h9 << endl;

        }
        else if (move == 21 && h4 == '-')
        {

            h4 = 'x';

            cout << h1 << h2 << h3 << endl;
            cout << h4 << h5 << h6 << endl;
            cout << h7 << h8 << h9 << endl;

        }
        else if (move == 22 && h5 == '-')
        {

            h5 = 'x';

            cout << h1 << h2 << h3 << endl;
            cout << h4 << h5 << h6 << endl;
            cout << h7 << h8 << h9 << endl;

        }
        else if (move == 23 && h6 == '-')
        {

            h6 = 'x';

            cout << h1 << h2 << h3 << endl;
            cout << h4 << h5 << h6 << endl;
            cout << h7 << h8 << h9 << endl;

        }
        else if (move == 31 && h7 == '-')
        {

            h7 = 'x';

            cout << h1 << h2 << h3 << endl;
            cout << h4 << h5 << h6 << endl;
            cout << h7 << h8 << h9 << endl;

        }
        else if (move == 32 && h8 == '-')
        {

            h8 = 'x';

            cout << h1 << h2 << h3 << endl;
            cout << h4 << h5 << h6 << endl;
            cout << h7 << h8 << h9 << endl;

        }
        else if (move == 33 && h9 == '-')
        {

            h9 = 'x';

            cout << h1 << h2 << h3 << endl;
            cout << h4 << h5 << h6 << endl;
            cout << h7 << h8 << h9 << endl;

        }
        else
        {

            cout<<"Invalid, Move"<<endl;
            cout << "Enter your move(player two): ";

            cin >> move;

            cout << "The Board Current:\n";

            // exact same board placements as player 1
            if (move == 11 && h1 == '-')
            {

                h1 = 'x';

                cout << h1 << h2 << h3 << endl;
                cout << h4 << h5 << h6 << endl;
                cout << h7 << h8 << h9 << endl;

            }
            else if (move == 12 && h2 == '-')
            {

                h2 = 'x';

                cout << h1 << h2 << h3 << endl;
                cout << h4 << h5 << h6 << endl;
                cout << h7 << h8 << h9 << endl;

            }
            else if (move == 13 && h3 == '-')
            {

                h3 = 'x';

                cout << h1 << h2 << h3 << endl;
                cout << h4 << h5 << h6 << endl;
                cout << h7 << h8 << h9 << endl;

            }
            else if (move == 21 && h4 == '-')
            {

                h4 = 'x';

                cout << h1 << h2 << h3 << endl;
                cout << h4 << h5 << h6 << endl;
                cout << h7 << h8 << h9 << endl;

            }
            else if (move == 22 && h5 == '-')
            {

                h5 = 'x';

                cout << h1 << h2 << h3 << endl;
                cout << h4 << h5 << h6 << endl;
                cout << h7 << h8 << h9 << endl;

            }
            else if (move == 23 && h6 == '-')
            {

                h6 = 'x';

                cout << h1 << h2 << h3 << endl;
                cout << h4 << h5 << h6 << endl;
                cout << h7 << h8 << h9 << endl;

            }
            else if (move == 31 && h7 == '-')
            {

                h7 = 'x';

                cout << h1 << h2 << h3 << endl;
                cout << h4 << h5 << h6 << endl;
                cout << h7 << h8 << h9 << endl;

            }
            else if (move == 32 && h8 == '-')
            {

                h8 = 'x';

                cout << h1 << h2 << h3 << endl;
                cout << h4 << h5 << h6 << endl;
                cout << h7 << h8 << h9 << endl;

            }
            else if (move == 33 && h9 == '-')
            {

                h9 = 'x';

                cout << h1 << h2 << h3 << endl;
                cout << h4 << h5 << h6 << endl;
                cout << h7 << h8 << h9 << endl;

            }

        }

        cout << "Enter your move(player one): ";

        cin >> move;

        cout << "The Board Current:\n";

        if (move == 11 && h1 == '-')
        {

            h1 = 'o';

            cout << h1 << h2 << h3 << endl;
            cout << h4 << h5 << h6 << endl;
            cout << h7 << h8 << h9 << endl;

        }
        else if (move == 12 && h2 == '-')
        {

            h2 = 'o';

            cout << h1 << h2 << h3 << endl;
            cout << h4 << h5 << h6 << endl;
            cout << h7 << h8 << h9 << endl;

        }
        else if (move == 13 && h3 == '-')
        {

            h3 = 'o';

            cout << h1 << h2 << h3 << endl;
            cout << h4 << h5 << h6 << endl;
            cout << h7 << h8 << h9 << endl;

        }
        else if (move == 21 && h4 == '-')
        {

            h4 = 'o';

            cout << h1 << h2 << h3 << endl;
            cout << h4 << h5 << h6 << endl;
            cout << h7 << h8 << h9 << endl;

        }
        else if (move == 22 && h5 == '-')
        {

            h5 = 'o';

            cout << h1 << h2 << h3 << endl;
            cout << h4 << h5 << h6 << endl;
            cout << h7 << h8 << h9 << endl;

        }
        else if (move == 23 && h6 == '-')
        {

            h6 = 'o';

            cout << h1 << h2 << h3 << endl;
            cout << h4 << h5 << h6 << endl;
            cout << h7 << h8 << h9 << endl;

        }
        else if (move == 31 && h7 == '-')
        {

            h7 = 'o';

            cout << h1 << h2 << h3 << endl;
            cout << h4 << h5 << h6 << endl;
            cout << h7 << h8 << h9 << endl;

        }
        else if (move == 32 && h8 == '-')
        {

            h8 = 'o';

            cout << h1 << h2 << h3 << endl;
            cout << h4 << h5 << h6 << endl;
            cout << h7 << h8 << h9 << endl;

        }
        else if (move == 33 && h9 == '-')
        {

            h9 = 'o';

            cout << h1 << h2 << h3 << endl;
            cout << h4 << h5 << h6 << endl;
            cout << h7 << h8 << h9 << endl;

        }
        else
        {

            cout<<"Invalid, Move"<<endl;
            cout << "Enter your move(player one): ";

            cin >> move;

            cout << "The Board Current:\n";

            if (move == 11 && h1 == '-')
            {

                h1 = 'o';

                cout << h1 << h2 << h3 << endl;
                cout << h4 << h5 << h6 << endl;
                cout << h7 << h8 << h9 << endl;

            }
            else if (move == 12 && h2 == '-')
            {

                h2 = 'o';

                cout << h1 << h2 << h3 << endl;
                cout << h4 << h5 << h6 << endl;
                cout << h7 << h8 << h9 << endl;

            }
            else if (move == 13 && h3 == '-')
            {

                h3 = 'o';

                cout << h1 << h2 << h3 << endl;
                cout << h4 << h5 << h6 << endl;
                cout << h7 << h8 << h9 << endl;

            }
            else if (move == 21 && h4 == '-')
            {

                h4 = 'o';

                cout << h1 << h2 << h3 << endl;
                cout << h4 << h5 << h6 << endl;
                cout << h7 << h8 << h9 << endl;

            }
            else if (move == 22 && h5 == '-')
            {

                h5 = 'o';

                cout << h1 << h2 << h3 << endl;
                cout << h4 << h5 << h6 << endl;
                cout << h7 << h8 << h9 << endl;

            }
            else if (move == 23 && h6 == '-')
            {

                h6 = 'o';

                cout << h1 << h2 << h3 << endl;
                cout << h4 << h5 << h6 << endl;
                cout << h7 << h8 << h9 << endl;

            }
            else if (move == 31 && h7 == '-')
            {

                h7 = 'o';

                cout << h1 << h2 << h3 << endl;
                cout << h4 << h5 << h6 << endl;
                cout << h7 << h8 << h9 << endl;

            }
            else if (move == 32 && h8 == '-')
            {

                h8 = 'o';

                cout << h1 << h2 << h3 << endl;
                cout << h4 << h5 << h6 << endl;
                cout << h7 << h8 << h9 << endl;

            }
            else if (move == 33 && h9 == '-')
            {

                h9 = 'o';

                cout << h1 << h2 << h3 << endl;
                cout << h4 << h5 << h6 << endl;
                cout << h7 << h8 << h9 << endl;

            }

        }

        cout << "Enter your move(player two): ";

        cin >> move;

        cout << "The Board Current:\n";

        // exact same board placements as player 1
        if (move == 11 && h1 == '-')
        {

            h1 = 'x';

            cout << h1 << h2 << h3 << endl;
            cout << h4 << h5 << h6 << endl;
            cout << h7 << h8 << h9 << endl;

        }
        else if (move == 12 && h2 == '-')
        {

            h2 = 'x';

            cout << h1 << h2 << h3 << endl;
            cout << h4 << h5 << h6 << endl;
            cout << h7 << h8 << h9 << endl;

        }
        else if (move == 13 && h3 == '-')
        {

            h3 = 'x';

            cout << h1 << h2 << h3 << endl;
            cout << h4 << h5 << h6 << endl;
            cout << h7 << h8 << h9 << endl;

        }

        else if (move == 21 && h4 == '-')
        {

            h4 = 'x';

            cout << h1 << h2 << h3 << endl;
            cout << h4 << h5 << h6 << endl;
            cout << h7 << h8 << h9 << endl;

        }
        else if (move == 22 && h5 == '-')
        {

            h5 = 'x';

            cout << h1 << h2 << h3 << endl;
            cout << h4 << h5 << h6 << endl;
            cout << h7 << h8 << h9 << endl;

        }
        else if (move == 23 && h6 == '-')
        {

            h6 = 'x';

            cout << h1 << h2 << h3 << endl;
            cout << h4 << h5 << h6 << endl;
            cout << h7 << h8 << h9 << endl;

        }
        else if (move == 31 && h7 == '-')
        {

            h7 = 'x';

            cout << h1 << h2 << h3 << endl;
            cout << h4 << h5 << h6 << endl;
            cout << h7 << h8 << h9 << endl;

        }
        else if (move == 32 && h8 == '-')
        {

            h8 = 'x';

            cout << h1 << h2 << h3 << endl;
            cout << h4 << h5 << h6 << endl;
            cout << h7 << h8 << h9 << endl;

        }
        else if (move == 33 && h9 == '-')
        {

            h9 = 'x';

            cout << h1 << h2 << h3 << endl;
            cout << h4 << h5 << h6 << endl;
            cout << h7 << h8 << h9 << endl;

        }
        else
        {

            cout<<"Invalid, Move"<<endl;
            cout << "Enter your move(player two): ";

            cin >> move;

            cout << "The Board Current:\n";

            // exact same board placements as player 1
            if (move == 11 && h1 == '-')
            {

                h1 = 'x';

                cout << h1 << h2 << h3 << endl;
                cout << h4 << h5 << h6 << endl;
                cout << h7 << h8 << h9 << endl;

            }
            else if (move == 12 && h2 == '-')
            {

                h2 = 'x';

                cout << h1 << h2 << h3 << endl;
                cout << h4 << h5 << h6 << endl;
                cout << h7 << h8 << h9 << endl;

            }
            else if (move == 13 && h3 == '-')
            {

                h3 = 'x';

                cout << h1 << h2 << h3 << endl;
                cout << h4 << h5 << h6 << endl;
                cout << h7 << h8 << h9 << endl;

            }
            else if (move == 21 && h4 == '-')
            {

                h4 = 'x';

                cout << h1 << h2 << h3 << endl;
                cout << h4 << h5 << h6 << endl;
                cout << h7 << h8 << h9 << endl;

            }
            else if (move == 22 && h5 == '-')
            {

                h5 = 'x';

                cout << h1 << h2 << h3 << endl;
                cout << h4 << h5 << h6 << endl;
                cout << h7 << h8 << h9 << endl;

            }
            else if (move == 23 && h6 == '-')
            {

                h6 = 'x';

                cout << h1 << h2 << h3 << endl;
                cout << h4 << h5 << h6 << endl;
                cout << h7 << h8 << h9 << endl;

            }
            else if (move == 31 && h7 == '-')
            {

                h7 = 'x';

                cout << h1 << h2 << h3 << endl;
                cout << h4 << h5 << h6 << endl;
                cout << h7 << h8 << h9 << endl;

            }
            else if (move == 32 && h8 == '-')
            {

                h8 = 'x';

                cout << h1 << h2 << h3 << endl;
                cout << h4 << h5 << h6 << endl;
                cout << h7 << h8 << h9 << endl;

            }
            else if (move == 33 && h9 == '-')
            {

                h9 = 'x';

                cout << h1 << h2 << h3 << endl;
                cout << h4 << h5 << h6 << endl;
                cout << h7 << h8 << h9 << endl;

            }

        }

        cout << "Enter your move(player one): ";

        cin >> move;

        cout << "The Board Current:\n";

        if (move == 11 && h1 == '-')
        {

            h1 = 'o';

            cout << h1 << h2 << h3 << endl;
            cout << h4 << h5 << h6 << endl;
            cout << h7 << h8 << h9 << endl;

        }
        else if (move == 12 && h2 == '-')
        {

            h2 = 'o';

            cout << h1 << h2 << h3 << endl;
            cout << h4 << h5 << h6 << endl;
            cout << h7 << h8 << h9 << endl;

        }
        else if (move == 13 && h3 == '-')
        {

            h3 = 'o';

            cout << h1 << h2 << h3 << endl;
            cout << h4 << h5 << h6 << endl;
            cout << h7 << h8 << h9 << endl;

        }
        else if (move == 21 && h4 == '-')
        {

            h4 = 'o';

            cout << h1 << h2 << h3 << endl;
            cout << h4 << h5 << h6 << endl;
            cout << h7 << h8 << h9 << endl;

        }
        else if (move == 22 && h5 == '-')
        {

            h5 = 'o';

            cout << h1 << h2 << h3 << endl;
            cout << h4 << h5 << h6 << endl;
            cout << h7 << h8 << h9 << endl;

        }
        else if (move == 23 && h6 == '-')
        {

            h6 = 'o';

            cout << h1 << h2 << h3 << endl;
            cout << h4 << h5 << h6 << endl;
            cout << h7 << h8 << h9 << endl;

        }
        else if (move == 31 && h7 == '-')
        {

            h7 = 'o';

            cout << h1 << h2 << h3 << endl;
            cout << h4 << h5 << h6 << endl;
            cout << h7 << h8 << h9 << endl;

        }
        else if (move == 32 && h8 == '-')
        {

            h8 = 'o';

            cout << h1 << h2 << h3 << endl;
            cout << h4 << h5 << h6 << endl;
            cout << h7 << h8 << h9 << endl;

        }
        else if (move == 33 && h9 == '-')
        {

            h9 = 'o';

            cout << h1 << h2 << h3 << endl;
            cout << h4 << h5 << h6 << endl;
            cout << h7 << h8 << h9 << endl;

        }
        else
        {

            cout<<"Invalid, Move"<<endl;
            cout << "Enter your move(player one): ";

            cin >> move;

            cout << "The Board Current:\n";

            if (move == 11 && h1 == '-')
            {

                h1 = 'o';

                cout << h1 << h2 << h3 << endl;
                cout << h4 << h5 << h6 << endl;
                cout << h7 << h8 << h9 << endl;

            }
            else if (move == 12 && h2 == '-')
            {

                h2 = 'o';

                cout << h1 << h2 << h3 << endl;
                cout << h4 << h5 << h6 << endl;
                cout << h7 << h8 << h9 << endl;

            }
            else if (move == 13 && h3 == '-')
            {

                h3 = 'o';

                cout << h1 << h2 << h3 << endl;
                cout << h4 << h5 << h6 << endl;
                cout << h7 << h8 << h9 << endl;

            }
            else if (move == 21 && h4 == '-')
            {

                h4 = 'o';

                cout << h1 << h2 << h3 << endl;
                cout << h4 << h5 << h6 << endl;
                cout << h7 << h8 << h9 << endl;

            }
            else if (move == 22 && h5 == '-')
            {

                h5 = 'o';

                cout << h1 << h2 << h3 << endl;
                cout << h4 << h5 << h6 << endl;
                cout << h7 << h8 << h9 << endl;

            }
            else if (move == 23 && h6 == '-')
            {

                h6 = 'o';

                cout << h1 << h2 << h3 << endl;
                cout << h4 << h5 << h6 << endl;
                cout << h7 << h8 << h9 << endl;

            }
            else if (move == 31 && h7 == '-')
            {

                h7 = 'o';

                cout << h1 << h2 << h3 << endl;
                cout << h4 << h5 << h6 << endl;
                cout << h7 << h8 << h9 << endl;

            }
            else if (move == 32 && h8 == '-')
            {

                h8 = 'o';

                cout << h1 << h2 << h3 << endl;
                cout << h4 << h5 << h6 << endl;
                cout << h7 << h8 << h9 << endl;

            }
            else if (move == 33 && h9 == '-')
            {

                h9 = 'o';

                cout << h1 << h2 << h3 << endl;
                cout << h4 << h5 << h6 << endl;
                cout << h7 << h8 << h9 << endl;

            }

        }

        //conditions of player 1 winning: horizontally(row), vertically(column), diagonally

        //straight horizontal lines: rows
        if (h1 == 'o' && h2 == 'o' && h3 == 'o')
        {

            cout << "Player one is the winner, do you want to play again? (y/n)";

            cin >> choice;

            if (choice == 'n') cout << "Exiting";

        }
        else if (h4 == 'o' && h5 == 'o' && h6 == 'o')
        {

            cout << "Player one is the winner, do you want to play again? (y/n)";

            cin >> choice;

            if (choice == 'n') cout << "Exiting";

        }
        else if (h7 == 'o' && h8 == 'o' && h9 == 'o')
        {

            cout << "Player one is the winner, do you want to play again? (y/n)";

            cin >> choice;

            if (choice == 'n') cout << "Exiting";

        }
        //straight vertical lines: columns
        else if (h1 == 'o' && h4 == 'o' && h7 == 'o')
        {

            cout << "Player one is the winner, do you want to play again? (y/n)";

            cin >> choice;

            if (choice == 'n') cout << "Exiting";

        }
        else if (h2 == 'o' && h5 == 'o' && h8 == 'o')
        {

            cout << "Player one is the winner, do you want to play again? (y/n)";

            cin >> choice;

            if (choice == 'n') cout << "Exiting";

        }
        else if (h3 == 'o' && h6 == 'o' && h9 == 'o')
        {

            cout << "Player one is the winner, do you want to play again? (y/n)";

            cin >> choice;

            if (choice == 'n') cout << "Exiting";

        }
        //diagonal conditions
        else if (h1 == 'o' && h5 == 'o' && h9 == 'o')
        {

            cout << "Player one is the winner, do you want to play again? (y/n)";

            cin >> choice;

            if (choice == 'n') cout << "Exiting";

        }
        else if (h3 == 'o' && h5 == 'o' && h7 == 'o')
        {

            cout << "Player one is the winner, do you want to play again? (y/n)";

            cin >> choice;

            if (choice == 'n') cout << "Exiting";

        }
        else
        {

            cout << "Enter your move(player two): ";

            cin >> move;

            cout << "The Board Current:\n";

            // exact same board placements as player 1
            if (move == 11 && h1 == '-')
            {

                h1 = 'x';

                cout << h1 << h2 << h3 << endl;
                cout << h4 << h5 << h6 << endl;
                cout << h7 << h8 << h9 << endl;

            }
            else if (move == 12 && h2 == '-')
            {

                h2 = 'x';

                cout << h1 << h2 << h3 << endl;
                cout << h4 << h5 << h6 << endl;
                cout << h7 << h8 << h9 << endl;

            }
            else if (move == 13 && h3 == '-')
            {

                h3 = 'x';

                cout << h1 << h2 << h3 << endl;
                cout << h4 << h5 << h6 << endl;
                cout << h7 << h8 << h9 << endl;

            }
            else if (move == 21 && h4 == '-')
            {

                h4 = 'x';

                cout << h1 << h2 << h3 << endl;
                cout << h4 << h5 << h6 << endl;
                cout << h7 << h8 << h9 << endl;

            }

            else if (move == 22 && h5 == '-')
            {

                h5 = 'x';

                cout << h1 << h2 << h3 << endl;
                cout << h4 << h5 << h6 << endl;
                cout << h7 << h8 << h9 << endl;

            }
            else if (move == 23 && h6 == '-')
            {

                h6 = 'x';

                cout << h1 << h2 << h3 << endl;
                cout << h4 << h5 << h6 << endl;
                cout << h7 << h8 << h9 << endl;

            }
            else if (move == 31 && h7 == '-')
            {

                h7 = 'x';

                cout << h1 << h2 << h3 << endl;
                cout << h4 << h5 << h6 << endl;
                cout << h7 << h8 << h9 << endl;

            }
            else if (move == 32 && h8 == '-')
            {

                h8 = 'x';

                cout << h1 << h2 << h3 << endl;
                cout << h4 << h5 << h6 << endl;
                cout << h7 << h8 << h9 << endl;

            }
            else if (move == 33 && h9 == '-')
            {

                h9 = 'x';

                cout << h1 << h2 << h3 << endl;
                cout << h4 << h5 << h6 << endl;
                cout << h7 << h8 << h9 << endl;

            }
            else
            {

                cout<<"Invalid, Move"<<endl;
                cout << "Enter your move(player two): ";

                cin >> move;

                cout << "The Board Current:\n";

                // exact same board placements as player 1
                if (move == 11 && h1 == '-')
                {

                    h1 = 'x';

                    cout << h1 << h2 << h3 << endl;
                    cout << h4 << h5 << h6 << endl;
                    cout << h7 << h8 << h9 << endl;

                }
                else if (move == 12 && h2 == '-')
                {

                    h2 = 'x';

                    cout << h1 << h2 << h3 << endl;
                    cout << h4 << h5 << h6 << endl;
                    cout << h7 << h8 << h9 << endl;

                }
                else if (move == 13 && h3 == '-')
                {

                    h3 = 'x';

                    cout << h1 << h2 << h3 << endl;
                    cout << h4 << h5 << h6 << endl;
                    cout << h7 << h8 << h9 << endl;

                }
                else if (move == 21 && h4 == '-')
                {

                    h4 = 'x';

                    cout << h1 << h2 << h3 << endl;
                    cout << h4 << h5 << h6 << endl;
                    cout << h7 << h8 << h9 << endl;

                }
                else if (move == 22 && h5 == '-')
                {

                    h5 = 'x';

                    cout << h1 << h2 << h3 << endl;
                    cout << h4 << h5 << h6 << endl;
                    cout << h7 << h8 << h9 << endl;

                }
                else if (move == 23 && h6 == '-')
                {

                    h6 = 'x';

                    cout << h1 << h2 << h3 << endl;
                    cout << h4 << h5 << h6 << endl;
                    cout << h7 << h8 << h9 << endl;

                }
                else if (move == 31 && h7 == '-')
                {

                    h7 = 'x';

                    cout << h1 << h2 << h3 << endl;
                    cout << h4 << h5 << h6 << endl;
                    cout << h7 << h8 << h9 << endl;

                }
                else if (move == 32 && h8 == '-')
                {

                    h8 = 'x';

                    cout << h1 << h2 << h3 << endl;
                    cout << h4 << h5 << h6 << endl;
                    cout << h7 << h8 << h9 << endl;

                }
                else if (move == 33 && h9 == '-')
                {

                    h9 = 'x';

                    cout << h1 << h2 << h3 << endl;
                    cout << h4 << h5 << h6 << endl;
                    cout << h7 << h8 << h9 << endl;

                }

            }

            //conditions of player 2 winning: horizontally(row), vertically(column), diagonally

            //straight horizontal lines: rows
            if (h1 == 'x' && h2 == 'x' && h3 == 'x')
            {

                cout << "Player two is the winner, do you want to play again? (y/n)";

                cin >> choice;

                if (choice == 'n') cout << "Exiting";

            }
            else if (h4 == 'x' && h5 == 'x' && h6 == 'x')
            {

                cout << "Player two is the winner, do you want to play again? (y/n)";

                cin >> choice;

                if (choice == 'n') cout << "Exiting";

            }
            else if (h7 == 'x' && h8 == 'x' && h9 == 'x')
            {

                cout << "Player two is the winner, do you want to play again? (y/n)";

                cin >> choice;

                if (choice == 'n') cout << "Exiting";

            }
            //straight vertical lines: columns
            else if (h1 == 'x' && h4 == 'x' && h7 == 'x')
            {

                cout << "Player two is the winner, do you want to play again? (y/n)";

                cin >> choice;

                if (choice == 'n') cout << "Exiting";

            }
            else if (h2 == 'x' && h5 == 'x' && h8 == 'x')
            {

                cout << "Player two is the winner, do you want to play again? (y/n)";

                cin >> choice;

                if (choice == 'n') cout << "Exiting";

            }
            else if (h3 == 'x' && h6 == 'x' && h9 == 'x')
            {

                cout << "Player two is the winner, do you want to play again? (y/n)";

                cin >> choice;

                if (choice == 'n') cout << "Exiting";
            }
            //diagonal conditions
            else if (h1 == 'x' && h5 == 'x' && h9 == 'x')
            {

                cout << "Player two is the winner, do you want to play again? (y/n)";

                cin >> choice;

                if (choice == 'n') cout << "Exiting";

            }
            else if (h3 == 'x' && h5 == 'x' && h7 == 'x')
            {

                cout << "Player two is the winner, do you want to play again? (y/n)";

                cin >> choice;

                if (choice == 'n') cout << "Exiting";

            }
            //if player 2 still didn't win
            else
            {

                cout << "Enter your move(player one): ";

                cin >> move;

                cout << "The Board Current:\n";

                if (move == 11 && h1 == '-')
                {

                    h1 = 'o';

                    cout << h1 << h2 << h3 << endl;
                    cout << h4 << h5 << h6 << endl;
                    cout << h7 << h8 << h9 << endl;

                }

                else if (move == 12 && h2 == '-')
                {

                    h2 = 'o';

                    cout << h1 << h2 << h3 << endl;
                    cout << h4 << h5 << h6 << endl;
                    cout << h7 << h8 << h9 << endl;

                }

                else if (move == 13 && h3 == '-')
                {

                    h3 = 'o';

                    cout << h1 << h2 << h3 << endl;
                    cout << h4 << h5 << h6 << endl;
                    cout << h7 << h8 << h9 << endl;

                }
                else if (move == 21 && h4 == '-')
                {

                    h4 = 'o';

                    cout << h1 << h2 << h3 << endl;
                    cout << h4 << h5 << h6 << endl;
                    cout << h7 << h8 << h9 << endl;

                }
                else if (move == 22 && h5 == '-')
                {

                    h5 = 'o';

                    cout << h1 << h2 << h3 << endl;
                    cout << h4 << h5 << h6 << endl;
                    cout << h7 << h8 << h9 << endl;

                }
                else if (move == 23 && h6 == '-')
                {

                    h6 = 'o';

                    cout << h1 << h2 << h3 << endl;
                    cout << h4 << h5 << h6 << endl;
                    cout << h7 << h8 << h9 << endl;

                }
                else if (move == 31 && h7 == '-')
                {

                    h7 = 'o';

                    cout << h1 << h2 << h3 << endl;
                    cout << h4 << h5 << h6 << endl;
                    cout << h7 << h8 << h9 << endl;

                }
                else if (move == 32 && h8 == '-')
                {

                    h8 = 'o';

                    cout << h1 << h2 << h3 << endl;
                    cout << h4 << h5 << h6 << endl;
                    cout << h7 << h8 << h9 << endl;

                }
                else if (move == 33 && h9 == '-')
                {

                    h9 = 'o';

                    cout << h1 << h2 << h3 << endl;
                    cout << h4 << h5 << h6 << endl;
                    cout << h7 << h8 << h9 << endl;

                }
                else
                {

                    cout<<"Invalid, Move"<<endl;
                    cout << "Enter your move(player one): ";

                    cin >> move;

                    cout << "The Board Current:\n";

                    if (move == 11 && h1 == '-')
                    {

                        h1 = 'o';

                        cout << h1 << h2 << h3 << endl;
                        cout << h4 << h5 << h6 << endl;
                        cout << h7 << h8 << h9 << endl;

                    }
                    else if (move == 12 && h2 == '-')
                    {

                        h2 = 'o';

                        cout << h1 << h2 << h3 << endl;
                        cout << h4 << h5 << h6 << endl;
                        cout << h7 << h8 << h9 << endl;

                    }
                    else if (move == 13 && h3 == '-')
                    {

                        h3 = 'o';

                        cout << h1 << h2 << h3 << endl;
                        cout << h4 << h5 << h6 << endl;
                        cout << h7 << h8 << h9 << endl;

                    }
                    else if (move == 21 && h4 == '-')
                    {

                        h4 = 'o';

                        cout << h1 << h2 << h3 << endl;
                        cout << h4 << h5 << h6 << endl;
                        cout << h7 << h8 << h9 << endl;

                    }
                    else if (move == 22 && h5 == '-')
                    {

                        h5 = 'o';

                        cout << h1 << h2 << h3 << endl;
                        cout << h4 << h5 << h6 << endl;
                        cout << h7 << h8 << h9 << endl;

                    }
                    else if (move == 23 && h6 == '-')
                    {

                        h6 = 'o';

                        cout << h1 << h2 << h3 << endl;
                        cout << h4 << h5 << h6 << endl;
                        cout << h7 << h8 << h9 << endl;

                    }
                    else if (move == 31 && h7 == '-')
                    {

                        h7 = 'o';

                        cout << h1 << h2 << h3 << endl;
                        cout << h4 << h5 << h6 << endl;
                        cout << h7 << h8 << h9 << endl;

                    }
                    else if (move == 32 && h8 == '-')
                    {

                        h8 = 'o';

                        cout << h1 << h2 << h3 << endl;
                        cout << h4 << h5 << h6 << endl;
                        cout << h7 << h8 << h9 << endl;

                    }
                    else if (move == 33 && h9 == '-')
                    {

                        h9 = 'o';

                        cout << h1 << h2 << h3 << endl;
                        cout << h4 << h5 << h6 << endl;
                        cout << h7 << h8 << h9 << endl;

                    }

                }
                //straight horizontal lines: rows
                if (h1 == 'o' && h2 == 'o' && h3 == 'o')
                {

                    cout << "Player one is the winner, do you want to play again? (y/n)";

                    cin >> choice;

                    if (choice == 'n') cout << "Exiting";

                }
                else if (h4 == 'o' && h5 == 'o' && h6 == 'o')
                {

                    cout << "Player one is the winner, do you want to play again? (y/n)";

                    cin >> choice;

                    if (choice == 'n') cout << "Exiting";

                }
                else if (h7 == 'o' && h8 == 'o' && h9 == 'o')
                {

                    cout << "Player one is the winner, do you want to play again? (y/n)";

                    cin >> choice;

                    if (choice == 'n') cout << "Exiting";

                }
                //straight vertical lines: columns
                else if (h1 == 'o' && h4 == 'o' && h7 == 'o')
                {

                    cout << "Player one is the winner, do you want to play again? (y/n)";

                    cin >> choice;

                    if (choice == 'n') cout << "Exiting";

                }
                else if (h2 == 'o' && h5 == 'o' && h8 == 'o')
                {

                    cout << "Player one is the winner, do you want to play again? (y/n)";

                    cin >> choice;

                    if (choice == 'n') cout << "Exiting";

                }
                else if (h3 == 'o' && h6 == 'o' && h9 == 'o')
                {

                    cout << "Player one is the winner, do you want to play again? (y/n)";

                    cin >> choice;

                    if (choice == 'n') cout << "Exiting";

                }
                //diagonal conditions
                else if (h1 == 'o' && h5 == 'o' && h9 == 'o')
                {

                    cout << "Player one is the winner, do you want to play again? (y/n)";

                    cin >> choice;

                    if (choice == 'n') cout << "Exiting";

                }
                else if (h3 == 'o' && h5 == 'o' && h7 == 'o')
                {

                    cout << "Player one is the winner, do you want to play again? (y/n)";

                    cin >> choice;

                    if (choice == 'n') cout << "Exiting";

                }
                //if player 1 still DID NOT win
                else
                {

                    cout << "Enter your move(player two): ";

                    cin >> move;

                    cout << "The Board Current:\n";

                    // exact same board placements as player 1
                    if (move == 11 && h1 == '-')
                    {

                        h1 = 'x';

                        cout << h1 << h2 << h3 << endl;
                        cout << h4 << h5 << h6 << endl;
                        cout << h7 << h8 << h9 << endl;

                    }
                    else if (move == 12 && h2 == '-')
                    {

                        h2 = 'x';

                        cout << h1 << h2 << h3 << endl;
                        cout << h4 << h5 << h6 << endl;
                        cout << h7 << h8 << h9 << endl;

                    }
                    else if (move == 13 && h3 == '-')
                    {

                        h3 = 'x';

                        cout << h1 << h2 << h3 << endl;
                        cout << h4 << h5 << h6 << endl;
                        cout << h7 << h8 << h9 << endl;

                    }
                    else if (move == 21 && h4 == '-')
                    {

                        h4 = 'x';

                        cout << h1 << h2 << h3 << endl;
                        cout << h4 << h5 << h6 << endl;
                        cout << h7 << h8 << h9 << endl;

                    }
                    else if (move == 22 && h5 == '-')
                    {

                        h5 = 'x';

                        cout << h1 << h2 << h3 << endl;
                        cout << h4 << h5 << h6 << endl;
                        cout << h7 << h8 << h9 << endl;

                    }
                    else if (move == 23 && h6 == '-')
                    {

                        h6 = 'x';

                        cout << h1 << h2 << h3 << endl;
                        cout << h4 << h5 << h6 << endl;
                        cout << h7 << h8 << h9 << endl;

                    }
                    else if (move == 31 && h7 == '-')
                    {

                        h7 = 'x';

                        cout << h1 << h2 << h3 << endl;
                        cout << h4 << h5 << h6 << endl;
                        cout << h7 << h8 << h9 << endl;

                    }
                    else if (move == 32 && h8 == '-')
                    {

                        h8 = 'x';

                        cout << h1 << h2 << h3 << endl;
                        cout << h4 << h5 << h6 << endl;
                        cout << h7 << h8 << h9 << endl;

                    }
                    else if (move == 33 && h9 == '-')
                    {

                        h9 = 'x';

                        cout << h1 << h2 << h3 << endl;
                        cout << h4 << h5 << h6 << endl;
                        cout << h7 << h8 << h9 << endl;

                    }
                    else
                    {

                        cout<<"Invalid, Move"<<endl;
                        cout << "Enter your move(player two): ";

                        cin >> move;

                        cout << "The Board Current:\n";

                        // exact same board placements as player 1
                        if (move == 11 && h1 == '-')
                        {

                            h1 = 'x';

                            cout << h1 << h2 << h3 << endl;
                            cout << h4 << h5 << h6 << endl;
                            cout << h7 << h8 << h9 << endl;

                        }
                        else if (move == 12 && h2 == '-')
                        {

                            h2 = 'x';

                            cout << h1 << h2 << h3 << endl;
                            cout << h4 << h5 << h6 << endl;
                            cout << h7 << h8 << h9 << endl;

                        }
                        else if (move == 13 && h3 == '-')
                        {

                            h3 = 'x';

                            cout << h1 << h2 << h3 << endl;
                            cout << h4 << h5 << h6 << endl;
                            cout << h7 << h8 << h9 << endl;

                        }
                        else if (move == 21 && h4 == '-')
                        {

                            h4 = 'x';

                            cout << h1 << h2 << h3 << endl;
                            cout << h4 << h5 << h6 << endl;
                            cout << h7 << h8 << h9 << endl;

                        }
                        else if (move == 22 && h5 == '-')
                        {

                            h5 = 'x';

                            cout << h1 << h2 << h3 << endl;
                            cout << h4 << h5 << h6 << endl;
                            cout << h7 << h8 << h9 << endl;

                        }
                        else if (move == 23 && h6 == '-')
                        {

                            h6 = 'x';

                            cout << h1 << h2 << h3 << endl;
                            cout << h4 << h5 << h6 << endl;
                            cout << h7 << h8 << h9 << endl;

                        }
                        else if (move == 31 && h7 == '-')
                        {

                            h7 = 'x';

                            cout << h1 << h2 << h3 << endl;
                            cout << h4 << h5 << h6 << endl;
                            cout << h7 << h8 << h9 << endl;

                        }
                        else if (move == 32 && h8 == '-')
                        {

                            h8 = 'x';

                            cout << h1 << h2 << h3 << endl;
                            cout << h4 << h5 << h6 << endl;
                            cout << h7 << h8 << h9 << endl;

                        }
                        else if (move == 33 && h9 == '-')
                        {

                            h9 = 'x';

                            cout << h1 << h2 << h3 << endl;
                            cout << h4 << h5 << h6 << endl;
                            cout << h7 << h8 << h9 << endl;

                        }

                    }

                    //conditions of player 2 winning: horizontally(row), vertically(column), diagonally

                    //straight horizontal lines: rows
                    if (h1 == 'x' && h2 == 'x' && h3 == 'x')
                    {

                        cout << "Player two is the winner, do you want to play again? (y/n)";

                        cin >> choice;

                        if (choice == 'n') cout << "Exiting";

                    }
                    else if (h4 == 'x' && h5 == 'x' && h6 == 'x')
                    {

                        cout << "Player two is the winner, do you want to play again? (y/n)";

                        cin >> choice;

                        if (choice == 'n') cout << "Exiting";

                    }
                    else if (h7 == 'x' && h8 == 'x' && h9 == 'x')
                    {

                        cout << "Player two is the winner, do you want to play again? (y/n)";

                        cin >> choice;

                        if (choice == 'n') cout << "Exiting";

                    }
                    //straight vertical lines: columns
                    else if (h1 == 'x' && h4 == 'x' && h7 == 'x')
                    {

                        cout << "Player two is the winner, do you want to play again? (y/n)";

                        cin >> choice;

                        if (choice == 'n') cout << "Exiting";

                    }
                    else if (h2 == 'x' && h5 == 'x' && h8 == 'x')
                    {

                        cout << "Player two is the winner, do you want to play again? (y/n)";

                        cin >> choice;

                        if (choice == 'n') cout << "Exiting";

                    }
                    else if (h3 == 'x' && h6 == 'x' && h9 == 'x')
                    {

                        cout << "Player two is the winner, do you want to play again? (y/n)";

                        cin >> choice;

                        if (choice == 'n') cout << "Exiting";

                    }
                    //diagonal conditions
                    else if (h1 == 'x' && h5 == 'x' && h9 == 'x')
                    {

                        cout << "Player two is the winner, do you want to play again? (y/n)";

                        cin >> choice;

                        if (choice == 'n') cout << "Exiting";

                    }
                    else if (h3 == 'x' && h5 == 'x' && h7 == 'x')
                    {

                        cout << "Player two is the winner, do you want to play again? (y/n)";

                        cin >> choice;

                        if (choice == 'n') cout << "Exiting";

                    }
                    //if none finally wins
                    else
                    {

                        cout << "TIE, No Winner, do you want to play again? (y/n)";

                        cin >>
                            choice;

                        if (choice == 'n') cout << "Exiting";

                    }

                }

            }

        }

    }

    return 0;

}


/*
game example:

---
---
---
Enter your move(player one): 13
The Board Current:
--o
---
---
Enter your move(player two): 22
The Board Current:
--o
-x-
---
Enter your move(player one): 11
The Board Current:
o-o
-x-
---
Enter your move(player two): 12
The Board Current:
oxo
-x-
---
Enter your move(player one): 31
The Board Current:
oxo
-x-
o--
Enter your move(player two): 32
The Board Current:
oxo
-x-
ox-
Player two is the winner, do you want to play again? (y/n)

*/