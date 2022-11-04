# compound calculator in c
This is A compound calculator. It serves the perpouse of solving simple arithamatic problems like +,-,*,/ along with some extra featurs like finding avrage and claculating factorial of a number.
The code follows moduler programing and each indivisual function is capable of taking inputs and genrating output on STD I/O lines.\
the following is a brief explination of all the included functions :
add() -> takes two numbers as input and prints there addition as output 
sub() -> takes two numbers as input and prints there substraction as output 
multiply() -> takes two numbers as input and prints there multiplication as output
divide() -> takes two numbers as inputs and prints there division as output along with the remainder. An condition has been applied to check for remainder and if remainder is present it also dispalys that otherwise only the result of division is displayed 
avg() -> This function takes input in two stages 
\# stage 1 -> takes a single input repesenting the number of elements to be inputed later on
\# stage 2 -> a for loop sets in action with its range in 0 to entered number in stage 1 that takes the elements and adds them and after the loop it displays the quotient of the final sum and number of entered elements 
fac() -> This takes a single input. Using a for loop it keeps multiplying the number series from 1 to the entered number and after the loop displays the final result
main() -> this is the main function for execustion this takes input for the user leting them choose the optarion it uses switch() on the input and checks cases in +,-,*,/,#,! and default. each case calls this corresponding function in the following manner:
+ >> addition,i.e,add()
- >> substraction,i.e,sub()
* >> multiplication,i.e,multiply()
/ >> divide,i.e,divide()
\# >> avrage,i.e,avg()
! >> factorial,i.e,fac()
