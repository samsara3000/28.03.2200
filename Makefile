FLAGS = -O3 -W -Wall -Wunused -Wcast-align -Werror -pedantic -pedantic-errors -fstack-protector-all -Wfloat-equal -Wpointer-arith -Wwrite-strings -Wcast-align -Wno-long-long -Wmissing-declarations
all:a01.out a02.out a03.out a04.out a05.out a06.out a07.out a08.out a09.out a10.out a11.out
a01.out: main01.o a01.o matrix01.o
	gcc -o a01.out $(FLAGS) main01.o a01.o matrix01.o
matrix01.o: matrix.c
	gcc $(FLAGS) -c matrix.c -o matrix01.o
main01.o: main01.c 
	gcc $(FLAGS)  -c main01.c -o main01.o
a01.o: a01.c
	gcc -o a01.o $(FLAGS)  -c  a01.c

a02.out: main02.o a02.o matrix02.o
	gcc -o a02.out $(FLAGS) main02.o a02.o matrix02.o
matrix02.o: matrix.c
	gcc $(FLAGS) -c matrix.c -o matrix02.o
main02.o: main02.c
	gcc $(FLAGS)  -c main02.c -o main02.o
a02.o: a02.c
	gcc -o a02.o $(FLAGS)  -c  a02.c


a03.out: main03.o a03.o matrix03.o
	gcc -o a03.out $(FLAGS) main03.o a03.o matrix03.o
matrix03.o: matrix.c
	gcc $(FLAGS) -c matrix.c -o matrix03.o
main03.o: main03.c
	gcc $(FLAGS)  -c main03.c -o main03.o
a03.o: a03.c
	gcc -o a03.o $(FLAGS)  -c  a03.c

a04.out: main04.o a04.o matrix04.o
	gcc -o a04.out $(FLAGS) main04.o a04.o matrix04.o
matrix04.o: matrix.c
	gcc $(FLAGS) -c matrix.c -o matrix04.o
main04.o: main04.c
	gcc $(FLAGS)  -c main04.c -o main04.o
a04.o: a04.c
	gcc -o a04.o $(FLAGS)  -c  a04.c

a05.out: main05.o a05.o matrix05.o
	gcc -o a05.out $(FLAGS) main05.o a05.o matrix05.o
matrix05.o: matrix.c
	gcc $(FLAGS) -c matrix.c -o matrix05.o
main05.o: main05.c
	gcc $(FLAGS)  -c main05.c -o main05.o
a05.o: a05.c
	gcc -o a05.o $(FLAGS)  -c  a05.c

a06.out: main06.o a06.o matrix06.o
	gcc -o a06.out $(FLAGS) main06.o a06.o matrix06.o
matrix06.o: matrix.c
	gcc $(FLAGS) -c matrix.c -o matrix06.o
main06.o: main06.c
	gcc $(FLAGS)  -c main06.c -o main06.o
a06.o: a06.c
	gcc -o a06.o $(FLAGS)  -c  a06.c

a07.out: main07.o a07.o matrix07.o
	gcc -o a07.out $(FLAGS) main07.o a07.o matrix07.o
matrix07.o: matrix.c
	gcc $(FLAGS) -c matrix.c -o matrix07.o
main07.o: main07.c
	gcc $(FLAGS)  -c main07.c -o main07.o
a07.o: a07.c
	gcc -o a07.o $(FLAGS)  -c  a07.c

a08.out: main08.o a08.o matrix08.o
	gcc -o a08.out $(FLAGS) main08.o a08.o matrix08.o
matrix08.o: matrix.c
	gcc $(FLAGS) -c matrix.c -o matrix08.o
main08.o: main08.c
	gcc $(FLAGS)  -c main08.c -o main08.o
a08.o: a08.c
	gcc -o a08.o $(FLAGS)  -c  a08.c

a09.out: main09.o a09.o matrix09.o
	gcc -o a09.out $(FLAGS) main09.o a09.o matrix09.o
matrix09.o: matrix.c
	gcc $(FLAGS) -c matrix.c -o matrix09.o
main09.o: main09.c
	gcc $(FLAGS)  -c main09.c -o main09.o
a09.o: a09.c
	gcc -o a09.o $(FLAGS)  -c  a09.c

a10.out: main10.o a10.o matrix10.o
	gcc -o a10.out $(FLAGS) main10.o a10.o matrix10.o
matrix10.o: matrix.c
	gcc $(FLAGS) -c matrix.c -o matrix10.o
main10.o: main10.c
	gcc $(FLAGS)  -c main10.c -o main10.o
a10.o: a10.c
	gcc -o a10.o $(FLAGS)  -c  a10.c

a11.out: main11.o a11.o matrix11.o
	gcc -o a11.out $(FLAGS) main11.o a11.o matrix11.o
matrix11.o: matrix.c
	gcc $(FLAGS) -c matrix.c -o matrix11.o
main11.o: main11.c
	gcc $(FLAGS)  -c main11.c -o main11.o
a11.o: a11.c
	gcc -o a11.o $(FLAGS)  -c  a11.c
