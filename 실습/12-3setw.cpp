#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
	cout << left;
	cout << setw(15) << "Number";
	cout << setw(15) << "Square";
	cout <<  setw(15) << "Square Root" << endl;
	for(int i=0; i<50; i+=5) {
		cout << setw(15) << setfill('_') << dec << i;
		cout << setw(15) << setfill('_') << dec << i*i;
		cout << setw(15) << setfill('_') << dec << setprecision(3) << sqrt((double)i) << endl;
	}
}

// 다음과 같이 정수, 제곱, 제곱근의 값을 형식에 맞추어
// 출력하는 프로그램을 작성하라.
// 필드의 간격은 총 15, 제곱근 유효숫자 총 3
// 빈칸은 모두 underline(_)문자로 삽입