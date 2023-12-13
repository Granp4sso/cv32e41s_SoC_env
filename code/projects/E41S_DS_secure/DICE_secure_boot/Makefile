all:
	make -C ram clean
	make -C ram
	cp ram/bin/ram.mem /mnt/c/Users/Giuseppe/Downloads/DICE/DICE.srcs/sources_1/imports/mem
	
	md5sum ram/bin/ram.bin | awk '{print $$1}' | ./util > rom/inc/img.h
	du -b ram/bin/ram.bin | awk '{print "\nsize_t len = "$$1";"}' >> rom/inc/img.h
	
	make -C rom clean
	make -C rom
	cp rom/bin/rom.mem /mnt/c/Users/Giuseppe/Downloads/DICE/DICE.srcs/sources_1/imports/mem

clean:
	make -C rom clean
	make -C ram clean

.PHONY: all clean
