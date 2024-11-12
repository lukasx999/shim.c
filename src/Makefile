all: shim.c
	cc $^ -fPIC -rdynamic -shared -ggdb -o libshim.so -L. -Wl,-rpath=.

main: main.c
	cc $^ -l:libshim.so -L. -o out

clean:
	rm libshim.so
