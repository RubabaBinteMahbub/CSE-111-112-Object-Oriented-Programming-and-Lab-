#include<iostream>
using namespace std;

class Coord {
private:
    int x, y;

public:
    Coord(int a=0, int b=0){
        x = a;
        y = b;
    }

    // Prefix Increment
    Coord operator++() {
        ++x;
        ++y;
        return *this;
    }

    // Postfix Increment
    Coord operator++(int) {
        Coord temp = *this;
        x++;
        y++;
        return temp;
    }

    // Prefix Decrement
    Coord operator--() {
        --x;
        --y;
        return *this;
    }

    // Postfix Decrement
    Coord operator--(int) {
        Coord temp = *this;
        x--;
        y--;
        return temp;
    }

    void display(){
        cout << "(" << x << ", " << y << ")" << endl;
    }
};

int main(){
    Coord p1(5, 5);

    cout << "Original: ";
    p1.display();

    // Increment
    ++p1;
    cout << "After Prefix (++p1): ";
    p1.display();

    p1++;
    cout << "After Postfix (p1++): ";
    p1.display();

    // Decrement
    --p1;
    cout << "After Prefix (--p1): ";
    p1.display();

    p1--;
    cout << "After Postfix (p1--): ";
    p1.display();

    return 0;
}
