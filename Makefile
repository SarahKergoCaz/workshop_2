CC = gcc
CFLAGS = -Wall -Wextra -std=c11
TARGET = programme
OBJS = main.o operations.o

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

main.o: main.c operations.h
	$(CC) $(CFLAGS) -c main.c

operations.o: operations.c operations.h
	$(CC) $(CFLAGS) -c operations.c

clean:
	rm -f *.o $(TARGET)

re: clean all
