// 다음 프로그램은 컴파일 오류가 발생한다. 소스의 어디에서 왜 컴파일 오류가 발생하는 지 작성하시오.
// 정상적인 출력이 되도록 프로그램을 수정하시오

// 제가 쓴 코드
#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle(int radius=1) { this->radius = radius; }
	int getRadius() { return radius;}
	
	//Circle 클래스에는 operator>가 정의되어 있지 않아서, waffle > pizza와 같은 비교가 불가능합니다. 이로 인해 컴파일러는 operator>를 찾을 수 없다는 오류를 발생시킵니다.
	// operator>를 멤버 함수로 정의
	bool operator>(const Circle& other) const {
		return this->radius > other.radius;
	}
};

template <class T>
T bigger(T a, T b) { // 두 개의 매개 변수를 비교하여 큰 값을 리턴
	if(a > b) return a; 
	else return b;
}

int main() {
	int a=20, b=50, c;
	c = bigger(a, b);
	cout << "20과 50중 큰 값은 " << c << endl;
	Circle waffle(10), pizza(20), y;
	y = bigger(waffle, pizza);
	cout << "waffle과 pizza 중 큰 것의 반지름은 " << y.getRadius() << endl;
}
