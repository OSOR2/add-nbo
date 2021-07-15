#Makefile
all: add-nbo

add-nbo: rfnbo.o add-nbo.o
		g++ -o add-nbo rfnbo.o add-nbo.o -O2
	
main.o: rfnbo.h add-nbo.cpp

rfnbo.o: rfnbo.h rfnbo.cpp

clean:
	rm -f *.o
	rm -f add-nbo
	

