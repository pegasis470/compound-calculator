This code is a simple mathematical calculator that performs basic arithmetic operations such as addition, subtraction, multiplication, division, average and factorial. It also has two additional functions called binary and decimal that can convert a binary number to decimal and vice versa.

**How to use**
First, the user is prompted to choose the operation they want to perform by typing one of the following characters:
'+' for addition
'-' for subtraction
'*' for multiplication
'/' for division
'#' for average
'!' for factorial
'0' for binary to decimal conversion
'1' for decimal to binary conversion
Then, the user will be prompted to enter the necessary inputs depending on the operation they chose.
The program will then perform the chosen operation and display the result.
**Additional Information**
The program uses the stdio.h and math.h header files.
The program uses a switch/case statement to call the respective function for the chosen operation.
The program also checks for remainder in division operation and displays it if it is not equal to 0.
The program uses a for loop to find the average of entered elements.
The program uses a while loop to convert decimal to binary and binary to decimal.
The program uses scanf and printf for input and output.
The program uses float for the operations.
**Notes**
The program does not perform any error checking for invalid inputs, so users should ensure that they enter valid inputs for the chosen operation.
The program does not handle fractions or decimals in the factorial operation.
**How to run**
Compile and run the code on your preferred C compiler.
Follow the prompts and enter the necessary inputs.
The result will be displayed on the screen.
