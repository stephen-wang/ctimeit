# ctimeit

A C version implementation of python timeit(), which is based on variadic macro.

Declaration: timeit(n, func, ...)
Parameters:
	n: how many times to execute the function
     func: the function to be measured
      ...: the arguments of 'func'

Usage examples:
	1) There is a function returning fibonacci numbers:
		int fibonacci(int n)

           we can get its execution time by:
		timeit(5, fibonacci, 25);

	2) There is a function for greatest common divisor (gcd) of two integers:
		int lcd(int a, int b)

           we can get its execution time by:
		timeit(10, gcd, 15000, 5525);

The results look like below:
timeit(5, fibonacci, 25): 5 loops, 6ms723µs762ns, avg: 1ms344µs752ns per loop
timeit(10, gcd, 15000, 5525): 10 loops, 2µs300ns, avg: 230ns per loop

