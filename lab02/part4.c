#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/io.h>

// Define the base addresses for the parallel port
#define DATA_PORT 0x378
#define STATUS_PORT DATA_PORT + 1
#define CONTROL_PORT DATA_PORT + 2

// Variable to hold the data to be sent to the parallel port
unsigned char index, status;

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
		0b1001001,
		0b1000000,
		0b1000001,
		0b1000010,
		0b1000011,
		0b1000100,
		0b1000101,
		0b1000110,
		0b1000111,
		0b1001000};

	// Initialize the data port to 0xff and then to 0x00
	outb(0xff, DATA_PORT);
	outb(0x00, DATA_PORT);

	// Infinite loop for reading status and controlling output
	while (1)
	{

		status = inb(STATUS_PORT); // Read the status port

		sleep(1); // Pause for 1 second

		if (!(status & (1 << 3)))
		{

			outb(numbers[index] | 0xf0, DATA_PORT); // Send data to the data port with upper 4 bits set to 1
			index++;								// Increment index
			index %= 10;							// Wrap around to 0 if index exceeds 9
			sleep(1);								// Pause for 2 seconds
		}
	}
}
