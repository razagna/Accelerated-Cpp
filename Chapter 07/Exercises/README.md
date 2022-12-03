#### Q6-0. Compile, execute, and test the programs in this chapter.
The test programs for this chapter can be viewed in the [Examples](../Examples) folder.

#### Q7-1. Extend the program from §7.2/124 to produce its output sorted by occurrence count. That is, the output should group all the words that occur once, followed by those that occur twice, and so on.

#### Q7-2. Extend the program in §4.2.3/64 to assign letter grades by ranges. The output should list how many students fall into each category.
```
A 90-100
B 80-89.99...
C 70-79.99...
D 60-69.99...
F < 60
```

#### Q7-3. The cross-reference program from §7.3/126 could be improved: As it stands, if a word occurs more than once on the same input line, the program will report that line multiple times. Change the code so that it detects multiple occurrences of the same line number and inserts the line number only once.
This could be achieved by simply checking whether a line number exits for a word using the `find` algorithm from the `<algorithm>` library and adding it to the list only if it doesn't already exist. The solution can be found in  [q03](q03.cpp).

#### Q7-4. The output produced by the cross-reference program will be ungainly if the input file is large. Rewrite the program to break up the output if the lines get too long.

#### Q7-5. Reimplement the grammar program using a `list` as the data structure in which we build the sentence.

#### Q7-6. Reimplement the `gen_sentence` program using two `vector`s: One will hold the fully unwound, generated sentence, and the other will hold the rules and will be used as a stack. Do not use any recursive calls.

#### Q7-7. Change the driver for the cross-reference program so that it writes `line` if there is only one line and `lines` otherwise.

#### Q7-8. Change the cross-reference program to find all the URLs in a file, and write all the lines on which each distinct URL occurs.

#### Q7-9. (difficult) The implementation of `nrand` in §7.4.4/135 will not work for arguments greater than `RAND_MAX`. Usually, this restriction is no problem, because `RAND_MAX` is often the largest possible `integer` anyway. Nevertheless, there are implementations under which `RAND_MAX` is much smaller than the largest possible `integer`. For example, it is not uncommon for `RAND_MAX` to be 32767 (215 -1) and the largest possible` integer` to be 2147483647 (231 -1). Reimplement `nrand` so that it works well for all values of `n`.