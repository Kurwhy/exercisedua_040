#include <iostream>
using namespace std;

class bidangDatar {
private:
	int x;

public:
	bidangDatar() {
		x = 0;
	}

	virtual void input() = 0;
	virtual float Luas() = 0;
	virtual float Keliling() = 0;
	void setX(int a) {
		this->x = a;
	}
	int getX(){
		return x;
	}
};

class Lingkaran:public bidangDatar {
public:
	void input() {
		cout << "Lingkaran dibuat" << endl;
		cout << "Masukkan jari-jari :";
		int jejari;
		cin >> jejari;
		setX(jejari);
	}

	float Luas() {
		return 3.14 * getX() * getX();
	}

	float Keliling() {
		return 2 * 3.14 * getX();
	}
};

class Bujursangkar :public bidangDatar {
public:
	void input() {
		cout << "Bujursangkar dibuat" << endl;
		cout << "Masukkan sisi :";
		int sisi;
		cin >> sisi;
		setX(sisi);
	}

	float Luas() {
		return getX() * getX();
	}

	float keliling() {
		return 4 * getX();
	}

};

int main() {
	Lingkaran a;
	a.input();
	a.Luas();
	a.Keliling();

	Bujursangkar b;
	b.input();

}
