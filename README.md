#  1. Overview
The content of this repository is based on the book [**Accelerated C++: Practical Programming by Example**](https://www.amazon.com/Accelerated-C-Practical-Programming-Example/dp/020170353X) by _Andrew Koenig and Barbara E. Moo_. It mainly consists of:
* the source code for example problems discussed in each chapter
* solutions to the exercise problems posed at the end of each chapter

![](book-cover.jpg)

# 2. Notes
* This is not intended to be an authoritative source. To my knowledge, there is no official solution guide to check against, so these are just my solutions and are therefore prone to errors and inaccuracies. Use at your own discretion.

* The tools used in this project:
	* **g++** 11.2.0
	* **CMake** 3.24.2
	* **Visual Studio Code** 1.70.2

# 3. Table of Contents

### Chapter 05
| Exercises | 5-0 | 5-1 | 5-2 | 5-3 | 5-4 | 5-5 | 5-6 | 5-7 | 5-8 | 5-9 | 5-10 | 5-11 |
|-----------|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|------|------|
| code      | [Examples](/Chapter%2005/Examples) | N/A  |  [q02-1](/Chapter%2005/Exercises/q02-1.cpp) , [q02-2](/Chapter%2005/Exercises/q02-2.cpp) | [q03](/Chapter%2005/Exercises/q03.cpp) | N/A | [q05](/Chapter%2005/Exercises/q05.cpp) | [q06](/Chapter%2005/Exercises/q06.cpp) | [q07](/Chapter%2005/Exercises/q07.cpp) | [q08](/Chapter%2005/Exercises/q08.cpp) | [q09](/Chapter%2005/Exercises/q09.cpp) | [q10](/Chapter%2005/Exercises/q10.cpp) | N/A |
| answer    | N/A | [link](/Chapter%2005/Exercises#q5-1-design-and-implement-a-program-to-produce-a-permuted-index) | [link](/Chapter%2005/Exercises#q5-2-write-the-complete-new-version-of-the-student-grading-program-which-extracts-records-for-failing-students-using-vectors-write-another-that-uses-lists-measure-the-performance) | [link](/Chapter%2005/Exercises#q5-3-by-using-a-typedef-we-can-write-one-version-of-the-program-that-implements-either-a-vector-based-solution-or-a-list-based-one-write-and-test-this-version-of-the-program) | [link](/Chapter%2005/Exercises#q5-4-look-again-at-the-driver-functions-you-wrote-in-the-previous-exercise-note-that-it-is-possible-to-write-a-driver-that-differs-only-in-the-declaration-of-the-type-for-the-data-structure-that-holds-the-input-file-if-your-vector-and-list-test-drivers-differ-in-any-other-way-rewrite-them-so-that-they-differ-only-in-this-declaration) | [link](/Chapter%2005/Exercises#q5-5-write-a-function-named-centerconst-vectorstring-that-returns-a-picture-in-which-all-the-lines-of-the-original-picture-are-padded-out-to-their-full-width-and-the-padding-is-as-evenly-divided-as-possible-between-the-left-and-right-sides-of-the-picture-what-are-the-properties-of-pictures-for-which-such-a-function-is-useful-how-can-you-tell-whether-a-given-picture-has-those-properties) | [link](/Chapter%2005/Exercises#q5-6-rewrite-the-extract_fails-function-from-51177-so-that-instead-of-erasing-each-failing-student-from-the-input-vector-v-it-copies-the-records-for-the-passing-students-to-the-beginning-of-v-and-then-uses-the-resize-function-to-remove-the-extra-elements-from-the-end-of-v-how-does-the-performance-of-this-version-compare-with-the-one-in-51177) | [link](/Chapter%2005/Exercises#q5-7-given-the-implementation-of-frame-in-58193-and-the-code-fragment-below-describe-what-happens-in-this-call-in-particular-trace-through-how-both-the-width-function-and-the-frame-function-operate-now-run-this-code-if-the-results-differ-from-your-expectations-first-understand-why-your-expectations-and-the-program-differ-and-then-change-one-to-match-the-other) | [link](/Chapter%2005/Exercises#q5-8-in-the-hcat-function-from-58395-what-would-happen-if-we-defined-s-outside-the-scope-of-the-while-rewrite-and-execute-the-program-to-confirm-your-hypothesis) | [link](/Chapter%2005/Exercises#q5-9-write-a-program-to-write-the-lowercase-words-in-the-input-followed-by-the-uppercase-words) | [link](/Chapter%2005/Exercises#q5-10-palindromes-are-words-that-are-spelled-the-same-right-to-left-as-left-to-right-write-a-program-to-find-all-the-palindromes-in-a-dictionary-next-find-the-longest-palindrome) | N/A |