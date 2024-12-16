// 단위를 변환하는 추상 클래스 Converter를 사용
// 상속받아 달러를 원화로 환산하는 WonToDollar class를 작성

#include <iostream>
#include <string>
using namespace std;

class Converter {
protected:
	double ratio;
	virtual double convert(double src)=0; // src를 다른 단위로 변환한다.
	virtual string getSourceString()=0; // 소스 단위 명칭
	virtual string getDestString()=0; // dest 단위 명칭
public:
	Converter(double ratio) { this->ratio = ratio; }
	void run() {
		double src;
		cout << getSourceString() << "을 " << getDestString() << "로 바꿉니다. ";
		cout << getSourceString() << "을 입력하세요>> ";
		cin >> src;
		cout << "변환 결과 : " << convert(src) << getDestString() << endl;
	}
};

class WonToDollar : public Converter {
protected:
	virtual string getSourceString() { return "원"; }
	virtual string getDestString() { return "달러"; }
	virtual double convert(double src);
public:
	WonToDollar(double ratio) : Converter(ratio) { }
};

double WonToDollar::convert(double src) {
	return src/ratio;
}

int main() {
	WonToDollar wd(1010); // 1 달러에 1010원
	wd.run();
}
// #include <iostream>
// #include <string>
// using namespace std;

// class Converter {
// protected:
//     double ratio;
//     virtual double convert(double src) = 0; // Converts src to the destination unit
//     virtual string getSourceString() = 0; // Source unit name
//     virtual string getDestString() = 0; // Destination unit name
// public:
//     Converter(double ratio) { this->ratio = ratio; }
//     void run() {
//         double src;
//         cout << getSourceString() << "을 " << getDestString() << "로 바꿉니다. ";
//         cout << getSourceString() << "을 입력하세요>> ";
//         cin >> src;
//         cout << "변환 결과 : " << convert(src) << " " << getDestString() << endl;
//     }
// };

// // Implementation of WonToDollar
// class WonToDollar : public Converter {
// public:
//     WonToDollar(double ratio) : Converter(ratio) { } // Constructor initialization

//     double convert(double src) override { // Override convert method
//         return src / ratio;
//     }

//     string getSourceString() override { // Override getSourceString
//         return "원";
//     }

//     string getDestString() override { // Override getDestString
//         return "달러";
//     }
// };

// int main() {
//     WonToDollar wd(1010); // 1 달러에 1010원
//     wd.run();
// }

// // 내가 푼거
