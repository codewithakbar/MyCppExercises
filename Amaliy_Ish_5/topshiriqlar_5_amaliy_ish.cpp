#include<iostream>
#include<cmath>
#include<string>

using namespace std;


string SAV; // siklni to'xtatish uchun o'zgarivchan


// Birinchi Topshiriq Misollari Jamlanmasi!	
class BirinchiTopshiriq {
public:

	// Sonning P-darajasini topuvchi funksiya
	double darajaTop(int son, int p) {
	    return pow(son, p);
	};

	void Misol1() {

		cout << "Q sonini P darajasini topuvchi funksiya. " << endl;

		int son, daraja;
	    cout << "Iltimos, sonni kiriting: ";
	    cin >> son;
	    cout << "Iltimos, darajani kiriting: ";
		cin >> daraja;

	    double natija = darajaTop(son, daraja);

	    cout << son << "ning " << daraja << " darajasi = " << natija << endl;

	}

};

void BirinchiTopshiriqniYuklash() {

	BirinchiTopshiriq birinchi;

	int MISOL_RAQAMI;

	cout << "1) Q sonini P darajasini topuvchi funksiya tuzing." << endl;
	cout << "2) P sonini oxiridan L sonini qo‘shuvchi funksiya tuzing."<< endl;
	cout << "3) Berilgan to‘g‘ri burchakli uchburchakning katetlari yordamida gipotenuzasini topuvchi funksiya tuzing"<< endl;
	cout << "4) Berilgan ikki nuqtaning koordinatasi asosida ular orasidagi masofani topuvchi funksiya tuzing"<< endl;
	cout << "5) Berilgan sondagi qo‘shni raqamlarining raqamlarining yig‘indisiga teng bo‘lgan raqamni o‘chirivchi funksiya tuzing.(Uch xonali son misolida: 143 Natija 13)"<< endl;
	cout << "6) Berilgan N soni ikkita tub sonni yig‘indisi bo‘lishini tekshiruvchi funksiya tuzing."<< endl;
	cout << "7) Hech bir uchtasi bir to’g’ri chiziqda yotmaydigan funksiya tuzing."<< endl;
	cout << "8) Berilgan son 11 ga bo‘linsa 1 aks holda 0 chiqaruvchi funksiya tuzing."<< endl;
	cout << "9) Berilgan sonni K o‘rindagi raqamini N o‘rindagi raqami bilan almashtiruvchi funksiya tuzing."<< endl;
	cout << "10) Sonni raqamlarini o‘sish (kamayish) tartibida saralovchi funksiya tuzing."<< endl;
	cout << "11) Uchburchakni uchta uchining koordinatalari berilgan. Uning yuzasini topuvchi funksiya tuzing."<< endl;
	cout << "12) Tomonlari a, b, c, d va e haqiqiy sonlardan iborat bo‘lgan beshburchak berilgan (2.1-rasm). Beshburchakni va undagi uchta uchburchaklarni yuzasini topuvchi alohida funksiyalar tuzing."<< endl;


	do {

		cout << "Endi misol raqamini kiriting: " << endl;
		cin >> MISOL_RAQAMI;

		switch (MISOL_RAQAMI) {
			case 1:
				birinchi.Misol1();
				break;
		}


		cout << "Yana misol ishlanadimi? (h/y): " << endl;
		cin >> SAV;

	}	while(SAV=="h");

};





int main() {

	int TOPSHIRIQ_RAQAMI;


	do {

		cout << "Topshiriq raqamini kiriting!: " << endl;
		cin >> TOPSHIRIQ_RAQAMI;


		switch(TOPSHIRIQ_RAQAMI) {
			case 1:
				BirinchiTopshiriqniYuklash();
				break;

		}



		cout << "yana topshiriq ishlanadimi? (h/y): ";
		cin >> SAV;

	}while(SAV=="h");


	return 0;
}
