#ifndef IBVPIMP_HPP
#define IBVPIMP_HPP

#include <iosteam>

using namespace std;

class IBVPImp 
{
    virtual double diffusion(double x, double t) const = 0;
    virtual double convection(double x, double t) const = 0;
    virtual double zeroterm(double x, double t) const = 0;
    virtual double RHS(double x, double t) const = 0;
    virtual double BCL(double t) const = 0;
    virtual double BRC(double t) const = 0;
    virtual double IC(double x) const = 0;
};