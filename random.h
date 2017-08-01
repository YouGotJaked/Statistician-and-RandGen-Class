/* 
 * File:   random.h
 * Author: jakeday
 *
 * Created on April 10, 2017, 5:37 PM
 */

#ifndef RANDOM_H
#define	RANDOM_H

class RandGen {
    
public:
    //constructor
    RandGen(int seed, int multiplier, int increment, int modulus);
    
    double next();
    void setSeed(int seed);
    
private:    
    int seed;
    int multiplier;
    int increment;
    int modulus;
};

#endif	/* RANDOM_H */

