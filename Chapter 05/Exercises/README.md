#### Q5-0. Compile, execute, and test the programs in this chapter.
The test programs for this chapter can be viewed in the [Examples](../Examples) folder.

#### Q5-1. Design and implement a program to produce a permuted index.
The phrases have been sorted after un-rotating them using a function that compares the first letter of each phrase after the separator. The algorithm functions are implemented [here](src/permuted_index.cpp). The driver function can be viewed in [q01](q01.cpp). 

#### Q4-2. Write the complete new version of the student-grading program, which extracts records for failing students, using `vector`s. Write another that uses `list`s. Measure the performance.
At small numbers, the `vector` & `list` implementations have similar performance. But because the `extract_fails` function erases elements from the interior of the data structure, as the numbers grow the `list` implementation wins in terms of efficiency. The table below shows the performance of each data structure in seconds.

| File size |[vector](q02-1.cpp)|[list](q02-2.cpp)|
|-----------|-------------------|-----------------|
| 10        | 2.6e-5            | 2.1e-5          |
| 1000      | 0.04924           | 0.000795        |
| 10000     | 5.475             | 0.009647        |

#### Q4-3. By using a `typedef`, we can write one version of the program that implements either a `vector`-based solution or a `list`-based one. Write and test this version of the program.
The solution can be found in [q03](q03.cpp).

#### Q4-4. Look again at the driver functions you wrote in the previous exercise. Note that it is possible to write a driver that differs only in the declaration of the type for the data structure that holds the input file. If your `vector` and `list` test drivers differ in any other way, rewrite them so that they differ only in this declaration.
The driver functions for the [vector](q02-1.cpp)-implementation and the [list](q02-2.cpp)-implementation have already been written such as to differ only in the declaration for the data structure that holds the input data. They have been consolidated into one script using `typedef` as can be seen in [q03](q03.cpp).

#### Q4-5. Write a function named `center(const vector<string>&)` that returns a picture in which all the lines of the original picture are padded out to their full width, and the padding is as evenly divided as possible between the left and right sides of the picture. What are the properties of pictures for which such a function is useful? How can you tell whether a given picture has those properties?
The solution can be found in [q05](q05.cpp).

#### Q4-6. Rewrite the `extract_fails` function from §5.1.1/77 so that instead of erasing each failing student from the input vector `v`, it copies the records for the passing students to the beginning of `v`, and then uses the `resize` function to remove the extra elements from the end of `v`. How does the performance of this version compare with the one in §5.1.1/77?
The new `extract_fails` function shows a significant improvement in performance as the size of the input increases. The table below shows the performance of each function in seconds. The full solution can be viewed in [q06](q06.cpp).

| File size |  old function     |  new function   |
|-----------|-------------------|-----------------|
| 1000      | 0.048752          | 0.001034        |
| 10000     | 5.362049          | 0.01054         |

#### Q4-7. Given the implementation of `frame` in §5.8.1/93, and the code fragment below, describe what happens in this call. In particular, trace through how both the width function and the frame function operate. Now, run this code. If the results differ from your expectations, first understand why your expectations and the program differ, and then change one to match the other.
```c++
vector<string> v;
frame(v);
```
The `width` function loops through a `vector` of `string`s and records the longest word in it to return its length.

Since `v` is empty, the maximum width of the frame would be 4 characters, which originally were reserved for designating the left and right border in each row by adding a space and a '*' to the sides of each word, in addition to whatever extra padding might be required to match the widths of all rows.

The top and bottom borders will therefore consist of 4 stars. There will be nothing in between the top and bottom since `v` is of size zero, so the `for`-loop responsible for populating the middle section won't execute.

The final result will be only two rows stacked consisting of nothing but 4 stars each. The result can be confirmed by running the code in [q07](q07.cpp).

#### Q4-8. In the `hcat` function from §5.8.3/95, what would happen if we defined `s` outside the scope of the `while`? Rewrite and execute the program to confirm your hypothesis.
Each iteration of the while loop creates a new `string` called `s` and concatenates the corresponding rows from each picture to create one new row in the resulting picture. 
When `s` is defined outside the scope of the `while` loop, then each new row is concatenated with all rows preceding it that were generated in previous iterations of the `while` loop. The resulting picture is one in which each row is the sum of all previous rows in addition to the current one. The result can be confirmed by running the code in [q08](q08.cpp).

#### Q5-9. Write a program to write the lowercase words in the input followed by the uppercase words.
1. The words in the input sentence were extracted using the `split` function written in the chapter examples.
2. Two approaches where used to rearrange the words:
	- Using the `sort` function from the `algorithm` header with the reverse iterators `rbegin` and `rend`, which rearranges the words by case as a side effect to sorting them by alphabetical order.
	- Using the `isupper` function from the `cctype` header to extract the upper and lower case letters into separate `vector`s and concatenating them, which rearranges the words by case while maintaining their original order.

Both approaches can be found in [q09](q09.cpp).

#### Q5-10. Palindromes are words that are spelled the same right to left as left to right. Write a program to find all the palindromes in a dictionary. Next, find the longest palindrome.
The solution can be found in [q10](q10.cpp).

#### Q5-11. In text processing it is sometimes useful to know whether a word has any ascenders or descenders. Ascenders are the parts of lowercase letters that extend above the text line; in the English alphabet, the letters b, d, f, h, k, l, and t have ascenders. Similarly, the descenders are the parts of lowercase letters that descend below the line; In English, the letters g, j, p, q, and y have descenders. Write a program to determine whether a word has any ascenders or descenders. Extend that program to find the longest word in the dictionary that has neither ascenders nor descenders.
