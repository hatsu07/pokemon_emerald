	@ src/data/easy_chat/easy_chat_group_lifestyle.h:172 easy_chat_group_lifestyle_line_172
	.globl gText_Rom_57764F
gText_Rom_57764F: @ 0x0857764F
	.string "でんわ$"
	.if (. - gText_Rom_57764F) > 0x4
	.error "gText_Rom_57764F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57764F) < 0x4
	.space 0x4 - (. - gText_Rom_57764F)
	.endif

	@ src/data/easy_chat/easy_chat_group_lifestyle.h:178 easy_chat_group_lifestyle_line_178 (+1 aliases)
	.globl gText_Rom_577653
gText_Rom_577653: @ 0x08577653
	.string "どうぐ$"
	.if (. - gText_Rom_577653) > 0x4
	.error "gText_Rom_577653 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577653) < 0x4
	.space 0x4 - (. - gText_Rom_577653)
	.endif

	@ src/data/easy_chat/easy_chat_group_lifestyle.h:184 easy_chat_group_lifestyle_line_184 (+5 aliases)
	.globl gText_Rom_577657
gText_Rom_577657: @ 0x08577657
	.string "なまえ$"
	.if (. - gText_Rom_577657) > 0x4
	.error "gText_Rom_577657 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577657) < 0x4
	.space 0x4 - (. - gText_Rom_577657)
	.endif

	@ src/data/easy_chat/easy_chat_group_lifestyle.h:190 easy_chat_group_lifestyle_line_190
	.globl gText_Rom_57765B
gText_Rom_57765B: @ 0x0857765B
	.string "ニュース$"
	.if (. - gText_Rom_57765B) > 0x5
	.error "gText_Rom_57765B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57765B) < 0x5
	.space 0x5 - (. - gText_Rom_57765B)
	.endif

	@ src/data/easy_chat/easy_chat_group_lifestyle.h:196 easy_chat_group_lifestyle_line_196
	.globl gText_Rom_577660
gText_Rom_577660: @ 0x08577660
	.string "にんき$"
	.if (. - gText_Rom_577660) > 0x4
	.error "gText_Rom_577660 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577660) < 0x4
	.space 0x4 - (. - gText_Rom_577660)
	.endif

	@ src/data/easy_chat/easy_chat_group_lifestyle.h:202 easy_chat_group_lifestyle_line_202
	.globl gText_Rom_577664
gText_Rom_577664: @ 0x08577664
	.string "パーティー$"
	.if (. - gText_Rom_577664) > 0x6
	.error "gText_Rom_577664 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577664) < 0x6
	.space 0x6 - (. - gText_Rom_577664)
	.endif

	@ src/data/easy_chat/easy_chat_group_lifestyle.h:208 easy_chat_group_lifestyle_line_208
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_57766A
gText_Rom_57766A: @ 0x0857766A
	.string "べんきょう$"
	.if (. - gText_Rom_57766A) != 0x6
	.error "gText_Rom_57766A must retain its original byte length"
	.endif
	.globl gText_Rom_57766C
	.set gText_Rom_57766C, gText_Rom_57766A + 0x2

	@ src/data/easy_chat/easy_chat_group_lifestyle.h:214 easy_chat_group_lifestyle_line_214
	.globl gText_Rom_577670
gText_Rom_577670: @ 0x08577670
	.string "マシン$"
	.if (. - gText_Rom_577670) > 0x4
	.error "gText_Rom_577670 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577670) < 0x4
	.space 0x4 - (. - gText_Rom_577670)
	.endif

	@ src/data/easy_chat/easy_chat_group_lifestyle.h:220 easy_chat_group_lifestyle_line_220 (+1 aliases)
	.globl gText_Rom_577674
gText_Rom_577674: @ 0x08577674
	.string "メール$"
	.if (. - gText_Rom_577674) > 0x4
	.error "gText_Rom_577674 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577674) < 0x4
	.space 0x4 - (. - gText_Rom_577674)
	.endif

	@ src/data/easy_chat/easy_chat_group_lifestyle.h:226 easy_chat_group_lifestyle_line_226
	.globl gText_Rom_577678
gText_Rom_577678: @ 0x08577678
	.string "メッセージ$"
	.if (. - gText_Rom_577678) > 0x6
	.error "gText_Rom_577678 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577678) < 0x6
	.space 0x6 - (. - gText_Rom_577678)
	.endif

	@ src/data/easy_chat/easy_chat_group_lifestyle.h:232 easy_chat_group_lifestyle_line_232
	.globl gText_Rom_57767E
gText_Rom_57767E: @ 0x0857767E
	.string "やくそく$"
	.if (. - gText_Rom_57767E) > 0x5
	.error "gText_Rom_57767E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57767E) < 0x5
	.space 0x5 - (. - gText_Rom_57767E)
	.endif
	@ Decoded text from ROM range: offset=0x577683, size=0x3
	.string "ゆめ$"

	@ src/data/easy_chat/easy_chat_group_lifestyle.h:244 easy_chat_group_lifestyle_line_244
	.globl gText_Rom_577686
gText_Rom_577686: @ 0x08577686
	.string "ようちえん$"
	.if (. - gText_Rom_577686) > 0x6
	.error "gText_Rom_577686 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577686) < 0x6
	.space 0x6 - (. - gText_Rom_577686)
	.endif

	@ src/data/easy_chat/easy_chat_group_lifestyle.h:250 easy_chat_group_lifestyle_line_250
	.globl gText_Rom_57768C
gText_Rom_57768C: @ 0x0857768C
	.string "ライフ$"
	.if (. - gText_Rom_57768C) > 0x4
	.error "gText_Rom_57768C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57768C) < 0x4
	.space 0x4 - (. - gText_Rom_57768C)
	.endif

	@ src/data/easy_chat/easy_chat_group_lifestyle.h:256 easy_chat_group_lifestyle_line_256
	.globl gText_Rom_577690
gText_Rom_577690: @ 0x08577690
	.string "ラジオ$"
	.if (. - gText_Rom_577690) > 0x4
	.error "gText_Rom_577690 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577690) < 0x4
	.space 0x4 - (. - gText_Rom_577690)
	.endif

	@ src/data/easy_chat/easy_chat_group_lifestyle.h:262 easy_chat_group_lifestyle_line_262
	.globl gText_Rom_577694
gText_Rom_577694: @ 0x08577694
	.string "レンタル$"
	.if (. - gText_Rom_577694) > 0x5
	.error "gText_Rom_577694 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577694) < 0x5
	.space 0x5 - (. - gText_Rom_577694)
	.endif

	@ src/data/easy_chat/easy_chat_group_lifestyle.h:268 easy_chat_group_lifestyle_line_268
	.globl gText_Rom_577699
gText_Rom_577699: @ 0x08577699
	.string "ワールド$"
	.if (. - gText_Rom_577699) > 0x5
	.error "gText_Rom_577699 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577699) < 0x5
	.space 0x5 - (. - gText_Rom_577699)
	.endif
	@ analyzed canonical ROM range 0x0857769E-0x085778BB
sAnalyzedData_0857769E: @ 0x0857769E
	@ structured u16 table (semantic role inferred only to scalar width)
	.2byte 0x0000, 0x75CC, 0x0857, 0x0000, 0x0000, 0x0001, 0x0000, 0x75D2
	.2byte 0x0857, 0x0001, 0x0000, 0x0001, 0x0000, 0x75D5, 0x0857, 0x0002
	.2byte 0x0000, 0x0001, 0x0000, 0x75D9, 0x0857, 0x0003, 0x0000, 0x0001
	.2byte 0x0000, 0x75DF, 0x0857, 0x0004, 0x0000, 0x0001, 0x0000, 0x75E3
	.2byte 0x0857, 0x0005, 0x0000, 0x0001, 0x0000, 0x75E7, 0x0857, 0x0006
	.2byte 0x0000, 0x0001, 0x0000, 0x75EC, 0x0857, 0x0007, 0x0000, 0x0001
	.2byte 0x0000, 0x75F0, 0x0857, 0x0008, 0x0000, 0x0001, 0x0000, 0x75F3
	.2byte 0x0857, 0x0009, 0x0000, 0x0001, 0x0000, 0x75F8, 0x0857, 0x000A
	.2byte 0x0000, 0x0001, 0x0000, 0x75FC, 0x0857, 0x000B, 0x0000, 0x0001
	.2byte 0x0000, 0x7601, 0x0857, 0x000C, 0x0000, 0x0001, 0x0000, 0x7606
	.2byte 0x0857, 0x000D, 0x0000, 0x0001, 0x0000, 0x760A, 0x0857, 0x000E
	.2byte 0x0000, 0x0001, 0x0000, 0x760F, 0x0857, 0x000F, 0x0000, 0x0001
	.2byte 0x0000, 0x7615, 0x0857, 0x0010, 0x0000, 0x0001, 0x0000, 0x761B
	.2byte 0x0857, 0x0011, 0x0000, 0x0001, 0x0000, 0x761F, 0x0857, 0x0012
	.2byte 0x0000, 0x0001, 0x0000, 0x7625, 0x0857, 0x0013, 0x0000, 0x0001
	.2byte 0x0000, 0x762A, 0x0857, 0x0014, 0x0000, 0x0001, 0x0000, 0x762F
	.2byte 0x0857, 0x0015, 0x0000, 0x0001, 0x0000, 0x7634, 0x0857, 0x0016
	.2byte 0x0000, 0x0001, 0x0000, 0x7638, 0x0857, 0x0017, 0x0000, 0x0001
	.2byte 0x0000, 0x763D, 0x0857, 0x0018, 0x0000, 0x0001, 0x0000, 0x7642
	.2byte 0x0857, 0x0019, 0x0000, 0x0001, 0x0000, 0x7646, 0x0857, 0x001A
	.2byte 0x0000, 0x0001, 0x0000, 0x764B, 0x0857, 0x001B, 0x0000, 0x0001
	.2byte 0x0000, 0x764F, 0x0857, 0x001C, 0x0000, 0x0001, 0x0000, 0x7653
	.2byte 0x0857, 0x001D, 0x0000, 0x0001, 0x0000, 0x7657, 0x0857, 0x001E
	.2byte 0x0000, 0x0001, 0x0000, 0x765B, 0x0857, 0x001F, 0x0000, 0x0001
	.2byte 0x0000, 0x7660, 0x0857, 0x0020, 0x0000, 0x0001, 0x0000, 0x7664
	.2byte 0x0857, 0x0021, 0x0000, 0x0001, 0x0000, 0x766A, 0x0857, 0x0022
	.2byte 0x0000, 0x0001, 0x0000, 0x7670, 0x0857, 0x0023, 0x0000, 0x0001
	.2byte 0x0000, 0x7674, 0x0857, 0x0024, 0x0000, 0x0001, 0x0000, 0x7678
	.2byte 0x0857, 0x0025, 0x0000, 0x0001, 0x0000, 0x767E, 0x0857, 0x0026
	.2byte 0x0000, 0x0001, 0x0000, 0x7683, 0x0857, 0x0027, 0x0000, 0x0001
	.2byte 0x0000, 0x7686, 0x0857, 0x0028, 0x0000, 0x0001, 0x0000, 0x768C
	.2byte 0x0857, 0x0029, 0x0000, 0x0001, 0x0000, 0x7690, 0x0857, 0x002A
	.2byte 0x0000, 0x0001, 0x0000, 0x7694, 0x0857, 0x002B, 0x0000, 0x0001
	.2byte 0x0000, 0x7699, 0x0857, 0x002C, 0x0000, 0x0001, 0x0000
