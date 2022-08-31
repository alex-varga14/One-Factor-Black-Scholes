#ifndef FDM_HPP
#define FDM_HPP

#include <iostream>

using namespace std;

class FDM
{
    protected: 
        IBVP* ibvp;  //pointer to "parent"
        long N;     // num of t sub-divs of interval
        double K;    // step length

        long J;     // num of x sub-dvis
        double h, h2; // redundant

        double tprev, tnowl
        long currentIndex, maxIndex;
        Mesher m;
        Vector<double, long> xarr;

        NumericMatrix<double, long> res;    //contain the results

        long n;     // counter
        Vector<double, long> vecOld;
        Vector<double, long> vecNew;


};