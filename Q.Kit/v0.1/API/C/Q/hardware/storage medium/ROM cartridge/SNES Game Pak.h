/* Q C API - hardware/storage medium/ROM cartridge/SNES Game Pak.h
	      __	   __
  _______ ___/ /______ ___/ /__
 / __/ -_) _  / __/ _ \ _  / -_)
/_/  \__/\_,_/\__/\___/_,_/\__/
Copyright © 2006-2015 Manuel Sainz de Baranda y Goñi.
Released under the terms of the GNU Lesser General Public License v3. */

#ifndef __Q_hardware_storage_medium_ROM_cartridge_SNES_Game_Pak_H__
#define __Q_hardware_storage_medium_ROM_cartridge_SNES_Game_Pak_H__

#include <Q/types/base.h>

#define Q_SNES_GAME_PAK_LAYOUT_LO_ROM	   0x20
#define Q_SNES_GAME_PAK_LAYOUT_HI_ROM	   0x21
#define Q_SNES_GAME_PAK_LAYOUT_LO_ROM_FAST 0x30
#define Q_SNES_GAME_PAK_LAYOUT_HI_ROM_FAST 0x31

#define Q_SNES_GAME_PAK_TYPE_ROM_ONLY			 0x00
#define Q_SNES_GAME_PAK_TYPE_ROM_AND_RAM		 0x01
#define Q_SNES_GAME_PAK_TYPE_ROM_AND_SAVE_RAM		 0x02
#define Q_SNES_GAME_PAK_TYPE_ROM_AND_SUPER_FX_A		 0x13
#define Q_SNES_GAME_PAK_TYPE_ROM_AND_SUPER_FX_B		 0x14
#define Q_SNES_GAME_PAK_TYPE_ROM_SAVE_RAM_AND_SUPER_FX_A 0x15
#define Q_SNES_GAME_PAK_TYPE_ROM_SAVE_RAM_AND_SUPER_FX_B 0x1A
#define Q_SNES_GAME_PAK_TYPE_ROM_AND_SA_1_A		 0x34
#define Q_SNES_GAME_PAK_TYPE_ROM_AND_SA_1_B		 0x35

#define Q_SNES_GAME_PAK_MEMORY_SIZE_0	    0x00
#define Q_SNES_GAME_PAK_MEMORY_SIZE_2_KIB   0x01
#define Q_SNES_GAME_PAK_MEMORY_SIZE_4_KIB   0x02
#define Q_SNES_GAME_PAK_MEMORY_SIZE_8_KIB   0x03
#define Q_SNES_GAME_PAK_MEMORY_SIZE_16_KIB  0x04
#define Q_SNES_GAME_PAK_MEMORY_SIZE_32_KIB  0x05
#define Q_SNES_GAME_PAK_MEMORY_SIZE_64_KIB  0x06
#define Q_SNES_GAME_PAK_MEMORY_SIZE_128_KIB 0x07
#define Q_SNES_GAME_PAK_MEMORY_SIZE_256_KIB 0x08
#define Q_SNES_GAME_PAK_MEMORY_SIZE_512_KIB 0x09
#define Q_SNES_GAME_PAK_MEMORY_SIZE_1_MIB   0x0A
#define Q_SNES_GAME_PAK_MEMORY_SIZE_2_MIB   0x0B
#define Q_SNES_GAME_PAK_MEMORY_SIZE_4_MIB   0x0C

#define Q_SNES_GAME_PAK_REGION_JAPAN				  0
#define Q_SNES_GAME_PAK_REGION_USA				  1
#define Q_SNES_GAME_PAK_REGION_AUSTRALIA_EUROPE_OCEANIA_AND_ASIA  2
#define Q_SNES_GAME_PAK_REGION_SWEDEN				  3
#define Q_SNES_GAME_PAK_REGION_FINLAND				  4
#define Q_SNES_GAME_PAK_REGION_DENMARK				  5
#define Q_SNES_GAME_PAK_REGION_FRANCE				  6
#define Q_SNES_GAME_PAK_REGION_HOLLAND				  7
#define Q_SNES_GAME_PAK_REGION_SPAIN				  8
#define Q_SNES_GAME_PAK_REGION_GERMANY_AUSTRIA_AND_SWITZERLAND	  9
#define Q_SNES_GAME_PAK_REGION_ITALY				 10
#define Q_SNES_GAME_PAK_REGION_HONG_KONG_AND_CHINA		 11
#define Q_SNES_GAME_PAK_REGION_INDONESIA			 12
#define Q_SNES_GAME_PAK_REGION_KOREA				 13

#define Q_SNES_GAME_PAK_LICENSE_NINTENDO			   1
#define Q_SNES_GAME_PAK_LICENSE_IMAGINEER_ZOOM			   3
#define Q_SNES_GAME_PAK_LICENSE_ZAMUSE				   5
#define Q_SNES_GAME_PAK_LICENSE_FALCOM				   6
#define Q_SNES_GAME_PAK_LICENSE_CAPCOM				   8
#define Q_SNES_GAME_PAK_LICENSE_HOT_B				   9
#define Q_SNES_GAME_PAK_LICENSE_JALECO				  10
#define Q_SNES_GAME_PAK_LICENSE_COCONUTS			  11
#define Q_SNES_GAME_PAK_LICENSE_RAGE_SOFTWARE			  12
#define Q_SNES_GAME_PAK_LICENSE_TECHNOS				  14
#define Q_SNES_GAME_PAK_LICENSE_MEBIO_SOFTWARE			  15
#define Q_SNES_GAME_PAK_LICENSE_GREMLIN_GRAPHICS		  18
#define Q_SNES_GAME_PAK_LICENSE_ELECTRONIC_ARTS			  19
#define Q_SNES_GAME_PAK_LICENSE_COBRA_TEAM			  21
#define Q_SNES_GAME_PAK_LICENSE_HUMAN_FIELD			  22
#define Q_SNES_GAME_PAK_LICENSE_KOEI				  23
#define Q_SNES_GAME_PAK_LICENSE_HUDSON_SOFT			  24
#define Q_SNES_GAME_PAK_LICENSE_YANOMAN				  26
#define Q_SNES_GAME_PAK_LICENSE_TECMO				  28
#define Q_SNES_GAME_PAK_LICENSE_OPEN_SYSTEM			  30
#define Q_SNES_GAME_PAK_LICENSE_VIRGIN_GAMES			  31
#define Q_SNES_GAME_PAK_LICENSE_KSS				  32
#define Q_SNES_GAME_PAK_LICENSE_SUNSOFT				  33
#define Q_SNES_GAME_PAK_LICENSE_POW				  34
#define Q_SNES_GAME_PAK_LICENSE_MICRO_WORLD			  35
#define Q_SNES_GAME_PAK_LICENSE_ENIX				  38
#define Q_SNES_GAME_PAK_LICENSE_LORICIEL_ELECTRO_BRAIN		  39
#define Q_SNES_GAME_PAK_LICENSE_KEMCO				  40
#define Q_SNES_GAME_PAK_LICENSE_SETA				  41
#define Q_SNES_GAME_PAK_LICENSE_VISIT				  45
#define Q_SNES_GAME_PAK_LICENSE_CARROZZERIA			  49
#define Q_SNES_GAME_PAK_LICENSE_DYNAMIC				  50
#define Q_SNES_GAME_PAK_LICENSE_NINTENDO			  51
#define Q_SNES_GAME_PAK_LICENSE_MAGIFACT			  52
#define Q_SNES_GAME_PAK_LICENSE_HECT				  53
#define Q_SNES_GAME_PAK_LICENSE_EMPIRE_SOFTWARE			  60
#define Q_SNES_GAME_PAK_LICENSE_LORICIEL			  61
#define Q_SNES_GAME_PAK_LICENSE_SEIKA				  64
#define Q_SNES_GAME_PAK_LICENSE_UBI_SOFT			  65
#define Q_SNES_GAME_PAK_LICENSE_SYSTEM_3			  70
#define Q_SNES_GAME_PAK_LICENSE_SPECTRUM_HOLOBYTE		  71
#define Q_SNES_GAME_PAK_LICENSE_IREM				  73
#define Q_SNES_GAME_PAK_LICENSE_RAYA_SYSTEMS_SCULPTURED_SOFTWARE  75
#define Q_SNES_GAME_PAK_LICENSE_RENOVATION_PRODUCTS		  76
#define Q_SNES_GAME_PAK_LICENSE_MALIBU_GAMES_BLACK_PEARL	  77
#define Q_SNES_GAME_PAK_LICENSE_US_GOLD				  79
#define Q_SNES_GAME_PAK_LICENSE_ABSOLUTE_ENTERTAINMENT		  80
#define Q_SNES_GAME_PAK_LICENSE_ACCLAIM				  81
#define Q_SNES_GAME_PAK_LICENSE_ACTIVISION			  82
#define Q_SNES_GAME_PAK_LICENSE_AMERICAN_SAMMY			  83
#define Q_SNES_GAME_PAK_LICENSE_GAMETEK				  84
#define Q_SNES_GAME_PAK_LICENSE_HI_TECH_EXPRESSIONS		  85
#define Q_SNES_GAME_PAK_LICENSE_LJN_TOYS			  86
#define Q_SNES_GAME_PAK_LICENSE_MINDSCAPE			  90
#define Q_SNES_GAME_PAK_LICENSE_TRADEWEST			  93
#define Q_SNES_GAME_PAK_LICENSE_AMERICAN_SOFTWORKS		  95
#define Q_SNES_GAME_PAK_LICENSE_TITUS				  96
#define Q_SNES_GAME_PAK_LICENSE_VIRGIN_INTERACTIVE_ENTERTAINMENT  97
#define Q_SNES_GAME_PAK_LICENSE_MAXIS				  98
#define Q_SNES_GAME_PAK_LICENSE_OCEAN				 103
#define Q_SNES_GAME_PAK_LICENSE_ELECTRONIC_ARTS			 105
#define Q_SNES_GAME_PAK_LICENSE_LASER_BEAM			 107
#define Q_SNES_GAME_PAK_LICENSE_ELITE				 110
#define Q_SNES_GAME_PAK_LICENSE_ELECTRO_BRAIN			 111
#define Q_SNES_GAME_PAK_LICENSE_INFOGRAMES			 112
#define Q_SNES_GAME_PAK_LICENSE_INTERPLAY			 113
#define Q_SNES_GAME_PAK_LICENSE_LUCASARTS			 114
#define Q_SNES_GAME_PAK_LICENSE_PARKER_BROTHERS			 115
#define Q_SNES_GAME_PAK_LICENSE_STORM				 117
#define Q_SNES_GAME_PAK_LICENSE_THQ_SOFTWARE			 120
#define Q_SNES_GAME_PAK_LICENSE_ACCOLADE			 121
#define Q_SNES_GAME_PAK_LICENSE_TRIFFIX_ENTERTAINMENT		 122
#define Q_SNES_GAME_PAK_LICENSE_MICROPROSE			 124
#define Q_SNES_GAME_PAK_LICENSE_KEMCO				 127
#define Q_SNES_GAME_PAK_LICENSE_MISAWA				 128
#define Q_SNES_GAME_PAK_LICENSE_TEICHIO				 129
#define Q_SNES_GAME_PAK_LICENSE_NAMCO				 130
#define Q_SNES_GAME_PAK_LICENSE_LOZC				 131
#define Q_SNES_GAME_PAK_LICENSE_KOEI				 132
#define Q_SNES_GAME_PAK_LICENSE_TOKUMA_SHOTEN_INTERMEDIA	 134
#define Q_SNES_GAME_PAK_LICENSE_DATAM_POLYSTAR			 136
#define Q_SNES_GAME_PAK_LICENSE_BULLET_PROOF_SOFTWARE		 139
#define Q_SNES_GAME_PAK_LICENSE_VIC_TOKAI			 140
#define Q_SNES_GAME_PAK_LICENSE_CHARACTER_SOFT			 142
#define Q_SNES_GAME_PAK_LICENSE_I_MAX				 143
#define Q_SNES_GAME_PAK_LICENSE_TAKARA				 144
#define Q_SNES_GAME_PAK_LICENSE_CHUN_SOFT			 145
#define Q_SNES_GAME_PAK_LICENSE_VIDEO_SYSTEM			 146
#define Q_SNES_GAME_PAK_LICENSE_BEC				 147
#define Q_SNES_GAME_PAK_LICENSE_VARIE				 149
#define Q_SNES_GAME_PAK_LICENSE_KANECO				 151
#define Q_SNES_GAME_PAK_LICENSE_PACK_IN_VIDEO			 153
#define Q_SNES_GAME_PAK_LICENSE_NICHIBUTSU			 154
#define Q_SNES_GAME_PAK_LICENSE_TECMO				 155
#define Q_SNES_GAME_PAK_LICENSE_IMAGINEER			 156
#define Q_SNES_GAME_PAK_LICENSE_TELENET				 160
#define Q_SNES_GAME_PAK_LICENSE_KONAMI				 164
#define Q_SNES_GAME_PAK_LICENSE_K_AMUSEMENT_LEASING		 165
#define Q_SNES_GAME_PAK_LICENSE_TAKARA				 167
#define Q_SNES_GAME_PAK_LICENSE_TECHNOS_JAPAN			 169
#define Q_SNES_GAME_PAK_LICENSE_JVC				 170
#define Q_SNES_GAME_PAK_LICENSE_TOEI_ANIMATION			 172
#define Q_SNES_GAME_PAK_LICENSE_TOHO				 173
#define Q_SNES_GAME_PAK_LICENSE_NAMCO				 175
#define Q_SNES_GAME_PAK_LICENSE_ASCII_ACTIVISON			 177
#define Q_SNES_GAME_PAK_LICENSE_BANDAI_AMERICA			 178
#define Q_SNES_GAME_PAK_LICENSE_ENIX				 180
#define Q_SNES_GAME_PAK_LICENSE_HALKEN				 182
#define Q_SNES_GAME_PAK_LICENSE_CULTURE_BRAIN			 186
#define Q_SNES_GAME_PAK_LICENSE_SUNSOFT				 187
#define Q_SNES_GAME_PAK_LICENSE_TOSHIBA_EMI			 188
#define Q_SNES_GAME_PAK_LICENSE_SONY_IMAGESOFT			 189
#define Q_SNES_GAME_PAK_LICENSE_SAMMY				 191
#define Q_SNES_GAME_PAK_LICENSE_TAITO				 192
#define Q_SNES_GAME_PAK_LICENSE_KEMCO				 194
#define Q_SNES_GAME_PAK_LICENSE_SQUARE				 195
#define Q_SNES_GAME_PAK_LICENSE_TOKUMA_SOFT			 196
#define Q_SNES_GAME_PAK_LICENSE_DATA_EAST			 197
#define Q_SNES_GAME_PAK_LICENSE_TONKIN_HOUSE			 198
#define Q_SNES_GAME_PAK_LICENSE_KOEI				 200
#define Q_SNES_GAME_PAK_LICENSE_KONAMI_USA			 202
#define Q_SNES_GAME_PAK_LICENSE_NTVIC				 203
#define Q_SNES_GAME_PAK_LICENSE_MELDAC				 205
#define Q_SNES_GAME_PAK_LICENSE_PONY_CANYON			 206
#define Q_SNES_GAME_PAK_LICENSE_SOTSU_AGENCY_SUNRISE		 207
#define Q_SNES_GAME_PAK_LICENSE_DISCO_TAITO			 208
#define Q_SNES_GAME_PAK_LICENSE_SOFEL				 209
#define Q_SNES_GAME_PAK_LICENSE_QUEST				 210
#define Q_SNES_GAME_PAK_LICENSE_SIGMA				 211
#define Q_SNES_GAME_PAK_LICENSE_NAXAT				 214
#define Q_SNES_GAME_PAK_LICENSE_CAPCOM				 216
#define Q_SNES_GAME_PAK_LICENSE_BANPRESTO			 217
#define Q_SNES_GAME_PAK_LICENSE_TOMY				 218
#define Q_SNES_GAME_PAK_LICENSE_ACCLAIM				 219
#define Q_SNES_GAME_PAK_LICENSE_NCS				 221
#define Q_SNES_GAME_PAK_LICENSE_HUMAN_ENTERTAINMENT		 222
#define Q_SNES_GAME_PAK_LICENSE_ALTRON				 223
#define Q_SNES_GAME_PAK_LICENSE_JALECO				 224
#define Q_SNES_GAME_PAK_LICENSE_YUTAKA				 226
#define Q_SNES_GAME_PAK_LICENSE_T_AND_ESOFT			 228
#define Q_SNES_GAME_PAK_LICENSE_EPOCH				 229
#define Q_SNES_GAME_PAK_LICENSE_ATHENA				 231
#define Q_SNES_GAME_PAK_LICENSE_ASMIK				 232
#define Q_SNES_GAME_PAK_LICENSE_NATSUME				 233
#define Q_SNES_GAME_PAK_LICENSE_KING_RECORDS			 234
#define Q_SNES_GAME_PAK_LICENSE_ATLUS				 235
#define Q_SNES_GAME_PAK_LICENSE_SONY_MUSIC_ENTERTAINMENT	 236
#define Q_SNES_GAME_PAK_LICENSE_IGS				 238
#define Q_SNES_GAME_PAK_LICENSE_MOTOWN_SOFTWARE			 241
#define Q_SNES_GAME_PAK_LICENSE_LEFT_FIELD_ENTERTAINMENT	 242
#define Q_SNES_GAME_PAK_LICENSE_BEAM_SOFTWARE			 243
#define Q_SNES_GAME_PAK_LICENSE_TEC_MAGIK			 244
#define Q_SNES_GAME_PAK_LICENSE_CYBERSOFT			 249
#define Q_SNES_GAME_PAK_LICENSE_HUDSON_SOFT			 255

Q_DEFINE_STRICT_STRUCTURE (
	QString	name[21];
	quint8	layout;
	quint8	type;
	quint8	rom_size;
	quint8	ram_size;
	quint8	region;
	quint8	license;
	quint8	version;
	quint16	checksum;
	quint16	snes_checksum;
	quint8	unknown1[4];
	quint8	native_cop_interrupt_rutine_pointer;
	quint8	native_brk_interrupt_rutine_pointer;
	quint8	native_abort_interrupt_rutine_pointer;
	quint8	native_unused;
	quint8	native_irq_interrupt_rutine_pointer;
	quint8	unknown2[4];
	quint8	emulation_cop_interrupt_rutine_pointer;
	quint8	emulation_unused;
	quint8	emulation_abort_interrupt_rutine_pointer;
	quint8	emulation_nmi_interrupt_rutine_pointer;
	quint8	emulation_reset_interrupt_rutine_pointer;
	quint8	emulation_irq_or_brk_interrupt_rutine_pointer;
) QSNESGamePakHeader;

#define Q_SNES_GAME_PAK_HEADER(p) ((QSNESGamePakHeader *)(p))

#endif /* __Q_hardware_storage_medium_ROM_cartridge_SNES_Game_Pak_H__ */
