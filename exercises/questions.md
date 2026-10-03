c++ practice, chapter by chapter (1 through 11)

---

chapter 1, c++ basics

1. declare an int, a double, and a bool, assign them values, print all three on one line.
2. write a program that asks for the user's name and age, then prints a sentence using both.
3. declare a variable, print it, change its value, print it again.
4. write a program using at least three different operators in one expression and print the result.
5. write a program that takes two numbers from the user and prints their sum.
6. write a program with comments explaining what each line does, for your own future reference.

chapter 2, functions and files

7. write a function that takes two ints and returns their product.
8. write a void function that prints a message, call it three times with different arguments.
9. write a function that calls another function you wrote, inside main.
10. write a function with no parameters that returns a fixed value, and one with parameters that
computes something.
11. split a program that reads input, does a calculation, and prints output, into three separate
functions.
12. write a function and call it before its definition appears in the file, using a forward declaration.

chapter 3, debugging

13. write a program with a bug in it on purpose, then find and fix it using print statements to trace
what's happening.
14. write a program that compiles but gives the wrong answer because of a logic mistake, not a syntax
error. find it.
15. write a broken program, read the actual compiler error message, and in a comment explain what it
means in your own words.

chapter 4, fundamental data types

16. print the size in bytes of int, double, char, and bool using sizeof.
17. write a program that adds 1 to the maximum value of a signed int and prints the result.
18. write a program that subtracts 1 from an unsigned int set to 0 and prints the result.
19. write a program that reads two ints and prints their average as a double.
20. declare a char, assign it a letter, print both the letter and its numeric value.
21. write a program comparing a float and a double holding the same value, print both with high
precision.

chapter 5, constants and strings

22. declare a const variable and try to change its value, see the compiler error, remove the attempted
change.
23. read a full line of text from the user with std::getline and print it back.
24. write a program that reads a string and prints its length.
25. write a program that takes a string and prints just the first three characters.
26. write a program comparing two strings and printing which one comes first alphabetically.

chapter 6, operators

27. write an expression that gives a different answer with and without parentheses, print both.
28. use the modulo operator to check whether a number is even or odd.
29. write a program using and, or, and not together in a single if condition.
30. write a program showing the difference between x++ and ++x by printing both separately.
31. use the ternary operator to print the larger of two numbers.

chapter 7, scope, duration, and linkage

32. write a function with a static local variable that counts how many times it's been called, call it
five times, print the count each time.
33. declare a global variable and a local variable with the same name, print both from inside a
function.
34. declare a variable inside an if block, then try to use it outside the block and see the error.
35. write two functions where one uses a variable the other can't see, to show what scope means in
practice.

chapter 8, control flow

36. write the same decision using an if/else chain, then rewrite it using a switch statement.
37. write a for loop that prints all even numbers from 1 to 50.
38. write a while loop that keeps asking for input until the user types "quit".
39. write a do while loop and show a case where it runs once even though the condition was false from
the start.
40. write nested loops that print a multiplication table from 1 to 10.
41. use break to stop a loop early once a target value is found.
42. use continue to skip printing multiples of 3 in a loop from 1 to 30.

chapter 9, error detection and handling

43. write a function that uses assert to check its input is valid before using it.
44. write a loop that keeps asking for input until the user enters something valid.
45. write a program that checks for division by zero before doing the division.

chapter 10, type conversion, aliases, and deduction

46. write an expression where an int gets implicitly converted to a double, then rewrite it using
static_cast explicitly.
47. write a function that takes a double parameter, call it with an int argument, print the result.
48. declare a variable using auto instead of writing out its type, print it, and in a comment say what
type auto picked.
49. convert a double to an int on purpose and print what value you lose in the process.

chapter 11, function overloading, templates, and constexpr

50. write two overloaded functions with the same name, one taking two ints and one taking two doubles,
call both.
51. write a function template that returns the larger of two values, call it with ints and with doubles.
52. write a function with a default argument, call it once with the argument and once without.
53. write a constexpr function, call it once with a literal value and once with a value read from user
input.
54. write a constexpr function used to set the size of a fixed size array.
55. write a function template combined with constexpr, test it with two different types.


