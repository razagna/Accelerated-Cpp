#### Q5-0. Compile, execute, and test the programs in this chapter.
The test programs for this chapter can be viewed in the [Examples](../Examples) folder.

#### Q5-1. Design and implement a program to produce a permuted index.
The phrases have been sorted after un-rotating them using a function that compares the first letter of each phrase after the separator. The algorithm helper functions are implemented [here](src/permuted_index.cpp)

The solution can be found in [q01](q01.cpp). 

#### Q4-2. Write the complete new version of the student-grading program, which extracts records for failing students, using `vector`s. Write another that uses `list`s. Measure the performance
At small numbers, the `vector` & `list` implementations have similar performance. But because the `extract_fails` function erases elements from the interior of the data structure, as the numbers grow the `list` implementation wins in terms of efficiency. The table below shows the performance in terms of seconds.

| File size |[vector](q02-1.cpp)|[list](q02-2.cpp)|
|-----------|-------------------|-----------------|
| 10        | 2.6e-5            | 2.1e-5          |
| 1000      | 0.04924           | 0.000795        |
| 10000     | 5.475             | 0.009647        |

#### Q4-3. By using a `typedef`, we can write one version of the program that implements either a `vector`-based solution or a `list`-based one. Write and test this version of the program.
The solution can be found in [q03](q03.cpp).

#### Q4-4. Look again at the driver functions you wrote in the previous exercise. Note that it is possible to write a driver that differs only in the declaration of the type for the data structure that holds the input file. If your `vector` and `list` test drivers differ in any other way, rewrite them so that they differ only in this declaration.

#### Q4-5. Write a function named `center(const vector<string>&)` that returns a picture in which all the lines of the original picture are padded out to their full width, and the padding is as evenly divided as possible between the left and right sides of the picture. What are the properties of pictures for which such a function is useful? How can you tell whether a given picture has those properties?

#### Q4-6. Rewrite the `extract_fails` function from §5.1.1/77 so that instead of erasing each failing student from the input vector `v`, it copies the records for the passing students to the beginning of `v`, and then uses the `resize` function to remove the extra elements from the end of `v`. How does the performance of this version compare with the one in §5.1.1/77?

#### Q4-7. Given the implementation of frame in §5.8.1/93, and the code fragment below, describe what happens in this call. In particular, trace through how both the width function and the frame function operate. Now, run this code. If the results differ from your expectations, first understand why your expectations and the program differ, and then change one to match the other.
```c++
vector<string> v;
frame(v);
```


#### Q4-8. In the `hcat` function from §5.8.3/95, what would happen if we defined `s` outside the scope of the `while`? Rewrite and execute the program to confirm your hypothesis.


#### Q5-9. Write a program to write the lowercase words in the input followed by the uppercase words.


#### Q5-10. Palindromes are words that are spelled the same right to left as left to right. Write a program to find all the palindromes in a dictionary. Next, find the longest palindrome.


#### Q5-11. In text processing it is sometimes useful to know whether a word has any ascenders or descenders. Ascenders are the parts of lowercase letters that extend above the text line; in the English alphabet, the letters b, d, f, h, k, l, and t have ascenders. Similarly, the descenders are the parts of lowercase letters that descend below the line; In English, the letters g, j, p, q, and y have descenders. Write a program to determine whether a word has any ascenders or descenders. Extend that program to find the longest word in the dictionary that has neither ascenders nor descenders.
