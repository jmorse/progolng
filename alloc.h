#ifndef _PROGOL_ALLOC_H_
#define _PROGOL_ALLOC_H_

int a_zero_table();
int a_pr_block_stats();
void *a_dalloc(LONG number, LONG size);
int a_dfree(void *block, LONG block_size);

#endif /* _PROGOL_ALLOC_H_ */
