// Circle 클래스에서 다음 연산이 가능하도록 연산자를 프랜드 함수로 작성

#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle(int radius = 0) { this->radius = radius; }
	void show() {
		cout << "radius = " << radius << " 인 원" << endl;
	}

	friend Circle& operator ++(Circle& c);
	friend Circle operator ++(Circle& c, int x);
};

Circle& operator ++(Circle& c) { // 전위 ++. ++a를 위함
	c.radius++;
	return c;
}

Circle operator ++(Circle& c, int x) { // 후위 ++. a++를 위함
	Circle tmp = c;
	c.radius++;
	return tmp;
}

int main() {
	Circle a(5), b(4);
	++a; // 반지름을 1 증가 시킨다.
	b = a++; // 반지름을 1 증가 시킨다.
	a.show();
	b.show();
}