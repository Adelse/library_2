GXX = g++

build:
	$(GXX) -fPIC -o ./obj/main.o -c ./src/main.cpp
	$(GXX) -fPIC -o ./obj/mylib.o -c ./src/mylib.cpp
	$(GXX) -shared -fPIC -o libmylib.so ./obj/main.o ./obj/mylib.o
	g++ -o a.out ./src/main.cpp -L./ -lmylib

clean:
	rm ./obj/*.o a.out