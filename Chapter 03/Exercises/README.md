#### Q3-0. Compile, execute, and test the programs in this chapter.
The test programs for this chapter can be viewed in the [Examples](../Examples) folder.

#### Q3-1. Suppose we wish to find the median of a collection of values. Assume that we have read some of the values so far, and that we have no idea how many values remain to be read.Prove that we cannot afford to discard any of the values that we have read. Hint: One proof strategy is to assume that we can discard a value, and then find values for the unread—and therefore unknown—part of our collection that would cause the median to be the value that we discarded.
If we are going to read the following value [1, 2, 3, 4, 6, 7, 8] and while reading them we discard the value 4, the median would then become `(3+6)/2=4.5`, which is different from the median value we'd get had we discarded no values using the same input, which is 4. [^1]

#### Q3-2. Write a program to compute and print the quartiles (that is, the quarter of the numbers with the largest values, the next highest quarter, and so on) of a set of integers.
The number of entries is divided by 4 to give the size of each quartile. The numbers in the inputs are then looped through to decide which values belong to which quartile. The solution can be found in [q02](q02.cpp). [^2]

#### Q3-3. Write a program to count how many times each distinct word appears in its input.

#### Q3-4. Write a program to report the length of the longest and shortest `string` in its input.

#### Q3-5. Write a program that will keep track of grades for several students at once. The program could keep two `vector`s in sync: The first should hold the student's names, and the second the final grades that can be computed as input is read. For now, you should assume a fixed number of homework grades.

#### Q3-6. The average-grade computation in §3.1/36 might divide by zero if the student didn't enter any grades. Division by zero is undefined in C++, which means that the implementation is permitted to do anything it likes. What does your C++ implementation do in this case? Rewrite the program so that its behavior does not depend on how the implementation treats division by zero.

[^1]: the hint isn't clear enough for me
[^2]: the remainder value isn't taken into account so the result isn't accurate