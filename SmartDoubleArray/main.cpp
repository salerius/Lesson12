#include <iostream>
#include "SmartDoubleArray.h"

using namespace std;
using namespace MyArray;

int main()
{

    SmartDoubleArray a2;

    a2.add(5);
    a2.add(3);
    a2.add(731);
    a2.add(1231);
    a2.add(1);
	cout << a2 << endl;
	a2.insert(777, 2);
	cout << a2 << endl;
	a2.add(3);
    a2.add(44);
    a2.add(55);

    cout<<"Size: "<<a2.getSize()<<endl;
    cout <<"Capacity: "<<a2.getCapacity() << endl;
    cout << a2 << endl;


    a2.insert(777, 2);

    cout << "Size: " << a2.getSize() << endl;
    cout << "Capacity: " << a2.getCapacity() << endl;
    cout << a2 << endl;

    cout << "Size: " << a2.getSize() << endl;
    cout << "Capacity: " << a2.getCapacity() << endl;
    cout << a2 << endl;
    a2.remove(2);

    cout << "Size: " << a2.getSize() << endl;
    cout << "Capacity: " << a2.getCapacity() << endl;
    cout << a2 << endl;


   a2.add(9999);
   a2.add(9999);
   a2.add(9999);

   cout << "Size: " << a2.getSize() << endl;
   cout << "Capacity: " << a2.getCapacity() << endl;
   cout << a2 << endl;

   
   
    cout << a2 << endl;
    a2.remove(0);

    cout << "Size: " << a2.getSize() << endl;
    cout << "Capacity: " << a2.getCapacity() << endl;
    cout << a2 << endl;

    int a=a2.getAt(2);
    cout << a << endl;

    a = a2.getSize();
    cout << "Size Array :"<< a << endl;

    a = a2[7];
    cout << "Overload [] :" << a << endl;

    int m;
    m = a2.findNext(731, 1);
    cout << "FindNext :" << m << endl;
    cout << a2 << endl;
    cout << a2 << endl;

    a2.add(5731);
    a2.add(131);
    a2.add(12);
    a2.add(63);
    a2.add(38);
    a2.add(38);

    cout << "Size: " << a2.getSize() << endl;
    cout << "Capacity: " << a2.getCapacity() << endl;
    cout << a2 << endl;

    a2.insert(888, 6);
    a2.insert(888, 6);

    cout << a2 << endl;
    a = a2.count(9999);
    cout << "count of 9999 in array : " << a << endl;

    a2.insert(55, 3);
    
    cout << a2<<endl;


    cin.get();
    cin.get();

}