/* Z Kit - ABIs/generic/data codec.h
 _____  _______________
/_   /_/  -_/_   _/  _ |
 /____/\___/ /__//___/_| Kit
Copyright (C) 2006-2019 Manuel Sainz de Baranda y Goñi.
Released under the terms of the GNU Lesser General Public License v3. */

#ifndef Z_ABIs_generic_data_codec_H_
#define Z_ABIs_generic_data_codec_H_

#include <Z/types/fundamental.h>

typedef zusize (* ZDataCodecProcess)   (void const* block,
					zusize	    block_size,
					void*	    output);

typedef zusize (* ZDataCodecOutputSize)(void const* block,
					zusize	    block_size);

typedef zsint  (* ZDataCodecValidate)  (void const* block,
					zusize	    block_size,
					zusize*	    error_offset);

typedef struct {
	ZDataCodecProcess    encode;
	ZDataCodecProcess    decode;
	ZDataCodecOutputSize encoding_size;
	ZDataCodecOutputSize decoding_size;
	ZDataCodecValidate   validate_encoding;
	zboolean	     sequential;
} ZDataCodecABI;

#endif /* Z_ABIs_generic_data_codec_H_ */
