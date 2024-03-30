#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/io.h>
#define DATA_PORT 0x378
#define STATUS_PORT DATA_PORT + 1
#define CONTROL_PORT DATA_PORT + 2

unsigned char status, data;

int main(){
	if(ioperm(DATA_PORT, 1, 1)) {
		fprintf(stderr,"Acess denied to %x\n", DATA_PORT), exit(1);
	}

	if(ioperm(STATUS_PORT, 1, 1)) {
                fprintf(stderr,"Acess denied to %x\n", STATUS_PORT), exit(1);
        }

	data = 0xFF;
	while(1) {
		outb(data, DATA_PORT);
		sleep(1);
	
	}
}
