#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/io.h>

// Define the base addresses for the parallel port
#define DATA_PORT 0x378
#define STATUS_PORT DATA_PORT + 1
#define CONTROL_PORT DATA_PORT + 2

// Variable to hold the data to be sent to the parallel port
unsigned char index;

int main()
{

	// Request I/O permissions for the data port
	if (ioperm(DATA_PORT, 1, 1))
	{
		fprintf(stderr, "Acess denied to %x\n", DATA_PORT), exit(1);
	}

	// Request I/O permissions for the status port
	if (ioperm(STATUS_PORT, 1, 1))
	{
		fprintf(stderr, "Acess denied to %x\n", STATUS_PORT), exit(1);
	}

	// Initialize index to 1
	index = 1;

	// Array to hold the binary representation of the numbers 0-9
	unsigned char numbers[10] = {
		0b1000000,
		0b1000001,
		0b1000010,
		0b1000011,
		0b1000100,
		0b1000101,
		0b1000110,
		0b1000111,
		0b1001000,
		0b1001001};

	// Loop indefinitely to send data to the parallel port
	while (1)
	{
		outb(numbers[index], DATA_PORT); // Send data to the data port
		index++;						 // Increment index
		index %= 10;					 // Reset index to 0 if it reaches 10
		sleep(1);						 // Pause for 1 second before sending the next data
	}
}
