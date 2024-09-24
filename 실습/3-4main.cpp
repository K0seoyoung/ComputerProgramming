/*다음 코드에서 Box class의 선언부와 구현부를 Box.h,Box.cpp 파일로 분리하고 
main() 함수 부분을 main.cpp로 분리하여 전체 프로그램을 완성하라.*/

#include "3-4Box.h"
#include <iostream>
using namespace std;

int main() {
    Box b(10,2);
    b.draw();           //박스를 그린다.
    cout << endl;
    b.setSize(7,4);
    b.setFill('^');     //박스 내부를 ^ 문자로 채운다.
    b.draw();           //draw box
}

/*
cd 실습 파일
g++ 3-4main.cpp 3-4Box.cpp -o main
./main
터미널에 이렇게 쳐야지 결과 출력됨
*/