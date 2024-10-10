// 다음과 같이 선언된 정수를 저장하는 스택 클래스 MyIntStack 을 구현하라.
// MyIntStack 스택에 저장할 수 있는 정수의 최대 개수는 10이다. 
// MyIntStack 클래스를 활용하는 코드와 실행결과는 다음과 같다.
// 0 1 2 3 4 5 6 7 8 9
// 11 번째 stack full
// 9 8 7 6 5 4 3 2 1 0
// 11 번째 stack empty

#include <iostream>
using namespace std;

class MyIntStack {
	int p[10];
	int tos; // 스택의 꼭대기를 가리키는 인덱스
public:
	MyIntStack();
	bool push(int n); // 정수 n 푸시. 꽉 차 있으면 false, 아니면 true 리턴
	bool pop(int &n); // 팝하여 n에 저장.스택이 비어 있으면 false, 아니면 true 리턴
};

// 생성자: 스택의 꼭대기를 가리키는 tos를 -1로 설정 (빈 스택을 나타냄)
MyIntStack::MyIntStack() {
	tos = -1; // 초기에는 스택이 비어 있음
}

// push 함수: 스택에 정수 n을 푸시, 꽉 차면 false 반환
bool MyIntStack::push(int n) {
	if (tos >= 9) {  // 스택이 꽉 찼을 때 (배열의 마지막 인덱스는 9)
		return false;
	}
	p[++tos] = n;  // tos를 증가시키고 그 위치에 n 저장
	return true;
}

// pop 함수: 스택에서 값을 팝하여 n에 저장, 비어 있으면 false 반환
bool MyIntStack::pop(int &n) {
	if (tos < 0) {  // 스택이 비어 있을 때
		return false;
	}
	n = p[tos--];  // tos가 가리키는 값을 n에 저장하고 tos 감소
	return true;
}



int main() {
	MyIntStack a;
	for(int i=0; i<11; i++) { // 11개를 푸시한다.
		if(a.push(i)) cout << i << ' '; // 푸시된 값 에코
		else cout << endl << i+1 << " 번째 stack full" << endl;
	}
	int n;
	for(int i=0; i<11; i++) { // 11개를 팝한다.
		if(a.pop(n)) cout << n << ' '; // 팝 한 값 출력
		else cout << endl << i+1 << " 번째 stack empty";
	}
	cout << endl;
}
