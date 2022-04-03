pa3: main.o Money.o Account.o
	g++ -o pa3 main.o Money.o Account.o

main.o: main.cpp
	g++ -c main.cpp

Money.o: Money.cpp Money.h
	g++ -c Money.cpp

Account.o: Account.cpp Account.h
	g++ -c Account.cpp

clean :
	rm *.o pa3
