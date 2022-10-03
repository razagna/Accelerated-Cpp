#### Q6-0. Compile, execute, and test the programs in this chapter.
The test programs for this chapter can be viewed in the [Examples](../Examples) folder.

#### Q6-1. Reimplement the `frame` and `hcat` operations from §5.8.1/93 and §5.8.3/94 to use iterators.
The solution can be found in [q01](q01.cpp).

#### Q6-2. Write a program to test the `find_urls` function.
The solution can be found in [find_urls_driver](../Examples/Analyzing_Strings/find_urls_driver.cpp).

#### Q6-3. What does the program fragment below do? Write a program that contains this fragment, and compile and execute it.
```c++
vector<int> u(10, 100);
vector<int> v;
copy(u.begin(), u.end(), v.begin());
```
First, `u` is initialized with ten `int`s of value "100". Then `v` is declared empty. Finally, the whole sequence in  `u` is copied to `v` through the `copy` function provided by the `algorithm` header.

However, algorithms do not act on containers, but on their elements. Therefore, we need a way to ensure that `v` has space for new elements as they get copied to it.

The program can be found in [q03](q03.cpp).

#### Q6-4. Correct the program you wrote in the previous exercise to copy from u into v. There are at least two possible ways to correct the program. Implement both, and describe the relative advantages and disadvantages of each approach.
T0 ensure that `v` has enough space for the new elements, we could:
* use the `reserce` operation to pre-allocate space for elements before they get added
* use the iterator adapter `back_inserter` to dynamically allocate space for new elements as they get added
The table below shows a comparison between the advantages and disadvantages of each approach.

|               | [reserve](q04-1.cpp) | [`back_inserter`](q04-2.cpp) |
|---------------|----------------------|-----------------------------|
| Advantages    | \* avoids the overhead of repeated memory allocations <br/> \* the `end()` iterator can be safely used as a destination | grows the container dynamically, so we don't need to know the number of new elements beforehand |
| Disadvantages | requires knowing beforehand the number of elements to be added | repeated memory allocation creates overhead|


#### Q6-5. Write an analysis function to call `optimistic_median`.
The solution can be found in [grading_policy](../Examples/Grading_System/src/grading_policy.cpp).

#### Q6-6. Note that the function from the previous exercise and the functions from §6.2.2/113 and §6.2.3/115 do the same task. Merge these three analysis functions into a single function.
The three functions have been combined into one [new function](/src/grading_policy.cpp) called `analysis` that accepts an additional parameter called `grade_calc` that represents the function to run on the elements passed to the `transform` function. The solution can be found in [q06](q06.cpp).

#### Q6-7. The portion of the grading analysis program from §6.2.1/110 that read and classified student records depending on whether they did (or did not) do all the homework is similar to the problem we solved in `extract_fails`. Write a function to handle this subproblem.
A new function was created called `extract_incomplete_hw` that accepts a `vector` of students as input and uses the `stable_parition` algorithm to rearrange the students based on whether they completed all their homework. It erases students with incomplete homework from the original vector and returns a new vector containing only students who didn't do all their homework. The solution can be found in [q07](q07.cpp).

#### Q6-8. Write a single function that can be used to classify students based on criteria of your choice. Test this function by using it in place of the `extract_fails` program, and use it in the program to analyze student grades.
The function written in the previous exercise was abstracted to a new function called `extract` that accepts a `vector` containing the students we would like to classify and a classification function with a return type `bool` to base the extraction on. The function is written such that it returns a `vector` containing the students who met the criteria passed as a function in the second parameter. The solution can be found in [q08](q08.cpp).

#### Q6-9. Use a library algorithm to concatenate all the elements of a `vector<string>`.
The solution can be found in [q09](q09.cpp). The two following approaches were used:
* the `accumulate` function to accumulate all elements in the `vector` starting with an empty string. The resulting string doesn't contain spaces between each word.
* a function that uses the `copy` algorithm by looping through each character in each word and concatenating them into a new string. This function takes care to put a space between each word.