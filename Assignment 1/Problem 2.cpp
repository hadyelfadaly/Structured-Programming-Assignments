//Name: Hady Hassan Sayed Hassan El Fadaly ID:20236113
//Name: Haneen Hisham Soliman ID:20236032

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{

    cout << "Welcome to our converter program ...";
    cout << "Choose the units you want to convert from the list or exit.\n1. Time\n2. Distance\n3. Temperature\n"; // asks user for input

    string choice;

    cin >> choice; //user inputs either time, distance, or temperature

    if (choice == "time" || choice == "Time" || choice == "1")
    {

        //user chooses choice 1 (time)

        cout << "Enter your time in seconds\n";

        int time;

        cin >> time;

        int time_hrs = time / 3600; //converts from seconds to hours
        int time_mins = (time - (time_hrs * 3600)) / 60; //converts hours to seconds, subtracts remaining time from hours then converts to minutes
        int time_secs = time - ((time_hrs * 3600) + (time_mins * 60)); //converts hours & minutes to seconds then subtracts from original input to get seconds

        // prints result
        cout << time_hrs << " Hours" << endl;
        cout << time_mins << " Minutes" << endl;
        cout << time_secs << " Seconds" << endl;

    }

    else if (choice == "distance" || choice == "Distance" || choice == "2")
    {

        //user chooses choice 2 (distance)

        cout << "Enter your distance in centimeters\n";

        int dist;

        cin >> dist;

        int dist_km = dist / 100000; //converts from centimeters to kilometers
        int dist_m = (dist - (dist_km * 100000)) / 100; //converts km to cm, subtracts from remaining distance, then converts to meters
        int dist_cm = dist - ((dist_km * 100000) + (dist_m * 100)); //converts km & m back to cm then subtracts remaining from original input

        //prints result
        cout << dist_km << " Kilometers" << endl;
        cout << dist_m << " Meters" << endl;
        cout << dist_cm << " Centimeters" << endl;

    }

    else if (choice == "temperature" || choice == "Temperature" || choice == "3")
    {

        //user chooses choice 3 (temperature)

        cout << "Enter your temperature in Fahrenheit\n";

        float temp;

        cin >> temp;

        float temp_C = (temp - 32) * 5 / 9; //converts from Fahrenheit to Celsius
        float temp_K = temp_C + 273.15; // converts from Fahrenheit to Kelvin

        //prints result
        cout << setprecision(2); //rounds value 2 digits after decimal point
        cout << fixed << temp_C << " Celsius" << endl;
        cout << setprecision(2); //rounds value 2 digits after decimal point
        cout << fixed << temp_K << " Kelvin" << endl;

    }

    else cout << "Invalid Input"; //if user chooses none of the options

    return 0;

}

/*
 examples for each converter:

 1)time:
 input: 6842 seconds
 output: 1 Hour
         54 Minutes
         2 Seconds


 2)distance:
 input: 734902 cm
 output: 7 Kilometers
         349 Meters
         2 Centimeters


 3)temperature:
 input: 67 F
 output: 19.44 C
         292.59 K

*/