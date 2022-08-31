#ifndef OPTION_HPP
#define OPTION_HPP

#include <iostream>

using namespace std;


class Option : public Instrument
{
    public:
        double r; //interest rate
        double sig; //volatility
        double K; //strike price
        double T; //expiry date
        double b; // cost of carry

        Option() {}

        // an option uses a polymorphic payoff object
        OneFactorPayoff OptionPayoff;
};