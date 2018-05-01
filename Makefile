CFLAGS = -Wall -Werror -std=c99
OBJ = gcc -c $< -o $@ $(CFLAGS)
O=gcc -Wall -Werror -c
.PHONY: all clean

bin/balanc_br.exe: build/main.o build/choise_brackets.o build/print_welcome_message.o
	gcc $^ -o $@ $(CFLAGS)

build/print_welcome_message.o: src/print_welcome_message.c
	$(O) src/print_welcome_message.c -o build/print_welcome_message.o

build/main.o: src/main.c
	$(O) src/main.c -o build/main.o

build/choise_brackets.o: src/choise_brackets.c
	$(O) src/choise_brackets.c -o build/choise_brackets.o


clean:
	rm build/*.o
	rm bin/*.exe
	
