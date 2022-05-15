## 1.String vs char[]
- String function does not work with string variable ( Like : string name;) in C++.
- Here string function will not work on name variable.
- We have to declare string with character array.
- Direct String variable also does not work with printf or scanf either.

<br>


## 2. Inheritance 

1. Example of Single inheritance:
- One(parent) - One(child)
- In Single inheritance one class inherits one class exactly.
- B inherits A

<br>

2. Example of Multilevel inheritance:
- One(parent) - One within its inside one(child)
- In this type of inheritance one class inherits another child class.
- C inherits B and B inherits A

<br>

3. Example of Multiple Inheritance:
- Many(parent) - One(child)
- In multiple inheritance, a class can inherit more than one class. 
- This means that in this type of inheritance a single child class can have multiple parent classes.
- C inherits A and B both

<br>

4. Example of Hierarchical inheritance:
- - One(parent) - Many(child)
- In this type of inheritance, one parent class has more than one child class. For example:
- Class B and C inherits class A

<br>

5. Hybrid Inheritance
- Hybrid inheritance is a combination of more than one type of inheritance.
- For example, A child and parent class relationship 
- that follows multiple and hierarchical inheritance both can be called hybrid inheritance.

<br>

## 3. Polymorphism

1. Compile time Polymorphism Example ( Function Overloading )
- In this example, we have two functions with same name but different number of arguments. 
- Based on how many parameters we pass during function call determines which function is to be called, 
- this is why it is considered as an example of polymorphism because in different conditions the output is different. 
- Since, the call is determined during compile time thats why it is called compile time polymorphism.

<br>

2. Runtime Polymorphism Example ( Function overriding )
- Function Overriding: When child class declares a method , 
- which is already present in the parent class then this is called function overriding, 
- here child class overrides the parent class.
- ---------------------------
- In case of function overriding we have two definitions of the same function, 
- one is parent class and one in child class. 
- The call to the function is determined at runtime to decide which definition of the function is to be called, 
- thats the reason it is called runtime polymorphism.

<br>

## 4. Abstruction

- We can create a function without its definition in a class - Abstruct Class
- And other classes can use and edit in their own way
- But if any class inherit this Abstruct Class then they must have to use this Function

<br>
