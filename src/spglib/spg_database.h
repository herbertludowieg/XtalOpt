/* spg_database.h */
/* Copyright (C) 2010 Atsushi Togo */

#ifndef __spg_database_H__
#define __spg_database_H__

#include "bravais.h"

typedef struct {
  int spacegroup_number;
  char schoenflies[7];
  char hall_symbol[17];
  char international[32];
  char international_full[20];
  char international_short[11];
  Centering centering;
} SpacegroupType;

void spgdb_get_operation( int operation[13], const int index );
void spgdb_get_operation_index( int indices[2], const int hall_number );
SpacegroupType spgdb_get_spacegroup_type( int index );

#endif