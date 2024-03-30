#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/io.h>

// Define the base addresses for the parallel port
#define DATA_PORT 0x378
#define STATUS_PORT DATA_PORT + 1
#define CONTROL_PORT DATA_PORT + 2

// Variable to hold the data to be sent to the parallel port
unsigned char status, data;

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

	// Initialize data to 1
	data = 1;

	// Loop indefinitely to send data to the parallel port
	while (1)
	{
		outb(data, DATA_PORT); // Send data to the data port
		if (data == 64)
		{
			data = 1; // Reset data to 1 if it reaches 64
		}
		else
		{
			data *= 2; // Multiply data by 2
		}
		sleep(1); // Pause for 1 second before sending the next data
	}

	return 0; // Return 0 to indicate successful execution
}
