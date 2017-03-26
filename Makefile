all: main.o rank.o
	g++ -o main main.o rank.o
main.o: main.cpp rank.h
	g++ -c main.cpp
rank.o: rank.cpp rank.h
	g++ -c rank.cpp

clean:
	rm main *.o
