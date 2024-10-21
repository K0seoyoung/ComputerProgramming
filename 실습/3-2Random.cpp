/*랜덤 수를 발생시키는 Random 클래스를 만들자.
1. Random 클래스를 이용하여 랜덤 한 정수 10개를 출력하는 사례는 다음과 같다.
2. Random 클래스가 생성자, next(), nextInRange()의 3개의 맴버 함수를 가지도록 작성,
    main()함수와 합쳐 하나의 cpp 파일에 구현*/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Random{
public:
    Random();
    int next();
    int nextInRange(int a,int b);
};

Random::Random(){
    srand((unsigned)time(0));
}
int Random::next(){
    return rand();
}
int Random::nextInRange(int a,int b){
    return a + rand() % (b - a +1);
}

int main(){
    Random r;
    cout << "--0에서 " << RAND_MAX <<"까지의 랜덤 정수 10 개--" << endl;
    for(int i=0;i<10;i++){
        int n = r.next();           //0에서 RAND_MAX(32767)사이의 랜덤한 정수
        cout << n << ' ';
    }
    cout << endl << endl << "-- 2에서 " << "4 까지의 랜덤 정수 10 개 --" << endl;
    for(int i=0;i<10;i++){
        int n = r.nextInRange(2,4); //2에서 4 사이의 랜덤한 정수
        cout << n << ' ';
    }
    cout << endl;
}