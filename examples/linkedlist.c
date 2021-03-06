struct node { 
	int v;
	struct node *next;
};

void print_list(struct node *n)
{
	while (NULL != n) {
		print_int(n->v);
		print_str(", ");
		n = n->next;
	}
}

void main()
{
	struct node *head;
	struct node *snd;
	struct node *trd;
	int size = sizeof *head;
	head = sbrk(size);
	snd = sbrk(size);
	trd = sbrk(size);
	head->v = 1;
	head->next = snd;
	snd->v = 2;
	snd->next = trd;
	trd->v = 3;
	trd->next = NULL;
	print_list(head);
	print_str("\n");
}
