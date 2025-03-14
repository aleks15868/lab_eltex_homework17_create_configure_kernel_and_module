obj-m += test2.o

all:
	make -C /lib/modules/6.11.0-19-generic/build M=$(PWD) modules
clean:
	make -C /lib/modules/6.11.0-19-generic/build M=$(PWD) clean
