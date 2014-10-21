//  Created by Kristie Nguyen on 10/20/14.
//  A program that converts height and gets its average out of 10 then prints these data.

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int const INCHES_IN_FOOT = 12;
int const TOTAL_INPUTS = 10;
int const NAME_DESCRIPTION_FIELD_WIDTH = 20;
int const INCHES_DESCRIPTION_FIELD_WIDTH = 10;
int const FEET_DESCRIPTION_FIELD_WIDTH = 10;

// function prototypes
void runFunctions(void);
string getName(string prompt);
int getInches(string prompt);
float calculateInchesToFeet(int inches, int INCHES_IN_FOOT);
float calculateSumOfHeights_Inches(int inches);
float calculateAverageHeight_Inches(int sumOfHeights_Inches, int TOTAL_INPUTS);
void outputDataTable(string name, int inches, float feet);
void outputAverageHeight_Inches(int averageHeight_Inches);
void ifCinFail(void);
void pause(void);
void flushInput(void);

int main(void)
{
    try
    {
        runFunctions();
    }
    catch (int exceptionValue)
    {
        cout << "Program closing." << endl;
        pause();
        return exceptionValue;
    }
    pause();
    return 0;
}

void runFunctions(void)
{
    string name;
    int inches;
    float feet;
    string prompt;

    name = getName("Enter name 01: ");

    inches = getInches("Enter height 01: ");

    name2 = getName("Enter name 02: ");

    inches2 = getInches("Enter height 02: ");

    name3 = getName("Enter name 03: ");

    inches3 = getInches("Enter height 03: ");

    name4 = getName("Enter name 04: ");

    inches4 = getInches("Enter height 04: ");

    name5 = getName("Enter name 05: ");

    inches5 = getInches("Enter height 05: ");

    name6 = getName("Enter name 06: ");

    inches6 = getInches("Enter height 06: ");

    name7 = getName("Enter name 07: ");

    inches7 = getInches("Enter height 01: ");

    name8 = getName("Enter name 01: ");

    inches8 = getInches("Enter height 01: ");

    name9 = getName("Enter name 01: ");

    inches9 = getInches("Enter height 01: ");

    name10 = getName("Enter name 01: ");

    inches10 = getInches("Enter height 01: ");

    feet = calculateInchesToFeet(inches, INCHES_IN_FOOT);

    float sumOfHeights_Inches = calculateSumOfHeights_Inches(inches);

    float averageHeight_Inches = calculateAverageHeight_Inches(sumOfHeights_Inches, TOTAL_INPUTS);

    outputDataTable(name, inches, feet);

    outputAverageHeight_Inches(averageHeight_Inches);
}

string getName(string prompt)
{
    cout << prompt;
    string userInput;
    cin >> userInput;
    flushInput();
    ifCinFail();
    return userInput;
}

int getInches(string prompt)
{
    cout << prompt;
    int userInput;
    cin >> userInput;
    flushInput();
    ifCinFail();
    if (userInput < 0)
    {
        cout << "No negative heights." << endl;
        throw 2;
    }
    return userInput;
}

float calculateInchesToFeet(int inches, int INCHES_IN_FOOT)
{
    float feet;
    feet = inches / INCHES_IN_FOOT;
    return feet;
}

float calculateSumOfHeights_Inches(int inches)
{
    float sumOfHeights_Inches;
    sumOfHeights_Inches = inches + inches;
    return sumOfHeights_Inches;
}

float calculateAverageHeight_Inches(int sumOfHeights_Inches, int TOTAL_INPUTS)
{
    float averageHeight_Inches;
    averageHeight_Inches = sumOfHeights_Inches / TOTAL_INPUTS;
    return averageHeight_Inches;
}

void outputDataTable(string name, int inches, float feet)
{;
    cout << left << setw(NAME_DESCRIPTION_FIELD_WIDTH) << "Name";
    cout << right << setw(INCHES_DESCRIPTION_FIELD_WIDTH) << "Inches";
    cout << right << setw(FEET_DESCRIPTION_FIELD_WIDTH) << "Feet";
    cout << endl << endl;
    cout << left << setw(NAME_DESCRIPTION_FIELD_WIDTH) << name;
    cout << right << setw(INCHES_DESCRIPTION_FIELD_WIDTH) << inches;
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(1);
    cout << right << setw(FEET_DESCRIPTION_FIELD_WIDTH) << feet << endl;
    cout << endl;
}

void outputAverageHeight_Inches(int averageHeight_Inches)
{
    cout << "Average height is " << averageHeight_Inches << " inches." << endl;
    cout << endl;
}

void ifCinFail(void)
{
    if (cin.fail())
    {
        cin.clear();
        flushInput();
        cout << "Improper data." << endl;
        throw 1;
    }
}

void pause(void)
{
    cout << "Press ENTER to finish...";
    cin.ignore(999,'\n');
}

void flushInput(void)
{
    cin.ignore(999,'\n');
}