# CC = gcc
# CFLAGS = -Wall
# DEPS = utils.h
# OBJ = main.o utils.o

# %.o: %.c $(DEPS)
# 	$(CC) $(CFLAGS) -c -o $@ $<

# main: $(OBJ)
# 	gcc $(CFLAGS) -o $@ $^
# clean:
# 	rm -f $(OBJFILES) $(TARGET) *~

# main.o : main.c utils.o
# 	gcc main.c
# utils.o : utils.c utils.h
# 	gcc utils.c

# all: main utils

# main : main.c utils
# 	gcc ./src/main.c -o ./out/main

# utils : src/utils.c
# 	gcc ./src/utils.c -o ./out/utils

CC = gcc
D_OUT = ./out
D_SRC = ./src
CFLAGS = -Wall

main: utils
	$(CC) $(CFLAGS) $(D_OUT)/utils -o $(D_OUT)/main main.c
utils: src/utils.c
	$(CC) $(CFLAGS) -c $(D_SRC)/utils.c -o $(D_OUT)/utils 

clean:
	rm -f $(D_OUT)/*