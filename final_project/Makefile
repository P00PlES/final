CC =g++ -std=c++14 -c

CFLAGS=-g -I/usr/include/jsoncpp

LDFLAGS =-ljsoncpp

# rules.
all:	main

#
#

Road.o:	Road.cpp Road.h
	$(CC) -c $(CFLAGS) Road.cpp

Vehicle.o:	Vehicle.cpp Vehicle.h Road.h
	$(CC) -c $(CFLAGS) Vehicle.cpp

Truck.o:	Truck.cpp Truck.h Vehicle.h Road.h Car.h
	$(CC) -c $(CFLAGS) Truck.cpp

Car.o:	Car.cpp Car.h Vehicle.h Road.h Motorcycle.h
	$(CC) -c $(CFLAGS) Car.cpp

Motorcycle.o:	Motorcycle.cpp Motorcycle.h Vehicle.h Road.h Car.h
	$(CC) -c $(CFLAGS) Motorcycle.cpp

main.o:	main.cpp Road.h Vehicle.h Car.h Motorcycle.h Truck.h
	$(CC) -c $(CFLAGS) main.cpp

main:	Road.o main.o Vehicle.o Truck.o Car.o Motorcycle.o
	g++ -std=c++14 main.o Road.o Vehicle.o Truck.o Car.o Motorcycle.o -o main $(LDFLAGS)

clean:
	rm -f *.o *~ core main