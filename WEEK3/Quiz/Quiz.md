Question 1 OpenMP is a framework for...

Ans - multithreading and vectorization in shared-memory systems

Question 2 Which flag is required to compile your OpenMP application with Intel compiler?

Ans - -qopenmp

Question 3 Based on this snippet, which of the following is correct about the number of copies of a variable in memory at runtime if we are using 4 threads?

Ans - There is a single copy of A and there are 4 copies of both B and C

Question 4 Which of these mutexes has the highest performance penalty?

Ans -  #pragma omp critical

Question 5 Which compiler argument should be used to target the architecture on which the code is compiled?

Ans - 256

Question 6 Which of the following code snippets has a data race ("Race condition")?

Ans - Both

Question 7 Consider the following piece of code for computing (incorrectly?) the mean and standard deviation of values in an array:

Ans - Add a reduction clause in the parallel pragma
