//책의 년도, 책 이름, 저자 이름을 담은 Book class생성
// vector<Book> v; 로 생성한 벡터를 이용하여 책 입고, 저자와 년도로 검색하는 프로그램 작성

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Book {
	string title; // 책 이름
	string author; // 저자
	int year;
public:
	Book() {};
	Book(string title, string author, int year) { 
		this->title = title;
		this->author = author;
		this->year = year;
	}
	void set(string title, string author, int year) { 
		this->title = title;
		this->author = author;
		this->year = year;
	}
	string getAuthor() { return author; }
	int getYear() { return year; }
	void show();
};

void Book::show() {
	cout << year << "년도, " << title << ", " << author << endl;
}

class BookManager {
	vector<Book> v;
	void searchByAuthor();
	void searchByYear();
	void bookIn();
public:
	void run();
};
void BookManager::searchByAuthor() {
	cout << "검색하고자 하는 저자 이름을 입력하세요>>";
	string author;
	getline(cin, author);
	for(int i=0; i<v.size(); i++) {
		Book b = v[i];
		if(b.getAuthor() == author) 
			b.show();
	}
}

void BookManager::searchByYear() {
	cout << "검색하고자 하는 년도를 입력하세요>>";
	int year;
	cin >> year; cin.ignore();
	for(int i=0; i<v.size(); i++) {
		Book b = v[i];
		if(b.getYear() == year) 
			b.show();
	}
}

void BookManager::bookIn() {
	string title, author;
	int year;
	Book b;
	cout << "입고할 책을 입력하세요. 년도에 -1을 입력하면 입고를 종료합니다." << endl;
	while(true) {
		cout << "년도>>";
		cin >> year; cin.ignore(); // '\n' 키를 키 버퍼에서 제거 한다.
		if(year == -1)
			break;
		cout << "책이름>>";
		getline(cin, title);
		cout << "저자>>";
		getline(cin, author);
		b.set(title, author, year);
		v.push_back(b); // 벡터에 책 한권 삽입
	}
	cout << "총 입고된 책은 " << v.size() << "권입니다." << endl;
}
void BookManager::run() {
	bookIn(); // 입고
	searchByAuthor(); // 저자로 검색
	searchByYear(); // 년도로 검색
}

int main() {
	BookManager man;
	man.run();
}

// // 제가 쓴 코드 (오류 있음 const)
// #include <iostream>
// #include <string>
// #include <vector>
// using namespace std;

// class Book {
//     string title; // 책 이름
//     string author; // 저자
//     int year;
// public:
//     Book() {};
//     Book(string title, string author, int year) { 
//         this->title = title;
//         this->author = author;
//         this->year = year;
//     }
//     void set(string title, string author, int year) { 
//         this->title = title;
//         this->author = author;
//         this->year = year;
//     }
//     string getAuthor() const { return author; } // const 추가
//     int getYear() const { return year; }       // const 추가
//     void show() const;                         // const 추가
// };


// // 여기 아래에 코드를 작성하시오.
// // Book 클래스의 show() 메서드 구현
// void Book::show() const {
//     cout << year << "년도, " << title << ", " << author << endl;
// }

// // BookManager 클래스 정의
// class BookManager {
//     vector<Book> v; // 책들을 저장할 벡터
// public:
//     void run(); // 프로그램 실행 메서드
// private:
//     void addBooks(); // 책 입고 메서드
//     void searchByAuthor() const; // 저자로 검색하는 메서드
//     void searchByYear() const; // 년도로 검색하는 메서드
// };

// // BookManager 클래스의 메서드 구현

// void BookManager::run() {
//     addBooks();
//     cout << "총 입고된 책은 " << v.size() << "권입니다." << endl;

//     searchByAuthor();
//     searchByYear();
// }

// void BookManager::addBooks() {
//     cout << "입고할 책을 입력하세요. 년도에 -1을 입력하면 입고를 종료합니다." << endl;
//     while (true) {
//         int year;
//         string title, author;

//         cout << "년도>>";
//         cin >> year;
//         cin.ignore(); // 입력 버퍼 비우기

//         if (year == -1) {
//             break;
//         }

//         cout << "책이름>>";
//         getline(cin, title);
//         cout << "저자>>";
//         getline(cin, author);

//         Book newBook(title, author, year);
//         v.push_back(newBook);
//     }
// }

// void BookManager::searchByAuthor() const {
//     cout << "검색하고자 하는 저자 이름을 입력하세요>>";
//     string searchAuthor;
//     getline(cin, searchAuthor);

//     bool found = false;
//     for(const auto &book : v) {
//         if(book.getAuthor() == searchAuthor) {
//             book.show();
//             found = true;
//         }
//     }
//     if(!found) {
//         cout << "해당 저자의 책이 없습니다." << endl;
//     }
// }

// void BookManager::searchByYear() const {
//     cout << "검색하고자 하는 년도를 입력하세요>>";
//     int searchYear;
//     cin >> searchYear;
//     cin.ignore(); // 입력 버퍼 비우기

//     bool found = false;
//     for(const auto &book : v) {
//         if(book.getYear() == searchYear) {
//             book.show();
//             found = true;
//         }
//     }
//     if(!found) {
//         cout << "해당 연도의 책이 없습니다." << endl;
//     }
// }

// int main() {
//     BookManager man;
//     man.run();
// }
