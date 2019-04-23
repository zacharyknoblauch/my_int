CFLAGS = -Wall -std=c++11

a.out: my_int_main.o my_int.o
	g++ $(CFLAGS) my_int_main.o my_int.o

my_int_main.o: my_int_main.cc my_int.h
	g++ -c $(CFLAGS) my_int_main.cc

my_int.o: my_int.cc my_int.h
	g++ -c $(CFLAGS) my_int.cc

clean:
	rm -f *.o a.out
