#ifndef _RINGOPS_H
#define _RINGOPS_H

#include "structs.h"
#include "network.h"
#include "print_messages.h"


void Node_Initialization(ringStruct* );

int distance(int k, int l);

int responsability(int predi, int i, int k);

void nodeReset(ringStruct * ringData);

void print_ring_query(ringStruct* node);

#endif
