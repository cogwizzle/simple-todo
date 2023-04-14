build:
	g++ -std=c++17 -o build/todo main.cpp

install:
	cp build/todo /usr/local/bin

run:
	./todo
