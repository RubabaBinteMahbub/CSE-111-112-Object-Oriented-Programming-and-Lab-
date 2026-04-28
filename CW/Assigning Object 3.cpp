#include<iostream>
using namespace std;

class Sum {
public:
    int a;

    // Function to add two Sum objects to the current object
    Sum add(Sum sa, Sum sb) {
        Sum sc;
        sc.a = a + sa.a + sb.a;
        return sc;
    }
};

int main()
{
    Sum s1, s2, s3;

    s1.a = 50;
    s2.a = 100;
    s3.a = 0;

    cout << "Value of object 1: " << s1.a
         << ", \nobject 2: " << s2.a
         << ", \nobject 3: " << s3.a << endl;

    // Use add with two objects
    s3 = s3.add(s1, s2);

    cout << "Value of s3 after addition: " << s3.a << endl;

    return 0;
}
