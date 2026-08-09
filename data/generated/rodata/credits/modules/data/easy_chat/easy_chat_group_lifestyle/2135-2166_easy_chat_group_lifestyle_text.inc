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
	@ Replaced baserom.gba range: offset=0x57769E, size=0x21E
	@ semanticized-mass: resolved embedded ROM pointers
	.byte 0x00, 0x00
	.4byte gText_Rom_5775CC @ ROM pointer 0x085775CC
	.byte 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xD2, 0x75, 0x57, 0x08, 0x01, 0x00, 0x00, 0x00
	.byte 0x01, 0x00, 0x00, 0x00
	.4byte gText_Rom_5775D5 @ ROM pointer 0x085775D5
	.byte 0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00
	.4byte gText_Rom_5775D9 @ ROM pointer 0x085775D9
	.byte 0x03, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00
	.4byte gText_Rom_5775DF @ ROM pointer 0x085775DF
	.byte 0x04, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00
	.4byte gText_Rom_5775E3 @ ROM pointer 0x085775E3
	.byte 0x05, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00
	.4byte gText_Rom_5775E7 @ ROM pointer 0x085775E7
	.byte 0x06, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00
	.4byte gText_Rom_5775EC @ ROM pointer 0x085775EC
	.byte 0x07, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xF0, 0x75, 0x57, 0x08, 0x08, 0x00, 0x00, 0x00
	.byte 0x01, 0x00, 0x00, 0x00
	.4byte gText_Rom_5775F3 @ ROM pointer 0x085775F3
	.byte 0x09, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00
	.4byte gText_Rom_5775F8 @ ROM pointer 0x085775F8
	.byte 0x0A, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00
	.4byte gText_Rom_5775FC @ ROM pointer 0x085775FC
	.byte 0x0B, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00
	.4byte gText_Rom_577601 @ ROM pointer 0x08577601
	.byte 0x0C, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00
	.4byte gText_Rom_577606 @ ROM pointer 0x08577606
	.byte 0x0D, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00
	.4byte gText_Rom_57760A @ ROM pointer 0x0857760A
	.byte 0x0E, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00
	.4byte gText_Rom_57760F @ ROM pointer 0x0857760F
	.byte 0x0F, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00
	.4byte gText_Rom_577615 @ ROM pointer 0x08577615
	.byte 0x10, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00
	.4byte gText_Rom_57761B @ ROM pointer 0x0857761B
	.byte 0x11, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00
	.4byte gText_Rom_57761F @ ROM pointer 0x0857761F
	.byte 0x12, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00
	.4byte gText_Rom_577625 @ ROM pointer 0x08577625
	.byte 0x13, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00
	.4byte gText_Rom_57762A @ ROM pointer 0x0857762A
	.byte 0x14, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00
	.4byte gText_Rom_57762F @ ROM pointer 0x0857762F
	.byte 0x15, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00
	.4byte gText_Rom_577634 @ ROM pointer 0x08577634
	.byte 0x16, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00
	.4byte gText_Rom_577638 @ ROM pointer 0x08577638
	.byte 0x17, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00
	.4byte gText_Rom_57763D @ ROM pointer 0x0857763D
	.byte 0x18, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00
	.4byte gText_Rom_577642 @ ROM pointer 0x08577642
	.byte 0x19, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00
	.4byte gText_Rom_577646 @ ROM pointer 0x08577646
	.byte 0x1A, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00
	.4byte gText_Rom_57764B @ ROM pointer 0x0857764B
	.byte 0x1B, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00
	.4byte gText_Rom_57764F @ ROM pointer 0x0857764F
	.byte 0x1C, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00
	.4byte gText_Rom_577653 @ ROM pointer 0x08577653
	.byte 0x1D, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00
	.4byte gText_Rom_577657 @ ROM pointer 0x08577657
	.byte 0x1E, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00
	.4byte gText_Rom_57765B @ ROM pointer 0x0857765B
	.byte 0x1F, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00
	.4byte gText_Rom_577660 @ ROM pointer 0x08577660
	.byte 0x20, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00
	.4byte gText_Rom_577664 @ ROM pointer 0x08577664
	.byte 0x21, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00
	.4byte gText_Rom_57766A @ ROM pointer 0x0857766A
	.byte 0x22, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00
	.4byte gText_Rom_577670 @ ROM pointer 0x08577670
	.byte 0x23, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00
	.4byte gText_Rom_577674 @ ROM pointer 0x08577674
	.byte 0x24, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00
	.4byte gText_Rom_577678 @ ROM pointer 0x08577678
	.byte 0x25, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00
	.4byte gText_Rom_57767E @ ROM pointer 0x0857767E
	.byte 0x26, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x83, 0x76, 0x57, 0x08, 0x27, 0x00, 0x00, 0x00
	.byte 0x01, 0x00, 0x00, 0x00
	.4byte gText_Rom_577686 @ ROM pointer 0x08577686
	.byte 0x28, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00
	.4byte gText_Rom_57768C @ ROM pointer 0x0857768C
	.byte 0x29, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00
	.4byte gText_Rom_577690 @ ROM pointer 0x08577690
	.byte 0x2A, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00
	.4byte gText_Rom_577694 @ ROM pointer 0x08577694
	.byte 0x2B, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00
	.4byte gText_Rom_577699 @ ROM pointer 0x08577699
	.byte 0x2C, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00
