#include <iostream>
#include <conio.h>
using namespace std;

int main() {
  int grades[5];
  float sum = 0;
  float average;

  cout << "Enter 5 grades: ";

  for(int i = 0; i < 5; ++i) {
    cin >> grades[i];
    sum += grades[i];
  }

  average = sum / 5;
  cout << "The average grade is: " << average << endl;
  getch();
  return 0;
}
