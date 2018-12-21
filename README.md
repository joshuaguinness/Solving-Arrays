# Solving-Arrays

Given the linear algebra equation A*x = b, and given matrices A and b (which are one dimensional matrices), compute the solution matrix x (also one dimensional). 

The code also times how long it takes to compute the solution. 

It is able to compute the solution for an 8000 x 8000 matrix in 5 minutes.

Below is a table which shows the time it takes to compute the solution for four different sizes of matrices and different optimization flags.

Size             | No Optim (sec) | -O1 (sec)     | -O2(sec)       | -O3 (sec)
------------- | -------------  | ------------- | -------------  | -------------
1000          | 1.6e+00        | 4.4e-01  | 4.7e-01   | 3.3e-01
2000          | 1.3e+01        | 4.6e+00  | 5.1e+00   | 4.9e+00
4000          | 9.9e+01        | 4.1e+01  | 3.9e+01   | 3.8e+01
8000          | 8.0e+02        | 3.1e+02  | 3.0e+02   | 3.0e+02

TO RUN:

Download all the files onto your computer. Type "make." Then run linsolve. It will compute the solution for and time the execution for a 1000 x 1000, 2000 x 2000, 4000 x 4000, and 8000 x 8000 matrix. The 8000 x 8000 matrix may take a few minutes to compute


