//Name: Hady Hassan Sayed Hassan El Fadaly ID:20236113
//Name: Haneen Hisham Soliman ID:20236032

#include <iostream>
#include <string>

using namespace std;

int main()
{

    //starting the program
    cout << "Welcome to the Graphical Shapes Program …\nChoose the shape you want to draw or exit.\n";

    //declaring input variable
    string choice;

    //taking input from the user
    getline(cin, choice); //using getline function so user can enter 1 or more strings as input

    //if user chooses square
    if (choice == "Square" || choice == "square")
    {

        //asking user for details
        cout << "What is your square size?\n";

        int size;

        cin >> size;

        cout << "What is your board type?\n";

        char board;

        cin >> board;

        for (int i = 0; i < size; ++i)
        {

            //i for rows
            for (int j = 0; j < size; ++j)
            {

                //j for columns
                //1st 2 conditions to print borders for 1st and last row
                if (i == 0 || i == size - 1 || j == 0 || j == size - 1) //3rd and 4th to print borders for first and last column
                    cout << board;
                else cout << " ";

            }

            cout << endl;

        }

    }

    //if user chooses rectangle
    else if (choice == "Rectangle" || choice == "rectangle")
    {

        //asking user for details
        cout << "What is your rectangle length?\n";

        int length;

        cin >> length;

        cout << "What is your rectangle width?\n";

        int width;

        cin >> width;

        cout << "What is your board type?\n";

        char board;

        cin >> board;

        //same configuration as square but different input conditions
        for (int i = 0; i < length; ++i)
        {

            //length = row
            for (int j = 0; j < width; ++j)
            {

                //width = column
                if (i == 0 || i == length - 1 || j == 0 || j == width - 1) cout << board;
                else cout << " ";

            }

            cout << endl;

        }

    }

    //if user chooses rhombus
    else if (choice == "Rhombus" || choice == "rhombus")
    {

        //asking user for details
        cout << "What is your rhombus size?\n";

        int size;

        cin >> size;

        cout << "What is your board type?\n";

        char board;

        cin >> board;


        for (int i = 0; i < size; i++)
        {

            //i = columns
            //j = rows
            for (int j = 0; j < (2 * size); j++)
            {

                //(2*size) condition guarantees that the loop continues until upper right triangle prints
                if (i + j <= size - 1)  // upper left triangle
                    cout << board;
                else cout << " "; //prints the hollow space between the triangles
                if ((i + size) <= j)  // upper right triangle
                    cout << board;
                else cout << " "; //prints the hollow space between the triangles

            }

            cout << endl;

        }

        for (int i = 0; i < size; i++)
        {

            for (int j = 0; j < (2 * size); j++) //same as upper triangles for loop conditions but with different equations
            {

                if (i >= j) // bottom left triangle
                    cout << board;

                else cout << " "; //prints the hollow space between the triangles


                if (i >= ((2 * size) - 1) - j)   // bottom right triangle
                    cout << board;
                else cout << " "; //prints the hollow space between the triangles

            }

            cout << endl;

        }

    }

    //if user chooses rhombus
    else if (choice == "Equilateral triangle" || choice == "equilateral triangle")
    {

        //asking user for details
        cout << "What is your triangle size?\n";

        int size;

        cin >> size;

        cout << "What is your board type?\n";

        char board;

        cin >> board;

        //prints the hollow shape inside
        for (int i = 0; i < size; ++i)
        {

            //i = rows
            //prints spaces leading to center the triangle
            for (int j = 0; j < size - i - 1; ++j) //j = columns
                cout << " ";


            //prints board shape for current row (which is = i)
            for (int j = 0; j < 2 * i + 1; ++j)
            {

                //1st 2 conditions to print characters for 1st and last row
                if (i == 0 || i == size - 1 || j == 0 || j == 2 * i) //3rd and 4th to print characters for columns
                    cout << board;
                else cout << " ";  //prints space for the hollow part

            }

            cout << endl;

        }

        return 0;

    }

    //if user chooses right-angled triangle
    else if (choice == "Right-angled triangle")
    {

        //asking user for details
        cout << "What is your triangle base?\n";

        int base;

        cin >> base;

        cout << "What is your triangle height?\n";

        int height;

        cin >> height;

        cout << "What is your board type?\n";

        char board;

        cin >> board;

        //print hollow shape inside
        for (int i = 0; i < height; ++i)
        {

            //i = rows
            for (int j = 0; j <= i; ++j)
            {

                //j = columns
                //1st condition for first column
                if (j == 0 || i == height - 1 || j == i) //2nd for last row, 3rd condition for printing diagonal
                    cout << board << " "; //to evenly space out the last row
                else cout << "  ";

            }

            cout << endl;

        }

        return 0;

    }

}

/*examples for each shape

square:
 size = 5, board type = *
 output:
*****
*   *
*   *
*   *
*****

rectangle:
 length = 5, width = 6, board type = #
 output:
######
#    #
#    #
#    #
######

rhombus:
 size = 6, board type = *
 output:
* * * * * *  * * * * * *
* * * * *      * * * * *
* * * *          * * * *
* * *              * * *
* *                  * *
*                      *
*                      *
* *                  * *
* * *              * * *
* * * *          * * * *
* * * * *      * * * * *
* * * * * *  * * * * * *

Equilateral triangle:
 size = 7, board type = /
 output:
      /
     / /
    /   /
   /     /
  /       /
 /         /
/////////////

Right-angled triangle:
  base = 7, height = 8, board type: &
  output:
&
& &
&   &
&     &
&       &
&         &
&           &
& & & & & & & &

 */