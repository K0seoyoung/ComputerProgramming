#include <iostream>
using namespace std;

int sum(int a, int b) {
	if(a > b) throw "잘못된 입력";
	if(a < 0 || b < 0) throw "음수 처리 안됨";
	int s = 0;
	for(int i=a; i<=b; i++)
		s += i;
	return s;
}

int main() {
	try {
		cout << sum(2,5) << endl;
		cout << sum(-1,5) << endl;
	}
	catch(const char* s) {
		cout << s << endl;
	}
}

// sum() function 원형은 다음과 같다. int sum(int a, int b);
// sum() 함수는 매개 변수로 주어진 a,b까지 양의 정수 합을 구해 return 함
// 만일 a > b 이면 잘못된 입력을, 두 수 중 하나라도 음수면 "음수처리안됨" 예외 throw
// sum() 함수를 호출하는 main() 사례는 다음과 같다.
// sum() 함수 구현하라.
