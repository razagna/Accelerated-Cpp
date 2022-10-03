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
### Chapter 03
| Exercises | 3-0 | 3-1 | 3-2 | 3-3 | 3-4 | 3-5 | 3-6 |
|-----------|-----|-----|-----|-----|-----|-----|-----|
| answer    | N/A | N/A | N/A | N/A | N/A | N/A | N/A |
| code      | [Examples](/Chapter%2004/Examples) | N/A | N/A | N/A | N/A | N/A | N/A |

### Chapter 04
| Exercises | 4-0 | 4-1 | 4-2 | 4-3 | 4-4 | 4-5 | 4-6 | 4-7 | 4-8 |
|-----------|-----|-----|-----|-----|-----|-----|-----|-----|-----|
| answer    | N/A | [link](/Chapter%2004/Exercises#q4-1-we-noted-in-42365-that-it-is-essential-that-the-argument-types-in-a-call-to-max-match-exactly-will-the-following-code-work-if-there-is-a-problem-how-would-you-fix-it) | N/A |[link](/Chapter%2004/Exercises#q4-3-what-happens-if-we-rewrite-the-previous-program-to-allow-values-up-to-but-not-including-1000-but-neglect-to-change-the-arguments-to-setw-rewrite-the-program-to-be-more-robust-in-the-face-of-changes-that-allow-i-to-grow-without-adjusting-the-setw-arguments) | N/A | [link](/Chapter%2004/Exercises#q4-5-write-a-function-that-reads-words-from-an-input-stream-and-stores-them-in-a-vector-use-that-function-both-to-write-programs-that-count-the-number-of-words-in-the-input-and-to-count-how-many-times-each-word-occurred) | N/A | N/A | [link](/Chapter%2004/Exercises#q4-8-if-the-following-code-is-legal-what-can-we-infer-about-the-return-type-of-f) |
| code      | [Examples](/Chapter%2004/Examples) | N/A | [q02](/Chapter%2004/Exercises/q02.cpp) | [q03](/Chapter%2004/Exercises/q03.cpp) | [q04](/Chapter%2004/Exercises/q04.cpp) | [q05](/Chapter%2004/Exercises/q05.cpp) | [q06](/Chapter%2004/Exercises/q06.cpp) | [q07](/Chapter%2004/Exercises/q07.cpp) | N/A |

### Chapter 05
| Exercises | 5-0 | 5-1 | 5-2 | 5-3 | 5-4 | 5-5 | 5-6 | 5-7 | 5-8 | 5-9 | 5-10 | 5-11 |
|-----------|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|------|------|
| answer    | N/A | [link](/Chapter%2005/Exercises#q5-1-design-and-implement-a-program-to-produce-a-permuted-index) | [link](/Chapter%2005/Exercises#q5-2-write-the-complete-new-version-of-the-student-grading-program-which-extracts-records-for-failing-students-using-vectors-write-another-that-uses-lists-measure-the-performance) | N/A | [link](/Chapter%2005/Exercises#q5-4-look-again-at-the-driver-functions-you-wrote-in-the-previous-exercise-note-that-it-is-possible-to-write-a-driver-that-differs-only-in-the-declaration-of-the-type-for-the-data-structure-that-holds-the-input-file-if-your-vector-and-list-test-drivers-differ-in-any-other-way-rewrite-them-so-that-they-differ-only-in-this-declaration) | N/A | [link](/Chapter%2005/Exercises#q5-6-rewrite-the-extract_fails-function-from-51177-so-that-instead-of-erasing-each-failing-student-from-the-input-vector-v-it-copies-the-records-for-the-passing-students-to-the-beginning-of-v-and-then-uses-the-resize-function-to-remove-the-extra-elements-from-the-end-of-v-how-does-the-performance-of-this-version-compare-with-the-one-in-51177) | [link](/Chapter%2005/Exercises#q5-7-given-the-implementation-of-frame-in-58193-and-the-code-fragment-below-describe-what-happens-in-this-call-in-particular-trace-through-how-both-the-width-function-and-the-frame-function-operate-now-run-this-code-if-the-results-differ-from-your-expectations-first-understand-why-your-expectations-and-the-program-differ-and-then-change-one-to-match-the-other) | [link](/Chapter%2005/Exercises#q5-8-in-the-hcat-function-from-58395-what-would-happen-if-we-defined-s-outside-the-scope-of-the-while-rewrite-and-execute-the-program-to-confirm-your-hypothesis) | [link](/Chapter%2005/Exercises#q5-9-write-a-program-to-write-the-lowercase-words-in-the-input-followed-by-the-uppercase-words) | N/A | N/A |
| code      | [Examples](/Chapter%2005/Examples) | N/A  | [q02-1](/Chapter%2005/Exercises/q02-1.cpp)<br/>[q02-2](/Chapter%2005/Exercises/q02-2.cpp) | [q03](/Chapter%2005/Exercises/q03.cpp) | N/A | [q05](/Chapter%2005/Exercises/q05.cpp) | [q06](/Chapter%2005/Exercises/q06.cpp) | [q07](/Chapter%2005/Exercises/q07.cpp) | [q08](/Chapter%2005/Exercises/q08.cpp) | [q09](/Chapter%2005/Exercises/q09.cpp) | [q10](/Chapter%2005/Exercises/q10.cpp) | N/A |

### Chapter 06
| Exercises | 6-0 | 6-1 | 6-2 | 6-3 | 6-4 | 6-5 | 6-6 | 6-7 | 6-8 | 6-9 |
|-----------|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|
| answer    | N/A | N/A | N/A | [link](/Chapter%2006/Exercises#q6-3-what-does-the-program-fragment-below-do-write-a-program-that-contains-this-fragment-and-compile-and-execute-it) | [link](/Chapter%2006/Exercises#q6-4-correct-the-program-you-wrote-in-the-previous-exercise-to-copy-from-u-into-v-there-are-at-least-two-possible-ways-to-correct-the-program-implement-both-and-describe-the-relative-advantages-and-disadvantages-of-each-approach) | N/A | [link](/Chapter%2006/Exercises#q6-6-note-that-the-function-from-the-previous-exercise-and-the-functions-from-622113-and-623115-do-the-same-task-merge-these-three-analysis-functions-into-a-single-function) | [link](/Chapter%2006/Exercises#q6-7-the-portion-of-the-grading-analysis-program-from-621110-that-read-and-classified-student-records-depending-on-whether-they-did-or-did-not-do-all-the-homework-is-similar-to-the-problem-we-solved-in-extract_fails-write-a-function-to-handle-this-subproblem) | [link](/Chapter%2006/Exercises#q6-8-write-a-single-function-that-can-be-used-to-classify-students-based-on-criteria-of-your-choice-test-this-function-by-using-it-in-place-of-the-extract_fails-program-and-use-it-in-the-program-to-analyze-student-grades) | [link](/Chapter%2006/Exercises#q6-9-use-a-library-algorithm-to-concatenate-all-the-elements-of-a-vectorstring) |
| code      | [Examples](/Chapter%2006/Examples) | [q01](/Chapter%2006/Exercises/q01.cpp) | [find_urls_driver](../Examples/Analyzing_Strings/find_urls_driver.cpp) | [q03](/Chapter%2006/Exercises/q03.cpp) | [q04-1](/Chapter%2006/Exercises/q04-1.cpp)<br/>[q04-2](/Chapter%2006/Exercises/q04-2.cpp)| [grading_policy](../Examples/Grading_System/src/grading_policy.cpp) | [q06](/Chapter%2006/Exercises/q06.cpp) | [q07](/Chapter%2006/Exercises/q07.cpp) | [q08](/Chapter%2006/Exercises/q08.cpp) | [q09](/Chapter%2006/Exercises/q09.cpp) | 
