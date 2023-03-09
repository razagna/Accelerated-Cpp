#### Q2-0. Compile and run the program presented in this chapter.
The framing program for this chapter can be viewed in the [Framing.cpp](../Examples/Framing.cpp).

#### Q2-1: Change the framing program so that it writes its greeting with no separation from the frame.
This can be simply achieved by setting the `pad` variable, which represents the vertical and horizonal spacing between the greeting and frames, to zero. The solution can be found in [q01](q01.cpp).

#### Q2-1. Change the framing program so that it uses a different amount of space to separate the sides from the greeting than it uses to separate the top and bottom borders from the greeting.
This can be achieved by using two variables instead of one to hold the values of the horizontal and vertical padding. The solution can be found in [q02](q02.cpp).

#### Q2-3. Rewrite the framing program to ask the user to supply the amount of spacing to leave between the frame and the greeting.
This can be achieved by prompting the user for the value to use for padding and then storing their input in the variable that will be used for calculating the positions of the greeting and frame. The solution can be found in [q03](q03.cpp).