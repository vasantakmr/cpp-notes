Data Types: Data can be stored in different types. It can be a number, decimal number, binary number, boolean(true or false), characters(1, 2, 3,4, 5 , e, r, t, y, @, !, #), strings(combination of characters)

Data Types are of multiple kinds:
1. Primitive
2. User Defined
3. Derived 

Primitive datatypes(Basic)

1. Integers: base 10 Numbers(whole) : int : -2,147,483,648 to 2,147,483,647 : 4 bytes
2. Floating point number : decimal numbers : float : -3.4×10^38 to 3.4×10^38 : 4 bytes
3. Boolean: True or false : bool : True = 1, false = 0; : 1 byte
4. Character: '1','2', 'a', 'r' : char : -128 to 127: 1 byte
5. String: multiple characters(sentences): "hello", "a", "123": string
6. Long long Integers : long long int : -(2^63) to (2^63)-1: 8 bytes
7. Double: (Large Floating Point Number) : Large decimal number : double : -1.7×10^308 to1.7×10^308 : 8 bytes.
8. Void or valueless : void

Variables:
named storage memory location
used to store data, access data sometime in future. 

Variables:
1. Creating a variable(declaring a variable)
2. assigning a value to the variable(initialization/definition)


Variable creation:

syntax:  datatype nameoftheVariable;


naming a variable: 
1. letters, numbers, underscore
2. variable name should not start with numbers( valid variable names: _overs, hello, score, overs, noOfWickets )
(invalid variable names: 1over, 2wickets, )
3. should not be a keyword


variables are case sensitive.(a, A, overs, Overs, score, Score, SCore, sCore, SCOre)
* Variable names has to be unique within the scope.

ASCII

48 - 0
65 - A
97 - a

Type Safety:

Statically typed 

Type conversions:

1. Implicit
2. Explicit

Uses:
1. Type Safety 
2. Better performance

Cons: 
1. Increase in Code complexity
2. Loss of presision
3. Maybe poor performance
4. Can cause overflow or underflow.

Macros:

Macro is a piece of code which can be assigned a value. and this value can be used anywhere in the code. and upon using the macro, the original code piece/snippet will be used. 

syntax:
#define name code

#define name(x) code


Type range macros:


User defined datatypes: 

string Address = "2, 4th street, neelankarai, chennai, 600097, TN"

class Address {
    int hNo;
    string street;
    string area;
    string city
    State s;
    int pin;
}

