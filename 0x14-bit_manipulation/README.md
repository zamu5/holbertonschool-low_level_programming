<h2>General</h2>
<ul><li>Look for the right source of information without too much help</li>
<li>How to manipulate bits and use bitwise operators</li></ul>

<h2>Tasks</h2>
<h3>0. 0 mandatory</h3>
Write a function that converts a binary number to an unsigned int.

<ul><li>Prototype: unsigned int binary_to_uint(const char *b);</li>
<li>where b is pointing to a string of 0 and 1 chars</li>
<li>Return: the converted number, or 0 if</li>
<li>there is one or more chars in the string b that is not 0 or 1
b is NULL
</ul></li>
<h2>1. 1 mandatory</h2>
Write a function that prints the binary representation of a number.

<ul><li>Prototype: void print_binary(unsigned long int n);</li>
<li>Format: see example</li>
<li>You are not allowed to use arrays</li>
<li>You are not allowed to use malloc</li>
<li>You are not allowed to use the % or / operators
</ul></li>
<h2>2. 10 mandatory</h2>
Write a function that returns the value of a bit at a given index.

<ul><li>Prototype: int get_bit(unsigned long int n, unsigned int index);</li>
<li>where index is the index, starting from 0 of the bit you want to get</li>
<li>Returns: the value of the bit at index index or -1 if an error occured
</ul></li>
<h2>3. 11 mandatory</h2>
Write a function that sets the value of a bit to 1 at a given index.

<ul><li>Prototype: int set_bit(unsigned long int *n, unsigned int index);</li>
<li>where index is the index, starting from 0 of the bit you want to set</li>
<li>Returns: 1 if it worked, or -1 if an error occurred
</ul></li>
<h2>4. 100 mandatory</h2>
Write a function that sets the value of a bit to 0 at a given index.

<ul><li>Prototype: int clear_bit(unsigned long int *n, unsigned int index);</li>
<li>where index is the index, starting from 0 of the bit you want to set</li>
<li>Returns: 1 if it worked, or -1 if an error occurred
</ul></li>
<h2>5. 101 mandatory</h2>
Write a function that returns the number of bits you would need to flip to get from one number to another.

<ul><li>Prototype: unsigned int flip_bits(unsigned long int n, unsigned long int m);</li>
<li>You are not allowed to use the % or / operators
</ul></li>
<h2>6. Endianness #advanced</h2>
Write a function that checks the endianness.

<ul><li>Prototype: int get_endianness(void);</li>
<li>Returns: 0 if big endian, 1 if little endian
</ul></li>
<h2>7. Crackme3 #advanced</h2>
Find the password for this program.

<ul><li>Save the password in the file 101-password
<li>Your file should contain the exact password, no new line, no extra space
</ul></li>
<h2>8. Two's complement and negative numbers #advanced</h2>
Write a blog post on how integers are stored in memory using two’s complement.

<ul><li>Have at least one picture, at the top of the blog post</li>
<li>Have a few examples covering positive and negative numbers</li>
<li>Publish your blog post on Medium or LinkedIn</li>
<li>Share your blog post at least on Twitter and LinkedIn</ul></li>