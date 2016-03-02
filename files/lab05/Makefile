all: fizzbuzz average frac

fizzbuzz: fizz.o fizz_main.c
	clang -Wall fizz_main.c fizz.o -o fizzbuzz

fizz.o: fizz.ll
	clang -Wall -c fizz.ll

average: average.o avg_main.c
	clang -Wall avg_main.c average.o -o average

average.o: average.ll
	clang -Wall -c average.ll

frac: frac.o frac_main.c
	clang -Wall frac_main.c frac.o -o frac

frac.o: frac.ll
	clang -Wall -c frac.ll
