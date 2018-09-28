all: tsh sleep

tsh: tsh.c
	gcc -o tsh tsh.c

sleep: sleep.c
	gcc -o sleep sleep.c

clean: 
	rm -f sleep tsh simple

simple:
	gcc -o simple simplec.c
	
shell:
	./tsh