 #include <iostream>
using namespace std;
//1.(a) pointer to an object (b) this pointer
class Sample {
    int x;
public:
    void set(int x) {
        this->x = x;   // this pointer
    }
    void show() {
        cout << "Value of x = " << x << endl;
    }
};

int main() {
    Sample obj;
    Sample *ptr = &obj;

    obj.set(10);     
    obj.show();

    ptr->set(20);    
    ptr->show();

    return 0;
}




//2. Swap private values of two classes using friend function
#include <iostream>
using namespace std;

class B;

class A {
    int x;
public:
    A(int a) { x = a; }
    friend void swap(A &, B &);
};

class B {
    int y;
public:
    B(int b) { y = b; }
    friend void swap(A &, B &);
};

void swap(A &a, B &b) {
    int temp = a.x;
    a.x = b.y;
    b.y = temp;
}

int main() {
    A a(5);
    B b(10);
    swap(a, b);
    cout << "Swapped successfully" << endl;
    return 0;
}



//3. Add data objects of two different classes using friend function
#include <iostream>
using namespace std;

class B;

class A {
    int x;
public:
    A(int a) { x = a; }
    friend int add(A, B);
};

class B {
    int y;
public:
    B(int b) { y = b; }
    friend int add(A, B);
};

int add(A a, B b) {
    return a.x + b.y;
}

int main() {
    A a(10);
    B b(20);
    cout << "Sum = " << add(a, b);
    return 0;
}


//4. Demonstrate friend class
#include <iostream>
using namespace std;

class A {
    int x = 100;
    friend class B;
};

class B {
public:
    void show(A a) {
        cout << "Value of x = " << a.x;
    }
};

int main() {
    A a;
    B b;
    b.show(a);
    return 0;
}



//5. Array of objects – area of multiple rectangles
#include <iostream>
using namespace std;

class Rectangle {
    int l, b;
public:
    void set() {
        cin >> l >> b;
    }
    void area() {
        cout << "Area = " << l * b << endl;
    }
};

int main() {
    Rectangle r[3];

    cout << "Enter length and breadth:\n";
    for(int i = 0; i < 3; i++)
        r[i].set();

    for(int i = 0; i < 3; i++)
        r[i].area();

    return 0;
}


//6. Inline function to calculate cube
#include <iostream>
using namespace std;

inline int cube(int x) {
    return x * x * x;
}

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;
    cout << "Cube = " << cube(n);
    return 0;
}



//7a. Pass object by value & return object
#include <iostream>
using namespace std;

class Test {
public:
    int x;
    Test(int a) { x = a; }
};

Test change(Test t) {
    t.x += 10;
    return t;
}

int main() {
    Test t1(5);
    Test t2 = change(t1);
    cout << "Original = " << t1.x << endl;
    cout << "Returned = " << t2.x << endl;
    return 0;
}



//7b. Pass Object by Reference
#include <iostream>
using namespace std;

class Test {
public:
    int x;
    Test(int a) { x = a; }
};

Test change(Test &t) {
    t.x += 10;
    return t;
}

int main() {
    Test t1(5);
    Test t2 = change(t1);
    cout << "Modified = " << t1.x << endl;
    return 0;
}

