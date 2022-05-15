## 1st Part

(1.)
- The <string> library is included in the <iostream> library, so you don't need to include <string> separately if you already use <iostream>.

(2.)
- If you need to put double quotes inside your string, you have to escape the apostrophe with a backslash (\):

(3.)
- You can use the to_string() function to convert anything to a string.
- You can use the stoi() function to convert a string to an int.
- You can use the stof() function to convert a string to a float.
- Important: we can convert numbers into text, but we can't necessarily convert text into numbers – what would stoi('hello') be anyway?

(4.)
- Wonder why sometimes you call functions with a . at the end of the value (like name.length()) and
- sometimes you first call a function and place the value in parentheses (like to_string(304023))?
- Well, in some cases, functions belong to objects, like .length(), which can only be performed on strings. 
- Other times, functions don't belong to anything specific and can be used on different types of objects, just like to_string(). 
- That's why we're giving 304023 as a parameter to the to_string() function.

(5.)
- If you want C++ to print true and false instead of 1 and 0, you can use the boolalpha keyword .
- Use :	 cout<<boolalpha; .

(6.)
- You can write "and" instrad of "&&" and "or" instrad of "||" .

(7.)
- There are two problems with the above:
	- a. rand() generates any random number between 0 to RAND_MAX, where RAND_MAX is it's max limit. (not necessarily between 1 and 100).
	- b. Every time you run the program, it will generate the same random number! So if you run the program 5 times, it will always generate the same number.

	  - (a) The solution to the first problem involves using the % operator. rand() % 100 is always between 0 and 99. 
		    Then, we add 1 to make sure the result is between 1 and 100.
	  - (b) For the second problem, we will use srand() function along with rand(). A random number generator (rand()) accepts something called a seed. 
		If the random number generator is given the same seed, then it will generate the same sequence of random numbers. Be default, the seed is 0.
		The srand() function is used to change the seed of the random number generator. 
		By setting srand(time(0)), you are setting the seed of the random number generator to the current time.
	  - (b-simplification) - srand(time(0)) will generate different algorithm [in processor] with time for rand function . 

(8.)
- In function 
- Pass by value { It does not change original valur of that passed variable . It does a copy of that value and pass that to function } .
- Pass by reference {In it , instead of passing the value of the variable, we pass its address. This allows us to modify the original variable. 
	Hence any modification on parameters inside the function will reflect in the actual variable. 
	To pass by reference, we add an ampersand(&) before the parameter name in the function declaration. }

(9.)
- In function if you pass array then it will follow (Pass by reference) by default .
	* but string by deafult will follow the (Pass by value ) rule .


<br><br><br>


## 2nd Part

(1.)

- Vectors are same as dynamic arrays with the ability to resize itself automatically when an element is inserted or deleted, 
- with their storage being handled automatically by the container. 

- Vector elements are placed in contiguous storage so that they can be accessed and traversed using iterators. In vectors, data is inserted at the end. 

- Inserting at the end takes differential time, as sometimes there may be a need of extending the array. 
- Removing the last element takes only constant time because no resizing happens. 

- Inserting and erasing at the beginning or in the middle is linear in time.

- More Details in :	https://www.geeksforgeeks.org/vector-in-cpp-stl/ 

(2.)
- If you try to access vector elements outside of its bound, let's say lottery[8], the compiler may not show any error. However, 
- this may cause unexpected output (undefined behavior).



