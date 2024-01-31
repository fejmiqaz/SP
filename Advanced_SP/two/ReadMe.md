### Task 10:
//Originally task 2

Write a program that will print the contents read from SI coded. The coding is done letter by letter, so that each letter (only letters, not digits, dots, ...) is replaced with the letter 3 places after in the alphabet. In case of the letters at the end of the alphabet, the counting continues cyclic from the beginning of the alphabet. In the final coded text all letters are lowercase. Example letter a is coded to d, H is coded to k, p is coded to s, x is coded to a, etc.
### Task 11:
//Originally task 3

Let A = {a1, a2, .. a_n} is an array of integers. The size of the array n and the elements of the array are read from SI. Write a program that will transform the array so each element of the original array is replaced with the number of appearance of the least significant digit (the right most) in the number itself. Print the result array on the standard output.

Compute the count of given digit in a number with separate recursive function.
### Task 12:
//Originally task 8

Write a recursive function that will find the number of odd numbers of an array of integers. The function accepts as an arguments the array for which the number of odd numbers is required and the total number of elements in the array. The function is given with the following prototype:

int Odd (int a [], int n);

Also write the main () function to test the Odd function.
### Task 13:
//Originally task 12

An array of integers is to be read from SI. First the number N (N<=100) is entered followed by N integers. Write a program that will transform the array in the following way: starting at the beginning of the array, for each element that is equal to the next element in the array, double the value of the first one and overwrite the second one with 0. After that, rearrange the array so that all the zeroes will be moved at the end of the array, keeping the order of the other elements. Print all the elements of the array on the SO in a single line, separated by space.

Write separate functions for transforming the array and for reordering the elements.
### Task 14:

//Originally task 21
Read a an array of N integers from standard input (first read the number N than the elements). Than call a recursive function on the array that will change on the following way:

a0=aN−1=max(a0,aN−1)

a1=aN−2=max(a1,aN−2)


...

where max is a function that returns the maximum of the two numbers. The function should return the number of switched elements. Then print that number and the changed array.

### Task 15:

//Originally task 22
Write a fully recursive function triangle (n) which given the input argument n, prints a triangle from the numbers from 1 to n. Additional functions can be used, but no loops should be used.

Example for n=4.

    1
    12
    123
    1234

### Task 16:

//Originally task 25

Read the dimension N (with a maximum value of 100) and the values (possible values are only 1 and 0) of one square matrix $A_ {NxN}$ from the standard input. Create a new matrix $B_ {NxN}$ in the following way:

For each element in B, write the value of the same corresponding element from A. During this procedure, if in the neighborhood of one element of A (neighbors are the elements above it or below it, on the left or right side of it) there are minimum 3 elements with a value of 1, then that element in the matrix B gets a value of 1 (although in A the corresponding value was zero).

Print the newly obtained matrix B.
### Task 17:

//Originally task 27

Read the dimensions M and N (not bigger than 100) and the values (whole numbers) of one matrix A_ {MxN} from the standard input. Print out the index of the first column that has the smallest sum of all of its elements.

### Task 18:

//Originally task 28

Write a program that reads lines no longer than 80 characters from SI. Each line consists of digits and letters.

The program should print on SO each line transformed in such way that the letters will be concatenated next to each other, followed by the sum of all numbers that appear in the row. The numbers can be with more than one digit! If there are no numbers, print 0 at the end of the line

### Task 19:

//Originally task 5

Write a program that reads matrix with dimensions MxN (max. 100x100). At the beginning the dimensions are read, and then the elements of the matrix with values 0 or 1. Your program should count and print on SO the number of rows and columns with at least 3 consecutive appearance of elements with value 1.
### Task 20:

//Originally task 10
Write a program where a matrix A read from SI (maximum value of dimensions of the matrix is 100) is transformed to a new matrix B. Each element of the new matrix B is sum of positive neighbors of the corresponding element of the matrix A. Print the new matrix B on the standard output.
### Task 21:

//Originally task 11

Write a program that will read a string (not longer than 100 characters) containing letters and digits. The program should print on the standard output the letters that are between the first and the second digit, left-to-right, including the bordering digits themselves. If there is only one digit in the string, the program should print all the letters till the end of the string. If there is no digits in the string the program should print out the message "No digits".

### Task 22:

//Originally task 13 *My favorite task

Read a square matrix of integers from standard input. First the dimension N is entered (2 < N <= 100) and then the elements of the matrix by rows.

Transform the matrix in a way that all the elements ABOVE the main diagonal will be set to the value of the maximal element found above the main diagonal, while all the elements BELOW the main diagonal will be set to the value of the minimal element found below the main diagonal. Print out the transformed matrix.
### Task 23:

//Originally task 15

From SI read lines of text, none of which is longer than 80 characters. Write e program that will transform the input and print it out on the standard output. The output should contain only letters (all other characters are discarded), and each word should be printed in a separate line.
### Task 24:

//Originally task 31

Write a program that will read lines from SI and it will print on the SO the lines preceded by the ratio of upper/lower case letters in the rows.

Also, at the end print the number of the line with the largest ration of upper/lower case letters.
### Task 25:

//Originally task 32

Words (no longer than 20 letters and each in a new line) are read from SI. Write a program that will print the word that has the biggest number of different letters. Words that have less than four letters are not taken into account during the check. Do not make a difference between upper and lower case letters. If there are more words that meet the criteria, the last one is printed.

### Task 26:

//Originally task 33

Z-diagonal of given square matrix is composed of the elements of the first row, the elements of the supportive diagonal, and the elements of the last row (marked with blue color on the example).

From SI read the dimensions of square matrix (integer N, N > 2, N<100), and the elements of the matrix (real numbers). Store the elements of the Z-diagonal in a array, starting from the first row, continuing with the supportive diagonal, and finishing with the last row (the last element of the first row is the same element with the first element of the supportive diagonal, and the last element of the supportive diagonal is the same as the first element of the last row, and these elements should be stored only once). The resulted array should be printed on the SO. Then print the original matrix, but with the elements of Z-diagonal in reverse order.


