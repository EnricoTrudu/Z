/* Q C API - Q/ABIs/QCPUEmulationABI.h
	      __	   __
  _______ ___/ /______ ___/ /__
 / __/ -_) _  / __/ _ \ _  / -_)
/_/  \__/\_,_/\__/\___/_,_/\__/
Copyright © 2006-2015 Manuel Sainz de Baranda y Goñi.
Released under the terms of the GNU Lesser General Public License v3. */

#ifndef __Q_ABIs_QCPUEmulationABI_H__
#define __Q_ABIs_QCPUEmulationABI_H__

#include <Q/types/introspection.h>

typedef struct {

	qsize		minimum_cycles;
	qsize		maximum_cycles;
	qsize		action_count;
	ACMEAction*	actions;
	qsize		line_count;
	ACMELine*	lines;

	struct {qsize			size;
		qsize			cb_context_offset;
		qsize			cb_count;
		ACMEContextCB*		cbs;
		qsize			variable_count;
		ACMEContextVariable	variables;
		qsize			bit_field_count;
		ACMEContextBitField	bit_fields;
	} instance;

} QCPUEmulationABI;

#endif /* __Q_ABIs_QCPUEmulationABI_H__ */
