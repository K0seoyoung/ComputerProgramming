// AbstrackStack 정수 스택 클래스로서 추상 클래스이다.
// 이를 상속받아 정수를 푸시, 팝하는 IntStack 클래스를 만들어라

#include <iostream>
using namespace std;

class AbstractStack {
public:
	virtual bool push(int n) = 0; // 스택에 n을 푸시한다. 스택이 full이면 false 리턴
	virtual bool pop(int& n) = 0; // 스택에서 팝한 정수를 n에 리턴한다. 스택이 empty이면 false 리턴
	virtual int size() = 0; // 현재 스택에 저장된 정수의 개수 리턴
};

// 여기 아래에 코드를 작성하시오
class IntStack : public AbstractStack {
private:
	int* stack;
	int capacity;
	int top;
public:
	IntStack(int capacity) { // Constructor to initialize stack with given capacity
		this->capacity = capacity;
		stack = new int[capacity];
		top = -1; // Stack is initially empty
	}

	~IntStack() { // Destructor to release allocated memory
		delete[] stack;
	}

	bool push(int n) override { // Pushes n onto the stack if there is space
		if (top >= capacity - 1) return false; // Stack is full
		stack[++top] = n;
		return true;
	}

	bool pop(int& n) override { // Pops the top element into n if the stack is not empty
		if (top < 0) return false; // Stack is empty
		n = stack[top--];
		return true;
	}

	int size() override { // Returns the current size of the stack
		return top + 1;
	}
};

int main() {
	IntStack a(5);
	for(int i=0; i<10; i++)  { // 처음 5 개를 성공적으로 push되고 다음 5 개는 스택 full로 push 실패
		if(a.push(i)) cout << "push 성공" << endl;
		else cout << "스택 full" << endl;
	}

	int n;
	for(int i=0; i<10; i++)  { // 처음 5 개를 성공적으로 pop되고 다음 5 개는 스택 empty로 pop 실패
		if(a.pop(n)) cout << "pop 성공 " << n << endl;
		else cout << "스택 empty" << endl;
	}
}

// 내가 쓴 것
