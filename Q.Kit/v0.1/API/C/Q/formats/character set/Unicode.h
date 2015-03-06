/* Q C API - formats/character set/Unicode.h
	      __	   __
  _______ ___/ /______ ___/ /__
 / __/ -_) _  / __/ _ \ _  / -_)
/_/  \__/\_,_/\__/\___/_,_/\__/
Copyright © 2006-2015 Manuel Sainz de Baranda y Goñi.
Released under the terms of the GNU Lesser General Public License v3. */

#ifndef __Q_formats_character_set_Unicode_H__
#define __Q_formats_character_set_Unicode_H__

#include <Q/formats/character set/ASCII.h>

typedef quint16 QUnicode;

/* MARK: - Basic Multilingual Plane */

#define Q_UNICODE_NULL				Q_ASCII_NULL
#define Q_UNICODE_START_OF_HEADING		Q_ASCII_START_OF_HEADING
#define Q_UNICODE_START_OF_TEXT			Q_ASCII_START_OF_TEXT
#define Q_UNICODE_END_OF_TEXT			Q_ASCII_END_OF_TEXT
#define Q_UNICODE_END_OF_TRANSMISSION		Q_ASCII_END_OF_TRANSMISSION
#define Q_UNICODE_ENQUIRY			Q_ASCII_ENQUIRY
#define Q_UNICODE_ACKNOWLEDGE			Q_ASCII_ACKNOWLEDGE
#define Q_UNICODE_BELL				Q_ASCII_BELL
#define Q_UNICODE_BACKSPACE			Q_ASCII_BACKSPACE
#define Q_UNICODE_HORIZONTAL_TAB		Q_ASCII_HORIZONTAL_TAB
#define Q_UNICODE_LINE_FEED			Q_ASCII_LINE_FEED
#define Q_UNICODE_VERTICAL_TAB			Q_ASCII_VERTICAL_TAB
#define Q_UNICODE_FORM_FEED			Q_ASCII_FORM_FEED
#define Q_UNICODE_CARRIAGE_RETURN		Q_ASCII_CARRIAGE_RETURN
#define Q_UNICODE_SHIFT_OOUT			Q_ASCII_SHIFT_OOUT
#define Q_UNICODE_SHIFT_IN			Q_ASCII_SHIFT_IN
#define Q_UNICODE_DATA_LINK_ESCAPE		Q_ASCII_DATA_LINK_ESCAPE
#define Q_UNICODE_DEVICE_CONTROL_1		Q_ASCII_DEVICE_CONTROL_1
#define Q_UNICODE_DEVICE_CONTROL_2		Q_ASCII_DEVICE_CONTROL_2
#define Q_UNICODE_DEVICE_CONTROL_3		Q_ASCII_DEVICE_CONTROL_3
#define Q_UNICODE_DEVICE_CONTROL_4		Q_ASCII_DEVICE_CONTROL_4
#define Q_UNICODE_NEGATIVE_ACKNOWLEDGE		Q_ASCII_NEGATIVE_ACKNOWLEDGE
#define Q_UNICODE_SYNCHRONOUS_IDLE		Q_ASCII_SYNCHRONOUS_IDLE
#define Q_UNICODE_END_OF_TRANSMISSION_BLOCK	Q_ASCII_END_OF_TRANSMISSION_BLOCK
#define Q_UNICODE_CANCEL			Q_ASCII_CANCEL
#define Q_UNICODE_END_OF_MEDIUM			Q_ASCII_END_OF_MEDIUM
#define Q_UNICODE_SUBSTITUTE			Q_ASCII_SUBSTITUTE
#define Q_UNICODE_ESCAPE			Q_ASCII_ESCAPE
#define Q_UNICODE_FILE_SEPARATOR		Q_ASCII_FILE_SEPARATOR
#define Q_UNICODE_GROUP_SEPARATOR		Q_ASCII_GROUP_SEPARATOR
#define Q_UNICODE_RECORD_SEPARATOR		Q_ASCII_RECORD_SEPARATOR
#define Q_UNICODE_UNIT_SEPARATOR		Q_ASCII_UNIT_SEPARATOR
#define Q_UNICODE_SPACE				Q_ASCII_SPACE
#define Q_UNICODE_EXCLAMATION_MARK		Q_ASCII_EXCLAMATION_MARK
#define Q_UNICODE_QUOTATION_MARK		Q_ASCII_QUOTATION_MARK
#define Q_UNICODE_NUMBER_SIGN_HASH_TAG		Q_ASCII_NUMBER_SIGN_HASH_TAG
#define Q_UNICODE_DOLLAR_SIGN			Q_ASCII_DOLLAR_SIGN
#define Q_UNICODE_PERCENT_SIGN			Q_ASCII_PERCENT_SIGN
#define Q_UNICODE_AMPERSAND			Q_ASCII_AMPERSAND
#define Q_UNICODE_APOSTROPHE			Q_ASCII_APOSTROPHE
#define Q_UNICODE_LEFT_PARENTHESIS		Q_ASCII_LEFT_PARENTHESIS
#define Q_UNICODE_RIGHT_PARENTHESIS		Q_ASCII_RIGHT_PARENTHESIS
#define Q_UNICODE_ASTERISK			Q_ASCII_ASTERISK
#define Q_UNICODE_PLUS_SIGN			Q_ASCII_PLUS_SIGN
#define Q_UNICODE_COMMA				Q_ASCII_COMMA
#define Q_UNICODE_HYPHEN_MINUS			Q_ASCII_HYPHEN_MINUS
#define Q_UNICODE_FULL_STOP			Q_ASCII_FULL_STOP
#define Q_UNICODE_SLASH_SOLIDUS			Q_ASCII_SLASH_SOLIDUS
#define Q_UNICODE_DIGIT_ZERO			Q_ASCII_DIGIT_ZERO
#define Q_UNICODE_DIGIT_ONE			Q_ASCII_DIGIT_ONE
#define Q_UNICODE_DIGIT_TWO			Q_ASCII_DIGIT_TWO
#define Q_UNICODE_DIGIT_THREE			Q_ASCII_DIGIT_THREE
#define Q_UNICODE_DIGIT_FOUR			Q_ASCII_DIGIT_FOUR
#define Q_UNICODE_DIGIT_FIVE			Q_ASCII_DIGIT_FIVE
#define Q_UNICODE_DIGIT_SIX			Q_ASCII_DIGIT_SIX
#define Q_UNICODE_DIGIT_SEVEN			Q_ASCII_DIGIT_SEVEN
#define Q_UNICODE_DIGIT_EIGHT			Q_ASCII_DIGIT_EIGHT
#define Q_UNICODE_DIGIT_NINE			Q_ASCII_DIGIT_NINE
#define Q_UNICODE_COLON				Q_ASCII_COLON
#define Q_UNICODE_SEMICOLON			Q_ASCII_SEMICOLON
#define Q_UNICODE_LESS_THAN_SIGN		Q_ASCII_LESS_THAN_SIGN
#define Q_UNICODE_EQUAL_SIGN			Q_ASCII_EQUAL_SIGN
#define Q_UNICODE_GREATER_THAN_SIGN		Q_ASCII_GREATER_THAN_SIGN
#define Q_UNICODE_QUESTION_MARK			Q_ASCII_QUESTION_MARK
#define Q_UNICODE_AT_SIGN			Q_ASCII_AT_SIGN
#define Q_UNICODE_LATIN_CAPITAL_LETTER_A	Q_ASCII_LATIN_CAPITAL_LETTER_A
#define Q_UNICODE_LATIN_CAPITAL_LETTER_B	Q_ASCII_LATIN_CAPITAL_LETTER_B
#define Q_UNICODE_LATIN_CAPITAL_LETTER_C	Q_ASCII_LATIN_CAPITAL_LETTER_C
#define Q_UNICODE_LATIN_CAPITAL_LETTER_D	Q_ASCII_LATIN_CAPITAL_LETTER_D
#define Q_UNICODE_LATIN_CAPITAL_LETTER_E	Q_ASCII_LATIN_CAPITAL_LETTER_E
#define Q_UNICODE_LATIN_CAPITAL_LETTER_F	Q_ASCII_LATIN_CAPITAL_LETTER_F
#define Q_UNICODE_LATIN_CAPITAL_LETTER_G	Q_ASCII_LATIN_CAPITAL_LETTER_G
#define Q_UNICODE_LATIN_CAPITAL_LETTER_H	Q_ASCII_LATIN_CAPITAL_LETTER_H
#define Q_UNICODE_LATIN_CAPITAL_LETTER_I	Q_ASCII_LATIN_CAPITAL_LETTER_I
#define Q_UNICODE_LATIN_CAPITAL_LETTER_J	Q_ASCII_LATIN_CAPITAL_LETTER_J
#define Q_UNICODE_LATIN_CAPITAL_LETTER_K	Q_ASCII_LATIN_CAPITAL_LETTER_K
#define Q_UNICODE_LATIN_CAPITAL_LETTER_L	Q_ASCII_LATIN_CAPITAL_LETTER_L
#define Q_UNICODE_LATIN_CAPITAL_LETTER_M	Q_ASCII_LATIN_CAPITAL_LETTER_M
#define Q_UNICODE_LATIN_CAPITAL_LETTER_N	Q_ASCII_LATIN_CAPITAL_LETTER_N
#define Q_UNICODE_LATIN_CAPITAL_LETTER_O	Q_ASCII_LATIN_CAPITAL_LETTER_O
#define Q_UNICODE_LATIN_CAPITAL_LETTER_P	Q_ASCII_LATIN_CAPITAL_LETTER_P
#define Q_UNICODE_LATIN_CAPITAL_LETTER_Q	Q_ASCII_LATIN_CAPITAL_LETTER_Q
#define Q_UNICODE_LATIN_CAPITAL_LETTER_R	Q_ASCII_LATIN_CAPITAL_LETTER_R
#define Q_UNICODE_LATIN_CAPITAL_LETTER_S	Q_ASCII_LATIN_CAPITAL_LETTER_S
#define Q_UNICODE_LATIN_CAPITAL_LETTER_T	Q_ASCII_LATIN_CAPITAL_LETTER_T
#define Q_UNICODE_LATIN_CAPITAL_LETTER_U	Q_ASCII_LATIN_CAPITAL_LETTER_U
#define Q_UNICODE_LATIN_CAPITAL_LETTER_V	Q_ASCII_LATIN_CAPITAL_LETTER_V
#define Q_UNICODE_LATIN_CAPITAL_LETTER_W	Q_ASCII_LATIN_CAPITAL_LETTER_W
#define Q_UNICODE_LATIN_CAPITAL_LETTER_X	Q_ASCII_LATIN_CAPITAL_LETTER_X
#define Q_UNICODE_LATIN_CAPITAL_LETTER_Y	Q_ASCII_LATIN_CAPITAL_LETTER_Y
#define Q_UNICODE_LATIN_CAPITAL_LETTER_Z	Q_ASCII_LATIN_CAPITAL_LETTER_Z
#define Q_UNICODE_LEFT_SQUARE_BRACKET		Q_ASCII_LEFT_SQUARE_BRACKET
#define Q_UNICODE_BACKSLASH			Q_ASCII_BACKSLASH
#define Q_UNICODE_RIGHT_SQUARE_BRACKET		Q_ASCII_RIGHT_SQUARE_BRACKET
#define Q_UNICODE_CIRCUMFLEX_ACCENT		Q_ASCII_CIRCUMFLEX_ACCENT
#define Q_UNICODE_LOW_LINE			Q_ASCII_LOW_LINE
#define Q_UNICODE_GRAVE_ACCENT			Q_ASCII_GRAVE_ACCENT
#define Q_UNICODE_LATIN_SMALL_LETTER_A		Q_ASCII_LATIN_SMALL_LETTER_A
#define Q_UNICODE_LATIN_SMALL_LETTER_B		Q_ASCII_LATIN_SMALL_LETTER_B
#define Q_UNICODE_LATIN_SMALL_LETTER_C		Q_ASCII_LATIN_SMALL_LETTER_C
#define Q_UNICODE_LATIN_SMALL_LETTER_D		Q_ASCII_LATIN_SMALL_LETTER_D
#define Q_UNICODE_LATIN_SMALL_LETTER_E		Q_ASCII_LATIN_SMALL_LETTER_E
#define Q_UNICODE_LATIN_SMALL_LETTER_F		Q_ASCII_LATIN_SMALL_LETTER_F
#define Q_UNICODE_LATIN_SMALL_LETTER_G		Q_ASCII_LATIN_SMALL_LETTER_G
#define Q_UNICODE_LATIN_SMALL_LETTER_H		Q_ASCII_LATIN_SMALL_LETTER_H
#define Q_UNICODE_LATIN_SMALL_LETTER_I		Q_ASCII_LATIN_SMALL_LETTER_I
#define Q_UNICODE_LATIN_SMALL_LETTER_J		Q_ASCII_LATIN_SMALL_LETTER_J
#define Q_UNICODE_LATIN_SMALL_LETTER_K		Q_ASCII_LATIN_SMALL_LETTER_K
#define Q_UNICODE_LATIN_SMALL_LETTER_L		Q_ASCII_LATIN_SMALL_LETTER_L
#define Q_UNICODE_LATIN_SMALL_LETTER_M		Q_ASCII_LATIN_SMALL_LETTER_M
#define Q_UNICODE_LATIN_SMALL_LETTER_N		Q_ASCII_LATIN_SMALL_LETTER_N
#define Q_UNICODE_LATIN_SMALL_LETTER_O		Q_ASCII_LATIN_SMALL_LETTER_O
#define Q_UNICODE_LATIN_SMALL_LETTER_P		Q_ASCII_LATIN_SMALL_LETTER_P
#define Q_UNICODE_LATIN_SMALL_LETTER_Q		Q_ASCII_LATIN_SMALL_LETTER_Q
#define Q_UNICODE_LATIN_SMALL_LETTER_R		Q_ASCII_LATIN_SMALL_LETTER_R
#define Q_UNICODE_LATIN_SMALL_LETTER_S		Q_ASCII_LATIN_SMALL_LETTER_S
#define Q_UNICODE_LATIN_SMALL_LETTER_T		Q_ASCII_LATIN_SMALL_LETTER_T
#define Q_UNICODE_LATIN_SMALL_LETTER_U		Q_ASCII_LATIN_SMALL_LETTER_U
#define Q_UNICODE_LATIN_SMALL_LETTER_V		Q_ASCII_LATIN_SMALL_LETTER_V
#define Q_UNICODE_LATIN_SMALL_LETTER_W		Q_ASCII_LATIN_SMALL_LETTER_W
#define Q_UNICODE_LATIN_SMALL_LETTER_X		Q_ASCII_LATIN_SMALL_LETTER_X
#define Q_UNICODE_LATIN_SMALL_LETTER_Y		Q_ASCII_LATIN_SMALL_LETTER_Y
#define Q_UNICODE_LATIN_SMALL_LETTER_Z		Q_ASCII_LATIN_SMALL_LETTER_Z
#define Q_UNICODE_LEFT_CURLY_BRACKET		Q_ASCII_LEFT_CURLY_BRACKET
#define Q_UNICODE_VERTICAL_BAR			Q_ASCII_VERTICAL_BAR
#define Q_UNICODE_RIGHT_CURLY_BRACKET		Q_ASCII_RIGHT_CURLY_BRACKET
#define Q_UNICODE_TILDE				Q_ASCII_TILDE
#define Q_UNICODE_DELETE			Q_ASCII_DELETE

/* MARK: - Supplementary Multilingual Plane */

/* MARK: - Supplementary Ideographic Plane */

/* MARK: - Supplement­ary Special-purpose Plane */

#endif /* __Q_formats_character_set_Unicode_H__ */
