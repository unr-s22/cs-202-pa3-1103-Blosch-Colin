#include "Money.h"
#include "Account.h"

using namespace std;

int main{

	Money Money(300, 23)
	Account account(Money)
	cout << account << endl;
	account.deposit(Money(200,00));
	account.deposit(Money(300,24));
	account.deposit(Money(501,22));
	cout << account << endl;
	account.withdrawal(Money(300,10));
	account.withdrawal(Money(201,34));
	cout << account << endl;

	cout << "=================" << endl;
	cout << "Relations between " << Money << " and " << account.balance() << endl;


	cout << "Relations between " << Money << " > " << account.balance() << ": " << (Money > account.balance()) << endl;
	cout << "Relations between " << Money << " < " << account.balance() << ": " << (Money > account.balance()) << endl;
	cout << "Relations between " << Money << " >= " << account.balance() << ": " << (Money > account.balance()) << endl;
	cout << "Relations between " << Money << " <= " << account.balance() << ": " << (Money > account.balance()) << endl;
	cout << "Relations between " << Money << " == " << account.balance() << ": " << (Money > account.balance()) << endl;
	cout << "Relations between " << Money << " != " << account.balance() << ": " << (Money > account.balance()) << endl;

	return 0;
};
