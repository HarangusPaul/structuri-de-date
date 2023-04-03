#include <iostream>
#include "Collection.h"
#include "Iterator.h"
using namespace std;
int main() {
    std::cout << "Hello, World!" << std::endl;
    Collection c;
    cout << c.search(2);
//    c.add(2);
//    c.add(2);
//    c.add(2);
//    c.add(2);
//    c.add(2);
//    c.add(4);
//    c.add(4);
//    c.add(4);
//    c.add(4);

    cout << "-----------"<<endl;
    Iterator it(c);

    while (it.valid())
    {
        cout << it.current()<<" " << it.getCurrentOccurrences() << endl;
        it.next();
    }
    return 0;
}
