#ifndef UWU_BB09FBFF_0A71_4EC5_8D0C_34E554493108_UWU
#define UWU_BB09FBFF_0A71_4EC5_8D0C_34E554493108_UWU

#include "luaconf.h"

typedef struct generic_gc_state generic_gc_state;
typedef struct generic_gc_object_ref generic_gc_object_ref;

LUAI_FUNC
generic_gc_state* generic_gc_state_new(void);
LUAI_FUNC
void generic_gc_state_free(generic_gc_state* self);

#endif
