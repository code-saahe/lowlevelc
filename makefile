TARGET = bin/final
ZERO = $(wildcard src/*.c)
OBJ = $(patsubst src2hero/%.c, obj/%.o, $(ZERO))

default:$(TARGET)

clean:
	rm -f obj/*.o
	rm -f bin/*
$(TARGET): $(OBJ)
	gcc -o $@ $^
obj/%.o: src/%.c
	gcc -c $< -o $@ -Iinclude