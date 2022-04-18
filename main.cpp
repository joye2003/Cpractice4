#include <iostream>
using namespace std;
class IntArray{
public:
    int *data;
    IntArray() = default;
    IntArray(int n){
        data = new int[n];
    }
    ~IntArray(){
        delete[] data;
    }
};
int main() {
    IntArray obj(2);//This calls the constructor
    obj.data[0] = -3;
    obj.data[1] = 1;
    IntArray obj2(obj);
    cout << obj.data[0] << endl; // The result is -3
    cout << obj2.data[1] << endl; // The result is ??
    return 0;
}