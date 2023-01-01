#### Q0-0. Compile and run the `Hello, world!` program.
The source code for the "Hello, world!" program can be found in [hello-world.cpp](hello-world.cpp).

#### Q0-1. What does the following statement do?
```c++
3 + 4;
```
It adds 3 integers to 4 integers as a side effect.

#### Q0-2. Write a program that, when run, writes
`This (") is a quote, and this (\) is a backslash.`
This could be achieved by using a backslash before the special symbols in the output string to escape them and have outputted as normal strings. The solution can be viewed in [q02.cpp](q02.cpp).

#### Q0-3. The string literal `\t` represents a tab character; different C++ implementations display tabs in different ways. Experiment with your implementation to learn how it treats tabs.
The implementation used by me replaces any `\t` in the output string even if it doesn't have spaces between it and other words with 7 spaces. However, this result is not consistent as the number of spaces used changed depending on whether a special symbol precedes or follows the tab and its location. The examples program can be viewed in [q03.cpp](q03.cpp).

#### Q0-4. Write a program that, when run, writes the `Hello, world!` program as its output.
This could be achieved by writing the contents of the [Hello, world!](hello-world.cpp) program between quotation marks and using special symbols with the backslash to escape the necessary characters and add spaces or start new lines where needed. The solution can be viewed in [q04.cpp](q04.cpp).

#### Q0-5. Is this a valid program? Why or why not?
```c++
#include <iostream>
int main() std::cout << "Hello, world!" << std::endl;
```
It's invalid because it doesn't use curly braces to delimit the scope of the `main` function.

#### Q0-6. Is this a valid program? Why or why not?
```c++
#include <iostream>
int main() {{{{{{ std::cout << "Hello, world!" << std::endl; }}}}}}
```
Yes, because there is an equal number of curly braces on each side.

#### Q0-7. What about this one?
```c++
#include <iostream>
int main()
{
	/* This is a comment that extends over several lines
	because it uses /* and */ as its starting and ending delimiters */
	std::cout << "Does this work?" << std::endl;
	return 0;
}
```
The program doesn't execute because a backslash needs to precede the first instance of `*/` for it to be considered as part of the string literal instead of the end of the comment, and without it, everything after the first `*/` is considered code, which in this case is invalid because it's plain English.

#### Q0-8. ...and this one?
```c++
#include <iostream>
int main()
{
	// This is a comment that extends over several lines
	// by using // at the beginning of each line instead of using /*
	// or */ to delimit comments.
	std::cout << "Does this work?" << std::endl;
	return 0;
}
```
This program is valid because everything after a double forward slash is considered part of the comment.

#### Q0-9. What is the shortest valid program?
The shortest valid program is one that consists of the declaration of a `main` function followed by empty curly braces. It can be viewed in [q09.cpp](q09.cpp).

#### Q0-10. Rewrite the Hello, world! program so that a newline occurs everywhere that whitespace is allowed in the program.
For the most part, this has no effect on the program since semicolons and curly braces are used to indicate scope in C++. This only becomes an issue when used to separate;
- an `#include` from the name of the file or library it's including
- portions of a single string literal
- double operators like `::` or `<<`
The example program can be found in [q10.cpp](q10.cpp).