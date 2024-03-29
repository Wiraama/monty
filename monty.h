#ifndef MONTY_H
#define MONTY_H

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;
#define LIMIT 100
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>
/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/**
 * bus_s variables
 * @arg: argumunt
 * @file: pointer to file
 * @content: line content in file
 * @lifi: ...
 */
typedef struct bus_s
{
	char arg;
	FILE *file;
	char *content;
	int lifi;
} bus_t;

extern bus_t bus;
/**************************PROTOTYPES**********************************/

void swap(stack_t **head, unsigned int counter);
void sub(stack_t **head, unsigned int counter);
void stack(stack_t **head, unsigned int counter);
void rotl(stack_t **head,  __attribute__((unused)) unsigned int counter);
void rotr(stack_t **head, __attribute__((unused)) unsigned int counter);
void queue(stack_t **head, unsigned int counter);
void add_queue(stack_t **head, int n);
void pchar(stack_t **head, unsigned int counter);
void nop(stack_t **head, unsigned int counter);
void free_stack(stack_t *head);
void mod(stack_t **head, unsigned int counter);
void mul(stack_t **head, unsigned int counter);
int execute(char *content, stack_t **stack, unsigned int counter, FILE *file);
void f_div(stack_t **head, unsigned int count);
void add_node(stack_t **head, int n);
void add(stack_t **head, unsigned int count);
void pop(stack_t **head, unsigned int count);
void pall(stack_t **head);
void push(stack_t **head, unsigned int count);

#endif /* MONTY_H */
