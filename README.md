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

