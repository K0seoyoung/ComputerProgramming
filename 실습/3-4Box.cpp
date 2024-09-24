/*다음 코드에서 Box class의 선언부와 구현부를 Box.h,Box.cpp 파일로 분리하고 
main() 함수 부분을 main.cpp로 분리하여 전체 프로그램을 완성하라.*/

#include "3-4Box.h"
#include <iostream>
using namespace std;

// 생성자: 박스의 크기를 설정하고, 기본 채우기 문자는 '*'로 설정
Box::Box(int w, int h) {
    setSize(w, h);
    fill = '*';
}

// 박스 내부를 채우는 문자를 설정하는 함수
void Box::setFill(char f) {
    fill = f;
}

// 박스의 크기를 설정하는 함수
void Box::setSize(int w, int h) {
    width = w;
    height = h;
}

// 박스를 그리는 함수
void Box::draw() {
    for (int n = 0; n < height; n++) {
        for (int m = 0; m < width; m++) {
            cout << fill;
        }
        cout << endl;
    }
}
