// drg-areaofrectangle.cpp : Defines the entry point for the console application.
// By: David Garza
// Date: 20200206
// Description: Find the area of a rectangle given

#include "stdafx.h"
#include <iostream>

int main()
{
   // Stage 2: Variables
   int intLength = 0;
   int intWidth = 0;
   int intArea = 0;

   // Stage 4: Input
   std::cout << "Please enter the length of the rectangle as a whole number: ";
   std::cin >> intLength;
   std::cout << "Please enter the width of the rectangle as a whole number: ";
   std::cin >> intWidth;

   // Stage 3: Processing
   intArea = intLength * intWidth;

   // Stage 1: Output
   // std::cout << "\nThe area of the rectangle is: 0.000";
   std::cout << "\nThe area of the recangle is: " << intArea;
}
