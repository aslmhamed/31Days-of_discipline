Second day of the discipline game.

here is what i revised for the second day.

A. Two-Dimensional Array in C

A Two-Dimensional array or 2D array in C is an array that has exactly two dimensions. 
They can be visualized in the form of rows and columns organized in a two-dimensional plane.

Three-Dimensional Array in C

Another popular form of a multi-dimensional array is Three Dimensional Array or 3D Array.
A 3D array has exactly three dimensions.
It can be visualized as a collection of 2D arrays stacked on top of each other to create the third dimension.


3- Relationship between Arrays and Pointers

Arrays and Pointers are closely related to each other such that we can use pointers to perform all the possible operations of the array.

4- Passing an Array to a Function in C

An array is always passed as pointers to a function in C. 
Whenever we try to pass an array to a function, it decays to the pointer and then passed as a pointer to the first element of an array.

5- Return an Array from a Function in C

In C, we can only return a single value from a function. To return multiple values or elements, we have to use pointers

6- Properties of Arrays in C

It is very important to understand the properties of the C array so that we can avoid bugs while using it. 
The following are the main properties of an array in C:

A. Fixed Size

The array in C is a fixed-size collection of elements. 
The size of the array must be known at the compile time and it cannot be changed once it is declared.

B. Homogeneous Collection

We can only store one type of element in an array. 
There is no restriction on the number of elements but the type of all of these elements must be the same.

C. Indexing in Array

The array index always starts with 0 in C language. 
It means that the index of the first element of the array will be 0 and the last element will be N – 1.

D. Dimensions of an Array

A dimension of an array is the number of indexes required to refer to an element in the array. 
It is the number of directions in which you can grow the array size.

F. Contiguous Storage

All the elements in the array are stored continuously one after another in the memory. 
It is one of the defining properties of the array in C which is also the reason why random access is possible in the array.

E. Random Access

The array in C provides random access to its element i.e we can get to a random element at any index of the array in constant time complexity just by using its index number.

