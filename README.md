# ctimeit

A C version implementation of python timeit(), which is based on variadic macro.

## 1. Declaration: timeit(n, func, ...)
## 2. Parameters:
<p>    <strong>n</strong>: how many times to execute the function</p>
<p> <strong>func</strong>: the function to be measured</p>
<p>  <strong>...</strong>: the arguments of 'func'</p>

## 3. Usage examples:
<strong> 3.1 There is a function returning fibonacci numbers:</strong>
<p>		int fibonacci(int n)<br> </p>
<p>  we can get its execution time by:</p>
<p>		timeit(5, fibonacci, 25);</p>

<strong> 3.2 There is a function for greatest common divisor (gcd) of two integers:</strong>
<p>		int lcd(int a, int b)</p>
<p>   we can get its execution time by:</p>
<p>		timeit(10, gcd, 15000, 5525);</p>

## 4. The results look like below:<br>
timeit(5, fibonacci, 25): 5 loops, 6ms723µs762ns, avg: 1ms344µs752ns per loop<br>
timeit(10, gcd, 15000, 5525): 10 loops, 2µs300ns, avg: 230ns per loop

