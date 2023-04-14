build:
	g++ -o build/todo main.cpp

install:
	cp build/todo /usr/local/bin

run:
	./todo
