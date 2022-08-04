build:zad01_07.c zad01_07.h main.c
	mkdir build
	gcc -c zad01_07.c
	gcc -c main.c
	gcc zad01_07.o main.o -o mainExe
	mv linked_list.o main.o mainExe ./build
clean:
	rm -r ./build
run:
	./build/mainExe
