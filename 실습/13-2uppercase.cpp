#include <iostream>
#include <fstream>
using namespace std;

int main() {
	ifstream fin("/Users/goseoyeong/Documents/hufs/4-2/computerprogrammingPractice/C++/실습/13-2system.ini");
	if(!fin) {
		cout <<"c:\\windows\\system.ini 열기 오류";
		return 0;
	}

	ofstream fout("/Users/goseoyeong/Documents/hufs/4-2/computerprogrammingPractice/C++/실습/13-2system.txt");
	if(!fout) {
		cout << "c:\\temp\\system.txt 열기 오류";
		return 0;
	}
	cout << "읽기 시작..." << endl;
	int ch;
	while((ch=fin.get()) != EOF) {
		ch = toupper(ch);
		cout << (char)ch;
		fout.put(ch);
	}

	cout << "저장 끝" << endl;
	fin.close();
	fout.close();
}