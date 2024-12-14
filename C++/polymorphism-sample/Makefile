all: out
	echo 'Compilation success'

out: Student.o Bachelor.o main.o
	g++ -o out main.o Bachelor.o Student.o

main.o: main.cpp
	g++ -c main.cpp

Bachelor.o: Bachelor.cpp Bachelor.h
	g++ -c Bachelor.cpp

Student.o: Student.cpp Student.h
	g++ -c Student.cpp

clean:
	rm *.o out