#ifndef BSIBVPIMP_HPP
#define BSIBVPIMP_HPP

#include <iostream>
#include <cstring>
#include <string>

using namespace std;

class BSIBVPImp : public IBVPImp
{
    public:
        Option* opt;
        BSIBVPImp(Option& option) { opt = &option;}
        double diffusion(double x, double t) const
        {
            double v = (opt -> sig);
            return 0.5 * v * v * x * x;
        }
};