#include <stdio.h>
int main(int argc, char *argv[]){
    
	
	
	// Read number from file - do not edit
	double num;
	FILE *fptr;
	fptr = fopen(argv[1], "r");
	fscanf(fptr, "%lf", &num);
	fclose(fptr);
	

	// Enter your code from Lab D to print JSON output (with name, email, number1, number2) goes under here
    printf("{\"name\": \"Isaac Gardner\",\n \"email\": \"isaac.gardner-2@student.manchester.ac.uk\",\n \"number1\": %.2f,\n \"number2\": %.3e}", num, num);
	

	// Do not edit below here
	return 0;
}