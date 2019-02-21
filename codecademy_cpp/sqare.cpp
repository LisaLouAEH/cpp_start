#include <iostream>

/*As an example of iteration, we have the first program ever to run on a stored-program computer (the EDSAC). It was written and run by David Wheeler in the computer laboratory at Cambridge University, England, on May 6th, 1948, to calculate and print a simple list of squares like the following:
 0 0
 1 1
 2 4
 3 9
 4 16 
 ...
 9 81
 On the left, there are numbers from 0 to 9. On the right are their squares. For example, for the number 9, 9 * 9 = 81.*/

int main(){

	int i = 0;
	int square = 0;

	while (i <= 9){
		std::cout << i << "  "<< square << "\n";
		i++;
		square = i * i;
	}
}
