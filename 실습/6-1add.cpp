//add()함수를 호출하는 main()함수는 다음과 같다.
//add()함수를 중복 작성하고 프로그램을 완성하라.
//디폴트 매개 변수를 가진 하나의 add()함수를 작성하고 프로그램을 완성하라.

// add() 함수를 중복 작성하고 프로그램을 완성하라.

#include <iostream>
using namespace std;

int add(int x[], int size) {
	int s = 0;
	for(int i=0; i<size; i++)
		s += x[i];

	return s;
}

int add(int x[], int size, int y[]) {
	return add(x, size) + add(y, size);
}

int main() {
	int a[] = {1,2,3,4,5};
	int b[] = {6,7,8,9,10};
	int c = add(a, 5); // 배열 a의 정수를 모두 더한 값 리턴
	int d = add(a, 5, b); // 배열 a와 b의 정수를 모두 더한 값 리턴
	cout << c << endl; // 10 출력 
	cout << d << endl; // 55 출력
}
