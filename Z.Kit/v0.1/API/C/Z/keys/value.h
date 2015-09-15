/* Z Kit C API - keys/value.h
	      __	   __
  _______ ___/ /______ ___/ /__
 / __/ -_) _  / __/ _ \ _  / -_)
/_/  \__/\_,_/\__/\___/_,_/\__/
Copyright © 2006-2015 Manuel Sainz de Baranda y Goñi.
Released under the terms of the GNU Lesser General Public License v3. */

#ifndef __Z_keys_value_H__
#define __Z_keys_value_H__

#define Z_VALUE_TYPE_POINTER	 0
#define Z_VALUE_TYPE_UCHAR	 1
#define Z_VALUE_TYPE_USHORT	 2
#define Z_VALUE_TYPE_UINT	 3
#define Z_VALUE_TYPE_ULONG	 4
#define Z_VALUE_TYPE_ULLONG	 5
#define Z_VALUE_TYPE_CHAR	 6
#define Z_VALUE_TYPE_SHORT	 7
#define Z_VALUE_TYPE_INT	 8
#define Z_VALUE_TYPE_LONG	 9
#define Z_VALUE_TYPE_LLONG	10
#define Z_VALUE_TYPE_FLOAT	11
#define Z_VALUE_TYPE_DOUBLE	12
#define Z_VALUE_TYPE_LDOUBLE	13
#define Z_VALUE_TYPE_SIZE	14
#define Z_VALUE_TYPE_UINTMIN	15
#define Z_VALUE_TYPE_UINTMAX	16 /* C99 7.18.1.5 Greatest-width integer types. */
#define Z_VALUE_TYPE_UINTPTR	17
#define Z_VALUE_TYPE_UINTTOP	18
#define Z_VALUE_TYPE_SSIZE	19
#define Z_VALUE_TYPE_INTMIN	20
#define Z_VALUE_TYPE_INTMAX	21 /* C99 7.18.1.5 Greatest-width integer types. */
#define Z_VALUE_TYPE_INTPTR	22
#define Z_VALUE_TYPE_INTTOP	23
#define Z_VALUE_TYPE_BOOLEAN	24
#define Z_VALUE_TYPE_NATURAL	25
#define Z_VALUE_TYPE_INTEGER	26
#define Z_VALUE_TYPE_REAL	27
#define Z_VALUE_TYPE_UINT8	28
#define Z_VALUE_TYPE_INT8	29
#define Z_VALUE_TYPE_FLOAT8	30
#define Z_VALUE_TYPE_UINT16	31
#define Z_VALUE_TYPE_INT16	32
#define Z_VALUE_TYPE_FLOAT16	33
#define Z_VALUE_TYPE_UINT24	34
#define Z_VALUE_TYPE_INT24	35
#define Z_VALUE_TYPE_FLOAT24	36
#define Z_VALUE_TYPE_UINT32	37 /* Base type in ILP64 data model only. */
#define Z_VALUE_TYPE_INT32	38 /* Base type in ILP64 data model only. */
#define Z_VALUE_TYPE_FLOAT32	39
#define Z_VALUE_TYPE_UINT40	40
#define Z_VALUE_TYPE_INT40	41
#define Z_VALUE_TYPE_FLOAT40	42
#define Z_VALUE_TYPE_UINT48	43
#define Z_VALUE_TYPE_INT48	44
#define Z_VALUE_TYPE_FLOAT48	45
#define Z_VALUE_TYPE_UINT56	46
#define Z_VALUE_TYPE_INT56	47
#define Z_VALUE_TYPE_FLOAT56	48
#define Z_VALUE_TYPE_UINT64	49
#define Z_VALUE_TYPE_INT64	50
#define Z_VALUE_TYPE_FLOAT64	51
#define Z_VALUE_TYPE_UINT72	52
#define Z_VALUE_TYPE_INT72	53
#define Z_VALUE_TYPE_FLOAT72	54
#define Z_VALUE_TYPE_UINT80	55
#define Z_VALUE_TYPE_INT80	56
#define Z_VALUE_TYPE_FLOAT80	57
#define Z_VALUE_TYPE_UINT88	58
#define Z_VALUE_TYPE_INT88	59
#define Z_VALUE_TYPE_FLOAT88	60
#define Z_VALUE_TYPE_UINT96	61
#define Z_VALUE_TYPE_INT96	62
#define Z_VALUE_TYPE_FLOAT96	63
#define Z_VALUE_TYPE_UINT104	64
#define Z_VALUE_TYPE_INT104	65
#define Z_VALUE_TYPE_FLOAT104	66
#define Z_VALUE_TYPE_UINT112	67
#define Z_VALUE_TYPE_INT112	68
#define Z_VALUE_TYPE_FLOAT112	69
#define Z_VALUE_TYPE_UINT120	70
#define Z_VALUE_TYPE_INT120	71
#define Z_VALUE_TYPE_FLOAT120	72
#define Z_VALUE_TYPE_UINT128	73
#define Z_VALUE_TYPE_INT128	74
#define Z_VALUE_TYPE_FLOAT128	75
#define Z_VALUE_TYPE_UINT136	76
#define Z_VALUE_TYPE_INT136	77
#define Z_VALUE_TYPE_FLOAT136	78
#define Z_VALUE_TYPE_UINT144	79
#define Z_VALUE_TYPE_INT144	80
#define Z_VALUE_TYPE_FLOAT144	81
#define Z_VALUE_TYPE_UINT152	82
#define Z_VALUE_TYPE_INT152	83
#define Z_VALUE_TYPE_FLOAT152	84
#define Z_VALUE_TYPE_UINT160	85
#define Z_VALUE_TYPE_INT160	86
#define Z_VALUE_TYPE_FLOAT160	87
#define Z_VALUE_TYPE_UINT168	88
#define Z_VALUE_TYPE_INT168	89
#define Z_VALUE_TYPE_FLOAT168	90
#define Z_VALUE_TYPE_UINT176	91
#define Z_VALUE_TYPE_INT176	92
#define Z_VALUE_TYPE_FLOAT176	93
#define Z_VALUE_TYPE_UINT184	94
#define Z_VALUE_TYPE_INT184	95
#define Z_VALUE_TYPE_FLOAT184	96
#define Z_VALUE_TYPE_UINT192	97
#define Z_VALUE_TYPE_INT192	98
#define Z_VALUE_TYPE_FLOAT192	99
#define Z_VALUE_TYPE_UINT200   100
#define Z_VALUE_TYPE_INT200    101
#define Z_VALUE_TYPE_FLOAT200  102
#define Z_VALUE_TYPE_UINT208   103
#define Z_VALUE_TYPE_INT208    104
#define Z_VALUE_TYPE_FLOAT208  105
#define Z_VALUE_TYPE_UINT216   106
#define Z_VALUE_TYPE_INT216    107
#define Z_VALUE_TYPE_FLOAT216  108
#define Z_VALUE_TYPE_UINT224   109
#define Z_VALUE_TYPE_INT224    110
#define Z_VALUE_TYPE_FLOAT224  111
#define Z_VALUE_TYPE_UINT232   112
#define Z_VALUE_TYPE_INT232    113
#define Z_VALUE_TYPE_FLOAT232  114
#define Z_VALUE_TYPE_UINT240   115
#define Z_VALUE_TYPE_INT240    116
#define Z_VALUE_TYPE_FLOAT240  117
#define Z_VALUE_TYPE_UINT248   118
#define Z_VALUE_TYPE_INT248    119
#define Z_VALUE_TYPE_FLOAT248  120
#define Z_VALUE_TYPE_UINT256   121
#define Z_VALUE_TYPE_INT256    122
#define Z_VALUE_TYPE_FLOAT256  123
#define Z_VALUE_TYPE_UINT264   124
#define Z_VALUE_TYPE_INT264    125
#define Z_VALUE_TYPE_FLOAT264  126
#define Z_VALUE_TYPE_UINT272   127
#define Z_VALUE_TYPE_INT272    128
#define Z_VALUE_TYPE_FLOAT272  129
#define Z_VALUE_TYPE_UINT280   130
#define Z_VALUE_TYPE_INT280    131
#define Z_VALUE_TYPE_FLOAT280  132
#define Z_VALUE_TYPE_UINT288   133
#define Z_VALUE_TYPE_INT288    134
#define Z_VALUE_TYPE_FLOAT288  135
#define Z_VALUE_TYPE_UINT296   136
#define Z_VALUE_TYPE_INT296    137
#define Z_VALUE_TYPE_FLOAT296  138
#define Z_VALUE_TYPE_UINT304   139
#define Z_VALUE_TYPE_INT304    140
#define Z_VALUE_TYPE_FLOAT304  141
#define Z_VALUE_TYPE_UINT312   142
#define Z_VALUE_TYPE_INT312    143
#define Z_VALUE_TYPE_FLOAT312  144
#define Z_VALUE_TYPE_UINT320   145
#define Z_VALUE_TYPE_INT320    146
#define Z_VALUE_TYPE_FLOAT320  147
#define Z_VALUE_TYPE_UINT328   148
#define Z_VALUE_TYPE_INT328    149
#define Z_VALUE_TYPE_FLOAT328  150
#define Z_VALUE_TYPE_UINT336   151
#define Z_VALUE_TYPE_INT336    152
#define Z_VALUE_TYPE_FLOAT336  153
#define Z_VALUE_TYPE_UINT344   154
#define Z_VALUE_TYPE_INT344    155
#define Z_VALUE_TYPE_FLOAT344  156
#define Z_VALUE_TYPE_UINT352   157
#define Z_VALUE_TYPE_INT352    158
#define Z_VALUE_TYPE_FLOAT352  159
#define Z_VALUE_TYPE_UINT360   160
#define Z_VALUE_TYPE_INT360    161
#define Z_VALUE_TYPE_FLOAT360  162
#define Z_VALUE_TYPE_UINT368   163
#define Z_VALUE_TYPE_INT368    164
#define Z_VALUE_TYPE_FLOAT368  165
#define Z_VALUE_TYPE_UINT376   166
#define Z_VALUE_TYPE_INT376    167
#define Z_VALUE_TYPE_FLOAT376  168
#define Z_VALUE_TYPE_UINT384   169
#define Z_VALUE_TYPE_INT384    170
#define Z_VALUE_TYPE_FLOAT384  171
#define Z_VALUE_TYPE_UINT392   172
#define Z_VALUE_TYPE_INT392    173
#define Z_VALUE_TYPE_FLOAT392  174
#define Z_VALUE_TYPE_UINT400   175
#define Z_VALUE_TYPE_INT400    176
#define Z_VALUE_TYPE_FLOAT400  177
#define Z_VALUE_TYPE_UINT408   178
#define Z_VALUE_TYPE_INT408    179
#define Z_VALUE_TYPE_FLOAT408  180
#define Z_VALUE_TYPE_UINT416   181
#define Z_VALUE_TYPE_INT416    182
#define Z_VALUE_TYPE_FLOAT416  183
#define Z_VALUE_TYPE_UINT424   184
#define Z_VALUE_TYPE_INT424    185
#define Z_VALUE_TYPE_FLOAT424  186
#define Z_VALUE_TYPE_UINT432   187
#define Z_VALUE_TYPE_INT432    188
#define Z_VALUE_TYPE_FLOAT432  189
#define Z_VALUE_TYPE_UINT440   190
#define Z_VALUE_TYPE_INT440    191
#define Z_VALUE_TYPE_FLOAT440  192
#define Z_VALUE_TYPE_UINT448   193
#define Z_VALUE_TYPE_INT448    194
#define Z_VALUE_TYPE_FLOAT448  195
#define Z_VALUE_TYPE_UINT456   196
#define Z_VALUE_TYPE_INT456    197
#define Z_VALUE_TYPE_FLOAT456  198
#define Z_VALUE_TYPE_UINT464   199
#define Z_VALUE_TYPE_INT464    200
#define Z_VALUE_TYPE_FLOAT464  201
#define Z_VALUE_TYPE_UINT472   202
#define Z_VALUE_TYPE_INT472    203
#define Z_VALUE_TYPE_FLOAT472  204
#define Z_VALUE_TYPE_UINT480   205
#define Z_VALUE_TYPE_INT480    206
#define Z_VALUE_TYPE_FLOAT480  207
#define Z_VALUE_TYPE_UINT488   208
#define Z_VALUE_TYPE_INT488    209
#define Z_VALUE_TYPE_FLOAT488  210
#define Z_VALUE_TYPE_UINT496   211
#define Z_VALUE_TYPE_INT496    212
#define Z_VALUE_TYPE_FLOAT496  213
#define Z_VALUE_TYPE_UINT504   214
#define Z_VALUE_TYPE_INT504    215
#define Z_VALUE_TYPE_FLOAT504  216
#define Z_VALUE_TYPE_UINT512   217
#define Z_VALUE_TYPE_INT512    218
#define Z_VALUE_TYPE_FLOAT512  219
#define Z_VALUE_TYPE_UINT520   220
#define Z_VALUE_TYPE_INT520    221
#define Z_VALUE_TYPE_FLOAT520  222
#define Z_VALUE_TYPE_UINT528   223
#define Z_VALUE_TYPE_INT528    224
#define Z_VALUE_TYPE_FLOAT528  225
#define Z_VALUE_TYPE_UINT536   226
#define Z_VALUE_TYPE_INT536    227
#define Z_VALUE_TYPE_FLOAT536  228
#define Z_VALUE_TYPE_UINT544   229
#define Z_VALUE_TYPE_INT544    230
#define Z_VALUE_TYPE_FLOAT544  231
#define Z_VALUE_TYPE_UINT552   232
#define Z_VALUE_TYPE_INT552    233
#define Z_VALUE_TYPE_FLOAT552  234
#define Z_VALUE_TYPE_UINT560   235
#define Z_VALUE_TYPE_INT560    236
#define Z_VALUE_TYPE_FLOAT560  237
#define Z_VALUE_TYPE_UINT568   238
#define Z_VALUE_TYPE_INT568    239
#define Z_VALUE_TYPE_FLOAT568  240
#define Z_VALUE_TYPE_UINT576   241
#define Z_VALUE_TYPE_INT576    242
#define Z_VALUE_TYPE_FLOAT576  243
#define Z_VALUE_TYPE_UINT584   244
#define Z_VALUE_TYPE_INT584    245
#define Z_VALUE_TYPE_FLOAT584  246
#define Z_VALUE_TYPE_UINT592   247
#define Z_VALUE_TYPE_INT592    248
#define Z_VALUE_TYPE_FLOAT592  249
#define Z_VALUE_TYPE_UINT600   250
#define Z_VALUE_TYPE_INT600    251
#define Z_VALUE_TYPE_FLOAT600  252
#define Z_VALUE_TYPE_UINT608   253
#define Z_VALUE_TYPE_INT608    254
#define Z_VALUE_TYPE_FLOAT608  255
#define Z_VALUE_TYPE_UINT616   256
#define Z_VALUE_TYPE_INT616    257
#define Z_VALUE_TYPE_FLOAT616  258
#define Z_VALUE_TYPE_UINT624   259
#define Z_VALUE_TYPE_INT624    260
#define Z_VALUE_TYPE_FLOAT624  261
#define Z_VALUE_TYPE_UINT632   262
#define Z_VALUE_TYPE_INT632    263
#define Z_VALUE_TYPE_FLOAT632  264
#define Z_VALUE_TYPE_UINT640   265
#define Z_VALUE_TYPE_INT640    266
#define Z_VALUE_TYPE_FLOAT640  267
#define Z_VALUE_TYPE_UINT648   268
#define Z_VALUE_TYPE_INT648    269
#define Z_VALUE_TYPE_FLOAT648  270
#define Z_VALUE_TYPE_UINT656   271
#define Z_VALUE_TYPE_INT656    272
#define Z_VALUE_TYPE_FLOAT656  273
#define Z_VALUE_TYPE_UINT664   274
#define Z_VALUE_TYPE_INT664    275
#define Z_VALUE_TYPE_FLOAT664  276
#define Z_VALUE_TYPE_UINT672   277
#define Z_VALUE_TYPE_INT672    278
#define Z_VALUE_TYPE_FLOAT672  279
#define Z_VALUE_TYPE_UINT680   280
#define Z_VALUE_TYPE_INT680    281
#define Z_VALUE_TYPE_FLOAT680  282
#define Z_VALUE_TYPE_UINT688   283
#define Z_VALUE_TYPE_INT688    284
#define Z_VALUE_TYPE_FLOAT688  285
#define Z_VALUE_TYPE_UINT696   286
#define Z_VALUE_TYPE_INT696    287
#define Z_VALUE_TYPE_FLOAT696  288
#define Z_VALUE_TYPE_UINT704   289
#define Z_VALUE_TYPE_INT704    290
#define Z_VALUE_TYPE_FLOAT704  291
#define Z_VALUE_TYPE_UINT712   292
#define Z_VALUE_TYPE_INT712    293
#define Z_VALUE_TYPE_FLOAT712  294
#define Z_VALUE_TYPE_UINT720   295
#define Z_VALUE_TYPE_INT720    296
#define Z_VALUE_TYPE_FLOAT720  297
#define Z_VALUE_TYPE_UINT728   298
#define Z_VALUE_TYPE_INT728    299
#define Z_VALUE_TYPE_FLOAT728  300
#define Z_VALUE_TYPE_UINT736   301
#define Z_VALUE_TYPE_INT736    302
#define Z_VALUE_TYPE_FLOAT736  303
#define Z_VALUE_TYPE_UINT744   304
#define Z_VALUE_TYPE_INT744    305
#define Z_VALUE_TYPE_FLOAT744  306
#define Z_VALUE_TYPE_UINT752   307
#define Z_VALUE_TYPE_INT752    308
#define Z_VALUE_TYPE_FLOAT752  309
#define Z_VALUE_TYPE_UINT760   310
#define Z_VALUE_TYPE_INT760    311
#define Z_VALUE_TYPE_FLOAT760  312
#define Z_VALUE_TYPE_UINT768   313
#define Z_VALUE_TYPE_INT768    314
#define Z_VALUE_TYPE_FLOAT768  315
#define Z_VALUE_TYPE_UINT776   316
#define Z_VALUE_TYPE_INT776    317
#define Z_VALUE_TYPE_FLOAT776  318
#define Z_VALUE_TYPE_UINT784   319
#define Z_VALUE_TYPE_INT784    320
#define Z_VALUE_TYPE_FLOAT784  321
#define Z_VALUE_TYPE_UINT792   322
#define Z_VALUE_TYPE_INT792    323
#define Z_VALUE_TYPE_FLOAT792  324
#define Z_VALUE_TYPE_UINT800   325
#define Z_VALUE_TYPE_INT800    326
#define Z_VALUE_TYPE_FLOAT800  327
#define Z_VALUE_TYPE_UINT808   328
#define Z_VALUE_TYPE_INT808    329
#define Z_VALUE_TYPE_FLOAT808  330
#define Z_VALUE_TYPE_UINT816   331
#define Z_VALUE_TYPE_INT816    332
#define Z_VALUE_TYPE_FLOAT816  333
#define Z_VALUE_TYPE_UINT824   334
#define Z_VALUE_TYPE_INT824    335
#define Z_VALUE_TYPE_FLOAT824  336
#define Z_VALUE_TYPE_UINT832   337
#define Z_VALUE_TYPE_INT832    338
#define Z_VALUE_TYPE_FLOAT832  339
#define Z_VALUE_TYPE_UINT840   340
#define Z_VALUE_TYPE_INT840    341
#define Z_VALUE_TYPE_FLOAT840  342
#define Z_VALUE_TYPE_UINT848   343
#define Z_VALUE_TYPE_INT848    344
#define Z_VALUE_TYPE_FLOAT848  345
#define Z_VALUE_TYPE_UINT856   346
#define Z_VALUE_TYPE_INT856    347
#define Z_VALUE_TYPE_FLOAT856  348
#define Z_VALUE_TYPE_UINT864   349
#define Z_VALUE_TYPE_INT864    350
#define Z_VALUE_TYPE_FLOAT864  351
#define Z_VALUE_TYPE_UINT872   352
#define Z_VALUE_TYPE_INT872    353
#define Z_VALUE_TYPE_FLOAT872  354
#define Z_VALUE_TYPE_UINT880   355
#define Z_VALUE_TYPE_INT880    356
#define Z_VALUE_TYPE_FLOAT880  357
#define Z_VALUE_TYPE_UINT888   358
#define Z_VALUE_TYPE_INT888    359
#define Z_VALUE_TYPE_FLOAT888  360
#define Z_VALUE_TYPE_UINT896   361
#define Z_VALUE_TYPE_INT896    362
#define Z_VALUE_TYPE_FLOAT896  363
#define Z_VALUE_TYPE_UINT904   364
#define Z_VALUE_TYPE_INT904    365
#define Z_VALUE_TYPE_FLOAT904  366
#define Z_VALUE_TYPE_UINT912   367
#define Z_VALUE_TYPE_INT912    368
#define Z_VALUE_TYPE_FLOAT912  369
#define Z_VALUE_TYPE_UINT920   370
#define Z_VALUE_TYPE_INT920    371
#define Z_VALUE_TYPE_FLOAT920  372
#define Z_VALUE_TYPE_UINT928   373
#define Z_VALUE_TYPE_INT928    374
#define Z_VALUE_TYPE_FLOAT928  375
#define Z_VALUE_TYPE_UINT936   376
#define Z_VALUE_TYPE_INT936    377
#define Z_VALUE_TYPE_FLOAT936  378
#define Z_VALUE_TYPE_UINT944   379
#define Z_VALUE_TYPE_INT944    380
#define Z_VALUE_TYPE_FLOAT944  381
#define Z_VALUE_TYPE_UINT952   382
#define Z_VALUE_TYPE_INT952    383
#define Z_VALUE_TYPE_FLOAT952  384
#define Z_VALUE_TYPE_UINT960   385
#define Z_VALUE_TYPE_INT960    386
#define Z_VALUE_TYPE_FLOAT960  387
#define Z_VALUE_TYPE_UINT968   388
#define Z_VALUE_TYPE_INT968    389
#define Z_VALUE_TYPE_FLOAT968  390
#define Z_VALUE_TYPE_UINT976   391
#define Z_VALUE_TYPE_INT976    392
#define Z_VALUE_TYPE_FLOAT976  393
#define Z_VALUE_TYPE_UINT984   394
#define Z_VALUE_TYPE_INT984    395
#define Z_VALUE_TYPE_FLOAT984  396
#define Z_VALUE_TYPE_UINT992   397
#define Z_VALUE_TYPE_INT992    398
#define Z_VALUE_TYPE_FLOAT992  399
#define Z_VALUE_TYPE_UINT1000  400
#define Z_VALUE_TYPE_INT1000   401
#define Z_VALUE_TYPE_FLOAT1000 402
#define Z_VALUE_TYPE_UINT1008  403
#define Z_VALUE_TYPE_INT1008   404
#define Z_VALUE_TYPE_FLOAT1008 405
#define Z_VALUE_TYPE_UINT1016  406
#define Z_VALUE_TYPE_INT1016   407
#define Z_VALUE_TYPE_FLOAT1016 408
#define Z_VALUE_TYPE_UINT1024  409
#define Z_VALUE_TYPE_INT1024   410
#define Z_VALUE_TYPE_FLOAT1024 411

#define Z_KEY_BITS_VALUE_TYPE 16
#define Z_KEY_LAST_VALUE_TYPE Z_VALUE_TYPE_REAL

#define Z_VALUE_FORMAT_8BIT_NATURAL	    0
#define Z_VALUE_FORMAT_16BIT_NATURAL	    1
#define Z_VALUE_FORMAT_32BIT_NATURAL	    2
#define Z_VALUE_FORMAT_64BIT_NATURAL	    3
#define Z_VALUE_FORMAT_128BIT_NATURAL	    4
#define Z_VALUE_FORMAT_256BIT_NATURAL	    5
#define Z_VALUE_FORMAT_512BIT_NATURAL	    6
#define Z_VALUE_FORMAT_1024BIT_NATURAL	    7
#define Z_VALUE_FORMAT_8BIT_INTEGER	    8
#define Z_VALUE_FORMAT_16BIT_INTEGER	    9
#define Z_VALUE_FORMAT_32BIT_INTEGER	   10
#define Z_VALUE_FORMAT_64BIT_INTEGER	   11
#define Z_VALUE_FORMAT_128BIT_INTEGER	   12
#define Z_VALUE_FORMAT_256BIT_INTEGER	   13
#define Z_VALUE_FORMAT_512BIT_INTEGER	   14
#define Z_VALUE_FORMAT_1024BIT_INTEGER	   15
#define Z_VALUE_FORMAT_IEEE_754_BINARY16   16
#define Z_VALUE_FORMAT_IEEE_754_BINARY32   17
#define Z_VALUE_FORMAT_IEEE_754_BINARY64   18
#define Z_VALUE_FORMAT_IEEE_754_BINARY128  19
#define Z_VALUE_FORMAT_IEEE_754_DECIMAL32  20
#define Z_VALUE_FORMAT_IEEE_754_DECIMAL64  21
#define Z_VALUE_FORMAT_IEEE_754_DECIMAL128 22

#define Z_KEY_BITS_VALUE_FORMAT	8
#define Z_KEY_LAST_VALUE_FORMAT	Z_VALUE_FORMAT_IEEE_754_DECIMAL12

#endif /* __Z_keys_value_H__ */