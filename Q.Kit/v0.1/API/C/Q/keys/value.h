/* Q C API - keys/value.h
	      __	   __
  _______ ___/ /______ ___/ /__
 / __/ -_) _  / __/ _ \ _  / -_)
/_/  \__/\_,_/\__/\___/_,_/\__/
Copyright © 2006-2015 Manuel Sainz de Baranda y Goñi.
Released under the terms of the GNU Lesser General Public License v3. */

#ifndef __Q_keys_value_H__
#define __Q_keys_value_H__

#define Q_VALUE_TYPE_POINTER	 0
#define Q_VALUE_TYPE_UCHAR	 1
#define Q_VALUE_TYPE_USHORT	 2
#define Q_VALUE_TYPE_UINT	 3
#define Q_VALUE_TYPE_ULONG	 4
#define Q_VALUE_TYPE_ULLONG	 5
#define Q_VALUE_TYPE_CHAR	 6
#define Q_VALUE_TYPE_SHORT	 7
#define Q_VALUE_TYPE_INT	 8
#define Q_VALUE_TYPE_LONG	 9
#define Q_VALUE_TYPE_LLONG	10
#define Q_VALUE_TYPE_FLOAT	11
#define Q_VALUE_TYPE_DOUBLE	12
#define Q_VALUE_TYPE_LDOUBLE	13
#define Q_VALUE_TYPE_SIZE	14
#define Q_VALUE_TYPE_UINTMIN	15
#define Q_VALUE_TYPE_UINTMAX	16 /* C99 7.18.1.5 Greatest-width integer types. */
#define Q_VALUE_TYPE_UINTPTR	17
#define Q_VALUE_TYPE_UINTTOP	18
#define Q_VALUE_TYPE_SSIZE	19
#define Q_VALUE_TYPE_INTMIN	20
#define Q_VALUE_TYPE_INTMAX	21 /* C99 7.18.1.5 Greatest-width integer types. */
#define Q_VALUE_TYPE_INTPTR	22
#define Q_VALUE_TYPE_INTTOP	23
#define Q_VALUE_TYPE_BOOLEAN	24
#define Q_VALUE_TYPE_NATURAL	25
#define Q_VALUE_TYPE_INTEGER	26
#define Q_VALUE_TYPE_REAL	27
#define Q_VALUE_TYPE_UINT8	28
#define Q_VALUE_TYPE_INT8	29
#define Q_VALUE_TYPE_FLOAT8	30
#define Q_VALUE_TYPE_UINT16	31
#define Q_VALUE_TYPE_INT16	32
#define Q_VALUE_TYPE_FLOAT16	33
#define Q_VALUE_TYPE_UINT24	34
#define Q_VALUE_TYPE_INT24	35
#define Q_VALUE_TYPE_FLOAT24	36
#define Q_VALUE_TYPE_UINT32	37 /* Base type in ILP64 data model only. */
#define Q_VALUE_TYPE_INT32	38 /* Base type in ILP64 data model only. */
#define Q_VALUE_TYPE_FLOAT32	39
#define Q_VALUE_TYPE_UINT40	40
#define Q_VALUE_TYPE_INT40	41
#define Q_VALUE_TYPE_FLOAT40	42
#define Q_VALUE_TYPE_UINT48	43
#define Q_VALUE_TYPE_INT48	44
#define Q_VALUE_TYPE_FLOAT48	45
#define Q_VALUE_TYPE_UINT56	46
#define Q_VALUE_TYPE_INT56	47
#define Q_VALUE_TYPE_FLOAT56	48
#define Q_VALUE_TYPE_UINT64	49
#define Q_VALUE_TYPE_INT64	50
#define Q_VALUE_TYPE_FLOAT64	51
#define Q_VALUE_TYPE_UINT72	52
#define Q_VALUE_TYPE_INT72	53
#define Q_VALUE_TYPE_FLOAT72	54
#define Q_VALUE_TYPE_UINT80	55
#define Q_VALUE_TYPE_INT80	56
#define Q_VALUE_TYPE_FLOAT80	57
#define Q_VALUE_TYPE_UINT88	58
#define Q_VALUE_TYPE_INT88	59
#define Q_VALUE_TYPE_FLOAT88	60
#define Q_VALUE_TYPE_UINT96	61
#define Q_VALUE_TYPE_INT96	62
#define Q_VALUE_TYPE_FLOAT96	63
#define Q_VALUE_TYPE_UINT104	64
#define Q_VALUE_TYPE_INT104	65
#define Q_VALUE_TYPE_FLOAT104	66
#define Q_VALUE_TYPE_UINT112	67
#define Q_VALUE_TYPE_INT112	68
#define Q_VALUE_TYPE_FLOAT112	69
#define Q_VALUE_TYPE_UINT120	70
#define Q_VALUE_TYPE_INT120	71
#define Q_VALUE_TYPE_FLOAT120	72
#define Q_VALUE_TYPE_UINT128	73
#define Q_VALUE_TYPE_INT128	74
#define Q_VALUE_TYPE_FLOAT128	75
#define Q_VALUE_TYPE_UINT136	76
#define Q_VALUE_TYPE_INT136	77
#define Q_VALUE_TYPE_FLOAT136	78
#define Q_VALUE_TYPE_UINT144	79
#define Q_VALUE_TYPE_INT144	80
#define Q_VALUE_TYPE_FLOAT144	81
#define Q_VALUE_TYPE_UINT152	82
#define Q_VALUE_TYPE_INT152	83
#define Q_VALUE_TYPE_FLOAT152	84
#define Q_VALUE_TYPE_UINT160	85
#define Q_VALUE_TYPE_INT160	86
#define Q_VALUE_TYPE_FLOAT160	87
#define Q_VALUE_TYPE_UINT168	88
#define Q_VALUE_TYPE_INT168	89
#define Q_VALUE_TYPE_FLOAT168	90
#define Q_VALUE_TYPE_UINT176	91
#define Q_VALUE_TYPE_INT176	92
#define Q_VALUE_TYPE_FLOAT176	93
#define Q_VALUE_TYPE_UINT184	94
#define Q_VALUE_TYPE_INT184	95
#define Q_VALUE_TYPE_FLOAT184	96
#define Q_VALUE_TYPE_UINT192	97
#define Q_VALUE_TYPE_INT192	98
#define Q_VALUE_TYPE_FLOAT192	99
#define Q_VALUE_TYPE_UINT200   100
#define Q_VALUE_TYPE_INT200    101
#define Q_VALUE_TYPE_FLOAT200  102
#define Q_VALUE_TYPE_UINT208   103
#define Q_VALUE_TYPE_INT208    104
#define Q_VALUE_TYPE_FLOAT208  105
#define Q_VALUE_TYPE_UINT216   106
#define Q_VALUE_TYPE_INT216    107
#define Q_VALUE_TYPE_FLOAT216  108
#define Q_VALUE_TYPE_UINT224   109
#define Q_VALUE_TYPE_INT224    110
#define Q_VALUE_TYPE_FLOAT224  111
#define Q_VALUE_TYPE_UINT232   112
#define Q_VALUE_TYPE_INT232    113
#define Q_VALUE_TYPE_FLOAT232  114
#define Q_VALUE_TYPE_UINT240   115
#define Q_VALUE_TYPE_INT240    116
#define Q_VALUE_TYPE_FLOAT240  117
#define Q_VALUE_TYPE_UINT248   118
#define Q_VALUE_TYPE_INT248    119
#define Q_VALUE_TYPE_FLOAT248  120
#define Q_VALUE_TYPE_UINT256   121
#define Q_VALUE_TYPE_INT256    122
#define Q_VALUE_TYPE_FLOAT256  123
#define Q_VALUE_TYPE_UINT264   124
#define Q_VALUE_TYPE_INT264    125
#define Q_VALUE_TYPE_FLOAT264  126
#define Q_VALUE_TYPE_UINT272   127
#define Q_VALUE_TYPE_INT272    128
#define Q_VALUE_TYPE_FLOAT272  129
#define Q_VALUE_TYPE_UINT280   130
#define Q_VALUE_TYPE_INT280    131
#define Q_VALUE_TYPE_FLOAT280  132
#define Q_VALUE_TYPE_UINT288   133
#define Q_VALUE_TYPE_INT288    134
#define Q_VALUE_TYPE_FLOAT288  135
#define Q_VALUE_TYPE_UINT296   136
#define Q_VALUE_TYPE_INT296    137
#define Q_VALUE_TYPE_FLOAT296  138
#define Q_VALUE_TYPE_UINT304   139
#define Q_VALUE_TYPE_INT304    140
#define Q_VALUE_TYPE_FLOAT304  141
#define Q_VALUE_TYPE_UINT312   142
#define Q_VALUE_TYPE_INT312    143
#define Q_VALUE_TYPE_FLOAT312  144
#define Q_VALUE_TYPE_UINT320   145
#define Q_VALUE_TYPE_INT320    146
#define Q_VALUE_TYPE_FLOAT320  147
#define Q_VALUE_TYPE_UINT328   148
#define Q_VALUE_TYPE_INT328    149
#define Q_VALUE_TYPE_FLOAT328  150
#define Q_VALUE_TYPE_UINT336   151
#define Q_VALUE_TYPE_INT336    152
#define Q_VALUE_TYPE_FLOAT336  153
#define Q_VALUE_TYPE_UINT344   154
#define Q_VALUE_TYPE_INT344    155
#define Q_VALUE_TYPE_FLOAT344  156
#define Q_VALUE_TYPE_UINT352   157
#define Q_VALUE_TYPE_INT352    158
#define Q_VALUE_TYPE_FLOAT352  159
#define Q_VALUE_TYPE_UINT360   160
#define Q_VALUE_TYPE_INT360    161
#define Q_VALUE_TYPE_FLOAT360  162
#define Q_VALUE_TYPE_UINT368   163
#define Q_VALUE_TYPE_INT368    164
#define Q_VALUE_TYPE_FLOAT368  165
#define Q_VALUE_TYPE_UINT376   166
#define Q_VALUE_TYPE_INT376    167
#define Q_VALUE_TYPE_FLOAT376  168
#define Q_VALUE_TYPE_UINT384   169
#define Q_VALUE_TYPE_INT384    170
#define Q_VALUE_TYPE_FLOAT384  171
#define Q_VALUE_TYPE_UINT392   172
#define Q_VALUE_TYPE_INT392    173
#define Q_VALUE_TYPE_FLOAT392  174
#define Q_VALUE_TYPE_UINT400   175
#define Q_VALUE_TYPE_INT400    176
#define Q_VALUE_TYPE_FLOAT400  177
#define Q_VALUE_TYPE_UINT408   178
#define Q_VALUE_TYPE_INT408    179
#define Q_VALUE_TYPE_FLOAT408  180
#define Q_VALUE_TYPE_UINT416   181
#define Q_VALUE_TYPE_INT416    182
#define Q_VALUE_TYPE_FLOAT416  183
#define Q_VALUE_TYPE_UINT424   184
#define Q_VALUE_TYPE_INT424    185
#define Q_VALUE_TYPE_FLOAT424  186
#define Q_VALUE_TYPE_UINT432   187
#define Q_VALUE_TYPE_INT432    188
#define Q_VALUE_TYPE_FLOAT432  189
#define Q_VALUE_TYPE_UINT440   190
#define Q_VALUE_TYPE_INT440    191
#define Q_VALUE_TYPE_FLOAT440  192
#define Q_VALUE_TYPE_UINT448   193
#define Q_VALUE_TYPE_INT448    194
#define Q_VALUE_TYPE_FLOAT448  195
#define Q_VALUE_TYPE_UINT456   196
#define Q_VALUE_TYPE_INT456    197
#define Q_VALUE_TYPE_FLOAT456  198
#define Q_VALUE_TYPE_UINT464   199
#define Q_VALUE_TYPE_INT464    200
#define Q_VALUE_TYPE_FLOAT464  201
#define Q_VALUE_TYPE_UINT472   202
#define Q_VALUE_TYPE_INT472    203
#define Q_VALUE_TYPE_FLOAT472  204
#define Q_VALUE_TYPE_UINT480   205
#define Q_VALUE_TYPE_INT480    206
#define Q_VALUE_TYPE_FLOAT480  207
#define Q_VALUE_TYPE_UINT488   208
#define Q_VALUE_TYPE_INT488    209
#define Q_VALUE_TYPE_FLOAT488  210
#define Q_VALUE_TYPE_UINT496   211
#define Q_VALUE_TYPE_INT496    212
#define Q_VALUE_TYPE_FLOAT496  213
#define Q_VALUE_TYPE_UINT504   214
#define Q_VALUE_TYPE_INT504    215
#define Q_VALUE_TYPE_FLOAT504  216
#define Q_VALUE_TYPE_UINT512   217
#define Q_VALUE_TYPE_INT512    218
#define Q_VALUE_TYPE_FLOAT512  219
#define Q_VALUE_TYPE_UINT520   220
#define Q_VALUE_TYPE_INT520    221
#define Q_VALUE_TYPE_FLOAT520  222
#define Q_VALUE_TYPE_UINT528   223
#define Q_VALUE_TYPE_INT528    224
#define Q_VALUE_TYPE_FLOAT528  225
#define Q_VALUE_TYPE_UINT536   226
#define Q_VALUE_TYPE_INT536    227
#define Q_VALUE_TYPE_FLOAT536  228
#define Q_VALUE_TYPE_UINT544   229
#define Q_VALUE_TYPE_INT544    230
#define Q_VALUE_TYPE_FLOAT544  231
#define Q_VALUE_TYPE_UINT552   232
#define Q_VALUE_TYPE_INT552    233
#define Q_VALUE_TYPE_FLOAT552  234
#define Q_VALUE_TYPE_UINT560   235
#define Q_VALUE_TYPE_INT560    236
#define Q_VALUE_TYPE_FLOAT560  237
#define Q_VALUE_TYPE_UINT568   238
#define Q_VALUE_TYPE_INT568    239
#define Q_VALUE_TYPE_FLOAT568  240
#define Q_VALUE_TYPE_UINT576   241
#define Q_VALUE_TYPE_INT576    242
#define Q_VALUE_TYPE_FLOAT576  243
#define Q_VALUE_TYPE_UINT584   244
#define Q_VALUE_TYPE_INT584    245
#define Q_VALUE_TYPE_FLOAT584  246
#define Q_VALUE_TYPE_UINT592   247
#define Q_VALUE_TYPE_INT592    248
#define Q_VALUE_TYPE_FLOAT592  249
#define Q_VALUE_TYPE_UINT600   250
#define Q_VALUE_TYPE_INT600    251
#define Q_VALUE_TYPE_FLOAT600  252
#define Q_VALUE_TYPE_UINT608   253
#define Q_VALUE_TYPE_INT608    254
#define Q_VALUE_TYPE_FLOAT608  255
#define Q_VALUE_TYPE_UINT616   256
#define Q_VALUE_TYPE_INT616    257
#define Q_VALUE_TYPE_FLOAT616  258
#define Q_VALUE_TYPE_UINT624   259
#define Q_VALUE_TYPE_INT624    260
#define Q_VALUE_TYPE_FLOAT624  261
#define Q_VALUE_TYPE_UINT632   262
#define Q_VALUE_TYPE_INT632    263
#define Q_VALUE_TYPE_FLOAT632  264
#define Q_VALUE_TYPE_UINT640   265
#define Q_VALUE_TYPE_INT640    266
#define Q_VALUE_TYPE_FLOAT640  267
#define Q_VALUE_TYPE_UINT648   268
#define Q_VALUE_TYPE_INT648    269
#define Q_VALUE_TYPE_FLOAT648  270
#define Q_VALUE_TYPE_UINT656   271
#define Q_VALUE_TYPE_INT656    272
#define Q_VALUE_TYPE_FLOAT656  273
#define Q_VALUE_TYPE_UINT664   274
#define Q_VALUE_TYPE_INT664    275
#define Q_VALUE_TYPE_FLOAT664  276
#define Q_VALUE_TYPE_UINT672   277
#define Q_VALUE_TYPE_INT672    278
#define Q_VALUE_TYPE_FLOAT672  279
#define Q_VALUE_TYPE_UINT680   280
#define Q_VALUE_TYPE_INT680    281
#define Q_VALUE_TYPE_FLOAT680  282
#define Q_VALUE_TYPE_UINT688   283
#define Q_VALUE_TYPE_INT688    284
#define Q_VALUE_TYPE_FLOAT688  285
#define Q_VALUE_TYPE_UINT696   286
#define Q_VALUE_TYPE_INT696    287
#define Q_VALUE_TYPE_FLOAT696  288
#define Q_VALUE_TYPE_UINT704   289
#define Q_VALUE_TYPE_INT704    290
#define Q_VALUE_TYPE_FLOAT704  291
#define Q_VALUE_TYPE_UINT712   292
#define Q_VALUE_TYPE_INT712    293
#define Q_VALUE_TYPE_FLOAT712  294
#define Q_VALUE_TYPE_UINT720   295
#define Q_VALUE_TYPE_INT720    296
#define Q_VALUE_TYPE_FLOAT720  297
#define Q_VALUE_TYPE_UINT728   298
#define Q_VALUE_TYPE_INT728    299
#define Q_VALUE_TYPE_FLOAT728  300
#define Q_VALUE_TYPE_UINT736   301
#define Q_VALUE_TYPE_INT736    302
#define Q_VALUE_TYPE_FLOAT736  303
#define Q_VALUE_TYPE_UINT744   304
#define Q_VALUE_TYPE_INT744    305
#define Q_VALUE_TYPE_FLOAT744  306
#define Q_VALUE_TYPE_UINT752   307
#define Q_VALUE_TYPE_INT752    308
#define Q_VALUE_TYPE_FLOAT752  309
#define Q_VALUE_TYPE_UINT760   310
#define Q_VALUE_TYPE_INT760    311
#define Q_VALUE_TYPE_FLOAT760  312
#define Q_VALUE_TYPE_UINT768   313
#define Q_VALUE_TYPE_INT768    314
#define Q_VALUE_TYPE_FLOAT768  315
#define Q_VALUE_TYPE_UINT776   316
#define Q_VALUE_TYPE_INT776    317
#define Q_VALUE_TYPE_FLOAT776  318
#define Q_VALUE_TYPE_UINT784   319
#define Q_VALUE_TYPE_INT784    320
#define Q_VALUE_TYPE_FLOAT784  321
#define Q_VALUE_TYPE_UINT792   322
#define Q_VALUE_TYPE_INT792    323
#define Q_VALUE_TYPE_FLOAT792  324
#define Q_VALUE_TYPE_UINT800   325
#define Q_VALUE_TYPE_INT800    326
#define Q_VALUE_TYPE_FLOAT800  327
#define Q_VALUE_TYPE_UINT808   328
#define Q_VALUE_TYPE_INT808    329
#define Q_VALUE_TYPE_FLOAT808  330
#define Q_VALUE_TYPE_UINT816   331
#define Q_VALUE_TYPE_INT816    332
#define Q_VALUE_TYPE_FLOAT816  333
#define Q_VALUE_TYPE_UINT824   334
#define Q_VALUE_TYPE_INT824    335
#define Q_VALUE_TYPE_FLOAT824  336
#define Q_VALUE_TYPE_UINT832   337
#define Q_VALUE_TYPE_INT832    338
#define Q_VALUE_TYPE_FLOAT832  339
#define Q_VALUE_TYPE_UINT840   340
#define Q_VALUE_TYPE_INT840    341
#define Q_VALUE_TYPE_FLOAT840  342
#define Q_VALUE_TYPE_UINT848   343
#define Q_VALUE_TYPE_INT848    344
#define Q_VALUE_TYPE_FLOAT848  345
#define Q_VALUE_TYPE_UINT856   346
#define Q_VALUE_TYPE_INT856    347
#define Q_VALUE_TYPE_FLOAT856  348
#define Q_VALUE_TYPE_UINT864   349
#define Q_VALUE_TYPE_INT864    350
#define Q_VALUE_TYPE_FLOAT864  351
#define Q_VALUE_TYPE_UINT872   352
#define Q_VALUE_TYPE_INT872    353
#define Q_VALUE_TYPE_FLOAT872  354
#define Q_VALUE_TYPE_UINT880   355
#define Q_VALUE_TYPE_INT880    356
#define Q_VALUE_TYPE_FLOAT880  357
#define Q_VALUE_TYPE_UINT888   358
#define Q_VALUE_TYPE_INT888    359
#define Q_VALUE_TYPE_FLOAT888  360
#define Q_VALUE_TYPE_UINT896   361
#define Q_VALUE_TYPE_INT896    362
#define Q_VALUE_TYPE_FLOAT896  363
#define Q_VALUE_TYPE_UINT904   364
#define Q_VALUE_TYPE_INT904    365
#define Q_VALUE_TYPE_FLOAT904  366
#define Q_VALUE_TYPE_UINT912   367
#define Q_VALUE_TYPE_INT912    368
#define Q_VALUE_TYPE_FLOAT912  369
#define Q_VALUE_TYPE_UINT920   370
#define Q_VALUE_TYPE_INT920    371
#define Q_VALUE_TYPE_FLOAT920  372
#define Q_VALUE_TYPE_UINT928   373
#define Q_VALUE_TYPE_INT928    374
#define Q_VALUE_TYPE_FLOAT928  375
#define Q_VALUE_TYPE_UINT936   376
#define Q_VALUE_TYPE_INT936    377
#define Q_VALUE_TYPE_FLOAT936  378
#define Q_VALUE_TYPE_UINT944   379
#define Q_VALUE_TYPE_INT944    380
#define Q_VALUE_TYPE_FLOAT944  381
#define Q_VALUE_TYPE_UINT952   382
#define Q_VALUE_TYPE_INT952    383
#define Q_VALUE_TYPE_FLOAT952  384
#define Q_VALUE_TYPE_UINT960   385
#define Q_VALUE_TYPE_INT960    386
#define Q_VALUE_TYPE_FLOAT960  387
#define Q_VALUE_TYPE_UINT968   388
#define Q_VALUE_TYPE_INT968    389
#define Q_VALUE_TYPE_FLOAT968  390
#define Q_VALUE_TYPE_UINT976   391
#define Q_VALUE_TYPE_INT976    392
#define Q_VALUE_TYPE_FLOAT976  393
#define Q_VALUE_TYPE_UINT984   394
#define Q_VALUE_TYPE_INT984    395
#define Q_VALUE_TYPE_FLOAT984  396
#define Q_VALUE_TYPE_UINT992   397
#define Q_VALUE_TYPE_INT992    398
#define Q_VALUE_TYPE_FLOAT992  399
#define Q_VALUE_TYPE_UINT1000  400
#define Q_VALUE_TYPE_INT1000   401
#define Q_VALUE_TYPE_FLOAT1000 402
#define Q_VALUE_TYPE_UINT1008  403
#define Q_VALUE_TYPE_INT1008   404
#define Q_VALUE_TYPE_FLOAT1008 405
#define Q_VALUE_TYPE_UINT1016  406
#define Q_VALUE_TYPE_INT1016   407
#define Q_VALUE_TYPE_FLOAT1016 408
#define Q_VALUE_TYPE_UINT1024  409
#define Q_VALUE_TYPE_INT1024   410
#define Q_VALUE_TYPE_FLOAT1024 411



#define Q_VALUE_TYPE_UINT8     28
#define Q_VALUE_TYPE_UINT16    29
#define Q_VALUE_TYPE_UINT24    30
#define Q_VALUE_TYPE_UINT32    31 /* base type in ILP64 data model only */
#define Q_VALUE_TYPE_UINT40    32
#define Q_VALUE_TYPE_UINT48    33
#define Q_VALUE_TYPE_UINT56    34
#define Q_VALUE_TYPE_UINT64    35
#define Q_VALUE_TYPE_UINT72    36
#define Q_VALUE_TYPE_UINT80    37
#define Q_VALUE_TYPE_UINT88    38
#define Q_VALUE_TYPE_UINT96    39
#define Q_VALUE_TYPE_UINT104   40
#define Q_VALUE_TYPE_UINT112   41
#define Q_VALUE_TYPE_UINT120   42
#define Q_VALUE_TYPE_UINT128   43
#define Q_VALUE_TYPE_UINT136   44
#define Q_VALUE_TYPE_UINT144   45
#define Q_VALUE_TYPE_UINT152   46
#define Q_VALUE_TYPE_UINT160   47
#define Q_VALUE_TYPE_UINT168   48
#define Q_VALUE_TYPE_UINT176   49
#define Q_VALUE_TYPE_UINT184   50
#define Q_VALUE_TYPE_UINT192   51
#define Q_VALUE_TYPE_UINT200   52
#define Q_VALUE_TYPE_UINT208   53
#define Q_VALUE_TYPE_UINT216   54
#define Q_VALUE_TYPE_UINT224   55
#define Q_VALUE_TYPE_UINT232   56
#define Q_VALUE_TYPE_UINT240   57
#define Q_VALUE_TYPE_UINT248   58
#define Q_VALUE_TYPE_UINT256   59
#define Q_VALUE_TYPE_UINT264   60
#define Q_VALUE_TYPE_UINT272   61
#define Q_VALUE_TYPE_UINT280   62
#define Q_VALUE_TYPE_UINT288   63
#define Q_VALUE_TYPE_UINT296   64
#define Q_VALUE_TYPE_UINT304   65
#define Q_VALUE_TYPE_UINT312   66
#define Q_VALUE_TYPE_UINT320   67
#define Q_VALUE_TYPE_UINT328   68
#define Q_VALUE_TYPE_UINT336   69
#define Q_VALUE_TYPE_UINT344   70
#define Q_VALUE_TYPE_UINT352   71
#define Q_VALUE_TYPE_UINT360   72
#define Q_VALUE_TYPE_UINT368   73
#define Q_VALUE_TYPE_UINT376   74
#define Q_VALUE_TYPE_UINT384   75
#define Q_VALUE_TYPE_UINT392   76
#define Q_VALUE_TYPE_UINT400   77
#define Q_VALUE_TYPE_UINT408   78
#define Q_VALUE_TYPE_UINT416   79
#define Q_VALUE_TYPE_UINT424   80
#define Q_VALUE_TYPE_UINT432   81
#define Q_VALUE_TYPE_UINT440   82
#define Q_VALUE_TYPE_UINT448   83
#define Q_VALUE_TYPE_UINT456   84
#define Q_VALUE_TYPE_UINT464   85
#define Q_VALUE_TYPE_UINT472   86
#define Q_VALUE_TYPE_UINT480   87
#define Q_VALUE_TYPE_UINT488   88
#define Q_VALUE_TYPE_UINT496   89
#define Q_VALUE_TYPE_UINT504   90
#define Q_VALUE_TYPE_UINT512   91
#define Q_VALUE_TYPE_UINT520   92
#define Q_VALUE_TYPE_UINT528   93
#define Q_VALUE_TYPE_UINT536   94
#define Q_VALUE_TYPE_UINT544   95
#define Q_VALUE_TYPE_UINT552   96
#define Q_VALUE_TYPE_UINT560   97
#define Q_VALUE_TYPE_UINT568   98
#define Q_VALUE_TYPE_UINT576   99
#define Q_VALUE_TYPE_UINT584  100
#define Q_VALUE_TYPE_UINT592  101
#define Q_VALUE_TYPE_UINT600  102
#define Q_VALUE_TYPE_UINT608  103
#define Q_VALUE_TYPE_UINT616  104
#define Q_VALUE_TYPE_UINT624  105
#define Q_VALUE_TYPE_UINT632  106
#define Q_VALUE_TYPE_UINT640  107
#define Q_VALUE_TYPE_UINT648  108
#define Q_VALUE_TYPE_UINT656  109
#define Q_VALUE_TYPE_UINT664  110
#define Q_VALUE_TYPE_UINT672  111
#define Q_VALUE_TYPE_UINT680  112
#define Q_VALUE_TYPE_UINT688  113
#define Q_VALUE_TYPE_UINT696  114
#define Q_VALUE_TYPE_UINT704  115
#define Q_VALUE_TYPE_UINT712  116
#define Q_VALUE_TYPE_UINT720  117
#define Q_VALUE_TYPE_UINT728  118
#define Q_VALUE_TYPE_UINT736  119
#define Q_VALUE_TYPE_UINT744  120
#define Q_VALUE_TYPE_UINT752  121
#define Q_VALUE_TYPE_UINT760  122
#define Q_VALUE_TYPE_UINT768  123
#define Q_VALUE_TYPE_UINT776  124
#define Q_VALUE_TYPE_UINT784  125
#define Q_VALUE_TYPE_UINT792  126
#define Q_VALUE_TYPE_UINT800  127
#define Q_VALUE_TYPE_UINT808  128
#define Q_VALUE_TYPE_UINT816  129
#define Q_VALUE_TYPE_UINT824  130
#define Q_VALUE_TYPE_UINT832  131
#define Q_VALUE_TYPE_UINT840  132
#define Q_VALUE_TYPE_UINT848  133
#define Q_VALUE_TYPE_UINT856  134
#define Q_VALUE_TYPE_UINT864  135
#define Q_VALUE_TYPE_UINT872  136
#define Q_VALUE_TYPE_UINT880  137
#define Q_VALUE_TYPE_UINT888  138
#define Q_VALUE_TYPE_UINT896  139
#define Q_VALUE_TYPE_UINT904  140
#define Q_VALUE_TYPE_UINT912  141
#define Q_VALUE_TYPE_UINT920  142
#define Q_VALUE_TYPE_UINT928  143
#define Q_VALUE_TYPE_UINT936  144
#define Q_VALUE_TYPE_UINT944  145
#define Q_VALUE_TYPE_UINT952  146
#define Q_VALUE_TYPE_UINT960  147
#define Q_VALUE_TYPE_UINT968  148
#define Q_VALUE_TYPE_UINT976  149
#define Q_VALUE_TYPE_UINT984  150
#define Q_VALUE_TYPE_UINT992  151
#define Q_VALUE_TYPE_UINT1000 152
#define Q_VALUE_TYPE_UINT1008 153
#define Q_VALUE_TYPE_UINT1016 154
#define Q_VALUE_TYPE_UINT1024 155
#define Q_VALUE_TYPE_INT8     156
#define Q_VALUE_TYPE_INT16    157
#define Q_VALUE_TYPE_INT24    158
#define Q_VALUE_TYPE_INT32    159 /* base type in ILP64 data model only */
#define Q_VALUE_TYPE_INT40    160
#define Q_VALUE_TYPE_INT48    161
#define Q_VALUE_TYPE_INT56    162
#define Q_VALUE_TYPE_INT64    163
#define Q_VALUE_TYPE_INT72    164
#define Q_VALUE_TYPE_INT80    165
#define Q_VALUE_TYPE_INT88    166
#define Q_VALUE_TYPE_INT96    167
#define Q_VALUE_TYPE_INT104   168
#define Q_VALUE_TYPE_INT112   169
#define Q_VALUE_TYPE_INT120   170
#define Q_VALUE_TYPE_INT128   171
#define Q_VALUE_TYPE_INT136   172
#define Q_VALUE_TYPE_INT144   173
#define Q_VALUE_TYPE_INT152   174
#define Q_VALUE_TYPE_INT160   175
#define Q_VALUE_TYPE_INT168   176
#define Q_VALUE_TYPE_INT176   177
#define Q_VALUE_TYPE_INT184   178
#define Q_VALUE_TYPE_INT192   179
#define Q_VALUE_TYPE_INT200   180
#define Q_VALUE_TYPE_INT208   181
#define Q_VALUE_TYPE_INT216   182
#define Q_VALUE_TYPE_INT224   183
#define Q_VALUE_TYPE_INT232   184
#define Q_VALUE_TYPE_INT240   185
#define Q_VALUE_TYPE_INT248   186
#define Q_VALUE_TYPE_INT256   187
#define Q_VALUE_TYPE_INT264   188
#define Q_VALUE_TYPE_INT272   189
#define Q_VALUE_TYPE_INT280   190
#define Q_VALUE_TYPE_INT288   191
#define Q_VALUE_TYPE_INT296   192
#define Q_VALUE_TYPE_INT304   193
#define Q_VALUE_TYPE_INT312   194
#define Q_VALUE_TYPE_INT320   195
#define Q_VALUE_TYPE_INT328   196
#define Q_VALUE_TYPE_INT336   197
#define Q_VALUE_TYPE_INT344   198
#define Q_VALUE_TYPE_INT352   199
#define Q_VALUE_TYPE_INT360   200
#define Q_VALUE_TYPE_INT368   201
#define Q_VALUE_TYPE_INT376   202
#define Q_VALUE_TYPE_INT384   203
#define Q_VALUE_TYPE_INT392   204
#define Q_VALUE_TYPE_INT400   205
#define Q_VALUE_TYPE_INT408   206
#define Q_VALUE_TYPE_INT416   207
#define Q_VALUE_TYPE_INT424   208
#define Q_VALUE_TYPE_INT432   209
#define Q_VALUE_TYPE_INT440   210
#define Q_VALUE_TYPE_INT448   211
#define Q_VALUE_TYPE_INT456   212
#define Q_VALUE_TYPE_INT464   213
#define Q_VALUE_TYPE_INT472   214
#define Q_VALUE_TYPE_INT480   215
#define Q_VALUE_TYPE_INT488   216
#define Q_VALUE_TYPE_INT496   217
#define Q_VALUE_TYPE_INT504   218
#define Q_VALUE_TYPE_INT512   219
#define Q_VALUE_TYPE_INT520   220
#define Q_VALUE_TYPE_INT528   221
#define Q_VALUE_TYPE_INT536   222
#define Q_VALUE_TYPE_INT544   223
#define Q_VALUE_TYPE_INT552   224
#define Q_VALUE_TYPE_INT560   225
#define Q_VALUE_TYPE_INT568   226
#define Q_VALUE_TYPE_INT576   227
#define Q_VALUE_TYPE_INT584   228
#define Q_VALUE_TYPE_INT592   229
#define Q_VALUE_TYPE_INT600   230
#define Q_VALUE_TYPE_INT608   231
#define Q_VALUE_TYPE_INT616   232
#define Q_VALUE_TYPE_INT624   233
#define Q_VALUE_TYPE_INT632   234
#define Q_VALUE_TYPE_INT640   235
#define Q_VALUE_TYPE_INT648   236
#define Q_VALUE_TYPE_INT656   237
#define Q_VALUE_TYPE_INT664   238
#define Q_VALUE_TYPE_INT672   239
#define Q_VALUE_TYPE_INT680   240
#define Q_VALUE_TYPE_INT688   241
#define Q_VALUE_TYPE_INT696   242
#define Q_VALUE_TYPE_INT704   243
#define Q_VALUE_TYPE_INT712   244
#define Q_VALUE_TYPE_INT720   245
#define Q_VALUE_TYPE_INT728   246
#define Q_VALUE_TYPE_INT736   247
#define Q_VALUE_TYPE_INT744   248
#define Q_VALUE_TYPE_INT752   249
#define Q_VALUE_TYPE_INT760   250
#define Q_VALUE_TYPE_INT768   251
#define Q_VALUE_TYPE_INT776   252
#define Q_VALUE_TYPE_INT784   253
#define Q_VALUE_TYPE_INT792   254
#define Q_VALUE_TYPE_INT800   255
#define Q_VALUE_TYPE_INT808   256
#define Q_VALUE_TYPE_INT816   257
#define Q_VALUE_TYPE_INT824   258
#define Q_VALUE_TYPE_INT832   259
#define Q_VALUE_TYPE_INT840   260
#define Q_VALUE_TYPE_INT848   261
#define Q_VALUE_TYPE_INT856   262
#define Q_VALUE_TYPE_INT864   263
#define Q_VALUE_TYPE_INT872   264
#define Q_VALUE_TYPE_INT880   265
#define Q_VALUE_TYPE_INT888   266
#define Q_VALUE_TYPE_INT896   267
#define Q_VALUE_TYPE_INT904   268
#define Q_VALUE_TYPE_INT912   269
#define Q_VALUE_TYPE_INT920   270
#define Q_VALUE_TYPE_INT928   271
#define Q_VALUE_TYPE_INT936   272
#define Q_VALUE_TYPE_INT944   273
#define Q_VALUE_TYPE_INT952   274
#define Q_VALUE_TYPE_INT960   275
#define Q_VALUE_TYPE_INT968   276
#define Q_VALUE_TYPE_INT976   277
#define Q_VALUE_TYPE_INT984   278
#define Q_VALUE_TYPE_INT992   279
#define Q_VALUE_TYPE_INT1000  280
#define Q_VALUE_TYPE_INT1008  281
#define Q_VALUE_TYPE_INT1016  282
#define Q_VALUE_TYPE_INT1024 283

#define Q_KEY_BITS_VALUE_TYPE 16
#define Q_KEY_LAST_VALUE_TYPE Q_VALUE_TYPE_REAL

#define Q_VALUE_FORMAT_8BIT_NATURAL	    0
#define Q_VALUE_FORMAT_16BIT_NATURAL	    1
#define Q_VALUE_FORMAT_32BIT_NATURAL	    2
#define Q_VALUE_FORMAT_64BIT_NATURAL	    3
#define Q_VALUE_FORMAT_128BIT_NATURAL	    4
#define Q_VALUE_FORMAT_256BIT_NATURAL	    5
#define Q_VALUE_FORMAT_512BIT_NATURAL	    6
#define Q_VALUE_FORMAT_1024BIT_NATURAL	    7
#define Q_VALUE_FORMAT_8BIT_INTEGER	    8
#define Q_VALUE_FORMAT_16BIT_INTEGER	    9
#define Q_VALUE_FORMAT_32BIT_INTEGER	   10
#define Q_VALUE_FORMAT_64BIT_INTEGER	   11
#define Q_VALUE_FORMAT_128BIT_INTEGER	   12
#define Q_VALUE_FORMAT_256BIT_INTEGER	   13
#define Q_VALUE_FORMAT_512BIT_INTEGER	   14
#define Q_VALUE_FORMAT_1024BIT_INTEGER	   15
#define Q_VALUE_FORMAT_IEEE_754_BINARY16   16
#define Q_VALUE_FORMAT_IEEE_754_BINARY32   17
#define Q_VALUE_FORMAT_IEEE_754_BINARY64   18
#define Q_VALUE_FORMAT_IEEE_754_BINARY128  19
#define Q_VALUE_FORMAT_IEEE_754_DECIMAL32  20
#define Q_VALUE_FORMAT_IEEE_754_DECIMAL64  21
#define Q_VALUE_FORMAT_IEEE_754_DECIMAL128 22

#define Q_KEY_BITS_VALUE_FORMAT	8
#define Q_KEY_LAST_VALUE_FORMAT	Q_VALUE_FORMAT_IEEE_754_DECIMAL12

#endif /* __Q_keys_value_H__ */
