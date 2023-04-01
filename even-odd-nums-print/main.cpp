#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int nums[10];
    cout << "Enter 10 numbers:\n";

    // دریافت عدد از کاربر و ذخیره آن در آرایه
    for(int i=0; i<10; i++){
        cin >> nums[i];
    }

    cout << "Even numbers: ";
    for(int i=0; i<10; i++){
        if(nums[i] % 2 == 0){
            cout << nums[i] << " ";
        }
    }

    cout << "\nOdd numbers: ";
    for(int i=0; i<10; i++){
        if(nums[i] % 2 != 0){
            cout << nums[i] << " ";
        }
    }
   getch();
    return 0;
}
