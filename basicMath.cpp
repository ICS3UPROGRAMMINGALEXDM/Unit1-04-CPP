// Copyright (c) 2022 Alex De Meo All rights reserved
//
// Created By: Alex De Meo
// Date: 02//22
// Description: Shows the basic math operations
#include <bits/stdc++.h>
#include <iostream>
using std::cout;
using std::endl;

int main() {
  // initializing variables
  int add = 5 + 3;
  int sub = 17 - 9;
  int times = 12 * 013;
  int divi = 11 / 2;
  double power = pow(4.0, 3.0);
  int square = sqrt(144);

  // formatting variables into strings
  cout << "5 + 3 = "<< add<< endl<< endl;
  cout << "17 - 9 = "<< sub<< endl<< endl;
  cout << "12 * 13 = "<< times<< endl<< endl;
  cout << "11 / 2 = "<< divi<< endl<< endl;
  cout << "4 ^3 = "<< power<< endl << endl;
  cout << "√144 = "<< square<< endl;
}
