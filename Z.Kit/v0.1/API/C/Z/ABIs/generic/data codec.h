/* Z Kit C API - ABIs/generic/data codec.h
	      __	   __
  _______ ___/ /______ ___/ /__
 / __/ -_) _  / __/ _ \ _  / -_)
/_/  \__/\_,_/\__/\___/_,_/\__/
Copyright © 2006-2016 Manuel Sainz de Baranda y Goñi.
Released under the terms of the GNU Lesser General Public License v3. */

#ifndef __Z_ABIs_generic_data_codec_H__
#define __Z_ABIs_generic_data_codec_H__

#include <Z/types/base.h>

typedef zsize	(* ZDataCodecProcess)	 (void const* block,
					  zsize	      block_size,
					  void*	      output);

typedef zsize	(* ZDataCodecOutputSize) (void const* block,
					  zsize	      block_size);

typedef ZStatus (* ZDataCodecValidate)	 (void const* block,
					  zsize	      block_size,
					  zsize*      error_offset);

typedef struct {
	ZDataCodecProcess    encode;
	ZDataCodecProcess    decode;
	ZDataCodecOutputSize encoding_size;
	ZDataCodecOutputSize decoding_size;
	ZDataCodecValidate   validate_encoding;
	zboolean	     sequential;
} ZDataCodecABI;

#endif /* __Z_ABIs_generic_data_codec_H__ */