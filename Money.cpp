#include "Money.h"
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

Money::Money() {
    cents = 0;
    dollars = 0;
    pennies = 0;
}

Money::Money(int userDollars, int userCents) {
    cents = userDollars * 100 + userCents;
    dollars = userDollars;
    pennies = userCents;
}

bool Money::operator <(const Money& m) {
    if(cents < m.cents) {
        return true;
    }
    return false;
}

bool Money::operator >(const Money& m) {
    if(cents > m.cents) {
        return true;
    }
    return false;
}

bool Money::operator <=(const Money& m) {
    if(cents <= m.cents) {
        return true;
    }
    return false;
}

bool Money::operator >=(const Money& m) {
    if(cents >= m.cents) {
        return true;
    }
    return false;
}

bool Money::operator != (const Money& m) {
    if(cents != m.cents) {
        return true;
    }
    return false;
}

bool Money::operator ==(const Money& m) {
    if(cents == m.cents) {
        return true;
    }
    return false;
}

Money operator+(const Money &c1, const Money &c2) {
	int d;
    int p;
    int c;
    c = c1.cents + c2.cents;
    d = c / 100;
    p = c % 100;
    return Money(d, p);
}

Money operator-(const Money &c1, const Money &c2) {
	int d;
    int p;
    int c;
    c = c1.cents - c2.cents;
    d = c / 100;
    p = c % 100;
    return Money(d, p);
}

/*Money::Money operator+ () {
    return Money(dollars, pennies);
}

Money::Money operator- () {
    dollars = -dollars;
    pennies = -pennies;
    return Money(dollars, pennies);
}*/

ostream& operator<<(ostream& os, const Money& m)
{
    os << '$' << m.dollars << '.' << setw(2) << setfill('0') << m.pennies;
    return os;
}