##More Singly Linked List
In C programming, a list a group of connected node structure.
Each node contains a value (the value to be stored), and
an address (an address to the next node).
The purpose of a list is to overcome the limitations with Arrays.

A singly linked list is a list that linked to members in only one direction.
That is forward.

Here is a sample code for creating a simple node.

struct node {
	int value;
	struct node *next;
};
typedef struct node node_t;

We have created a node structure that can hold an integer
and an address to another node.
One thing we must note is that we must never loose the address
to the first node else we may never be able to reach it in a singly list.

Note a node not a list rather is an individual item that can point to 
another item. Here are some useful functions that are usually used with
linked list

Initializing a node with a value
node_t *create_node(int value) {
	node_t *result = malloc(sizeof(node_t));
	result->value = valvue;
	result->next = NULL;
	return result;
}

Prepending a node to the head of the chain
node_t *prepend_item(node_t **head, node_t *node_to_insert) {
	node_to_insert->next = *head;
	*head = node_to_insert;
	return node_to_insert;
}

Insert a node after a specifed node
void node_t *append_node(node_t *lead_node, node_t *new_node) {
	new_node->next = lead_node->next;
	lead_node->next = new_node;
}

Find a node with a specified value
node_t *find_node(node_t *head, int value) {
	node_t *tmp = head;

	while (tmp != NULL) {
		if (tmp->value == value) return tmp;
		tmp = tmp->next;
	}

	return NULL:
}

Note that in all this functions except create node and find node, only nodes are passed
to them not an integer.
