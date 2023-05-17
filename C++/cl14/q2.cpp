#include <iostream>
using namespace std;

class Calculator {
   protected:
    virtual void input() = 0;
    virtual int calc(int a, int b) = 0;

   public:
    virtual void run() = 0;
};

class Adder : public Calculator {
   protected:
    int a = 0, b = 0;
    void input() {
        cout << "더할 정수 두 개를 입력하세요: ";
        cin >> a >> b;
    }
    int calc(int a, int b) { return a + b; }

   public:
    void virtual run() {
        input();
        cout << "계산된 값은 " << calc(a, b) << endl;
    }
};

class Subtractor : public Calculator {
   protected:
    int a = 0, b = 0;
    void input() {
        cout << "뺄 정수 두 개를 입력하세요: ";
        cin >> a >> b;
    }
    int calc(int a, int b) { return a - b; }

   public:
    void virtual run() {
        input();
        cout << "계산된 값은 " << calc(a, b) << endl;
    }
};

int main() {
    Calculator* adder = new Adder();
    Calculator* subtractor = new Subtractor();
    adder->run();
    subtractor->run();
}