#### Q6-0. Compile, execute, and test the programs in this chapter.
The test programs for this chapter can be viewed in the [Examples](../Examples) folder.

#### Q6-1. Reimplement the `frame` and `hcat` operations from §5.8.1/93 and §5.8.3/94 to use iterators.

#### Q6-2. Write a program to test the `find_urls` function.

#### Q6-3. What does the program fragment below do? Write a program that contains this fragment, and compile and execute it.
```c++
vector<int> u(10, 100);
vector<int> v;
copy(u.begin(), u.end(), v.begin());
```

#### Q6-4. Correct the program you wrote in the previous exercise to copy from u into v. There are at least two possible ways to correct the program. Implement both, and describe the relative advantages and disadvantages of each approach.

#### Q6-5. Write an analysis function to call `optimistic_median`.

#### Q6-6. Note that the function from the previous exercise and the functions from §6.2.2/113 and §6.2.3/115 do the same task. Merge these three analysis functions into a single function.

#### Q6-7. The portion of the grading analysis program from §6.2.1/110 that read and classified student records depending on whether they did (or did not) do all the homework is similar to the problem we solved in `extract_fails`. Write a function to handle this subproblem.

#### Q6-8. Write a single function that can be used to classify students based on criteria of your choice. Test this function by using it in place of the `extract_fails` program, and use it in the program to analyze student grades.

#### Q6-9. Use a library algorithm to concatenate all the elements of a `vector<string>`.