Array is a collection/group of elements of same data type.

Arrays are of fixed size. 
Their size has to be defined while creating tthe array itself. 

Declaration: 

int studentsMarks[100];

dataType variableName[sizeOfArray];


Initialization: 

int studentsMarks[5] = {40, 50, 70, 40, 0};

int studentsMarks[] = {40, 50, 70, 40, 0};

int studentMarks[5] = {40, 50, 60}

int studentMarks[1000] = {0}


Reading/Accessing an element in array:  variableName[index]

Size Calculation: sizeof(studentMarks)/sizeof(studentMarks[0]);

Updating an element of an array:  



Sorting:

int arr[5];

sort(arr, arr+5, greater<int>());

string str = "Gurucodes";

sort(str.begin(), str.end(), greater<char>());

Vector is a dynamic array, meaning, it can change its size upon insertion or deletion. 

