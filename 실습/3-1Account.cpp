/*은행에서 사용하는 프로그램을 작성하기 위해, 
은행 계좌 하나를 표현하는 클래스 Account가 필요하다.
1. 계좌 정보는 계좌의 주인, 계좌 번호, 잔액을 나타내는 3 맴버 변수로 이루어짐
2. main() 함수의 실행결과가 다음과 같도록 Account 클래스를 작성하라. */

#include <iostream>
#include <string>
using namespace std;

class Account {
    string owner;  // 계좌 주인
    int accountId; // 계좌 번호
    double balance; // 잔액

public:
    // 생성자
    Account(string a, int id, double m) : owner(a), accountId(id), balance(m) {}

    // 입금 함수
    void deposit(double amount) {
        balance += amount;
    }

    // 출금 함수
    double withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
            return amount;
        } else {
            cout << "잔액이 부족합니다." << endl;
            return 0;
        }
    }

    // 잔액 조회 함수
    double inquiry() const {
        return balance;
    }

    // 계좌 주인 이름 반환 함수
    string getOwner() const {
        return owner;
    }
};

int main() {
    Account a("kitae", 1, 5000);  // id 1번, 잔액 5000원, 이름 kitae
    a.deposit(50000);             // 50000원 저금
    cout << a.getOwner() << "의 잔액은 " << a.inquiry() << endl;

    int money = a.withdraw(20000); // 20000원 출금
    cout << a.getOwner() << "의 잔액은 " << a.inquiry() << endl;

    return 0;
}
