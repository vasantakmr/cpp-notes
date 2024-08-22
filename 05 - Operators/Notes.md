Types of operators: 

1. Arithmetic : +, -, 
2. Logical operators: ||, &&, !
3. Relational Operators: < > >= <=
4. Bitwise: | & 
5. Conditional Operators(Ternary) :     ?:
6. Increment/Decrement : ++ -- 
7. Assignment Operators: =

Operator Precedence. 
Bit Manipulation

1. Arithmetic Operators: 

a. Addition  +
b. Subtraction -
c. Multiplication *
d. Division /
e. Modulo %

2. Relational Operators: 

a. "is equal to"  ==
b. "not equal to" !=
c. "greater than" >
d. "less than" <
e. "greater than or equal to"  >=
f. "less than or equal to" <=

The result of relational operators is always a boolean value. (true/false)(0/1)

3. Logical Operators:

a. Logical OR       ||      Ex: conditionA || conditionB
b. Logical AND      &&      Ex: conditionA && conditionB
c. Logical NOT      !       Ex: !conditionA

The result of logical operators is always a boolean value. (true/false)(0/1)
The logical operators are applied on conditions.

4. Bitwise Operators:

a. Binary OR            |
b. Binary And           &
c. Binary XOR           ^
d. 1's Complement       ~
e. Left shift           <<
f. Right Shift          >>


Only int and char datatypes can be used. 


Assignment Operators:

 = 

Example: a = 10;

+=          // a += b;    // a = a+b; 
-=
*=
/=
%=

Ternary Operator:

Also known as a conditional operator. 

denoted as ?:

example: 

string isEligibletoVote = (age>=18)? "Is Eligible to vote" : "Is not Eligible to vote";


Increment/Decrement Operators:

Used to increase/decrease the value by 1.

Increment   ++      a = a+1
Decrement   --      a = a-1


Pre - Increment         ++a     Increase and then use
Post - Increment        a++     Use and then increase


Pre - Decrement         --a     Decrease and then Use
Post - Decrement        a--     Use and then decrease


Operator precedence:

Decide on the order of computation if multiple operators are in the same expression.

Operator Associativity:

When multiple operators are under same prececdence level, then we use associativity to decide on the computation order.