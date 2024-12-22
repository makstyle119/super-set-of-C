user: main.o user.o teacher.o
	g++ main.o user.o teacher.o -o user

main.o: main.cpp
	g++ -c main.cpp

user.o: user.cpp
	g++ -c user.cpp

teacher.o: teacher.cpp
	g++ -c teacher.cpp

clean:
	rm *.o user