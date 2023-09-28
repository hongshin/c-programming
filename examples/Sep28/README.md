# Exercise on Iteration 

28 Sep 2023

### Problem 1

Complete ``draw_rect (int n)`` which displays the boundary of a n-by-n rectangular with ``*``.

```C
#include <stdio.h>
#include <stdlib.h>

void draw_rect (int n)
{
	/* FIXME */
}

int main () 
{
	int n ;
	scanf("%d', &n) ;

	draw_rect(n) ;
}
```

For ``n``=5, the following must be printed:

```
*****
*   *
*   *
*   *
*   *
*****
```

### Problem 2

Write a program that receives 10 integer numbers and then prints out the greatest and the second greatest numbers.
If the greatest number is given more than once, the same number must be printed twice.

### Problem 3

Complete function ``reverse (int n)`` that prints out the digits of the number in reverse. For ``n``=``1234``,
the function must return ``4321``.

```C
#include <stdio.h>
#include <stdlib.h>

int reverse (int n)
{
	/* FIXME */
}

int main () 
{
	int n ;
	scanf("%d', &n) ;

	printf("%d", reverse(n)) ;
}
```

### Problem 4

Write a program that receives an odd integer, and draws a diamon-shape text figure with ``+``.
For example, if the program receives ``9``, the following text figure must be printed:

```
     *
    ***
   *****
  *******
 *********
  *******
   *****
    ***
     *
```


### Problem 5

Fill out the body of function ``int gcd (int a, int b)`` which returns the greatest common divisor
of two integers ``a`` and ``b``. The greatest common divisor is the greatest number that divides 
each of the two numbers at the same time.

```C
int gcd (int a, int b)
{
	/* FIXME */
}
```

### Problem 6

Write a program that receives 20 numbers in sequences, and then determines the longest period 
that a same number consecutively appears in the given sequence.

For example, if the user gives
``2 8 8 2 8 7 7 7 7 5 7 8 5 2 2 4 2 1 2 2``, the following must be printed:

```
7 7 7 7
```

### Problem 7

Write a program that receives two integers ``b`` and ``e``, and then computes the following:

$ b^2 + (b+1)^2 + ... (e-1)^2 + e^2 $


### Problem 8

Write a program that prints out the bus schedule. This program must receives three integers ``hour``, ``minute``, and ``period``,
such that ``hour`` and ``minute`` defines the first arrival time in a day, and ``period`` defines the interval between two
arrivals in minutes. For example, if a user gives ``6 15 30``, the following must be printed:

```
6:15	6:45	7:15	7:45	8:15	8:45	9:15	9:45	
10:15	10:45	11:15	11:45	12:15	12:45	13:15	13:45	
14:15	14:45	15:15	15:45	16:15	16:45	17:15	17:45
18:15	18:45	19:15	19:45	20:15	20:45	21:15	21:45
22:15	22:45	23:15	23:45
```

Each line must contains 8 schedules seperated by ``\t``.


### Problem 9

Write a program that receives 20 numbers in sequences, and then determines how many times 
the greatest number appeared in the given sequence.

For example, if the user gives
``2 8 8 2 8 7 7 7 7 5 7 8 5 2 2 4 2 1 2 2``, your program must print out the following:

```
8 (x4)
```

### Problem 10

Write a program that first receives a positive integer ``N`` from a user, and then receives ``N`` numbers of integers in sequence,
and then prints out the average of the integers as a real number.

