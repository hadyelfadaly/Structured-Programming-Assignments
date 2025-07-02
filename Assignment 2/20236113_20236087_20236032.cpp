//Hady Hassan Sayed Hassan El Fadaly 20236113
//Haneen Hisham Soliman 20236032
//Mohamed Amr Ahmed 20236087

#include <iostream>
#include <cmath>
#include <cstring>

using namespace std;

//Problem 1
bool is_prime(int n)
{

    if (n > 1)
    {

        //checks if no. is even and not equal 2
        if (n % 2 == 0 && n != 2) return false;

        else
        {

            int i = 2;

            while (i <= sqrt(n)) //checks if the no. is not divisible by any number less than the square root of i
            {

                if (n % i == 0) return false;

                i++;

            }

        }

        int sum = 0;

        while (n != 0) // calculates the sum of the digits entered
        {

            sum = sum + n % 10;
            n = n / 10;

        }

        // if sum is divisible by 3 and not equal to 3 so not prime
        if (sum % 3 == 0 && sum != 3) return false;

    }
    else return false;

    return true; // if all conditions are false then the number is prime (true)

    /* Test Cases
     *
     * cout << is_prime(19);
     * Expected = 1
     *
     * cout << is_prime(33);
     * Expected = 0
     *
     * cout << is_prime(54);
     * Expected = 0
     *
     * */

}

//Problem 2 functions
int getMin(int a, int b) //making this function as it is easier to take the minimum out of the 2 parameters
{

    if (a > b) return b;
    else return a;

}
int number_of_matches(string word1, string word2)
{

    int size1 = word1.length();
    int size2 = word2.length();
    int test_cases = getMin(size1, size2); //taking the minimum length out of them because we don't need to continue checking after
    //the shortest has ended
    int matches = 0;//matches empty to put on result (in next loop)

    for (int i = 0; i < test_cases; i++)
    {

        //checking if they have the same letter in the same index
        if (word1[i] == word2[i]) matches += 1;

    }

    return matches;

    /*Test Cases
     *
     * cout<<number_of_matches("night", "sight");
     * Expected Output = 0
     *
     * cout<<number_of_matches("boast", "boat");
     * Expected Output = 3
     *
     * */

}

//Problem 3
void displayDivisors()
{

    char choice;

    do
    {

        cout << "Please enter a positive integer: ";

        int num;

        cin >> num;

        if (num > 0)
        {

            // 'if' is in descending order to display from greatest to least divisors
            for (int i = num; i >= 1; i--) if (num % i == 0) cout << i << endl;

            cout << "Would you like to see the divisors of another integer (Y/N)? ";

            cin >> choice;

            // checks the choice of the user to continue or terminate the program
            while (choice != 'n' && choice != 'N' && choice != 'y' && choice != 'Y')
            {

                cout << "Please respond with Y (or y) for yes and N (or n) for no.\n"
                        "Would you like to see the divisors of another integer (Y/N)?";

                cin >> choice;

            }

        }
        else if (num < 0 || num == 0) // choice is invalid if enterted no. is either negative or equal 0
        {

            cout << num << " is not a positive integer\n";
            displayDivisors();

        }

    } while (choice == 'y' || choice == 'Y');

    /* Test Cases
     *
     * Input = 36
     * Expected Output = 36 - 18 - 12 - 9 - 6 - 4 -3-  2 - 1
     *
     * Input = 109
     * Expected Output = 109 - 1
     *
     * Input = -44
     * Expected Output = Invalid
     */

}

//Problem 4
void shift_right()
{

    cout << "Enter Size: " << endl;

    int size;

    cin >> size;

    float nums[size + 1]; // adds 1 to get the exact no. of array cell because array starts at index 0

    cout << "Enter Array Elements: " << endl;

    for (int i = 0; i < size; i++) cin >> nums[i];

    int left, right, distance;

    cout << "Enter Left: " << endl;

    cin >> left;

    cout << "Enter Right: " << endl;

    cin >> right;

    cout << "Enter Distance: " << endl;

    cin >> distance;

    // if left greater than right or distance is negative, it returns false or (1) in this case
    if (left > right || distance < 0) cout << 1;
    else
    {

        for (int i = right; i >= left; i--) // shifting starts from right and the shifted cells (distance) get ignored
        {

            nums[i + distance] = nums[i];

            // guarantees that the last cell remains unchanged after the shifting
            if (nums[i] == nums[size + 1]) continue;

        }
        for (int i = 0; i < size; i++) cout << nums[i] << " ";

    }

}

//Problem 5
void matrixMultiplication(int mat1[3][3], int mat2[3][3])
{

    int result[3][3];

    //taking input for first matrix
    for (int i = 0; i < 3; i++) //rows for first matrix
    {

        for (int j = 0; j < 3; j++) //columns for first matrix
        {

            cout << "enter the elements of row " << i + 1 << " and column " << j + 1 << " of first matrix" << endl;

            cin >> mat1[i][j];

        }

    }
    //taking input for second matrix
    for (int i = 0; i < 3; i++)  //rows for second matrix
    {

        for (int j = 0; j < 3; j++)  //columns for second matrix
        {

            cout << "enter the elements of row " << i + 1 << " and column " << j + 1 << " of second matrix" << endl;

            cin >> mat2[i][j];

        }

    }

    cout << "result: " << endl;  //resultant matrix

    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 3; j++) result[i][j] = 0; //makes resultant matrix empty to put results in (next for loop)

    }
    //calculating their multiplication
    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 3; j++)
        {

            for (int k = 0; k < 3; k++) result[i][j] += mat1[i][k] * mat2[k][j]; //result = result "0" + mat1 * mat2

        }

    }
    //printing result
    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 3; j++) cout << result[i][j] << "\t"; //'\t' to leave a space between every element and another to form matrix shape

        cout << endl;

    }

    /*
     *
     * enter the elements of row 1 and column 1 of first matrix
1
enter the elements of row 1 and column 2 of first matrix
1
enter the elements of row 1 and column 3 of first matrix
1
enter the elements of row 2 and column 1 of first matrix
2
enter the elements of row 2 and column 2 of first matrix
2
enter the elements of row 2 and column 3 of first matrix
2
enter the elements of row 3 and column 1 of first matrix
3
enter the elements of row 3 and column 2 of first matrix
3
enter the elements of row 3 and column 3 of first matrix
3
enter the elements of row 1 and column 1 of second matrix
1
enter the elements of row 1 and column 2 of second matrix
2
enter the elements of row 1 and column 3 of second matrix
3
enter the elements of row 2 and column 1 of second matrix
1
enter the elements of row 2 and column 2 of second matrix
2
enter the elements of row 2 and column 3 of second matrix
3
enter the elements of row 3 and column 1 of second matrix
1
enter the elements of row 3 and column 2 of second matrix
2
enter the elements of row 3 and column 3 of second matrix
3
result:
3       6       9
6       12      18
9       18      27
     */

}

//Problem 6
float calculateHanzalahAge(int month, int year)
{

    float age = 0;

    if (month >= 1 && month <= 12 && year >= 1938 && year <= 1948) // intervals for months and first 10 years
    {

        age = float(year) - 1938;

        if (month <= 4)
        {

            age -= 1;
            age += 0.5; // adds 0.5 for half-year

        }
        else if (month >= 11 && year != 1948) age += 0.5;
        else if (month >= 5 && year == 1948) age = 10;

    }
    else if (month >= 1 && month <= 12 && year > 1948 && year < 2027) age = 10;
    else if (month >= 1 && month <= 12 && year >= 2027)
    {

        if (month < 6) age = 10 + (year - 2027);
        else if (month >= 6) age = 10 + (year - 2027) + 0.5;

    }

    return age;
    /*test cases

    calculateHanzalahAge(10,2030);
    expected output: 13.5

    calculateHanzalahAge(1,1945);
    expected output: 6.5

    calculateHanzalahAge(8,2005);
    expected output: 10

      */

}

//Problem 7 functions
string encryptMessages(string message, int size)
{

    // for loop to encrypt message
    for (int i = 0; i < size; i++)message[i] += 5;

    return message;

}
string decryptMessages(string encryptedMessage, int size)
{

    // second for loop to decrypt encrypted message
    for (int i = 0; i < size; i++) encryptedMessage[i] -= 5;

    return encryptedMessage;

}

//Problem 8 functions
int strTOint(string str)
{

    int length = str.size() - 1; // -1 to eliminate the null
    int res = 0;

    for (int i = 0; i < str.size(); i++)
    {

        int num = str[i] - '0'; //to convert string to int
        num *= pow(10, length);
        res += num;
        --length;

    }

    return res;

}
void getGraphMatrix(char edge, int size)
{

    int edges[size][3];
    int result[6][6] = { 0 };

    cout << "Enter Your Matrix: " << endl;

    for (int i = 0; i < size; i++)//rows for matrix
    {

        for (int j = 0; j < 3; j++) //columns for matrix
        {

            string edge;
            cin >> edge;

            if (edge == "a") edges[i][j] = 0;
            else if (edge == "b") edges[i][j] = 1;
            else if (edge == "c") edges[i][j] = 2;
            else if (edge == "d") edges[i][j] = 3;
            else if (edge == "e") edges[i][j] = 4;
            else if (edge == "f") edges[i][j] = 5;
            else edges[i][j] = strTOint(edge);

        }

    }
    for (int i = 0; i < size; i++)
    {

        result[edges[i][0]][result[i][1]] = edges[i][2];
        result[edges[i][1]][result[i][0]] = edges[i][2];

    }
    for (int i = 0; i < 6; i++) for (int j = 0; j < 6; j++) cout << result[i][j] << "\t" << endl;

}

int main()
{

    //Problem 1
    //cout << is_prime(19) << endl;

    //Problem 2
    //cout<<number_of_matches("night", "sight")<<endl;

    //Problem 3
   //cout << "This program is designed to exhibit the positive divisors of\n"
            "positive integers supplied by you. The program will\n"
            "repeatedly prompt you to enter a positive integer. Each\n"
            "time you enter a positive integer, the program will print\n"
            "all the divisors of your integer in a column and in\n"
            "decreasing order.\n";

    //displayDivisors();

    //Problem 4
    //shift_right();

    //Problem 5
    //int mat1[3][3];
    //int mat2[3][3];
    //matrixMultiplication(mat1,mat2);

    //Problem 6
    //cout<<calculateHanzalahAge(5,2028);

    //Problem 7
    //string encryptedMessage = encryptMessages("Free2027", 8);
    //cout << encryptedMessage << endl;

    //string decryptedMessage = decryptMessages(encryptedMessage,encryptedMessage.length());
    //cout << decryptedMessage;

    //Problem 8
    //getGraphMatrix(6, 5);

    return 0;

}