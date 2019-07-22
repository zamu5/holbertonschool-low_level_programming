General
<ul>
<li>What are macros and how to use them</li>
<li>What are the most common predefined macros</li>
<li>How to include guard your header files</li>
</ul>

0. Object-like Macro mandatory
Create a header file that defines a macro named SIZE as an abbreviation for the
token 1024.

1. Pi mandatory
Create a header file that defines a macro named PI as an abbreviation for the
token 3.14159265359.

2. File name mandatory
Write a program that prints the name of the file it was compiled from, followed
by a new line.
You are allowed to use the standard library

3. Function-like macro mandatory
Write a function-like macro ABS(x) that computes the absolute value of number x.

4. SUM mandatory
Write a function-like macro SUM(x, y) that computes the sum of numbers x and y.

5. Worst abuse of the C preprocessor (IOCCC winner, 1986) #advanced
Compile this program, written by Jim Hague (UK), and feed ascii text into
standard input.
Write a blog post to explain what this program does, how it works, and
“de-obfuscate” it step by step for the reader
You blog post should have at least one picture, at the top of the blog post
Publish your blog post on Medium or LinkedIn
Share your blog post at least on Twitter and LinkedIn
Once done, please add all urls below (blog post, tweet, etc.)
Please, remember that these blogs must be written in English to further your
technical ability in a variety of settings

6. Fun with the preprocessor #forfun
Write a program that can print Hello, Holberton, followed by a new line.
You are not allowed to use more than one line of code
You are not allowed to use more than 32 characters in the file
101-preprocessor_abuse.c, including the documentation of your functions and the
preprocessor directives
You are not allowed to include other c files
You are not allowed to include other header files
Remember: your program should pass all Betty checks for style and documentation
You don’t have to use the -pedantic, -Wall, -Werror, -Wextra gcc flags
This program should be written in C and will be compiled with gcc