#include<iostream>
using namespace std;

class sumOfNumber {
    int a, b, ans;
public:
    void setNum(int n1, int n2) {
        a = n1;
        b = n2;
    }

    friend sumOfNumber sumFun(int x, int y);

    int getAns() {
        return ans;
    }
};

sumOfNumber sumFun(int x, int y) {
    sumOfNumber object2;
    object2.ans = x + y;
    cout << "The answer is: " << object2.ans << endl;
    return object2;
}

int main() {
    sumOfNumber object1;
    object1.setNum(2, 3);
    sumFun(object1.a, object1.b);

    return 0;
}
