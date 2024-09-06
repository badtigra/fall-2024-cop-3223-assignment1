//********************************************************
// fracturing.c
// Author: Ross McTaggart
// UCFID: 5668796
// Date: 9/5/2024
// Class: COP 3223C, Professor Parra
// Purpose: To perform various mathematical operations pertaining to a circle
// Input: Four coordinate points (x1, x2, y1, y2)
// Output: The results of various mathematical operations pertaining to a circle
//********************************************************
#include <stdio.h>
#include <math.h>
#define PI 3.14159

//********************************************************
// double calculateDistance()
//
// Purpose:         Take 4 values representing two points to calculate distance between them and send to other functions
// Input:           Four double values (x1, x2, y1, y2)
// Output:          Prints the distance between two points
// Precondition:    Must have four inputs
// Postcondition:   Returns a double representing distance
//********************************************************
double calculateDistance()
{
    double x1, x2, y1, y2 = 0.00; // Coordinate points for distance calculation

    // Get coordinate points for x1, x2, y1, y2
    printf("Enter Coordinates\nx1: ");
    scanf("%lf", &x1);
    printf("x2: ");
    scanf("%lf", &x2);
    printf("y1: ");
    scanf("%lf", &y1);
    printf("y2: ");
    scanf("%lf", &y2);

    // Calculate distance formula with points x1, y1, x2, y2
    double distance = pow((x2 - x1), 2) + pow((y2 - y1), 2);

    // Print entered coordinates for points #1 & #2, then print distance between them
    printf("Point #1 entered: x1 = %.2lf; y1 = %.2lf\n", x1, y1);

    printf("Point #2 entered: x2 = %.2lf; y2 = %.2lf\n", x2, y2);

    return sqrt(distance); // Squares final value before sending to other functions
}

//********************************************************
// double displayDistance()
//
// Purpose:         Helps prevent calculateDistance from repeating the same print statement
// Input:           double distance
// Output:          Prints the distance between two points
// Precondition:    Input from calculateDistance()
// Postcondition:   N/A, type void
//********************************************************
void displayDistance(double distance)
{
    printf("The distance between the two points is %.2lf\n\n", (distance));
}

//********************************************************
// double calculatePerimeter()
//
// Purpose:         Print the perimeter of a city/circle
// Input:           distance from calculateDistance()
// Output:          The perimeter of a circle/city
// Precondition:    Input from calculateDistance()
// Postcondition:   Returns difficulty on 1-5 scale
//********************************************************
double calculatePerimeter()
{
    double perimeter = PI * calculateDistance();

    printf("The perimeter of the city encompassed by your re-quest is: %.2lf\n\n", perimeter);

    return 4; // Figuring out getting the distance value without repeating distance print was the difficulty
}

//********************************************************
// double calculateArea()
//
// Purpose:         Print the area of a city/circle
// Input:           distance from calculateDistance()
// Output:          The area of a circle/city
// Precondition:    Input from calculateDistance()
// Postcondition:   Returns difficulty on 1-5 scale
//********************************************************
double calculateArea()
{
    double radius = calculateDistance() / 2;
    double area = PI * pow(radius, 2);
    printf("The area of the city encompassed by your request is: %.2lf\n\n", area);

    return 3;
}

//********************************************************
// double calculateWidth()
//
// Purpose:         Print the width of a city/circle
// Input:           distance from calculateDistance()
// Output:          The width of a circle/city
// Precondition:    Input from calculateDistance()
// Postcondition:   Returns difficulty on 1-5 scale
//********************************************************
double calculateWidth()
{
    double width = calculateDistance();
    printf("The width of the city encompassed by your request is: %.2lf\n\n", (width));

    return 1;
}

//********************************************************
// double calculateHeight()
//
// Purpose:         Print the height of a city/circle
// Input:           distance from calculateDistance()
// Output:          The height of a circle/city
// Precondition:    Input from calculateDistance()
// Postcondition:   Returns difficulty on 1-5 scale
//********************************************************
double calculateHeight()
{
    double height = calculateDistance();
    printf("The height of the city encompassed by your request is: %.2lf\n\n", (height));

    return 1;
}

int main(int argc, char **argv)
{
    displayDistance(calculateDistance());
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();

    return 0;
}
