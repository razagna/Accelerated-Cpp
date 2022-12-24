#### Q6-0. Compile, execute, and test the programs in this chapter.
The test programs for this chapter can be viewed in the [Examples](../Examples) folder.

#### Q7-1. Extend the program from §7.2/124 to produce its output sorted by occurrence count. That is, the output should group all the words that occur once, followed by those that occur twice, and so on.
After creating a `map` from `string` (a word) to `int` (its occurrence count), a second `map` from `int` (occurrence count) to `vector<string>` (words) is created by iterating through the first `map` and grouping words with the same occurrence count. The solution can be found in [q01](q01.cpp).

#### Q7-2. Extend the program in §4.2.3/64 to assign letter grades by ranges. The output should list how many students fall into each category.
```
A 90-100
B 80-89.99...
C 70-79.99...
D 60-69.99...
F < 60
```
First, a `map` from `char` (letter grade) to `range` (a `struct` representing the upper and lower bounds of a letter grade) that serves as a reference is created, we create a second `map` from `char` (letter grade) to `vector<Student_info` by looping through the first `map` and the input student `vector` to see which students fall into which category and add them to the `map`. The solution can be found in [q02](q02.cpp).

#### Q7-3. The cross-reference program from §7.3/126 could be improved: As it stands, if a word occurs more than once on the same input line, the program will report that line multiple times. Change the code so that it detects multiple occurrences of the same line number and inserts the line number only once.
This could be achieved by simply checking whether a line number exits for a word using the `find` algorithm from the `<algorithm>` library and adding it to the list only if it doesn't already exist. The solution can be found in [q03](q03.cpp).

#### Q7-4. The output produced by the cross-reference program will be ungainly if the input file is large. Rewrite the program to break up the output if the lines get too long.
When outputting the result, after printing each value, the program checks whether it has reached a point where it should start from a new line by checking if the number of values it has printed so far is a multiple of our desired maximum length. Then, it either starts a new line before continuing or prints a comma and continues. The solution can be found in [q04](q04.cpp).

#### Q7-5. Reimplement the grammar program using a `list` as the data structure in which we build the sentence.
First, the `split` function was updated to work with `list` type. Second, we need to access specific elements in two parts of the program, but since `list` doesn't support random access, the `advance` function from the standard library was used to advance the iterator to the desired position to get the needed element. Otherwise, the program is identical to the `vector` implementation in the [example](../Examples/Generating_Sentences/main.cpp) problem. The solution can be found in [q05](q05.cpp)

#### Q7-6. Reimplement the `gen_sentence` program using two `vector`s: One will hold the fully unwound, generated sentence, and the other will hold the rules and will be used as a stack. Do not use any recursive calls.
The program uses two `vector`s, one to hold the output sentence and one to hold rule categories that need to get resolved into words that will be added to the output sentence. The program starts by putting the first rule category, which is `<sentence>`, in the `rules` stack. 
Once it enters the main loop, it:
1. finds and picks a rule corresponding to the **first most** element in the `rules` stack from the `Grammar` map
2. delete the rule it searched in the `Grammer` map from the `rules` stack
3. create a new iterator starting at the beginning of the rule it picked
4. iterate through the rule:
	- add plain words into the output sentence
	- bracketed words: [^1]
		- add parent rules in chronological order
		- substitute parent rules with child rules through insertion by:
			- deleting the parent rule in step 2
			- `insert` the child in its place using the iterator created in [[#^d02015 | step 3]]
The full solution can be found in [q06](q06.cpp).

#### Q7-7. Change the driver for the cross-reference program so that it writes `line` if there is only one line and `lines` otherwise.
This was achieved by simply putting a ternary operator in place of the `"(s)"` string that checks whether the number of lines, which in this case corresponds to the size of the `second` element in the map's `pair`, exceeds one and either prints an `s` in that location or omits it accordingly. The full solution can be found in [q07](q07.cpp).

#### Q7-8. Change the cross-reference program to find all the URLs in a file, and write all the lines on which each distinct URL occurs.
This was simply achieved by giving the `xref` function the `find_url` program we created in [example 6.1.3](../../Chapter%2006/Examples/Analyzing_Strings/src/find_URLs.cpp) instead of using the default `split` function by leaving the second input argument out. The full solution can be found in [q08](q08.cpp).

#### Q7-9. (difficult) The implementation of `nrand` in §7.4.4/135 will not work for arguments greater than `RAND_MAX`. Usually, this restriction is no problem, because `RAND_MAX` is often the largest possible `integer` anyway. Nevertheless, there are implementations under which `RAND_MAX` is much smaller than the largest possible `integer`. For example, it is not uncommon for `RAND_MAX` to be 32767 (215 -1) and the largest possible` integer` to be 2147483647 (231 -1). Reimplement `nrand` so that it works well for all values of `n`.

[^1]: This one was a bit of a mindfuck, but here we go :)