#include <iostream>
using namespace std;

// int get() throw(char*) {
int get() {
	int n;
	cout << "0~9 사이의 정수 입력 >> ";
	cin >> n;
	if(n >= 0 && n <= 9)
		return n;
	else
		throw "input fault";
}

int main() {
	int n, m;
	while(true) {
		try {
			n = get();
			m = get();
			cout << n << 'x' << m << '=' << n*m << endl;
		}
		catch(const char* s) {
			cout << s << " 예외 발생, 계산할 수 없음" << endl;
		}
	}
}

// 0-9 사이의 정수를 키보드에서 입력받아 리턴하는 get()함수의 원형
// int get() throw(char*);
// get() 함수는 사용자가 0-9 값을 입력하지 않는 경우 문자열 "input fault" 예외 발생
// get() 함수를 이용하여 두 개의 정수를 키보드로부터 입력 받아 두 수의 곱을 출력