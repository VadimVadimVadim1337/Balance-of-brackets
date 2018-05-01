CFLAGS = -Wall -Werror -std=c99
OBJ = gcc -c $< -o $@ $(CFLAGS)
O=gcc -Wall -Werror -c
.PHONY: all clean

all: bin/balanc_br.exe bin/test



bin/balanc_br.exe: build/main.o build/choise_brackets.o build/print_welcome_message.o
	gcc $^ -o $@ $(CFLAGS)

build/print_welcome_message.o: src/print_welcome_message.c
	$(O) src/print_welcome_message.c -o build/print_welcome_message.o

build/main.o: src/main.c
	$(O) src/main.c -o build/main.o

build/choise_brackets.o: src/choise_brackets.c
	$(O) src/choise_brackets.c -o build/choise_brackets.o

build/checkup_correctness.o: src/checkup_correctness.c
	$(O) src/checkup_correctness.c -o build/checkup_correctness.o

build/test.o: test/test.c
	gcc -Wall -c test/test.c -o build/test.o -Ithirdparty -Isrc

build/first_test.o: test/first_test.c
	gcc -Wall -c test/first_test.c -o build/first_test.o -Ithirdparty

bin/test:  build/test.o build/checkup_correctness.o build/first_test.o 
	gcc -Wall build/test.o build/checkup_correctness.o build/first_test.o -o bin/test

clean:
	rm bin/*.exe

