#ifndef DICT_H_INCLUDED
#define DICT_H_INCLUDED
//call
#include "pstring.h"

typedef struct _Dict Dict;

struct _Dict {
  size_t len;
  PString *names;
  PString *values;
};

#endif

