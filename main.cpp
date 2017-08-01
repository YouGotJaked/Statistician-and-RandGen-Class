/* 
 * File:   main.cpp
 * Author: jakeday
 *
 * Created on April 10, 2017, 5:39 PM
 */

#include <cstdlib>
#include <iostream>
#include "random.h"
#include "statistician.h"

using namespace std;

int main() {
    
    statistician s1;
    s1.next_number(46);
    s1.next_number(72.1);
    s1.next_number(1);
    s1.next_number(-2);
    
    cout << "length: " << s1.length() << endl;
    cout << "sum: " << s1.sum() << endl;
    cout << "mean: " << s1.mean() << endl;
    cout << "smallest:  " << s1.smallest() << endl;
    cout << "largest: " << s1.largest() << endl;
    cout << "last: " << s1.last() << endl;
    
    s1.erase();
    
    cout << "erasing..." << endl;
    cout << "length: " << s1.length() << endl;
    cout << "sum: " << s1.sum() << endl;
    cout << "mean: " << s1.mean() << endl;
    cout << "smallest:  " << s1.smallest() << endl;
    cout << "largest: " << s1.largest() << endl;
    cout << "last: " << s1.last() << endl;
   
    /*
    RandGen r (1, 40, 725, 729);
    
    cout << "next: " << r.next() << endl;
    cout << "next: " << r.next() << endl;
    cout << "next: " << r.next() << endl;
     */
}

