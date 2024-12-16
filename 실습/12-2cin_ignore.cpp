#include <iostream>
using namespace std;

int main() {
	int ch;
	cin.ignore(100, ';'); // 영어 문장이 최대 99개의 문자로 입력된다고 가정한다.
	while((ch=cin.get()) != EOF) {
		cout << (char)ch;
		if(ch == '\n') {
			cin.ignore(100, ';'); // 영어 문장이 최대 99개의 문자로 입력된다고 가정한다.
		}
	}
}


// 한 줄에 '영어문장 ; 한글문자' 형식으로 키를 입력될 때,
// cin.ignore() 를 이용하여 ';' 이후의 입력된 문자열을
// 출력하는 프로그램을 작성하라.
// ^Z 키는 입력 종료를 나타내는 키이며,
// cin.get()은 EOF를 리턴한다.