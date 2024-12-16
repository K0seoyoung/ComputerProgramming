#include <iostream>
using namespace std;

int main() {
	int count = 0;
	int ch;
	while((ch=cin.get()) != EOF) {
		if(ch == 'a') 
			count++;
		else if(ch == '\n')
			break;
	}
	cout << "a 문자는 총 " << count << "개 입니다." << endl;
}

// int cin.get() 함수를 이용하여 키보드로부터 한 라인을 읽고 
// 'a'가 몇 개인지 출력하는 프로그램을 작성하라.
