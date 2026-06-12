CC=g++
CFLAGS=-Iinclude -Wall -Wextra -std=c++11
SRC=src/sum&product.cpp src/main.cpp
OBJ=$(SRC:.cpp=.o)
EXEC=app

all: $(EXEC)

$(EXEC): $(OBJ)
	$(CC) -o $@ $^

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(EXEC)

.PHONY: all clean