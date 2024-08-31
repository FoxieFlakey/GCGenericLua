#include <stdlib.h>

#include "lgeneric_gc.h"

struct generic_gc_state {
  int v;
};

generic_gc_state* generic_gc_state_new(void) {
  struct generic_gc_state* self = (struct generic_gc_state*) malloc(sizeof(*self));
  *self = (struct generic_gc_state) {};
  return self;
}

void generic_gc_state_free(generic_gc_state* self) {
  free(self);
}
