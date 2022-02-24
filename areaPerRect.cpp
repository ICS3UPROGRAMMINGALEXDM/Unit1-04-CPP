// Copyright (c) 2022 Alex De Meo All rights reserved
//
// Created By: Alex De Meo
// Date: 02//22
// Description: Calculates the area and perimeter of a rectangle
#include <bits/stdc++.h>
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main() {
  int num1;
  int num2;
  int area;
  int peri;
  cout << "Make sure you only enter numbers!"<< endl << endl;
  cout << "What is the length of your rectangle?" << endl;
  cin >> num1;  // get user input
  cout <<"What is the width/height of your rectangle?"<< endl;
  cin >> num2;

  area = num1 * num2;
  peri = (2 * num1) + (2 * num2);

  cout << "The area of your rectangle is " << area << endl;
  cout << "The perimeter of your rectangle is " << peri << endl;
}
