string: any combination of characters

a b c d 1 2 3 4 ! @ # $ \t \n

1. Character Array
    char str[] = "hello from gurucodes"

2. String header
    string str = "hello from gurucodes"

    string str("hello from gurucodes");


input: 
1. cin
    each word is treated as a separate string. 
    when cin sees a space it thinks of the next word as a different string.

hello from gurucodes
cin>>str>>str2>>str3;


2. getline()
    each line is treated as a separate string

hello from gurucodes
welcome to programming and dsa course
getline(cin, str);
getline(cin, str2);



inbuilt functions insert, erase, at, find, substr

to string is used to convert any number into a string

stoi: string to int

we also have stof stod stoll stol

sorting: organizing your data in a lexical order.

things to be discussed in future modules: 
KMP algo
rabin-karp
stringstreams
custom sorting
String Tokenization