/*Oval 클래스는 주어진 사각형에 내접하는 타원을 추상화한 클래스이다.
Oval 클래스의 맴버는 모두 다음과 같다. 선언부와 구현부로 나누어 작성
1. 정수 값이 사각형 너비와 높이 를 가지는 width, height 변수 맴버
2. 너비와 높이를 1로 초기화하는 매개 변수 없는 생성자
3. 타원의 너비를 리턴하는 getWidth()
4. 타원의 높이를 리턴하는 getHeight()
5. 타원의 너비와 높이를 변경하는 set(int w, int h)
6. 타원의 너비와 높이를 화면에 출력하는 show() 함수 맴버*/

#include <iostream>
using namespace std;

class Oval {
private:
    int width,height;
public:
    Oval();
    Oval(int w, int h);
    ~Oval();            //소멸자 있어야함!
    int getWidth();
    int getHeight();
    void set(int w, int h);
    void show();
};
Oval::Oval(){
    width = 1;
    height = 1;
}
Oval::Oval(int w, int h){
    width = w;
    height = h;
}
Oval::~Oval(){
    cout << "Oval : 소멸 width = " << width << ", height = " << height << endl;
}
int Oval::getWidth(){
    return width;
}
int Oval::getHeight(){
    return height;
}
void Oval::set(int w,int h) {
    width = w;
    height = h;
}
void Oval::show(){
    cout << "width = " << width << ", height = " << height << endl;
}
int main() {
    Oval a, b(3,4);
    a.set(10,20);
    a.show();
    cout << b.getWidth() << ", " << b.getHeight() << endl;
}