#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <algorithm>

#include "headers/birinchiTopshiriq.cpp"
#include "yuklovchi/yuklovchi.cpp"

using namespace std;

string SAV; // siklni to'xtatish uchun o'zgarivchan

int main()
{

    int TOPSHIRIQ_RAQAMI;

    do
    {

        cout << "Topshiriq raqamini kiriting!: ";
        cin >> TOPSHIRIQ_RAQAMI;

        switch (TOPSHIRIQ_RAQAMI)
        {
        case 1:
            BirinchiTopshiriqniYuklash();
            break;

        default:
            cout << "Xato son kirittingiz!" << endl;
        }

        cout << "yana topshiriq ishlanadimi? (h/y): ";
        cin >> SAV;

    } while (SAV == "h");

    return 0;
}
