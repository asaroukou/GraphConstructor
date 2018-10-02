run:	make
	./start.out
make:
	g++ -o start.out main.cpp -L ./src/*
