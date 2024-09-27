#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include<bits/stdc++.h>

using namespace std;

// Function to convert a decimal number to scientific notation
string toScientificNotation(double number) {
  stringstream ss;
  ss << number << "e" << (int)floor(log10(abs(number)));
  return ss.str();
}

// Function to simplify the number after decimal point to single digit
int simplifyDecimal(double number) {
  int sum = 0;
  while (number > 0) {
    int digit = (int)fmod(number, 10);
    sum += digit;
    number /= 10;
  }
  return sum % 10;
}

// Function to create the S1 string
string createS1(string scientificNotation) {
  string s1 = "";
  for (char c : scientificNotation) {
    if (isalpha(c) && c != 'e') {
      s1 += tolower(c);
    } else {
      s1 += c;
    }
  }
  return s1;
}

// Function to create the S2 string
string createS2(string name, int exponent) {
  string s2 = "";
  if (exponent % 2 == 1) {
    for (int i = 0; i < name.length(); i += 2) {
      s2 += name[i];
    }
  }
  return s2;
}

// Function to generate the password
string generatePassword(string number, string name) {
  try {
    // Convert number to double
    double num = stod(number);
    
    // Check for invalid input
    if (isnan(num) || number.find_first_not_of("0123456789.-eE") != string::npos) {
      return "Invalid input";
    }
    
    // Get scientific notation
    string scientificNotation = toScientificNotation(num);
    
    // Simplify decimal part and exponent
    int decimalDigit = simplifyDecimal(fabs(num) - floor(fabs(num)));
    int exponentDigit = simplifyDecimal(abs(exponent(num)));
    
    // Create S1 and S2 strings
    string s1 = createS1(scientificNotation);
    string s2 = createS2(name, exponentDigit);
    
    // Combine S1 and S2 with '@' symbol
    return s1 + "@" + s2;
  } catch (...) {
    return "Invalid input";
  }
}

int main() {
  // Number of test cases
  int T;
  cin >> T;

  for (int i = 0; i < T; i++) {
    string number, name;
    cin >> number >> name;
    
    // Generate and print password
    string password = generatePassword(number, name);
    cout << password << endl;
  }

  return 0;
}