#include<iostream>
#include<string>
using namespace std;

class Member {
protected:
	string name;
	string title;
public:
	Member(string n, string t) {
		name = n;
		title = t;
	}
	void Delete() { }
	void TitleChg() { }
	virtual void NameChg() {
		cout << "Nevet változtató függvény." << endl;
	}
};
class Vip : public Member {
public:
	Vip(string n, string t)
		: Member(n, t) { }
};
class Owner : public Member {
public:
	Owner(string n, string t)
		: Member(n, t) { }
	void NameChg() { cout << "Itt is nevet változtat" << endl; }
	void TitleAdd() {}
};
int main() {
	Vip oktato("InstrUktor", "vezetőoktató");
	oktato.TitleChg(); // Title-t változtat.
	Owner tulaj("TulajDonos", "ceo");
	tulaj.NameChg(); // Nevet változtat.
}