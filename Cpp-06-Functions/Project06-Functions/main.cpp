//  Created by Kristie Nguyen on 10/20/14.
//  A program that converts height and gets its average out of 5 then prints these data.

#include "Tools.h"
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

float const INCHES_IN_FOOT = 12.0;
int const TOTAL_HEIGHT_INPUTS = 5;
int const NAME_DESCRIPTION_FIELD_WIDTH = 20;
int const INCHES_DESCRIPTION_FIELD_WIDTH = 10;
int const FEET_DESCRIPTION_FIELD_WIDTH = 10;

// function prototypes
void runFunctions(void);
float calculateInchesToFeet(int inches);
void outputDataTable(string name, int inches, float feet);
void outputAverageHeight_Inches(int averageHeight_Inches);

int main(void)
{
    try
    {
        runFunctions();
    }
    catch (int exceptionValue)
    {
        cout << endl;
        cout << "Program closing." << endl;
        pause_program();
        return exceptionValue;
    }
    pause_program();
    return 0;
}

// run functions to calculate and output data
void runFunctions(void)
{
    string name1;
    string name2;
    string name3;
    string name4;
    string name5;
    int inches1;
    int inches2;
    int inches3;
    int inches4;
    int inches5;

    // get user input
    name1 = getName("Enter name 01: ");
    inches1 = getNonnegativeInches("Enter height 01: ");
    name2 = getName("Enter name 02: ");
    inches2 = getNonnegativeInches("Enter height 02: ");
    name3 = getName("Enter name 03: ");
    inches3 = getNonnegativeInches("Enter height 03: ");
    name4 = getName("Enter name 04: ");
    inches4 = getNonnegativeInches("Enter height 04: ");
    name5 = getName("Enter name 05: ");
    inches5 = getNonnegativeInches("Enter height 05: ");
    cout << endl;

    // output table of data
    cout << left << setw(NAME_DESCRIPTION_FIELD_WIDTH) << "Name";
    cout << right << setw(INCHES_DESCRIPTION_FIELD_WIDTH) << "Inches";
    cout << right << setw(FEET_DESCRIPTION_FIELD_WIDTH) << "Feet";
    cout << endl << endl;
    outputDataTable(name1, inches1, calculateInchesToFeet(inches1));
    outputDataTable(name2, inches2, calculateInchesToFeet(inches2));
    outputDataTable(name3, inches3, calculateInchesToFeet(inches3));
    outputDataTable(name4, inches4, calculateInchesToFeet(inches4));
    outputDataTable(name5, inches5, calculateInchesToFeet(inches5));

    // calculate average
    int sumOfHeights_Inches = inches1 + inches2 + inches3 + inches4 + inches5;
    int averageHeight_Inches = sumOfHeights_Inches / TOTAL_HEIGHT_INPUTS;
    outputAverageHeight_Inches(averageHeight_Inches);
}

// convert inches to feet
float calculateInchesToFeet(int inches)
{
    float feet;
    feet = (float)inches / INCHES_IN_FOOT;
    return feet;
}

void outputDataTable(string name, int inches, float feet)
{
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