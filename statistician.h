/* 
 * File:   statistician.h
 * Author: jakeday
 *
 * Created on April 10, 2017, 5:37 PM
 */

#ifndef STATISTICIAN_H
#define	STATISTICIAN_H

class statistician {

public:
    //default constructor
    statistician();
    
    void next_number(double num);
    int length();
    double last();
    double sum();
    double mean();
    double smallest();
    double largest();
    void erase();
    
private:
    int s_length;
    double s_last;
    double s_sum;
    double s_mean;
    double s_smallest;
    double s_largest;
};

#endif	/* STATISTICIAN_H */

