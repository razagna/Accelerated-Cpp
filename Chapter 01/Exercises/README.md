#### Q1-0. Compile, execute, and test the programs in this chapter.
The test programs for this chapter can be viewed in the [Examples](../Examples) folder. 

#### Q1-1. Are the following definitions valid? Why or why not?
```c++
const std::string hello = "Hello";
const std::string message = hello + ", world" + "!";
```
Yes, both definitions are valid. The `+` is left-associative. So, although we can't use it to add two string literals, here the order of operations makes it such that that never happens. So, what happens in the initialization of `message` is:
1. add `hello + ", world"` and return a `string`
2. add the `string` resulting from the operation in step 1 to `"!"`
3. store the result in `message`

The program can be found in [q01](q01.cpp).

#### Q1-2. Are the following definitions valid? Why or why not?
```c++
const std::string exclam = "!";
const std::string message = "Hello" + ", world" + exclam;
```
The first definition is valid. However, the second one is invalid because the `+` operator isn't defined for concatenating string literals. And the order of operations here dictates that the program starts by adding the string literals `"Hello"` and `", world"`, which results in an error.

#### Q1-3. Is the following program valid? If so, what does it do? If not, why not?
```c++
#include <iostream>
#include <string>
int main()
{
    {
        const std::string s = "a string";
        std::cout << s << std::endl;
    }
	
    {
        const std::string s = "another string";
        std::cout << s << std::endl;
    }
    return 0;
}
```
Yes, it is a valid program. It starts by initializing a string called `s` and adding it to the output stream. It discards the `s` variable once it exits the first block. It then initializes a new string called `s` when it enters the second block and adds it to the output stream. The program can be found in [q03](q03.cpp).

#### Q1-4. What about this one? What if we change }} to };} in the third line from the end?
```c++
#include <iostream>
#include <string>
int main()
{
    {
        const std::string s = "a string";
        std::cout << s << std::endl;
        { 
            const std::string s = "another string";
            std::cout << s << std::endl; 
        }
    }
    return 0;
}
```
This is a valid program. It behaves like the program in [Q1-3](q03.cpp). Adding a semicolon after the innermost block has no bearing on the result in this case. The program can be found in [q04](q04.cpp).

#### Q1-5. Is this program valid? If so, what does it do? If not, say why not, and rewrite it to be valid.
```c++
#include <iostream>
#include <string>
int main()
{
    {
        std::string s = "a string";
        {
            std::string x = s + ", really";
            std::cout << s << std::endl; 
        }
        std::cout << x << std::endl;
    }
    return 0;
}
```
This program is not valid because in the last `cout` statement, the program tries to access the variable `x`, which is defined in a different block such that by the time we reach this expression it's already destructed. To fix this, the innermost block must include the last `cout` statement in it. The corrected program can be found in [q05](q05.cpp).

#### Q1-6. What does the following program do if, when it asks you for input, you type two names (for example, Samuel Beckett)? Predict the behavior before running the program, then try it.
```c++
#include <iostream>
#include <string>
int main()
{
    std::cout << "What is your name? ";
    std::string name;
    std::cin >> name;
    std::cout << "Hello, " << name
    << std::endl << "And what is yours? ";
    std::cin >> name;
    std::cout << "Hello, " << name
    << "; nice to meet you too!" << std::endl;
    return 0;
}
```
The program will interpret the first name `Samuel` to be the first input name and outputs it in line 8, and the last name `Beckett` to be the second input name and uses it in the output on line 11. This happens because `cin` reads the input until it encounters the first whitespace after which it stops and stores the result before continuing reading for additional input. This can be tested using the program in [q06](q06.cpp).
