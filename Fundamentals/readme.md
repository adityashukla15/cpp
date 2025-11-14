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

