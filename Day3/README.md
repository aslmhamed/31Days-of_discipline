Day 3 Of the 31days Discipline Game with Cobby

Solving some problems and getting to know some other Properties of arrays...

Now we will study the different properties of Array in the C programming language.

A. Fixed Size Collection

	In C, the size of an array is fixed after its declaration. 
		It should be known at the compile time and it cannot be modified later in the program.

B. Homogeneous Elements

	An array in C cannot have elements of different data types. All the elements are of the same type. like in my code2.c if you tried to run the code you will get this error message;
 
 main.c: In function ‘main’:
main.c:12:16: warning: assignment to ‘int’ from ‘char *’ makes integer from pointer without a cast [-Wint-conversion]
   12 |         arr[2] = "Arrays";
      |                ^
main.c:17:28: warning: format ‘%s’ expects argument of type ‘char *’, but argument 2 has type ‘int’ [-Wformat=]
   17 |         printf("Array[3]: %s", arr[2]);
      |                           ~^   ~~~~~~
      |                            |      |
      |                            char * int
      |                           %d
Array[1]: 1
Array[2]: 2


C. Indexing in Array
	
	Indexing of elements in an Array in C starts with 0 instead of 1. It means that the index of the first element will be 0 and the last element will be (size – 1) where size is the size of the array

D. Dimensions of Array
	An array in C can be a single dimensional like a 1-D array or multidimensional like a 2-D array, 3-D array, and so on. 
It can have any number of dimensions. The number of elements in a multidimensional array is the product of the size of all the dimensions.


E. Contiguous Storage

	All the elements in an array are stored at contiguous or consecutive memory locations

F. Random Access

	It is one of the defining properties of an Array in C. It means that we can randomly access any element in the array without touching any other element using its index.

G. Array name relation with pointer // I didn't get to the point, so i won't right any explantion for it...
H. Bound Checking
K. Array Decay

