//책의 이름과 가격을 저장하는 다음 Book클래스에 대해 물음에 답하라
//1.Book 클래스의 생성자, 소멸자, set()함수를 작성하라. 
//그러고 나서 새로운 메모리를 할당 받고 이곳에 매개 변수로 전달 받은 책 이름을 저장한다.
//2.컴파일러가 삽입하는 디폴트 복사 생성자 코드는 무엇인가?
//3.디폴트 복사 생성자만 있을 때 아래 main()함수는 실행오류가 발생한다.
//실행 오류가 발생하지 않도록 깊은 복사 생성자를 작성하라.
//3에서 실행오류가 발생한는 원인은 Book클래스에서 C-스트링(char* title) 방식으로 문자열을 다뤘기 때문
//복사 생성자를 작성하지 말고 문자열을 string 클래스로 사용하여 3의 실행오류가 발생하지 않도록 클래스 수정하라

// 비주얼 스튜디오에서 stpcpy() 때문에 발생하는 컴파일 오류를 막기 위해
#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <cstring>
using namespace std;

class Book {
	char *title; // 제목 문자열
	int price; // 가격
public:
	Book(const char* title, int price);
	Book(Book& b); // (3) 정답. 깊은 복사 복사 생성자 작성
	~Book();
	void set(const char* title, int price);
	void show() { cout << title << ' ' << price << "원" << endl; }
};

Book::Book(const char*title, int price) { // (1) 정답
	int len = strlen(title);
	this->title = new char [len + 1];
	strcpy(this->title, title);
	this->price = price;
}
Book::~Book() { // (1) 정답
	if(title)
		delete [] title;
}
	
void Book::set(const char* title, int price) { // (1) 정답
	if(this->title) // 현재 객체에 title에 메모리가 할당되어 책 이름이 적혀있는 상황
		delete [] this->title; // 현재 title에 할당된 메모리 반환
	int len = strlen(title);
	this->title = new char [len + 1]; // 새로 메모리 할당
	strcpy(this->title, title);
	this->price = price;
}

/*
Book::Book(Book& b) { // (2) 정답. 디폴트 복사 생성자
	title = b.title;
	price = b.price;
}
*/

Book::Book(Book& b) { // (3) 정답. 깊은 복사 복사 생성자 작성
	int len = strlen(b.title);
	title = new char [len + 1];
	strcpy(title, b.title);
	price = b.price;
}

int main() {
	Book cpp("명품C++", 10000);
	Book java = cpp;
	java.set("명품자바", 12000);
	cpp.show();
	java.show();
}