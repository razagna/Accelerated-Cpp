#### Q2-0. Compile and run the program presented in this chapter.
The framing program for this chapter can be viewed in the [Framing.cpp](../Examples/Framing.cpp).

#### Q2-1: Change the framing program so that it writes its greeting with no separation from the frame.
This can be simply achieved by setting the `pad` variable, which represents the vertical and horizontal spacing between the greeting and frames, to zero. The solution can be found in [q01](q01.cpp).

#### Q2-1. Change the framing program so that it uses a different amount of space to separate the sides from the greeting than it uses to separate the top and bottom borders from the greeting.
This can be achieved by using two variables instead of one to hold the values of the horizontal and vertical padding. The solution can be found in [q02](q02.cpp).

#### Q2-3. Rewrite the framing program to ask the user to supply the amount of spacing to leave between the frame and the greeting.
This can be achieved by prompting the user for the value to use for padding and then storing their input in the variable that will be used for calculating the positions of the greeting and frame. The solution can be found in [q03](q03.cpp).

#### Q2-4. The framing program writes the mostly blank lines that separate the borders from the greeting one character at a time. Change the program so that it writes all the spaces needed in a single output expression.
This can be achieved by constructing two `string`s, one for the padding done to the top and bottom of the greeting, which is equal to the number of columns minus two, and one for the padding done to the sides of the greeting, which is equal to the `pad` variable. The side padding is outputted when we reach the middle column where the greeting will be printed, and the top and padding padding is outputted when we are above or below the greeting but not on the frame. And depending on which string was outputted, the `cols` variable, which designates the current column number, is incremented accordingly. The solution can be found in [q04](q04.cpp).

#### Q2-5. Write a set of "*" characters so that they form a square, a rectangle, and a triangle.
This was achieved by writing three `for` loops that go through the desired number of rows and prints stars and spaces in accordance with the shape. The solution can be found in [q05](q05.cpp).

#### Q2-6. What does the following code do?
```c++
int i = 0;
while (i < 10) {
	i += 1;
	std::cout << i << std::endl;
}
```
It instantiates a new integer variable called `i` with the value 0 and keeps adding one to it and then printing the value of `i` until `i` reaches the value 10, after which it stops.