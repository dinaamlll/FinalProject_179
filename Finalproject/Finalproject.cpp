#include <iostream>
using namespace std;
class bidangDatar {
private:
	int x, y;
public:
	bidangDatar() {
		x = 0;
		y = 0;
	}
	virtual void input() {}
	virtual float Luas(int a) { return 0; }
	virtual float Keliling(int a) { return 0; }
	virtual void cekUkuran() { return; }
	void setX(int a) {
		this->x = a;
	}
	int getX() {
		return x;
	}
	void cetakUlang();
	float lingkaran = lingkaran;
	if (Keliling > 40) {
		cout << "Ukurannya besar";
	}
	else {
	}
};



class Lingkaran :public bidangDatar {
private:
	int x;
	int y;
public:
	void input() {
		int x;
		int y;
		cout << "lingkaran dibuat\n " << endl;
		cout << " Masukkan jari-jari lingkaran: ";
		cin >> x;
		cout << " Ukuran lingkaran adalah sedang";
		setX(x);
	}
	float Luas() {
		int a = getX();
		return 3.14 * a * a;
	}
	float Keliling() {
		int a = getX();
		return 3.14 * 2 * a;
	}
};

class Persegipanjang :public bidangDatar {
public:
	void input() {
		int p;
		int l;
		cout << "Persegipanjang dibuat\n " << endl;
		cout << "Masukkan panjang: ";
		cin >> p;
		cout << "Masukkan lebar: ";
		cin >> l;
		cout << " Ukuran persegipanjang adalah sedang";
		setX(p);
	}
	float Keliling() {
		int p = getX();
		int l = getX();
		return 2*(p+l);
		setX(p);
		setX(l);
	}
	float Luas() {
		int p = getX();
		int l = getX();
		return p*l;
		setX(p);
		setX(l);
	}
};

int main() {

	Lingkaran lingkaran;
	lingkaran.input();
	cout << "Luas Lingkaran: " << lingkaran.Luas() << endl;
	cout << "Keliling Lingkaran: " << lingkaran.Keliling() << endl;

	Persegipanjang persegipanjang;
	persegipanjang.input();
	cout << "Luas persegipanjang: " << persegipanjang.Luas() << endl;
	cout << "Keliling persegipanjang: " << persegipanjang.Keliling() << endl;
	return 0;
};