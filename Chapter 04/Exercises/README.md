#### Q4-1: We noted in §4.2.3/65 that it is essential that the argument types in a call to `max` match exactly. Will the following code work? If there is a problem, how would you fix it?
```c++
int maxlen;
Student_info s;
max(s.name.size(), maxlen);
```
No, because `s.name.size()` returns a value of type `size_t`. In order to make this program work, we will have to change `maxlen` type from `int` to `string::size_t`.

#### Q4-2. Write a program to calculate the squares of `int` values up to 100. The program should write two columns: The first lists the value; the second contains the square of that value. Use `setw` to manage the output so that the values line up in columns.
> `setw(n)`: Returns a value of type `streamsize` (§3.1/36) that, when written on an output stream `s`, has the effect of calling `s.width(n)`.

The solution can be found in [q02](q02.cpp).

#### Q4-3. What happens if we rewrite the previous program to allow values up to but not including 1000 but neglect to change the arguments to `setw`? Rewrite the program to be more robust in the face of changes that allow `i` to grow without adjusting the `setw` arguments.
The left and right columns will blend as the widths of both cease to hold the numbers as they grow. The updated program can be found in [q03](q03.cpp).

#### Q4-4. Now change your squares program to use `double` values instead of `int`s. Use manipulators to manage the output so that the values line up in columns.
The solution can be found in [q04](q04.cpp).

#### Q4-5. Write a function that reads words from an input stream and stores them in a `vector`. Use that function both to write programs that count the number of words in the input, and to count how many times each word occurred.
To count the number of words, the size of the vector could be simply printed. As for counting word repetitions, two `count` functions were implemented:
- one that loops through the word list counting every repetition and replacing it with an empty string
- one that sorts the words list first to group similar words and then counts them

The solution can be found in [q05](q05.cpp).

#### Q4-6. Rewrite the `Student_info` structure to calculate the grades immediately and store only the final grade.

#### Q4-7. Write a program to calculate the average of the numbers stored in a `vector<double>`.

#### Q4-8. If the following code is legal, what can we infer about the return type of f?
```c++
double d = f()[n];
```