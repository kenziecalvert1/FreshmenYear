PROGS := driver

all: $(PROGS)

driver: driver.o pokemon.o  cave.o field.o  pokestop.o event.o location.o flyingpokemon.o charizard.o espeon.o geodude.o mewtwo.o onix.o psychicpokemon.o rayquaza.o rockpokemon.o trainer.o  world.o
	clear
	g++ -Wall -g driver.o event.o pokemon.o cave.o charizard.o espeon.o flyingpokemon.o geodude.o location.o  mewtwo.o onix.o pokestop.o psychicpokemon.o rayquaza.o rockpokemon.o trainer.o field.o world.o -o driver
	@make clean_o

debug: driver.o pokemon.o  cave.o field.o  pokestop.o event.o location.o flyingpokemon.o charizard.o espeon.o geodude.o mewtwo.o onix.o psychicpokemon.o rayquaza.o rockpokemon.o trainer.o  world.o
	g++ -Wall -g driver.o event.o pokemon.o cave.o charizard.o espeon.o flyingpokemon.o geodude.o location.o  mewtwo.o onix.o pokestop.o psychicpokemon.o rayquaza.o rockpokemon.o trainer.o field.o world.o -o debug -D DEBUG
	@make clean_o
driver.o: driver.cpp
	g++ -c driver.cpp

cave.o: cave.cpp cave.h
	g++ -c cave.cpp

charizard.o: charizard.cpp charizard.h
	g++ -c charizard.cpp

espeon.o: espeon.cpp espeon.h
	g++ -c espeon.cpp

event.o: event.cpp event.h
	g++ -c event.cpp

flyingpokemon.o: flyingpokemon.cpp flyingpokemon.h
	g++ -c flyingpokemon.cpp

mewtwo.o: mewtwo.cpp mewtwo.h
	g++ -c mewtwo.cpp
balrog.o: balrog.cpp balrog.h
	g++ -c balrog.cpp

geodude.o: geodude.cpp geodude.h
	g++ -c geodude.cpp

location.o: location.cpp location.h
	g++ -c location.cpp
mewto.o: mewto.cpp mewto.h
	g++ -c mewto.cpp

onix.o: onix.cpp onix.h
	g++ -c onix.cpp

pokemon.o: pokemon.cpp pokemon.h
	g++ -c pokemon.cpp

pokestop.o: pokestop.cpp pokestop.h
	g++ -c pokestop.cpp

psychicpokemon.o: psychicpokemon.cpp psychicpokemon.h
	g++ -c psychicpokemon.cpp

rayquaza.o: rayquaza.cpp rayquaza.h
	g++ -c rayquaza.cpp

rockpokemon.o: rockpokemon.cpp rockpokemon.h
	g++ -c rockpokemon.cpp

field.o: field.cpp field.h
	g++ -c field.cpp

trainer.o: trainer.cpp trainer.h
	g++ -c trainer.cpp

world.o: world.cpp world.h
	g++ -c world.cpp

clean_o:
	rm -f *.o
clean:
	rm -f $(PROGS) *.o *~
