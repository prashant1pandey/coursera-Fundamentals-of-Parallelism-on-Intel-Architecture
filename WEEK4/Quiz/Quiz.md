Question 1 In KNL memory architecture, Cache mode for MCDRAM means:

Ans - MCDRAM acts as a cache between L2 cache and DDR4 RAM

Question 2 Which memory has the lowest access latency in KNL memory organization? 

Ans - L1 cache

Question 3 What is the flat mode in KNL memory architecture?

Ans - MCDRAM is treated as a separate NUMA node

Question 4 If your application is bandwidth-limited and requires less than 16 GB of memory, which is the easiest and the most efficient way of running it in high-bandwidth memory (HBM) of an Intel Xeon Phi processor?

Ans -  Run the whole program in the HBM using numactl

Question 5 If your bandwidth-limited application requires more than 16 GB of memory, what are the options that can be used to run your application in the high-bandwidth memory of an Intel Xeon Phi processor? 

Ans - Use memkind library and use cache mode

Question 6 How to make the Intel compiler implement streaming stores in a loop? 

Ans - 1.  #pragma vector nontemporal 
          2. -qout-streaming-stores=always

Question 7 A gas simulation needs to detect collisions between ball-shaped gas particles. The simulation runs on an Intel Xeon processor with 256-bit vector units. Your goal is to achieve the optimum performance in such a simulation. With this in mind, rank the following options for data structures from best to worst.

Ans - B is best, A is worst

Question 8  When an application reads and updates a single 32-bit floating-point number residing in the main memory, how much data is physically sent from the main memory to the core? 

Ans - 64 bytes
