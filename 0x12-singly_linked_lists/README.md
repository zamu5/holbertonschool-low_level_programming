<h3>General</h3>
<ul>
<li>When and why using linked lists vs arrays</li>
<li>How to build and use linked lists</li>
</ul

<h3>Tasks</h3>
<h2>0. Print list </h2>
Write a function that prints all the elements of a list_t list.
<ul>
<li>Prototype: size_t print_list(const list_t *h);</li>
<li>Return: the number of nodes</li>
<li>Format: see example</li>
<li>If str is NULL, print [0] (nil)</li>
<li>You are allowed to use printf</li>
</ul>

<h2>1. List length </h2>
Write a function that returns the number of elements in a linked list_t list.
<ul><li>Prototype: size_t list_len(const list_t *h);</li></ul>

<h2>2. Add node</h2>
<ul>
<li>Prototype: list_t *add_node(list_t **head, const char *str);</li>
<li>Return: the address of the new element, or NULL if it failed</li>
<li>str needs to be duplicated</li>
<li>You are allowed to use strdup</li>
</ul>

<h2>3. Add node at the end </h2>
Write a function that adds a new node at the end of a list_t list.
<ul>
<li>Prototype: list_t *add_node_end(list_t **head, const char *str);</li>
<li>Return: the address of the new element, or NULL if it failed</li>
<li>str needs to be duplicated</li>
<li>You are allowed to use strdup</li>
</ul
<h2>4. Free list mandatory</h2>
Write a function that frees a list_t list.
<ul><li>
Prototype: void free_list(list_t *head);
</li></ul>
<h2>5. The Hare and the Tortoise</h2>
<img src="to.jpg">
Write a function that prints You're beat! and yet, you must allow,\nI bore my house upon my back!\n before the main function is executed.

<ul><li>You are allowed to use the printf function</ul></li>

<h2>6. Real programmers can write assembly code in any language</h2>
Write a 64-bit program in assembly that prints Hello, Holberton, followed by a new line.
<ul>
<li>You are only allowed to use the printf function</li>
<li>You are not allowed to use interrupts</li>
<li>Your program will be compiled using nasm and gcc:</li>
</ul>