PROGS := driver

all: $(PROGS)

driver: driver.o creature.o elf.o human.o hobbit.o demon.o balrog.o cyberdemon.o world.o
	clear
	g++ -Wall -g driver.o creature.o elf.o human.o hobbit.o demon.o balrog.o cyberdemon.o world.o -o driver
	@make clean_o

driver.o: driver.cpp
	g++ -c driver.cpp

elf.o: elf.cpp elf.h
	g++ -c elf.cpp

human.o: human.cpp human.h
	g++ -c human.cpp

hobbit.o: hobbit.cpp hobbit.h
	g++ -c hobbit.cpp

demon.o: demon.cpp demon.h
	g++ -c demon.cpp

balrog.o: balrog.cpp balrog.h
	g++ -c balrog.cpp

cyberdemon.o: cyberdemon.cpp cyberdemon.h
	g++ -c cyberdemon.cpp

world.o: world.cpp world.h
	g++ -c world.cpp

creature.o: creature.cpp creature.h
	g++ -c creature.cpp
clean_o:
	rm -f *.o
clean:
	rm -f $(PROGS) *.o *~
