#include<iostream>
#include<string>
using namespace std;

class Teherauto {
protected:
	string gyarto;
	string motor;
	string fekrendszer;
	string maximalis_terheles;
public:
	Teherauto(string gy, string m, string fek,
		double teher) {
		gyarto = gy;
		motor = m;
		fekrendszer = fek;
		maximalis_terheles = teher;
	}
	void Indit() { }
	void GaztAd() { }
	virtual void Fekez() {
		cout << "A hagyomanyosan fekez." << endl;
	}
	void BalraFordul() { }
	void JobbraFordul() { }
};
class Kisteherauto : public Teherauto {
public:
	Kisteherauto(string gy, string m, string fek)
		: Teherauto(gy, m, fek, 20) { }
};
class Kamion : public Teherauto {
public:
	Kamion(string gy, string m, string fek, double teher)
		: Teherauto(gy, m, fek, teher) { }
	void Fekez() { cout << "A EBS-sel fekez." << endl; }
	void Navigal() {}
};
int main() {
	Kisteherauto posta("ZIL", "Diesel", "légfék");
	posta.Fekez(); // A hagyomanyosan fekez.
	Kamion enAutom("Kamaz", "gázmotor", "EBS", 40);
	enAutom.Fekez(); // A EBS-sel fekez.
}