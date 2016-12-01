#ifndef _DECODER_H_
#define _DECODER_H_

#include "types.h"
#include "str.h"


decoder_t *decoder_new(const char *payload_str);
int decoder_input(decoder_t *, const str *, unsigned long ts, output_t *);
void decoder_close(decoder_t *);


#endif
