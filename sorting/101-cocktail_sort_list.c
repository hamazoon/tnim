void cocktail_sort_list(listint_t **head)
{
		listint_t *node, *node1, *anchor;

			if (head == NULL || *head == NULL || (*head)->next == NULL)
						return;

				node = (*head);
				    node1 = (*head)->next;

				        while (check_swap)
							{
								        check_swap = 0;

									        while (node->next != NULL && node->n > node1->n)
											        {
															    anchor = node1->next;
															                /*if (node1->next != NULL)
																	 *             {            }*/
															                node1->next = node;
																	            node->prev = node1;
																		                node->next = anchor;
																							print_list(*head);
																										check_swap = 1;
																										        }
											}	
}
