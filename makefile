
hello: hello.c libputs__.so
	gcc -o hello hello.c -L . -lputs__
libputs__.so: puts__.c
	gcc puts__.c -FPIC -shared -o libputs__.so
	export LD_LIBRARY_PATH=./
