# Number of carries 

- A carry digit that is transferred to left if sum of digits exceeds 9 while addint two numbers from right-to-left one digit at a time.

- You are required to implement the following function.

- Int NumberOfCarries(int num1, int num2);

- The function accepts two numbers 'num1' and 'num2' as its arguments. You are required to calculate and return the total nummber of carries generated while adding digits of two numbers 'num1' and 'num2'.

- Assumption: num1, num2 >= 0

- Example:

INPUT1:
NUM1: 451
NUM2: 349

OUTPUT1:
2

Explaination:
Adding 'num1' and 'num2' right-to-left results in 2 carries since (1+9) is 10. 1 is carried and (5 + 4 + 1) is 10, again 1 is carried. Hence 2 is returned.

