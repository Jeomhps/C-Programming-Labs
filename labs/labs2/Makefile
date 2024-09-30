EXEC = td2
SRC = td2.c
HEADER = td2.h

CFLAGS = -Wall -pedantic -std=c99
LDFLAGS = -lm
CC = gcc

$(EXEC): $(SRC) $(HEADER)
	$(CC) $(CFLAGS) -o $(EXEC) $(SRC) $(LDFLAGS)

clean:
	rm -f $(EXEC)
