/*
 * build.h
 *
 *  Created on: Feb 20, 2019
 *      Author: bio
 */

#ifndef BUILD_H_
#define BUILD_H_
#include "basic.h"
#include "B+tree.h"
struct bplusTree_para
{
	uint32_t thread_log;
	char * flag;
	uint32_t level;
	struct Node ** p;
	struct para_cmp para;
	uint8_t threadID;
};
struct build_para
{
	uint32_t level;
	char * ref_path;
	uint32_t thread_num;
	uint32_t sa_gap;
	uint32_t occ_gap;
	uint32_t max_len;
};
struct mult_bsa_para
{
	struct Node * p_start;
	struct Node * p_end;
	uint32_t len_start;
	uint32_t *a;
	char* b;
	uint32_t *sa;
	uint32_t sa_gap;
};

void build(struct build_para &para_build);
void build_occ(char c,struct build_para &para_build);
void build_occA(struct build_para &para_build);


#endif /* BUILD_H_ */
