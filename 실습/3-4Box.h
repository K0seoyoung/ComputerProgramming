/*다음 코드에서 Box class의 선언부와 구현부를 Box.h,Box.cpp 파일로 분리하고 
main() 함수 부분을 main.cpp로 분리하여 전체 프로그램을 완성하라.*/

#ifndef BOX_H
#define BOX_H

class Box {
private:
    int width, height;  // 박스의 너비와 높이
    char fill;          // 박스 내부를 채우는 문자

public:
    Box(int w, int h);  // 생성자
    void setFill(char f);  // 내부를 채우는 문자를 설정
    void setSize(int w, int h);  // 박스의 크기 설정
    void draw();  // 박스를 그리는 함수
};

#endif
