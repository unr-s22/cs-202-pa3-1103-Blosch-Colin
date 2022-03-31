tempMain : tempMain.cpp Money.o
	g++ tempMain.cpp Money.o -o tempMain

Money.o : Money.cpp Money.h
	g++ Money.cpp -c

clean :
	rm tempMain *.o