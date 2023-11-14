
#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <algorithm>
#include "headers/birinchiTopshiriq.cpp"

using namespace std;

string SAV; // siklni to'xtatish uchun o'zgarivchan

void BirinchiTopshiriqniYuklash()
{

   BirinchiTopshiriq birinchi;

   int MISOL_RAQAMI;

   cout << "1) Q sonini P darajasini topuvchi funksiya tuzing." << endl;
   cout << "2) P sonini oxiridan L sonini qo‘shuvchi funksiya tuzing." << endl;
   cout << "3) Berilgan to‘g‘ri burchakli uchburchakning katetlari yordamida gipotenuzasini topuvchi funksiya tuzing" << endl;
   cout << "4) Berilgan ikki nuqtaning koordinatasi asosida ular orasidagi masofani topuvchi funksiya tuzing" << endl;
   cout << "5) Berilgan sondagi qo‘shni raqamlarining raqamlarining yig‘indisiga teng bo‘lgan raqamni o‘chirivchi funksiya tuzing.(Uch xonali son misolida: 143 Natija 13)" << endl;
   cout << "6) Berilgan N soni ikkita tub sonni yig‘indisi bo‘lishini tekshiruvchi funksiya tuzing." << endl;
   cout << "7) Hech bir uchtasi bir to’g’ri chiziqda yotmaydigan funksiya tuzing." << endl;
   cout << "8) Berilgan son 11 ga bo‘linsa 1 aks holda 0 chiqaruvchi funksiya tuzing." << endl;
   cout << "9) Berilgan sonni K o‘rindagi raqamini N o‘rindagi raqami bilan almashtiruvchi funksiya tuzing." << endl;
   cout << "10) Sonni raqamlarini o‘sish (kamayish) tartibida saralovchi funksiya tuzing." << endl;
   cout << "11) Uchburchakni uchta uchining koordinatalari berilgan. Uning yuzasini topuvchi funksiya tuzing." << endl;
   cout << "12) Tomonlari a, b, c, d va e haqiqiy sonlardan iborat bo‘lgan beshburchak berilgan. Beshburchakni va undagi uchta uchburchaklarni yuzasini topuvchi alohida funksiyalar tuzing." << endl;

   do
   {

      cout << "Endi misol raqamini kiriting: ";
      cin >> MISOL_RAQAMI;

      switch (MISOL_RAQAMI)
      {
      case 1:
         birinchi.Misol1();
         break;
      case 2:
         birinchi.Misol2();
         break;
      case 3:
         birinchi.Misol3();
         break;
      case 4:
         birinchi.Misol4();
         break;
      case 5:
         birinchi.Misol5();
         break;
      case 6:
         birinchi.Misol6();
         break;
      case 7:
         birinchi.Misol7();
         break;
      case 8:
         birinchi.Misol8();
         break;
      case 9:
         birinchi.Misol9();
         break;
      case 10:
         birinchi.Misol10();
         break;
      case 11:
         birinchi.Misol_11();
         break;
      case 12:
         birinchi.Misol_12();
         break;

      default:
         cout << "Misolni topilmadi!";
      }

      cout << "Yana misol ishlanadimi? (h/y): " << endl;
      cin >> SAV;

   } while (SAV == "h");
}
