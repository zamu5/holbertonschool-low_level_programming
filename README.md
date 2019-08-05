<h1>General</h1>
<ul><li>How to use linked lists</li>
<li>Start to look for the right source of information without too much help</li>
</ul>

<h3>More Info</h3>
Please use this data structure for this project:

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;
 <h2>Tasks/<h2>
 <h3>0. Print list</h3>
Write a function that prints all the elements of a listint_t list.

<ul><li>Prototype: size_t print_listint(const listint_t *h);</li>
<li>Return: the number of nodes</li>
<li>Format: see example</li>
<li>You are allowed to use printf</li></ul>
<h3>1. List length</h3>
Write a function that returns the number of elements in a linked listint_t list.

<ul><li>Prototype: size_t listint_len(const listint_t *h);</li></ul>

<h3>2. Add node mandatory</h3>
Write a function that adds a new node at the beginning of a listint_t list.

<ul><li>Prototype: listint_t *add_nodeint(listint_t **head, const int n);</li>
<li>Return: the address of the new element, or NULL if it failed</li></ul>

<h3>3. Add node at the end mandatory</h3>
Write a function that adds a new node at the end of a listint_t list.

<ul><li>Prototype: listint_t *add_nodeint_end(listint_t **head, const int n);</li>
<li>Return: the address of the new element, or NULL if it failed

<h3>4. Free list mandatory</h3>
Write a function that frees a listint_t list.

<ul><li>Prototype: void free_listint(listint_t *head);</li></ul>

<h3>5. Free mandatory</h3>
Write a function that frees a listint_t list.

<ul><li>Prototype: void free_listint2(listint_t **head);</li>
<li>The function sets the head to NULL</li></ul>

<h3>6. Pop mandatory</h3>
Write a function that deletes the head node of a listint_t linked list, and returns the head node’s data (n).

<ul><li>Prototype: int pop_listint(listint_t **head);</li>
<li>if the linked list is empty return 0</li></ul>
<h3>7. Get node at index mandatory</h3>
Write a function that returns the nth node of a listint_t linked list.

<ul><li>Prototype: listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);</li>
<li>where index is the index of the node, starting at 0</li>
<li>if the node does not exist, return NULL</li></ul>

<h3>8. Sum list mandatory</h3>
Write a function that returns the sum of all the data (n) of a listint_t linked list.

<ul><li>Prototype: int sum_listint(listint_t *head);</li>
<li>if the list is empty, return 0</li></ul>

<h3>9. Insert mandatory</h3>
Write a function that inserts a new node at a given position.

<ul><li>Prototype: listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);</li>
<li>where idx is the index of the list where the new node should be added. Index starts at 0</li>
<li>Returns: the address of the new node, or NULL if it failed</li>
<li>if it is not possible to add the new node at index idx, do not add the new node and return NULL</li></ul>
<h3>10. Delete at index mandatory</h3>
Write a function that deletes the node at index index of a listint_t linked list.

<ul><li>Prototype: int delete_nodeint_at_index(listint_t **head, unsigned int index);</li>
<li>where index is the index of the node that should be deleted. Index starts at 0</li>
<li>Returns: 1 if it succeeded, -1 if it failed</li></ul>

<h3>11. Reverse list #advanced</h3>
Write a function that reverses a listint_t linked list.

<ul><li>Prototype: listint_t *reverse_listint(listint_t **head);</li>
<li>Returns: a pointer to the first node of the reversed list</li>
<li>You are not allowed to use more than 1 loop.</li>
<li>You are not allowed to use malloc, free or arrays</li>
<li>You can only declare a maximum of two variables in your function</li></ul>
<h3>12. Print (safe version) #advanced</h3>
Write a function that prints a listint_t linked list.

<ul><li>Prototype: size_t print_listint_safe(const listint_t *head);</li>
<li>Returns: the number of nodes in the list</li>
<li>This function can print lists with a loop</li>
<li>You should go through the list only once</li>
<li>If the function fails, exit the program with status 98</li>
<li>Output format: see example</li></ul>

<h3>13. Free (safe version) #advanced</h3>
Write a function that frees a listint_t list.

<ul><li>Prototype: size_t free_listint_safe(listint_t **h);</li>
<li>This function can free lists with a loop</li>
<li>You should go though the list only once</li>
<li>Returns: the size of the list that was free’d</li>
<li>The function sets the head to NULL</li></ul>

<h3>14. Find the loop #advanced</h3>
Write a function that finds the loop in a linked list.

<ul><li>Prototype: listint_t *find_listint_loop(listint_t *head);</li>
<li>Returns: The address of the node where the loop starts, or NULL if there is no loop</li>
<li>You are not allowed to use malloc, free or arrays</li>
<li>You can only declare a maximum of two variables in your function</li></ul>