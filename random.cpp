/* 
 * File:   random.cpp
 * Author: jakeday
 * 
 * Created on April 10, 2017, 5:37 PM
 */

#include "random.h"

//Constructor for RandGen
RandGen::RandGen(int seed, int multiplier, int increment, int modulus) {
    this->seed = seed;
    this->multiplier = multiplier;
    this->increment = increment;
    this->modulus = modulus;
}

//Generates the next number based on the new seed
double RandGen::next() {
    int newSeed = (multiplier * seed + increment) % modulus;
    setSeed(newSeed);
    return newSeed;
}

//Changes the value of the seed
void RandGen::setSeed(int seed) {
    this->seed = seed;
}
