// cout 과 >>연산자를 이용하여 1부터 100 까지 정수를 한줄에 10개씩 출력하라.
// 각 정수는 탭으로 분리하여 출력

#include <iostream>
using namespace std;

int main() {
	int i = 1;
	
	while(i < 101){
		cout << i << "   ";
		if(i % 10 == 0){
			cout << endl;
		}
		i++;
	}
	return 0;
}