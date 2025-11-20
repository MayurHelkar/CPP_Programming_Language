# Object Oriented Programming

| Key Features        |               |  
| ------------------- | ------------- |
| OOP | Structures code into logical units (classes and objects)<br>Keeps related data and methods together (encapsulation)<br>Makes code modular, reusable and scalable<br>Prevents unauthorized access to data<br>Follows the DRY (Don't Repeat Yourself) principle |


## Characteristics of an OOP
<summary>Class</summary>
<details>

| Parameters          | Description                                                                          |
| ------------------- | ------------------------------------------------------------------------------------ |
| Datatype            | User-defined                                                                         |
| For Objects         | Blueprint/ Prototype                                                                 |
| keyword             | `class`<br>Definition Syntax : `class className { dataMembers/ function_Members };`  |   
| Creation of         | Objects                                                                              |
| Members consists    | Data<br>Functions                                                                    |
| Represents          | Set of Properties/ Methods                                                           |
| Access Specifiers   | Defined as `public`, `private`, or `protected`<br>Control accessibility              |  
| Class Name          | Follow naming conventions                                                            |
| Body                | Enclosed with braces {}<br>Defines data members and member functions                 |
</details>

<summary>Object</summary>
<details>
  
| Parameters | Description |
| ---------- | ----------- |
| Basic unit | Object-Oriented Programming |
| Represents | Real-life entities |
| Objects interact<br>Each other | Invoking Methods |
| Code<br>Objects | Consists of Blueprint/ Prototype<br>What perform your code |



| Consists of     |                                                                                                         |
| --------------- | ------------------------------------------------------------------------------------------------------- |
| **State**       | Represent Data members (Attributes)<br>Reflects properties of an object                                 |
| Member Function | Collection of statements<br>Perform some specific task<br>Return the result to the caller               |
| Behavior        | Represented by the member functions of an object<br>Reflects the response of an object to other objects |
| Identity        | Unique name or reference of an object<br>Enables it to interact with other objects                      |
</details>

<summary>Abstraction</summary>
<details>

| Parameters      | Description                                                                                        |
| --------------- | -------------------------------------------------------------------------------------------------- |                                                                   
| Process         | Hiding the implementation details<br>Only showing the essential details or features to the user    |
| Definition      | Focus on what an object does rather than how it does it                                            |
| Achieved using  | Abstract classes (classes that have at least one pure virtual function)                            |
</details>

<summary>Encapsulation</summary>
<details>

| | |
| --- | ----- |
| Definition | Process of wrapping data and the methods into a single unit, typically a class<br>It is like a protective shield that prevents the data from being accessed by the code outside the shield |
| Variables or Data<br>Class | Hidden from any other class and can be accessed only through any member function of the class in which they are declared<br>Data in a class is hidden from other classes, which is similar to what data-hiding does |
| Achieved by  | Declaring all the variables in a class as private and writing public methods in the class to set and get the values of the variables |
</details>

<summary>Inheritance</summary>
<details>

|            |                                                                                                                      |
| ---------- | -------------------------------------------------------------------------------------------------------------------- |
| Known as   | "is-a" relationship                                                                                                  |
| Mechanism  | One class is allowed to inherit the features (data members and member functions) of another class                    | 
| Achieve by | Using the : symbol followed by an access specifier (public, private, or protected). Inheritance is also known as an  |
| Example    | Dog, Cat, Cow and be Derived Class of Animal Base Class                                                              |

| Important terminologies | Decription |
| ----------------------- | ---------- |
| Superclass              | The class whose features are inherited is known as superclass (also known as base or parent class) |
| Subclass                | The class that inherits the other class is known as subclass (also known as derived or extended or child class)<br>The subclass can add its own fields and methods in addition to the superclass fields and methods |
| Reusability             | When we want to create a new class and there is already a class that includes some of the code that we want, we can derive our new class from the existing class |
</details>

<summary>Polymorphism</summary>
<details>
|         |                                                                                                                               |
| ------- | ----------------------------------------------------------------------------------------------------------------------------- |
| Meaning | Having many forms, and it comes from the Greek words poly (many) and morph (forms), this means one entity can take many forms |
| Allows  | same method or object to behave differently based on the context, specially on the project's actual runtime class             |
</details>

Types of Polymorphism
| Function Overloading | Function Overriding |
| --------------------- | -------------------------------------------- |
| Compile-time polymorphism  | Run-time polymorphism |
| Occurs when two or ore functions in the same class share the same name but have different parameters lists (different number or types of parameters) | Occurs when a function in the derived class has the same name, return type, and parameters as a function in the base class |
| | Achieve using virtual functions, so that the derived class provides its own implementation of the method |
