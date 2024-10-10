// class Accumulator 는 add() 함수를 통해 값을 누적하는 함수로서, 다음과 같이 선언된다. 
// Accumulator class를 구현하라.
// Accumulator 는 다음과 같이 main() 함수에 의해 활용된다. 

#include <iostream>
using namespace std;

class Accumulator {
	int value;
public:
	Accumulator(int value) { this->value = value; }
	Accumulator& add(int n);
	int get() { return value; }
};

// add 함수 정의
Accumulator& Accumulator::add(int n) {
    value += n;
    return *this; // 자기 자신을 반환하여 연속된 호출 가능
}


int main() {
	Accumulator acc(10);
	acc.add(5).add(6).add(7); // acc의 value 멤버가 28이 된다.
	cout << acc.get() << endl; // 28 출력
}
