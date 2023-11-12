#include<iostream>
#include<cmath>
#include<string>

using namespace std;


string SAV; // siklni to'xtatish uchun o'zgarivchan


// Birinchi Topshiriq Misollari Jamlanmasi!	
class BirinchiTopshiriq {
public:

	struct Nuqta {
	    double x;
	    double y;
	};

	// Sonning P-darajasini topuvchi funksiya
	double darajaTop(int son, int p) {
	    return pow(son, p);
	};


    // P sonini oxiridan L sonini qo‘shuvchi funksiya
    double qoshuvchi(double P, double L) {
        return P + L;
    }


	// Gipotenuzani topuvchi funksiya
	double gipotenuzaTop(int katet1, int katet2) {
	    double gipotenuza = sqrt(pow(katet1, 2) + pow(katet2, 2));
	    return gipotenuza;
	}


    // Nuqtalar orasidagi masofani topuvchi funksiya
    double masofaTop(int x1, int y1, int x2, int y2) {
        double masofa = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
        return masofa;
    }


    // Oradagi sonni o'chiruvchi funksiya
	int ortaDelete(int son) {

        string numStr = to_string(son);

        string resultStr;

        for (int i = 1; i < numStr.length() - 1; ++i) {
            if (numStr[i - 1] - '0' + numStr[i + 1] - '0' != numStr[i] - '0') {
                resultStr += numStr[i];
            }
        }

        resultStr = numStr[0] + resultStr + numStr[numStr.length() - 1];

        return std::stoi(resultStr);
	}


	// Tub sonni tekshiruvchi funksiya
	bool tubSon(int n) {
	    if (n < 2) {
	        return false;
	    }

	    for (int i = 2; i <= sqrt(n); ++i) {
	        if (n % i == 0) {
	            return false;
	        }
	    }

	    return true;
	}

	// Yig'indisiga teng bo'lgan ikkita tub sonni tekshiruvchi funksiya
	bool yigindisiTubSon(int N) {
	    for (int i = 2; i <= N / 2; ++i) {
	        int j = N - i;
	        if (tubSon(i) && tubSon(j)) {
	            return true;
	        }
	    }

	    return false;
	}


	// Uchtasi bir to'g'ri chiziqda yotmaydigan funksiya 
	bool togriChiziqdaYotmaydi(Nuqta A, Nuqta B, Nuqta C) {
	    // nuqtani tekshirish
	    if ((A.x == B.x && A.y == B.y) || (A.x == C.x && A.y == C.y) || (B.x == C.x && B.y == C.y)) {
	        cout << "Nuqtalarning hammasi bir biriga to'g'ri qo'yilgan, chiziq to'g'ri emas." << endl;
	        return false;
	    }

	    double a = B.y - A.y;
	    double b = A.x - B.x;
	    double c = A.x * (A.y - B.y) + A.y * (B.x - A.x);

	    // nuqtaning qiymatini topamiz
	    double qiymatC = a * C.x + b * C.y;

	    if ((qiymatC - c) == 0) {
	        cout << "Nuqta chiziq ustida joylashgan, chiziq to'g'ri emas." << endl;
	        return false;
	    }

	    return true;
	}


    // Sonni tekshiruvchi funksiya
    int bolinuvchiSon(int son) {
        if (son % 11 == 0) {
            cout << son << " soni bo'linadi";
            return 1;
        } else {
            cout << son << " soni bo'linmaydi!";
            return 2;
        }
    }


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

	void Misol2() {

		int P, L;

	    cout << "Iltimos, P sonini kiriting: ";
	    cin >> P;
	    cout << "Iltimos, L sonini kiriting: ";
	    cin >> L;

	    double natija = qoshuvchi(P, L);

	    cout << "Natija: " << natija << endl;

	}


    void Misol3() {

    	int katet1, katet2;

	    cout << "Iltimos, birinchi katetni kiriting: ";
	    cin >> katet1;
	    cout << "Iltimos, ikkinchi katetni kiriting: ";
	    cin >> katet2;

	    double gipotenuza = gipotenuzaTop(katet1, katet2);

	    cout << "Gipotenuza: " << gipotenuza << endl;

    }


    void Misol4() {

        int x1, y1, x2, y2;
        cout << "Iltimos, birinchi nuqta koordinatalarini kiriting (x1 y1): ";
        cin >> x1 >> y1;
        cout << "Iltimos, ikkinchi nuqta koordinatalarini kiriting (x2 y2): ";
        cin >> x2 >> y2;

        double masofa = masofaTop(x1, y1, x2, y2);

        cout << "Nuqtalar orasidagi masofa: " << masofa << std::endl;

    }


    void Misol5() {

    	int son;
	    cout << "Iltimos, uch xonali son kiriting: ";
	    cin >> son;

	    int ochiriladiganRaqam = ortaDelete(son);

	    std::cout << "Natija: " << ochiriladiganRaqam << endl;
    }


    void Misol6() {

    	cout << "Berilgan N soni ikkita tub sonni yig‘indisi bo‘lishini tekshiruvchi funksiya tuzing."<< endl;

		int N;
		cout << "Iltimos, N son kiriting: ";
		cin >> N;

		bool natija = yigindisiTubSon(N);

		if (natija) {
		    cout << N << " soni ikkita tub sonning yig'indisi" << endl;
		} else {
		    cout << N << " soni ikkita tub sonning yig'indisi emas" << endl;
		}
    }

    void Misol7() {

		Nuqta A, B, C;

		cout << "Iltimos, A nuqtasini kiriting (x y): ";
		cin >> A.x >> A.y;
		cout << "Iltimos, B nuqtasini kiriting (x y): ";
		cin >> B.x >> B.y;
		cout << "Iltimos, C nuqtasini kiriting (x y): ";
		cin >> C.x >> C.y;

		bool natija = togriChiziqdaYotmaydi(A, B, C);

		if (natija) {
		    cout << "Uchta nuqta bir to'g'ri chiziqda yotmaydi." << endl;
		} else {
		    cout << "Uchta nuqta bir to'g'ri chiziqda yotadi yoki chiziq to'g'ri emas." << endl;
		}
    }


    void Misol8() {

    	int son;
        std::cout << "Son kiriting: ";
        std::cin >> son;

        int natija = bolinuvchiSon(son);

        std::cout << "Natija: " << natija << std::endl;

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

		cout << "Endi misol raqamini kiriting: ";
		cin >> MISOL_RAQAMI;

		switch (MISOL_RAQAMI) {
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

            default:
                cout << "Misolni topilmadi!";
		}


		cout << "Yana misol ishlanadimi? (h/y): " << endl;
		cin >> SAV;

	}	while(SAV=="h");

}



int main() {

	int TOPSHIRIQ_RAQAMI;

	do {

        cout << "Topshiriq raqamini kiriting!: ";
        cin >> TOPSHIRIQ_RAQAMI;

        switch(TOPSHIRIQ_RAQAMI) {
            case 1:
                BirinchiTopshiriqniYuklash();
                break;
        }

		cout << "yana topshiriq ishlanadimi? (h/y): ";
		cin >> SAV;

	} while(SAV=="h");

	return 0;
}
