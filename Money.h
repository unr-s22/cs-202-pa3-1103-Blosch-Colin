#include <iostream>
#include <string>
using namespace std;

class Money {
private:
    int cents, dollars, pennies;
public:
    Money();
    Money(int userDollars, int userCents);
    
    bool operator <(const Money& m);
    bool operator >(const Money& m);
    bool operator <=(const Money& m);
    bool operator >=(const Money& m);
    bool operator !=(const Money& m);
    bool operator ==(const Money& m);


    friend Money operator+(const Money &c1, const Money &c2);
    friend Money operator-(const Money &c1, const Money &c2);
       
    //Money operator+ ();
    //Money operator- ();
    
    friend ostream& operator<<(ostream& os, const Money& m);
};