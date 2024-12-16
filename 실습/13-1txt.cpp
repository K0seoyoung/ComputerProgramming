#include <iostream>
#include <fstream>
using namespace std;

int main() {
	ifstream fin("/Users/goseoyeong/Documents/hufs/4-2/computerprogrammingPractice/C++/실습/13-1test.txt");
	if(!fin) {
		cout << "열기 오류" << endl;
		cout << "경로명이 옳은지 파일이 있는지 확인하세요" << endl;
		return 0;
	}
	int ch;
	while((ch=fin.get()) != EOF) {
		cout.put(ch);
	}

	fin.close();
}

// 메모장을 이용하여 c:\temp\test.txt 파일을 다음과 같이 편집한 후, 이 파일을 읽어 출력하는 프로그램을 작성하라.