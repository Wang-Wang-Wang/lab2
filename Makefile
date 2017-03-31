EloRatingSystem: EloRatingSystem.o main.o
	g++ -o EloRatingSystem main.o EloRatingSystem.o

EloRatingSystem.o: EloRatingSystem.cpp EloRatingSystem.h
	g++ -c EloRatingSystem.cpp

main.o: main.cpp EloRatingSystem.h
	g++ -c main.cpp

clean:
	rm EloRatingSystem *.o
