// Less efficient way of counting from 1 - 100.

#include <stdio.h> // Include the standard input/output header.

int main() // Start of program.
{
	int num = 0; // Declaring the value of variable "num" to 0.
	
	START: num = num + 1; // Making a Label called "START" which adds 1 to "num".
	
	printf("%d \n", num); // Printing the value of "num".
	
	if (num < 100) { // If statement which checks if "num" is less than 100.
	    goto START; // If its true, go to the START label.
	}
	
	return 0; // End of program.
}