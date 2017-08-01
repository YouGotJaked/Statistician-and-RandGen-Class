/* 
 * File:   statistician.cpp
 * Author: jakeday
 * 
 * Created on April 10, 2017, 5:37 PM
 */

#include <cassert>
#include "statistician.h"

//Default constructor for statistician
statistician::statistician() {
    s_length = 0;
    s_sum = 0;
}

//Adds a number to the sequence
void statistician::next_number(double num) {
    s_length++;
    
    s_last = num;
    
    s_sum += num;
    
    s_mean = s_sum / s_length;
    
    if (num < s_smallest) {
        s_smallest = num;
    }
    
    if (num > s_largest) {
        s_largest = num;
    }
}

//Returns the length of the sequence
int statistician::length() {
    assert(s_length >= 0); //verify the length isn't negative
    return s_length;
}

//Returns the last number added to the sequence
double statistician::last() {
    assert(s_length > 0); //verify the sequence isn't empty
    return s_last;
}

//Returns the sum of the numbers in the sequence
double statistician::sum() {
    assert(s_length >= 0); //verify the length isn't negative
    return s_sum;
}

//Returns the mean of the numbers in the sequence
double statistician::mean() {
    assert(s_length > 0); //verify the sequence isn't empty
    return s_mean;
}

//Returns the smallest number in the sequence
double statistician::smallest() {
    assert(s_length > 0); //verify the sequence isn't empty
    return s_smallest;
}

//Returns the largest number in the sequence
double statistician::largest() {
    assert(s_length > 0); //verify the sequence isn't empty
    return s_largest;
}

//Erases the sequence
void statistician::erase() {
    *this = statistician();
}
