# cpp

# C++ Short Notes

## Basic Syntax

### 1. `#include <iostream>`
Includes the input/output library so you can use `cout` and `cin`.
### 2. `using namespace std;`
Allows you to use standard functions (`cout`, `cin`, `string`) without writing `std::` before them.
### 3. `int main()`
The starting point of the program. Execution begins from here.
### 4. `{` and `}`
Define the beginning and end of a code block.
### 5. `cout << "text";`
Displays/prints text on the screen.
### 6. `cin >> variable;`
Takes input from the user and stores it in a variable.
### 7. `return 0;`
Indicates the program ended successfully.
---
## Example Code
```cpp
#include <iostream>
using namespace std;

int main() {
    cout << "Hello World!";
    return 0;
}
```

## Variables and Constants

### 1. `int balance;`
Declares a variable named `balance` of type `int` (integer).  
This reserves memory to store a whole number.
### 2. `balance = 200;`
Assigns the value **200** to the variable `balance`.
### 3. `const int uid = 241013005002;`
Declares a constant integer `uid`.  
- `const` means the value **cannot be changed** after assignment.  
- Useful for IDs, fixed configurations, limits, etc.
### 4. `int amount = 200;`
Declares and assigns value in the same line.  
This is the most common way to initialize a variable.
### 5. `cout << balance << " " << uid << " " << amount << endl;`
Prints all values in one line.  
Works like this:
- `<<` is the output operator  
- `" "` prints a space  
- `endl` moves the cursor to the next line  
- **Do not use commas in C++ output**, always use `<<`
---

## Data Types

Data types define **what kind of data** a variable can store and **how much memory** it uses.

C++ data types are mainly divided into 3 categories:
1. **Primitive (Built-in)**
2. **Derived**
3. **User-Defined**

---

## 1. Primitive Data Types

Primitive data types are **basic built-in types** provided by the C++ language.  
These store simple values like numbers and characters.

### Types & Explanation

| Type       | Size (bytes) | Description |
|------------|--------------|-------------|
| `int`      | 4            | Stores whole numbers (positive/negative). |
| `float`    | 4            | Stores decimal numbers with single precision. |
| `double`   | 8            | Stores decimal numbers with double precision (more accurate than float). |
| `short`    | 2            | Smaller version of int, takes less memory. |
| `long`     | 4 or 8       | Larger version of int, stores bigger values. |
| `long long`| 8            | Used when even larger integer values are needed. |
| `char`     | 1            | Stores single characters. |
| `bool`     | 1            | Stores true/false. |

### Short Explanations

- **int** → whole numbers  
- **float** → decimal numbers (less precise)  
- **double** → decimal numbers (more precise)  
- **short** → small integers  
- **long** → large integers  
- **long long** → very large integers  
- **char** → single characters  
- **bool** → true/false values  

### Primitive Type Precedence (Accuracy Order)

---

---

## 2. Derived Data Types

Derived types are built **using primitive data types**.

### Types & Explanation

| Type         | Description |
|--------------|-------------|
| `array`      | Stores multiple values of same data type. |
| `pointer`    | Stores the memory address of another variable. |
| `reference`  | Another name for an already existing variable. |
| `function`   | A block of code that performs a task. |

### Simple Meanings
- **array** → group of same type values  
- **pointer** → stores address  
- **reference** → alternate name  
- **function** → reusable code block  

---

## 3. User-Defined Data Types

These data types are **created by the user** using primitive or derived types.

### Types & Explanation

| Type       | Description |
|------------|-------------|
| `struct`   | Group of variables (mixed types) under one name. |
| `class`    | Blueprint for creating objects (OOP concept). |
| `enum`     | Collection of named integer constants. |
| `union`    | Stores different data types in same memory location. |
| `typedef`  | Creates an alias for another data type. |

### Simple Meanings
- **struct** → custom group of variables  
- **class** → OOP structure to create objects  
- **enum** → named constant values  
- **union** → one memory shared by all variables in it  
- **typedef** → nickname for a data type  

---

## Summary

- **Primitive** → Basic types like int, float, double, char  
- **Derived** → Made from primitive: arrays, pointers, functions  
- **User-Defined** → Created by user: struct, class, enum, union  
 ---

 ## Typecasting

### **Definition**
Typecasting means **converting one data type into another**.  
It helps when you want to use a value in a different form (example: int → float, float → int, char → int, etc.).

Example: converting `5.7` into `5` or converting `'A'` into ASCII value `65`.

---

## Types of Typecasting in C++

### 1. **Implicit Typecasting (Automatic)**
- Automatically done by C++.
- Happens when converting **smaller → larger** type.
- No data loss (usually).

Example:  
`int` → `float` → `double` (safe conversions)

---

### 2. **Explicit Typecasting (Manual)**
- Programmer does it manually.
- Required when converting **larger → smaller** type.
- Possible data loss.

Ways to write:
```cpp
(type) value
static_cast<type>(value)
```
---
## Data Type Modifiers

Data type modifiers are keywords used to **change the size or behavior** of basic data types.  
They help in controlling how much memory a variable uses and what range of values it can store.

The main type modifiers are:
- `signed`
- `unsigned`
- `long`
- `short`
- `long long`

---

## 1. `unsigned`

### **Definition**
`unsigned` is a modifier that makes a variable store **only positive values** (0 to maximum limit).  
It **cannot store negative numbers**.

### **Behavior**
- If you try to store a negative value in an `unsigned` variable,  
  it converts it to a **garbage / very large positive value** because it wraps around memory.

### **Use Case**
Used when:
- Only positive numbers are needed  
- You want to increase maximum positive range  
Example areas: counters, sizes, indexing, IDs.

---

## 2. `long long`

### **Definition**
`long long` is a modifier used with integer types to store **very large whole numbers**.

### **Size**
Typically **8 bytes**.

### **Range**
Can store values in the range of:
-9 quintillion to +9 quintillion (approx)

yaml
Copy code

### **Use Case**
Used when:
- You need extremely large values  
- Working with big calculations, population counts, high storage numbers  

---

## 3. `short`

### **Definition**
`short` is a modifier that reduces the size of an integer type.  
It uses **less memory** compared to normal `int`.

### **Size**
Typically **2 bytes**.

### **Range**
Small integer range:
-32,768 to 32,767

yaml
Copy code

### **Use Case**
Used when:
- Value will always remain small  
- Need to save memory  
Example: ages, small counters, sample data values.

---

## Additional Notes Based on Code Logic

### ✔ Variables declared before `return 0;` are used  
Anything written **after `return` does not execute** because the program ends there.

### ✔ Printing values  
Only values before `return` will be displayed.

### ✔ Negative value in `unsigned`  
If you store something like `unsigned x = -200;`  
it will not show `-200`,  
instead it gives a **large garbage value** because unsigned cannot hold negative numbers.

---

## Summary

- **Modifiers** change size & range of data types.  
- **unsigned** → no negative numbers allowed; negative becomes garbage.  
- **long long** → used for very large numbers.  
- **short** → used for small-range numbers to save memory.  
- Code after `return 0` will never run.
---

## 🔹 What is a String?

A string in C++ is a sequence of characters used to store text.
It is part of the Standard Library and helps handle words, sentences, and text data easily.
✔ Purpose of Strings
Store names
Store sentences or messages
Handle user input
Manage file paths or text content

### 📘 Escape Sequences in C++
✔ \n — New Line
Moves the cursor to the next line.
✔ \t — Tab Space
Creates horizontal space like pressing the Tab key.
✔ \\ — Backslash
Prints a single backslash character.
✔ \" — Double Quote
Allows printing " inside a string.
✔ \' — Single Quote
Prints ' inside a string.
✔ \b — Backspace
Removes the previous character in output.
✔ \r — Carriage Return
Moves the cursor back to the start of the line.

---
## Input in C++
Input is taken using cin and getline() depending on the type of data.

### Using cin
Used for single-word input such as numbers or words without spaces.
✔ Flow
Data flows from keyboard → program.
Extraction operator >> pulls the input value into variables.
✔ Good For
Numbers
Single words
Simple input

### Using getline()
Used for multiple-word input, including spaces.
✔ Purpose
Allows the user to type full sentences, names, or phrases.
✔ Why Needed
cin stops when it sees a space —
getline() reads the entire line, including spaces.

### Rules for Taking Input in C++
✔ Rule 1 — Use cin for numbers or single words
It stops input at the first space.

✔ Rule 2 — Use getline() for sentences
Reads entire line including spaces.

✔ Rule 3 — getline() must be used carefully after cin
Because cin leaves a newline (\n) in the input buffer.

✔ Rule 4 — Output must come before input
The user should always know what they need to enter.

✔ Rule 5 — Avoid mixing cin and getline() without clearing input
Otherwise getline() may read an empty string.

### 📘 Summary
cout → prints output
cin → takes single-word or numeric input
getline() → takes full-sentence input
Input/Output helps communicate with the user

---


# 🛠 Operators in C++

Operators are symbols that perform operations on variables and values.

### 🔹 Types of Operators

#### 1️⃣ Arithmetic Operators

| Operator | Description         |
| -------- | ------------------- |
| +        | Addition            |
| -        | Subtraction         |
| *        | Multiplication      |
| /        | Division            |
| %        | Modulus (remainder) |

**Example:**

```cpp
int a = 5, b = 2;
cout << a + b; // 7
cout << a % b; // 1
```

#### 2️⃣ Relational Operators

| Operator | Description           |
| -------- | --------------------- |
| ==       | Equal to              |
| !=       | Not equal             |
| >        | Greater than          |
| <        | Less than             |
| >=       | Greater than or equal |
| <=       | Less than or equal    |

**Example:**

```cpp
int a = 5, b = 2;
cout << (a > b); // 1 (true)
```

#### 3️⃣ Logical Operators

| Operator | Description |   |            |
| -------- | ----------- | - | ---------- |
| &&       | Logical AND |   |            |
|          |             |   | Logical OR |
| !        | Logical NOT |   |            |

**Example:**

```cpp
bool x = true, y = false;
cout << (x && y); // 0
cout << (!x);     // 0
```

#### 4️⃣ Conditional / Ternary Operator

Syntax:

```cpp
condition ? expression1 : expression2;
```

**Example:**

```cpp
int a = 10, b = 20;
int max = (a > b) ? a : b;
cout << max; // 20
```

---

## 📄 Work Flow Example with if-else

```cpp
int num = 10;
if(num > 0){
    cout << "Positive";
} else if(num < 0){
    cout << "Negative";
} else {
    cout << "Zero";
}
```

* Checks conditions in order.
* Executes first true condition.

---

## 🔧 Function Example Using Operators

```cpp
int add(int x, int y){
    return x + y;
}
int main(){
    int sum = add(5, 3);
    cout << sum; // 8
    return 0;
}
```

* Functions can use operators to perform operations.

---

# 🎯 Summary

* Operators are symbols that manipulate data.
* Types: Arithmetic, Relational, Logical, Conditional.
* Can be used inside **if-else** or **functions** for logic and calculations.
* Conditional operator `? :` is shorthand for simple if-else.

---

# 💾 Copy-Paste Example File

```cpp
#include <iostream>
using namespace std;

int add(int x, int y){
    return x + y;
}

int main(){
    int a = 10, b = 20;
    cout << "Arithmetic Operators: " << a + b << endl;
    cout << "Relational Operator (a > b): " << (a > b) << endl;
    cout << "Logical Operator (a < b && b > 0): " << (a < b && b > 0) << endl;

    int max = (a > b) ? a : b;
    cout << "Conditional Operator Max: " << max << endl;

    if(a > 0){
        cout << "a is Positive" << endl;
    } else {
        cout << "a is Non-Positive" << endl;
    }

    cout << "Function Add: " << add(a, b) << endl;
    return 0;
}
```
---

# 🧠 Decision Making in C++

Decision-making statements allow the program to choose different paths based on conditions.

---

# 1️⃣ If Statement

### ➤ Purpose

Checks a condition and executes the block if the condition is **true**.

### ➤ Syntax

```cpp
if(condition){
    // code
}
```

### ➤ Example

```cpp
int age = 18;
if(age >= 18){
    cout << "Eligible to vote";
}
```

### ➤ How It Executes

* Condition is checked.
* If **true**, the code runs.
* If **false**, it skips the block.

---

# 2️⃣ If-Else Statement

### ➤ Purpose

Runs one block if a condition is **true**, otherwise runs another block.

### ➤ Syntax

```cpp
if(condition){
    // true block
} else {
    // false block
}
```

### ➤ Example

```cpp
int marks = 40;
if(marks >= 35){
    cout << "Pass";
} else {
    cout << "Fail";
}
```

### ➤ Execution Flow

* Check condition.
* Execute **if block** if true.
* Execute **else block** if false.

---

# 3️⃣ Nested If-Else

### ➤ Purpose

Using one if-else inside another if-else.

### ➤ Syntax

```cpp
if(condition1){
    if(condition2){
        // inner true
    } else {
        // inner false
    }
} else {
    // outer false
}
```

### ➤ Example

```cpp
int num = 15;
if(num > 0){
    if(num % 2 == 0){
        cout << "Positive Even";
    } else {
        cout << "Positive Odd";
    }
} else {
    cout << "Non-positive number";
}
```

### ➤ Execution Flow

1. Checks outer condition.
2. If true → checks inner condition.
3. If outer false → directly else.

---

# 4️⃣ Switch Case

### ➤ Purpose

Used when you want to compare a value with multiple cases.

### ➤ Syntax

```cpp
switch(expression){
    case value1:
        // code
        break;
    case value2:
        // code
        break;
    default:
        // code
}
```

### ➤ Example

```cpp
int day = 3;
switch(day){
    case 1:
        cout << "Monday";
        break;
    case 2:
        cout << "Tuesday";
        break;
    case 3:
        cout << "Wednesday";
        break;
    default:
        cout << "Invalid Day";
}
```

### ➤ Execution Flow

* Matches value with each **case**.
* Runs the matching block.
* **break** prevents falling to next case.
* If no match → **default** executes.

---

# 5️⃣ Break Statement

### ➤ Purpose

`break` stops the current loop or switch-case immediately.

### ➤ Example in switch

```cpp
switch(choice){
    case 1:
        cout << "Start";
        break;
    case 2:
        cout << "Stop";
        break;
}
```

### ➤ Without break

```cpp
switch(2){
    case 1:
        cout << "One";
    case 2:
        cout << "Two";  // executes
    case 3:
        cout << "Three"; // also executes (fall-through)
}
```

---

# 📝 FULL COPY-PASTE EXAMPLE PROGRAM

```cpp
#include <iostream>
using namespace std;

int main(){

    int num = 10;

    // If
    if(num > 0){
        cout << "Number is positive" << endl;
    }

    // If-Else
    if(num % 2 == 0){
        cout << "Even number" << endl;
    } else {
        cout << "Odd number" << endl;
    }

    // Nested If-Else
    if(num > 0){
        if(num > 5){
            cout << "Greater than 5" << endl;
        } else {
            cout << "Less than or equal to 5" << endl;
        }
    } else {
        cout << "Non-positive" << endl;
    }

    // Switch Case
    int choice = 2;
    switch(choice){
        case 1:
            cout << "Option 1" << endl;
            break;
        case 2:
            cout << "Option 2" << endl;
            break;
        case 3:
            cout << "Option 3" << endl;
            break;
        default:
            cout << "Invalid Option" << endl;
    }

    return 0;
}
```

---

# 🎯 Summary

* **if** → single condition
* **if-else** → condition true/false
* **nested if-else** → multiple levels of conditions
* **switch-case** → multiple fixed choices
* **break** → stops further execution

---

# 🔁 What Are Loops?

Loops are used to repeat a block of code multiple times until a condition becomes false.

---

# 1️⃣ For Loop

### ✔ Purpose

Used when **number of iterations is known**.

### ✔ Syntax

```cpp
for(initialization; condition; increment){
    // code
}
```

### ✔ Example

```cpp
for(int i = 1; i <= 5; i++){
    cout << i << " ";
}
```

Output:

```
1 2 3 4 5
```

### ✔ Use Cases

* Printing series of numbers
* Accessing arrays
* Running loop fixed number of times

---

# 2️⃣ While Loop

### ✔ Purpose

Used when **number of iterations is not known**, and loop continues until a condition becomes false.

### ✔ Syntax

```cpp
while(condition){
    // code
}
```

### ✔ Example

```cpp
int i = 1;
while(i <= 5){
    cout << i << " ";
    i++;
}
```

### ✔ Use Cases

* Reading input until user quits
* Loops that depend on condition changes

---

# 3️⃣ Do-While Loop

### ✔ Purpose

Runs **at least once**, even if the condition is false.

### ✔ Syntax

```cpp
do{
    // code
} while(condition);
```

### ✔ Example

```cpp
int i = 1;
do{
    cout << i << " ";
    i++;
} while(i <= 5);
```

### ✔ Use Cases

* Menu-driven programs
* Taking input until a valid value is entered

---

# 🔍 Comparison Table

| Loop Type | Condition Check | Runs At Least Once? | Best Use           |
| --------- | --------------- | ------------------- | ------------------ |
| for       | Before loop     | No                  | Known iterations   |
| while     | Before loop     | No                  | Unknown iterations |
| do-while  | After loop      | Yes                 | Must run once      |

---

# 📝 FULL COPY-PASTE EXAMPLE PROGRAM

```cpp
#include <iostream>
using namespace std;

int main(){

    // For Loop
    cout << "For Loop: ";
    for(int i = 1; i <= 5; i++){
        cout << i << " ";
    }
    cout << endl;

    // While Loop
    cout << "While Loop: ";
    int j = 1;
    while(j <= 5){
        cout << j << " ";
        j++;
    }
    cout << endl;

    // Do-While Loop
    cout << "Do-While Loop: ";
    int k = 1;
    do{
        cout << k << " ";
        k++;
    } while(k <= 5);
    cout << endl;

    return 0;
}
```

---

# 🎯 Summary

* **for loop** → use when you know how many times to repeat.
* **while loop** → use when condition controls the repetition.
* **do-while loop** → runs at least once before checking condition.


---
# Functions:'

# 🔥 1. What is a Function?

A **function** is a block of code that performs a specific task and can be reused.

### ✔ Definition

* Breaks big programs into smaller parts
* Increases code reusability
* Makes code modular

### ✔ Syntax

```cpp
returnType functionName(parameters){
    // code
}
```

### ✔ Example

```cpp
int add(int a, int b){
    return a + b;
}
```

### ✔ Calling

```cpp
int result = add(5, 3);
```

---

# 🚀 2. Function Overloading

**Same function name**, but **different parameters**.

### ✔ Rules

* Parameter type should differ OR
* Number of parameters should differ OR
* Order should differ

### ✔ Syntax

```cpp
int sum(int a, int b);
double sum(double a, double b);
```

### ✔ Example

```cpp
int sum(int a, int b){ return a + b; }
double sum(double a, double b){ return a + b; }
```

### ✔ Workflow

1. Compiler checks function name
2. Matches parameter count & type
3. Calls the correct version

---

# 🟦 3. Call By Value

A **copy** of the variable is passed to the function.

### ✔ Original variable does NOT change.

### ✔ Syntax

```cpp
void change(int x){
    x = 20;
}
```

### ✔ Example

```cpp
int a = 10;
change(a);
// a will remain 10
```

### ✔ Workflow

* Copy created → function uses copy → original value unaffected

---

# 🟩 4. Pass By Reference

The **actual variable** is passed, not a copy.

### ✔ Original value CHANGES.

### ✔ Syntax

```cpp
void change(int &x){
    x = 20;
}
```

### ✔ Example

```cpp
int a = 10;
change(a);
// a becomes 20
```

### ✔ Workflow

* No copy created → function modifies actual memory

---

# 🟧 5. Lambda Functions

Short anonymous functions introduced in C++11.

### ✔ Syntax

```cpp
[capture](parameters) -> returnType {
    // code
};
```

### ✔ Basic Example

```cpp
auto add = [](int a, int b){ return a + b; };
cout << add(5, 3);
```

### ✔ Capture Types

| Capture | Meaning                   |
| ------- | ------------------------- |
| `[ ]`   | captures nothing          |
| `[x]`   | captures x by value       |
| `[&x]`  | captures x by reference   |
| `[=]`   | captures all by value     |
| `[&]`   | captures all by reference |

---

# 🟥 6. Scopes in C++

Scope means “where a variable can be accessed”.

## ➤ Types of Scope

### 1. **Local Scope**

Variable declared inside function/block → accessible only inside it.

```cpp
void fun(){
    int x = 10;
}
```

### 2. **Global Scope**

Declared outside all functions → available everywhere.

```cpp
int globalVar = 50;
```

### 3. **Function Scope**

Variables exist only inside the function.

### 4. **Block Scope**

Variables inside `{ }` exist only inside block.

```cpp
if(true){ int y = 5; }
```

---

# 🌍 7. Global Variables

Declared outside all functions → accessible everywhere.

### ✔ Example

```cpp
int g = 100;

void show(){ cout << g; }
```

### ✔ Drawback

* Can be modified anywhere → unsafe

---

# 📝 FULL COPY-PASTE PROGRAM (All Topics Covered)

```cpp
#include <iostream>
using namespace std;

// Global variable
int g = 100;

// Function overloading
int sum(int a, int b){ return a + b; }
double sum(double a, double b){ return a + b; }

// Call by value
void changeValue(int x){
    x = 20;
}

// Pass by reference
void changeRef(int &x){
    x = 20;
}

int main(){

    // Global variable
    cout << "Global g: " << g << endl;

    // Function overloading
    cout << "Sum int: " << sum(5, 3) << endl;
    cout << "Sum double: " << sum(5.5, 3.3) << endl;

    // Call by value
    int a = 10;
    changeValue(a);
    cout << "After call by value: " << a << endl; // still 10

    // Pass by reference
    changeRef(a);
    cout << "After pass by reference: " << a << endl; // now 20

    // Lambda function
    auto multiply = [](int x, int y){ return x * y; };
    cout << "Lambda multiply: " << multiply(4, 3) << endl;

    return 0;
}
```

---

# 🎯 Summary

* **Function** → reusable block of code
* **Overloading** → same function name, different parameters
* **Call by Value** → copy passed, original unchanged
* **Pass by Reference** → original modified
* **Lambda** → small inline functions
* **Scopes** → local, global, block, function scop
---

# 📌 **1. What is OOPS? (Object-Oriented Programming System)**

OOPS ek programming model hai jo real-world entities ko **objects** ki form me represent karta hai.

### ✔ Definition

“OOPS is a programming paradigm that organizes code into **objects** containing **data** (attributes) and **functions** (methods).”

### ✔ Features of OOPS

* Encapsulation
* Abstraction
* Inheritance
* Polymorphism

---

# 📌 **2. OOPS kyu aya? (Why OOPS?)**

Pehle languages (C language) **procedural** thi → pura code functions me.

Issues:

* Code reuse nahi ho pata tha
* Complexity badh jati thi
* Real-world modelling mushkil
* Data secure nahi rehta tha

OOPS ne solve kiya:

* Data hide karna (encapsulation)
* Complex code ko object-based structure dena
* Code reuse through classes & inheritance
* Maintainable architecture

---

# 📌 **3. C++ vs Java (OOPS differences)**

| Feature              | C++                                 | Java                          |
| -------------------- | ----------------------------------- | ----------------------------- |
| Compilation          | Compiled                            | Compiled + JVM executes       |
| Memory               | Manual (pointers)                   | Automatic (Garbage Collector) |
| Multiple Inheritance | Allowed (with classes)              | Not allowed (only interfaces) |
| Platform             | Machine-dependent                   | Platform-independent          |
| OOPS                 | Hybrid (supports procedural + OOPS) | Pure OOPS                     |
| Pointers             | Yes                                 | No                            |

### Summary:

C++ = more control, hybrid model
Java = cleaner, fully object-oriented, memory-safe

---

# 📌 **4. What is a Class?**

Class = blueprint/template jisse object banta hai.

### Example

```cpp
class Student {
public:
    string name;
    int age;

    void introduce() {
        cout << "My name is " << name << " and I am " << age << " years old." << endl;
    }
};
```

---

# 📌 **5. What is an Object?**

Object = class ka real-world instance.

### Example

```cpp
Student s1;          // object creation
s1.name = "Aditya";
s1.age = 18;
s1.introduce();
```

---

# 📌 **6. Access Specifiers (public, private)**

### ✔ `public:`

* Sabse accessible
* Class ke bahar se bhi access ho sakta hai

### ✔ `private:`

* Sirf class ke andar accessible
* Object ke through direct access **not allowed**

### Example

```cpp
class Demo {
private:
    int secret = 10;

public:
    int x = 5;

    int getSecret() {
        return secret;
    }
};
```

Usage:

```cpp
Demo d;
cout << d.x;           // allowed
cout << d.getSecret(); // allowed (via function)
// cout << d.secret;  // ❌ error
```

---

# 📌 **7. Member Functions**

Functions defined inside a class.

```cpp
class Math {
public:
    int add(int a, int b) {
        return a + b;
    }
};
```

Usage:

```cpp
Math m;
cout << m.add(10, 20);
```

---

# 📌 **8. Constructor (Optional Concept)**

Automatically called function when object is created.

```cpp
class Car {
public:
    Car() {
        cout << "Car created!";
    }
};
```

---

# 📌 **9. Vector in C++ (from STL)**

Vector = dynamic array → automatically grow/shrink hota hai.

### Example

```cpp
#include <vector>
using namespace std;

vector<int> nums;
nums.push_back(10);
nums.push_back(20);
nums.push_back(30);

for(int n : nums) {
    cout << n << " ";
}
```

### Common vector functions:

* `push_back(x)` → end me add
* `pop_back()` → last element hatana
* `size()` → kitne elements
* `at(index)` → safe access
* `clear()` → empty vector

---

# 📌 **10. Full Example — Class + Object + Private + Public + Vector**

```cpp
#include <iostream>
#include <vector>
using namespace std;

class Student {
private:
    int id;

public:
    string name;
    vector<int> marks;

    Student(int x, string y) {
        id = x;
        name = y;
    }

    void addMark(int m) {
        marks.push_back(m);
    }

    void showDetails() {
        cout << "ID: " << id << "\n";
        cout << "Name: " << name << "\nMarks: ";
        for(int m : marks) cout << m << " ";
        cout << endl;
    }
};

int main() {
    Student s1(101, "Aditya");
    s1.addMark(85);
    s1.addMark(90);

    s1.showDetails();
}
```

---

# 📌 **11. Execution Flow Summary**

```
main() → object create → constructor run
        → public members accessible
        → private accessible via methods only
        → vector stores marks dynamically
```

---

# 📌 1. **Pointers in C++**

Pointer = variable that stores **address** of another variable.

### ✔ Syntax

```cpp
int x = 10;
int *p = &x;
```

### ✔ Accessing value using pointer

```cpp
cout << *p;  // dereference
```

### ✔ Execution Flow

```
Variable x → memory address → pointer stores that → *p gives value
```

---

# 📌 2. **Reference in C++**

Reference = existing variable ka **nickname**.

### ✔ Syntax

```cpp
int x = 5;
int &ref = x;
```

### ✔ Behavior

* Always must be initialized
* Cannot be changed to refer to another variable
* Used for call by reference

---

# 📌 3. **Constructor in C++**

Constructor = special function jo object banate hi run hota hai.

### ✔ Types

1. Default constructor
2. Parameterized constructor
3. Copy constructor

---

# 📌 3.1 **Default Constructor**

```cpp
class A {
public:
    A() {
        cout << "Default Constructor Called";
    }
};
```

---

# 📌 3.2 **Parameterized Constructor**

```cpp
class Student {
    int age;
public:
    Student(int x) {
        age = x;
    }
};
```

### ✔ Execution Flow

```
Object creation → arguments pass → constructor sets variables → object ready
```

---

# 📌 4. **Heap Memory with Constructors (new keyword)**

Objects can be created dynamically using **new**.

```cpp
Student *s = new Student(20);
```

### ✔ Why Heap Allocation?

* Runtime memory control
* Object persistent until manually deleted
* Required when size unknown at compile time

### ✔ Access

```cpp
cout << s->age;
```

---

# 📌 5. **Copy Constructor**

Used to copy object values.

### ✔ Syntax

```cpp
ClassName(const ClassName &obj) {
    // copy logic
}
```

---

# 📌 5.1 **Deep Copy Example (Pointer fields)**

```cpp
class Book {
public:
    string *title;

    Book(string t) {
        title = new string(t);   // heap memory
    }

    Book(const Book &b) {        // deep copy
        title = new string(*b.title);
    }
};
```

### ✔ Execution Flow

```
Original object → copies value → allocates new memory → independent object
```

---

# 📌 6. Using **other** inside Constructor

`other` ka use copy constructor me hota hai.

### Example

```cpp
Book(const Book &other) {
    title = new string(*other.title);   // copying value
}
```

This avoids **shallow copy**, ensures **new memory** is created.

---

# 📌 7. **Destructor (~)**

Destructor = object destroy hone par auto-call hota hai.

### ✔ Syntax

```cpp
~ClassName() {
    cout << "Destructor Called";
}
```

### ✔ Use

* Free heap memory
* Prevent memory leaks

### ✔ Example

```cpp
class Test {
public:
    int *ptr;

    Test(int x) {
        ptr = new int(x);
    }

    ~Test() {
        delete ptr;
        cout << "Memory Released";
    }
};
```

---

# 📌 8. Full Example Combining Everything

```cpp
#include <iostream>
using namespace std;

class Demo {
public:
    int *data;

    Demo(int x) {                // parameterized
        data = new int(x);
        cout << "Constructor Called\n";
    }

    Demo(const Demo &other) {    // deep copy
        data = new int(*other.data);
        cout << "Copy Constructor Called\n";
    }

    ~Demo() {                    // destructor
        delete data;
        cout << "Destructor Called\n";
    }
};

int main() {
    Demo d1(10);      // constructor
    Demo d2 = d1;     // copy constructor

    cout << *d1.data << " " << *d2.data;
}
```

---

# 📌 9. Execution Flow Summary

```
main()
 ↓
Create d1 → parameterized constructor
 ↓
Create d2 using d1 → copy constructor
 ↓
Program end → destructors run → memory freed
```

---
# 🟦 C++ Friend Function

## 📘 1. What is a Friend Function?

A **friend function** is a special function in C++ that is allowed to access the **private** and **protected** members of a class, even though it is **not a member** of that class.

### 🔹 Definition (Easy Words)

Normally, private/protected data ko sirf class ke functions hi access kar sakte hain. Lekin agar hume kisi **bahar ke function** ko class ki private details access karani ho — toh hum use `friend` keyword se friend bana dete hain.

---

## 📘 2. Why Do We Need Friend Functions?

* When two classes need to share private data.
* For operator overloading (like `<<` and `>>`).
* For debugging — to access hidden data without changing access specifiers.
* When non-member utility functions need direct access.

---

## 📘 3. Syntax of Friend Function

```cpp
class ClassName {
private:
    int data;

public:
    friend void functionName(ClassName obj);
};
```

### Key Points:

* Function declared inside class using `friend` keyword.
* Function defined **outside** the class.
* Function is **not a member** of the class.

---

## 📘 4. Example with Full Execution Flow

### ✔ Program

```cpp
#include <iostream>
using namespace std;

class Box {
private:
    int length;

public:
    Box(int l) {
        length = l;
    }

    // friend function declaration
    friend void showLength(Box b);
};

// friend function definition
void showLength(Box b) {
    cout << "Length is: " << b.length << endl;  // accessing private
}

int main() {
    Box b1(10);
    showLength(b1);
    return 0;
}
```

### ✔ Execution Explanation

1. `Box` class ke andar `length` private hai.
2. `showLength()` ko friend declare kiya gaya.
3. Even though it's a non-member function, it can access `b.length`.
4. `main()` me object banaya gaya → friend function ko diya.
5. Function prints the private value.

---

## 📘 5. Characteristics of Friend Functions

* Belong to **global scope**, not inside class.
* Can be declared in **multiple classes**.
* Not called using object like `obj.function()`.
* Access private & protected members using object.

---

## 📘 6. Friend Function vs Member Function

| Feature        | Friend Function      | Member Function  |
| -------------- | -------------------- | ---------------- |
| Access Private | ✔ Yes                | ✔ Yes            |
| Part of Class  | ❌ No                 | ✔ Yes            |
| Called Using   | Normal function call | `obj.function()` |
| Keyword        | `friend`             | No keyword       |

---

## 📘 7. Friend Function Use Cases

### 🔸 1. Accessing Private Data Across Classes

Useful when two independent classes need to share data.

### 🔸 2. Operator Overloading

Example: `operator<<` for printing objects.

### 🔸 3. External Utility Functions

Example: functions that compare two objects.

---

## 📘 8. Friend Function With Multiple Classes

```cpp
class A;
class B {
public:
    friend void show(A a, B b);
};

class A {
private:
    int x = 10;

public:
    friend void show(A a, B b);
};

void show(A a, B b) {
    cout << a.x << endl; // accessing private of A
}
```

---

## 📘 9. Friend Class (Short Note)

Pura class ek dusre class ka friend ban sakta hai.

```cpp
class B; 
class A {
    friend class B;
private:
    int value = 100;
};

class B {
public:
    void show(A a) {
        cout << a.value;
    }
};
```

---

## 📘 10. Advantages & Disadvantages

### ✔ Advantages

* Controlled access to private data.
* Useful for operator overloading.
* Helpful in external utility functions.

### ❌ Disadvantages

* Breaks encapsulation lightly.
* Too many friend functions makes class design bad.

---

## 📘 11. Final Copy-Paste Summary (Very Short)

```
Friend Function → Non-member function with access to private data.
Why → Operator overloading, shared data, utility functions.
Syntax → friend returnType name(classObj);
Execution → Defined outside, called normally.
Use Cases → Debugging, printing, comparing, operator overload.
```

---

# 🟦 C++ Getters, Setters, Delegating Constructors & `const` 

Below are clean, structured, copy-paste-ready notes based on:
✔ Getters & Setters (Accessors / Mutators)
✔ Delegating Constructors
✔ `const` keyword (const objects, const member functions, const parameters)
✔ Execution flow & examples

---

# 📘 1. What Are Getters & Setters?

### ✔ Definition

* **Getter** → Function used to *access* private data.
* **Setter** → Function used to *modify/change* private data.

### ✔ Why Needed?

* To protect private data (Encapsulation).
* To validate data before updating.
* To avoid direct access to class variables.

---

## 📘 2. Syntax: Getters & Setters

```cpp
class Student {
private:
    int age;

public:
    // Setter
    void setAge(int a) {
        if(a > 0) age = a;
    }

    // Getter
    int getAge() const {
        return age;
    }
};
```

---

## 📘 3. Execution Flow

1. `setAge()` called → validates → assigns value.
2. `getAge()` called → returns private `age`.
3. Object never accesses private data directly.

---

# 📘 4. Delegating Constructors

### ✔ Definition

A constructor that calls another constructor inside the same class.

### ✔ Why Needed?

* Removes code repetition.
* Handles default initialization.
* Provides clean constructor chains.

---

## 📘 5. Syntax: Delegating Constructor

```cpp
class Box {
public:
    int length;

    // Main constructor
    Box(int l) {
        length = l;
    }

    // Delegating constructor
    Box() : Box(10) { }  // Calls the main constructor
};
```

### ✔ Execution Flow

1. `Box()` → delegates to `Box(10)`
2. `length = 10`
3. Delegated constructor completes

---

# 📘 6. The `const` Keyword in C++

The `const` keyword ensures a variable or function **cannot be modified**.

---

## 📘 7. Types of `const` Usage

### ✔ 1. `const` Variable

```cpp
const int x = 10;
```

Cannot change `x`.

---

### ✔ 2. `const` Member Function

Used when a function **does not modify** class data.

```cpp
class A {
private:
    int value;
public:
    int getValue() const {   // const member function
        return value;
    }
};
```

### ❗Important:

* `const` functions **cannot modify** member variables.
* Can only call other **const** functions.

---

### ✔ 3. `const` Objects

```cpp
const A obj;
obj.getValue();   // ✔ allowed
obj.setValue(5);  // ❌ not allowed (modifies object)
```

---

### ✔ 4. `const` Parameters

```cpp
void print(const int &x) {  // cannot modify x
    cout << x;
}
```

Used to avoid accidental changes.

---

# 📘 8. Getters + Setters + Const Combined Example

```cpp
#include <iostream>
using namespace std;

class Car {
private:
    int speed;

public:
    // delegating constructor
    Car() : Car(0) {}

    Car(int s) {
        speed = s;
    }

    // setter
    void setSpeed(int s) {
        if(s >= 0) speed = s;
    }

    // getter (const function)
    int getSpeed() const {
        return speed;
    }
};

int main() {
    Car c1(50);
    cout << c1.getSpeed() << endl;

    c1.setSpeed(80);
    cout << c1.getSpeed() << endl;

    const Car c2(100);
    cout << c2.getSpeed() << endl;  // ✔ works

    return 0;
}
```

---

# 📘 9. Short Summary (Copy-Paste)

```
Getters → return private data.
Setters → modify private data with validation.
Delegating Constructor → constructor calling another constructor.
const variable → cannot change.
const object → can only call const member functions.
const member function → cannot modify class data.
const parameter → prevents modification of passed arguments.
```

---

# 📘 10. Exam/Interview Friendly Points

* Getters should be `const` functions.
* Delegating constructors introduced in **C++11**.
* `const` improves safety & optimization.
* Good OOP design = private data + getter/setter.

---

# 📘 1. Encapsulation

### ✔ Definition

Encapsulation means **wrapping data (variables) and functions that operate on the data into a single unit (class)** and **restricting direct access** to the data.

### ✔ Why Encapsulation?

* Protects data (security)
* Controls how data is modified (validation)
* Prevents accidental misuse
* Helps hide internal implementation

### ✔ Example

```cpp
class Student {
private:
    int age;      // hidden data

public:
    void setAge(int a) {   // controlled access
        if(a > 0) age = a;
    }

    int getAge() const {   // safe read
        return age;
    }
};
```

### ✔ Execution Flow

1. Private data cannot be accessed directly.
2. Setter validates and updates data.
3. Getter safely returns data.

---

# 📘 2. Abstraction

### ✔ Definition

Abstraction means **exposing only essential features while hiding complex implementation details**.

### ✔ Simple Words

User ko sirf *kya kaam hota hai* dikhaya jata hai, *kaise hota hai* nahi.

### ✔ Why Abstraction?

* Reduces complexity
* Improves maintainability
* Cleaner interface

### ✔ Example

```cpp
class Database {
public:
    void connect() {     // user sees only this
        openConnection(); // hidden complex function
    }

private:
    void openConnection() {
        // long internal logic
    }
};
```

---

# 📘 3. Virtual Functions

### ✔ Definition

A **virtual function** allows **runtime polymorphism** → meaning, function call is decided at **runtime**, not compile time.

### ✔ Why Needed?

* When you want **base class pointer** to call **derived class function**.

### ✔ Syntax

```cpp
class A {
public:
    virtual void show() { cout << "A"; }
};

class B : public A {
public:
    void show() override { cout << "B"; }
};
```

### ✔ Execution Flow

1. Base class pointer points to derived object.
2. Virtual keyword enables **dynamic dispatch**.
3. Derived class function runs.

### ✔ Example Execution

```cpp
A* obj = new B();
obj->show();   // Output: B (runtime polymorphism)
```

---

# 📘 4. The `override` Keyword

### ✔ Definition

The `override` keyword **ensures** that a function in derived class **actually overrides** a virtual function in base class.

### ✔ Benefits

* Catches errors at compile time (typos, wrong signature)
* Makes code safer
* Improves clarity

### ✔ Example

```cpp
class A {
public:
    virtual void test() {}
};

class B : public A {
public:
    void test() override {   // must match signature
        cout << "Overridden";
    }
};
```

If signature mismatches, compiler throws an error.

---

# 📘 5. Combined Example: Encapsulation + Abstraction + Virtual + Override

```cpp
#include <iostream>
using namespace std;

class Shape {
private:
    string type; // encapsulated

public:
    void setType(string t) { type = t; }
    string getType() const { return type; }

    virtual void area() const {      // abstraction + virtual
        cout << "Calculating area...";
    }
};

class Circle : public Shape {
private:
    int radius;

public:
    Circle(int r) : radius(r) {}

    void area() const override {     // override ensures correctness
        cout << "Area of circle = " << 3.14 * radius * radius;
    }
};

int main() {
    Shape* s = new Circle(5); // base ptr → derived object
    s->setType("Circle");

    cout << s->getType() << endl;
    s->area();  // runtime polymorphism

    delete s;
    return 0;
}
```

---

# 📘 6. Short Summary (Copy‑Paste Friendly)

```
Encapsulation → hide data using private + getters/setters.
Abstraction → show essential features, hide internal details.
Virtual function → enables runtime polymorphism.
override → ensures correct overriding of virtual function.
Base pointer → Derived object = polymorphism.
```

---

# 📘 7. Interview-Friendly Notes

* Encapsulation ≠ Abstraction (Encapsulation hides data, Abstraction hides complexity).
* Virtual functions use **vtable** internally.
* override is optional but recommended (C++11+).
* Abstraction improves usability; Encapsulation improves security.
* Polymorphism works only with pointers/references + virtual.

---

Bhai, yeh notes ready-made, clean, and exam/interview friendly hain. Agar chaho toh isko **PDF/DOCX** me bhi convert kar dunga!

# C++ OOP NOTES — Encapsulation, Abstraction, `virtual`, and `override`

## 1️⃣ **Encapsulation**

### ✔ Definition

Encapsulation means *wrapping data (variables) and functions (methods) together into a single unit*. It also **restricts direct access** to some components using access specifiers (`private`, `protected`, `public`).

### ✔ Why Encapsulation?

* Protect data from accidental modification
* Only expose required behavior
* Maintain code security
* Better control over what can be accessed and what cannot

### ✔ Example

```cpp
#include <iostream>
using namespace std;

class Student {
private:
    int age;      // hidden data

public:
    void setAge(int a) {  // controlling access
        if (a > 0) age = a;
    }

    int getAge() {
        return age;
    }
};

int main() {
    Student s;
    s.setAge(20);
    cout << "Age: " << s.getAge();
}
```

### ✔ Execution Flow

1. `Student` object created → `age` is private
2. `setAge()` is called → validates & sets age
3. `getAge()` returns the private data

---

## 2️⃣ **Abstraction**

### ✔ Definition

Abstraction means *showing only essential features* and *hiding internal implementation details*.

### ✔ Why Abstraction?

* User focuses on **what** a function does, not **how**
* Clean and easy-to-understand interface

### ✔ Example

```cpp
#include <iostream>
using namespace std;

class Car {
public:
    void start() {   // hides complex engine logic
        cout << "Car started";
    }
};

int main() {
    Car c;
    c.start();
}
```

### ✔ Execution Flow

User just calls `start()` → internal engine logic is hidden.

Abstraction is usually implemented using:

* **classes**
* **access modifiers**
* **abstract classes / interfaces (using virtual functions)**

---

## 3️⃣ **`virtual` Keyword**

### ✔ Definition

`virtual` allows **runtime polymorphism** → lets derived class override a function and ensures correct function is called using **pointer/reference**.

### ✔ Why `virtual`?

Without virtual, **base class pointer always calls base class function** even if it points to derived object.

### ✔ Example

```cpp
#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() {   // virtual → enables overriding
        cout << "Animal sound
";
    }
};

class Dog : public Animal {
public:
    void sound() override {  // overriding
        cout << "Dog barks
";
    }
};

int main() {
    Animal* a = new Dog();
    a->sound(); // Runtime polymorphism → "Dog barks"
}
```

### ✔ Execution Flow

1. `Animal* a = new Dog()` → pointer of base, object of derived
2. `a->sound()` → because of `virtual`, **Dog’s sound()** is executed
3. If `virtual` was not used → base class method executes

---

## 4️⃣ **`override` Keyword**

### ✔ Definition

`override` ensures that a function **is actually overriding** a base class's virtual function.

### ✔ Why `override`?

* Avoids bugs due to function signature mismatch
* Increases safety

### ✔ Example

```cpp
class Base {
public:
    virtual void show() {}
};

class Derived : public Base {
public:
    void show() override {  // ensures overriding
        cout << "Derived show";
    }
};
```

If function signature is wrong, compiler throws an error.

Example of signature mismatch:

```cpp
class Derived2 : public Base {
public:
    void show(int x) override { } // ❌ ERROR: no matching base function
};
```

---

## 5️⃣ **Encapsulation vs Abstraction (Difference Table)**

| Feature        | Encapsulation              | Abstraction                         |
| -------------- | -------------------------- | ----------------------------------- |
| Meaning        | Hiding data                | Hiding implementation               |
| Purpose        | Protect data               | Simplify usage                      |
| Achieved using | Classes, access specifiers | Abstract classes, virtual functions |
| Controls       | How data is accessed       | What details are shown              |

---

## 6️⃣ **Polymorphism Cycle (Virtual Function Execution Cycle)**

1. Object created → stored in heap/stack
2. Base class pointer/reference points to derived object
3. Function call → compiler checks **virtual table (vtable)**
4. Actual derived function executed at runtime

### 🔁 Visual Flow

```
Base Pointer → Vtable Lookup → Derived Function Executes
```

---

## 7️⃣ Summary

* **Encapsulation** = protecting data
* **Abstraction** = hiding complexity
* **virtual** = runtime polymorphism
* **override** = safer overriding

All these concepts together make OOP powerful in C++.

---

# C++ Inheritance – Complete README Style Notes

## 📌 What is Inheritance?

**Inheritance** is an OOP feature in C++ that allows one class (child/derived class) to acquire properties and behaviors (data + functions) of another class (parent/base class).

### **Definition:**

> Inheritance enables code reusability and establishes a relationship between classes in a hierarchical manner.

### **Why Use Inheritance?**

* Reusability of code
* Reduces redundancy
* Achieves hierarchical classification
* Supports polymorphism
* Simplifies maintenance

---

# ## 🧩 Types of Inheritance in C++

## 1️⃣ **Single Inheritance**

A single base class is inherited by a single derived class.

### **Syntax:**

```cpp
class Base {
public:
    void show() { cout << "Base class"; }
};

class Derived : public Base {
};
```

### **Execution:**

```cpp
Derived d;
d.show();  // inherits Base::show()
```

---

## 2️⃣ **Multilevel Inheritance**

A class derived from another derived class.

```
A → B → C
```

### **Syntax:**

```cpp
class A { };
class B : public A { };
class C : public B { };
```

### **Execution:**

```cpp
C obj;  // Can access A and B functions
```

---

## 3️⃣ **Multiple Inheritance**

A class inherits from more than one base class.

### **Syntax:**

```cpp
class A { };
class B { };
class C : public A, public B { };
```

⚠️ Might create ambiguity → solved using **virtual inheritance**.

---

## 4️⃣ **Hierarchical Inheritance**

One base class → multiple derived classes.

```
      Base
     /    \
Derived1  Derived2
```

### **Syntax:**

```cpp
class Base { };
class D1 : public Base { };
class D2 : public Base { };
```

---

## 5️⃣ **Hybrid Inheritance**

Combination of multiple inheritance + multilevel inheritance.

Often leads to **Diamond Problem**, fixed using **virtual inheritance**.

---

# ## 🏛 Access Specifiers in Inheritance

| Mode          | public members | protected members | private members |
| ------------- | -------------- | ----------------- | --------------- |
| **public**    | public         | protected         | not accessible  |
| **protected** | protected      | protected         | not accessible  |
| **private**   | private        | private           | not accessible  |

---

# ## 🧱 Constructor & Inheritance

### Constructor Execution Order

**Base → Derived**

```cpp
class A {
public:
    A() { cout << "A constructor\n"; }
};

class B : public A {
public:
    B() { cout << "B constructor\n"; }
};

int main() {
    B obj;
}
```

**Output:**

```
A constructor
B constructor
```

---

# ## 💡 Function Overriding in Inheritance

Used when derived class wants its own version of a base class function.

### **Syntax:**

```cpp
class Base {
public:
    virtual void show() { cout << "Base"; }
};

class Derived : public Base {
public:
    void show() override { cout << "Derived"; }
};
```

### Execution:

```cpp
Base* p = new Derived();
p->show();  // Derived
```

---

# ## 💎 Virtual Inheritance (Solving Diamond Problem)

### Diamond Problem Structure:

```
    A
   / \
  B   C
   \ /
    D
```

### Without virtual inheritance → A is duplicated.

### With virtual inheritance:

```cpp
class A { };

class B : virtual public A { };
class C : virtual public A { };

class D : public B, public C { };
```

✔ Ensures only one instance of **A** inside **D**.

---

# ## 🔗 Using "super" behavior (Access Base Class Methods)

```cpp
class Base {
public:
    void display() { cout << "Base"; }
};

class Derived : public Base {
public:
    void display() {
        Base::display(); // Calling parent function
        cout << " + Derived";
    }
};
```

---

# ## 🔥 Real Example Demonstrating Inheritance

```cpp
#include <iostream>
using namespace std;

class Animal {
public:
    void eat() { cout << "Eating..."; }
};

class Dog : public Animal {
public:
    void bark() { cout << "Barking..."; }
};

int main() {
    Dog d;
    d.eat();   // inherited
    d.bark();  // own function
}
```

---

# ## 📌 Summary Table

| Feature             | Description                               |
| ------------------- | ----------------------------------------- |
| Inheritance         | Reusing & extending parent class features |
| Single              | One parent → one child                    |
| Multilevel          | Parent → child → grandchild               |
| Multiple            | Two parents → one child                   |
| Hierarchical        | One parent → many children                |
| Hybrid              | Combination                               |
| Virtual Inheritance | Solves diamond problem                    |
| Function Overriding | Redefine parent method                    |
| Constructor Order   | Base → Derived                            |

---

# ## ✅ Ready-to-Copy Notes (Short Version)

```
Inheritance → Reusing base class members.
Types → Single, Multilevel, Multiple, Hierarchical, Hybrid.
Modes → public, protected, private.
Constructor Order → Base → Derived.
Function Overriding → Derived provides new implementation.
Virtual Inheritance → Avoids diamond issue.
Accessing Base Method → Base::method();
```

---

