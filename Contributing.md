Contributing 
============================

We are always looking for contributions to this project.  Contributing is easy, all we ask that each algorithm you contribute our template.

The Template
============================

NAME
------
Each algorithm should have it's own name.  You will have to create a .h file in the project's Algorithms folder. Names should be in camel case.

If using an algorith  from [The On-Line Encyclopedia of Integer Sequences](https://github.com/razmathegreat/IntegerCounter/blob/master/oeis.org) please use the  name provided by the site.  

If you are using your own formula, or an algorithm that doesn't have name, please use a unique name from the rest of the .h files in the Algorithms folder.


FRONT TEST METHOD
-------------------

Your .h file should contain a [NAME]FrontTest method that takes in a vector<double> that outputs a bool value. [NAME] will be the name of the .h file.

As an example, here is how the FrontTest is used in the singleIncrement.h file:

	bool singleIncrementFrontTest(std::vector<double> sequence)

This method should run your algoritm for the first set of values in this sequence.  	
In singleIncrementFrontTest(std::vector<double> sequence) we are testing the algorithm x+1=y
	x is equal to the first value of sequence:
			double x = sequence[0];
	y is equal to the second value of sequence:
			double y = sequence[1];

FrontTest runs the sequence values through your formula and returns true if the sequence passes the test, false if it fails the test.

BACK TEST METHOD
------------------

Your .h file should contain a [NAME]BackTest method that takes in a vector<double> that outputs a bool value. [NAME] will be the name of the .h file.

As an example, here is how the BackTest is used in the singleIncrement.h file:

	bool singleIncrementBackTest(std::vector<double> sequence)

This method should run your algoritm for the last set of values in this sequence.  	In singleIncrementBackTest(std::vector<double> sequence) we are testing the algorithm x+1=y
	y is equal to the last value of sequence:
			double y = sequence[sequence.size()-1];
	x is equal to the second to last value of sequence:
			double x = sequence[sequence.size()-2];

BackTest runs the sequence values through your formula and returns true if the sequence passes the test, false if it fails the test.


ANSWER METHOD
----------------

Your .h file should contain a [NAME]Answer method that takes in a vector<double> that outputs a double value. [NAME] will be the name of the .h file.

As an example, here is how the Answer is used in the singleIncrement.h file:

	double singleIncrementAnswer(std::vector<double> sequence)

This method should run your algoritm for the last set of values in this sequence.  	In singleIncrementAnswer(std::vector<double> sequence) we are testing the algorithm x+1=y
	x is the last value of sequence:
			double x = sequence.back();
	y is the answer we are trying to find:
			double y = x +1;

In this instance we want to return y.
	

Answer runs the back sequence values through your formula and returns the next value.