//string 클래스를 이용하여 사용자가 입력한 영문 한 줄을 문자열로 입력 받고 거꾸로 출력하는 프로그램을 작성하라.
#include <iostream>
#include <string>
using namespace std;

int main() {
	string text;
	cout << "아래에 한 줄을 입력하세요.(exit를 입력하면 종료합니다)" << endl;
	while(true) {
		cout << ">>";
		getline(cin, text, '\n');
		if(text == "exit")
			break;
		int size = text.length();
		int n = size/2;
		for(int i=0; i<n; i++) {
			char tmp = text[i];
			text[i] = text[size-i-1];
			text[size-i-1] = tmp;
		}
		cout << text << endl;
	}
}