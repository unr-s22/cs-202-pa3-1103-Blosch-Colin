#ifndef ACCOUNT_H
#define ACCOUNT_H
#include "Money.h"
#include <vector>

using namespace std;

class Account{

public:
		Money Money;
		vector<Money> depositVector;
		vector<Money> withdrawalVector;
		bool needUpdate = false;

public:
		Account(Money);
		void deposit(Money);
		void withdrawal(Money);
		Money balance();
		friend ostream& operator << (ostream&, Account& account);

};

#endif
