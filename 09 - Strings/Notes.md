string: any combination of characters

a b c d 1 2 3 4 ! @ # $ \t \n

1. Character Array
    char str[] = "hello from gurucodes"

2. String header
    string str = "hello from gurucodes"

    string str("hello from gurucodes");


input: 
1. cin
    each word is treated assa separate string. 
    when cin sees a space it thinks of the next word as a different string.

hello from gurucodes
cin>>str>>str2>>str3;


2. getline()
    each line is treated as a separate string

hello from gurucodes
welcome to programming and dsa course
getline(cin, str);
getline(cin, str2);



