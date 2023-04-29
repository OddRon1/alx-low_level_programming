#ifndef LISTS_H
#define LISTS_H

/**
 * struct list_s - singly linked list (used to implement linked lists)
 * @str: string - (malloc'ed string)
 * @len:this is length of the string
 * @next: this points to the next node
 *
 * Description: this a singly linked list node structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);

#endif