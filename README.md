Integer Sequence Calculator
============================

This is our model which will be used to scan numerical patterns from a set of integers and predict the next number in sequence.  We will increase the accuracy of our predictions by adding more algorithms that our scanner will run to detect patterns.  We found that by creating and adhering to a strict set of coding guidelines we can create a modular program that encourages collaboration to increase the accuracy of this project.

Feel free to clone, fork, send pull requests and to file bugs. Our moderators will review your contribution to verify that it adheres to these guidelines.

Origin & Test Data
-----------------------------
This project was heavily influenced by the Kaggle Integer Sequence Learning cometition, found at www.kaggle.com/c/integer-sequence-learning.  

The test csv files found in the Resources folder are all derived from the data provided by this competition.
 
We are using these resources to create a model that can read in any properly formatted csv file and use our submitted algorithms to determine the next integers in sequence. 

REQUIREMENTS
------------

All of the code in this project uses C++ and at the moment uses just the core libraries.  

If you find that while creating algorithms that another library is needed to perform the calculations desired, please include the reasoning behind this in your commit message.

DATA
------

By default, this application accesses the data sets in the csv files located in the project Resources file.  

To create your own data set you will need to create a CSV file that meets the following guidelines

 -The first line must read: "Id","Sequence"  (quotes included)
 -Each line after must follow this pattern [KEY],"[DATASET]" 
 	+  The [KEY] can be any integer, this will be used to identify which data set is being read
 	+  The [DATASET] will be a series of integers that are separated by a comma.  In order for the [DATASET] to be read correctly it must be surrounded by quotes.



Acknowledgements
----------------
The idea for the project comes from www.kaggle.com/c/integer-sequence-learning.
This project was initially worked on by Michael Flatley and Andrew Janik.
[The On-Line Encyclopedia of Integer Sequences](oeis.org) chas been used as a reference for some the algorithms used. Feel free to use this as a resource for adding additonal algorithms for this project.
