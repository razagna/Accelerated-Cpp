#### Q3-0. Compile, execute, and test the programs in this chapter.
The test programs for this chapter can be viewed in the [Examples](../Examples) folder.

#### Q3-1. Suppose we wish to find the median of a collection of values. Assume that we have read some of the values so far, and that we have no idea how many values remain to be read.Prove that we cannot afford to discard any of the values that we have read. Hint: One proof strategy is to assume that we can discard a value, and then find values for the unread—and therefore unknown—part of our collection that would cause the median to be the value that we discarded.
If we are going to read the following value [1, 2, 3, 4, 6, 7, 8] and while reading them we discard the value 4, the median would then become `(3+6)/2=4.5`, which is different from the median value we'd get had we discarded no values using the same input, which is 4. [^1]

#### Q3-2. Write a program to compute and print the quartiles (that is, the quarter of the numbers with the largest values, the next highest quarter, and so on) of a set of integers.
The number of entries is divided by 4 to give the size of each quartile. The numbers in the inputs are then looped through to decide which values belong to which quartile. The solution can be found in [q02](q02.cpp). [^2]

#### Q3-3. Write a program to count how many times each distinct word appears in its input.
The program prompts the user for an input sentence and then adds each new word to a `vector`. It then loops through each word in the `vector` twice; The outer loop picks out the word to investigate and the inner loop checks how many times the word appears in the `vector` and increases the word count each time it encounters an instance. The solution can be found in [q03](q03.cpp). [^3]

#### Q3-4. Write a program to report the length of the longest and shortest `string` in its input.
For every word in the input, if its the first word entered then its length will act as the starting value for calculating the shortest word using the `min` function from the `<algorithm>` library. Likewise, the length of the previous longest word, which starts as zero, is compared to the length of the newest word using the `max` function until we finish reading input words. The solution can be found in [q04](q04.cpp). 

#### Q3-5. Write a program that will keep track of grades for several students at once. The program could keep two `vector`s in sync: The first should hold the student's names, and the second the final grades that can be computed as input is read. For now, you should assume a fixed number of homework grades.
The program assumes the user inputs the correct number of data in the correct order. It expects an indefinite number of students, so the read statement for student names is in an outer while loop. Inside the loop, the student name is pushed to the names `vector` and the midterm grade, the final grade and 5 homework grades are used to calculate the final grade, which gets pushed to the grade `vector`. Once the loop exits, the two vectors are iterated through via index to output the result. The solution can be found in [q05](q05.cpp). 

#### Q3-6. The average-grade computation in §3.1/36 might divide by zero if the student didn't enter any grades. Division by zero is undefined in C++, which means that the implementation is permitted to do anything it likes. What does your C++ implementation do in this case? Rewrite the program so that its behavior does not depend on how the implementation treats division by zero.
The default behavior of the [**g++** compiler in use](../../README.md#2-notes) is to throw an exception when dividing by 0. To avoid producing garbage or undefined results, the midterm and final variables are initialized to 0 and if no homework grades are entered the total homework grade is set to 0 instead of dividing the sum by the count. The solution can be found in [q06](q06.cpp). 

[^1]: the hint isn't clear enough for me
[^2]: the remainder value isn't taken into account so the result isn't accurate
[^3]: The program repeats this for every word in the input even if it had been previously counted. For a version that uses the `<algorithm>` library, check [q03-v2](q03-v2.cpp).
