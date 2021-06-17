PROGS := driver

all: $(PROGS)

driver: driver.o cart.o librarian.o library.o patron.o
	clear
	g++ -g driver.o cart.o librarian.o library.o patron.o -o driver
	@make clean_o

driver.o: driver.cpp
	g++ -c driver.cpp

cart.o: cart.cpp cart.h
	g++ -c cart.cpp

librarian.o: librarian.cpp librarian.h
	g++ -c librarian.cpp

library.o: library.cpp library.h
	g++ -c library.cpp

patron.o: patron.cpp patron.h
	g++ -c patron.cpp

clean_o:
	rm -f *.o
clean:
	rm -f $(PROGS) *.o *~
