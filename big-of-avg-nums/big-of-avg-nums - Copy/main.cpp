#include <iostream>
#include <conio.h>
using namespace std;

int main() {
    int n = 5;
    int grades[n];
    int sum = 0;

    // دریافت نمرات از کاربر
    for(int i = 0; i < n; i++) {
        cout << "Enter grade " << i+1 << ": ";
        cin >> grades[i];
        sum += grades[i];
    }

    // محاسبه میانگین نمرات
    double average = sum / (double)n;

    // چاپ نمراتی که بزرگتر از میانگین هستند
    cout << "Grades above average: ";
    for(int i = 0; i < n; i++) {
        if(grades[i] > average) {
            cout << grades[i] << " ";
        }
    }
    cout << endl;
    getch();
    return 0;
}
