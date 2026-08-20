	@ src/data/easy_chat/easy_chat_group_lifestyle.h:172 easy_chat_group_lifestyle_line_172
	.globl gText_Rom_57764F
gText_Rom_57764F: @ 0x0857764F
	.string "でんわ{EOS}"
	.if (. - gText_Rom_57764F) > 0x4
	.error "gText_Rom_57764F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57764F) < 0x4
	.space 0x4 - (. - gText_Rom_57764F)
	.endif

	@ src/data/easy_chat/easy_chat_group_lifestyle.h:178 easy_chat_group_lifestyle_line_178 (+1 aliases)
	.globl gText_Rom_577653
gText_Rom_577653: @ 0x08577653
	.string "どうぐ{EOS}"
	.if (. - gText_Rom_577653) > 0x4
	.error "gText_Rom_577653 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577653) < 0x4
	.space 0x4 - (. - gText_Rom_577653)
	.endif

	@ src/data/easy_chat/easy_chat_group_lifestyle.h:184 easy_chat_group_lifestyle_line_184 (+5 aliases)
	.globl gText_Rom_577657
gText_Rom_577657: @ 0x08577657
	.string "なまえ{EOS}"
	.if (. - gText_Rom_577657) > 0x4
	.error "gText_Rom_577657 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577657) < 0x4
	.space 0x4 - (. - gText_Rom_577657)
	.endif

	@ src/data/easy_chat/easy_chat_group_lifestyle.h:190 easy_chat_group_lifestyle_line_190
	.globl gText_Rom_57765B
gText_Rom_57765B: @ 0x0857765B
	.string "ニュース{EOS}"
	.if (. - gText_Rom_57765B) > 0x5
	.error "gText_Rom_57765B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57765B) < 0x5
	.space 0x5 - (. - gText_Rom_57765B)
	.endif

	@ src/data/easy_chat/easy_chat_group_lifestyle.h:196 easy_chat_group_lifestyle_line_196
	.globl gText_Rom_577660
gText_Rom_577660: @ 0x08577660
	.string "にんき{EOS}"
	.if (. - gText_Rom_577660) > 0x4
	.error "gText_Rom_577660 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577660) < 0x4
	.space 0x4 - (. - gText_Rom_577660)
	.endif

	@ src/data/easy_chat/easy_chat_group_lifestyle.h:202 easy_chat_group_lifestyle_line_202
	.globl gText_Rom_577664
gText_Rom_577664: @ 0x08577664
	.string "パーティー{EOS}"
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
	.string "べんきょう{EOS}"
	.if (. - gText_Rom_57766A) != 0x6
	.error "gText_Rom_57766A must retain its original byte length"
	.endif
	.globl gText_Rom_57766C
	.set gText_Rom_57766C, gText_Rom_57766A + 0x2

	@ src/data/easy_chat/easy_chat_group_lifestyle.h:214 easy_chat_group_lifestyle_line_214
	.globl gText_Rom_577670
gText_Rom_577670: @ 0x08577670
	.string "マシン{EOS}"
	.if (. - gText_Rom_577670) > 0x4
	.error "gText_Rom_577670 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577670) < 0x4
	.space 0x4 - (. - gText_Rom_577670)
	.endif

	@ src/data/easy_chat/easy_chat_group_lifestyle.h:220 easy_chat_group_lifestyle_line_220 (+1 aliases)
	.globl gText_Rom_577674
gText_Rom_577674: @ 0x08577674
	.string "メール{EOS}"
	.if (. - gText_Rom_577674) > 0x4
	.error "gText_Rom_577674 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577674) < 0x4
	.space 0x4 - (. - gText_Rom_577674)
	.endif

	@ src/data/easy_chat/easy_chat_group_lifestyle.h:226 easy_chat_group_lifestyle_line_226
	.globl gText_Rom_577678
gText_Rom_577678: @ 0x08577678
	.string "メッセージ{EOS}"
	.if (. - gText_Rom_577678) > 0x6
	.error "gText_Rom_577678 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577678) < 0x6
	.space 0x6 - (. - gText_Rom_577678)
	.endif

	@ src/data/easy_chat/easy_chat_group_lifestyle.h:232 easy_chat_group_lifestyle_line_232
	.globl gText_Rom_57767E
gText_Rom_57767E: @ 0x0857767E
	.string "やくそく{EOS}"
	.if (. - gText_Rom_57767E) > 0x5
	.error "gText_Rom_57767E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57767E) < 0x5
	.space 0x5 - (. - gText_Rom_57767E)
	.endif
	@ Decoded text from ROM range: offset=0x577683, size=0x3
	.string "ゆめ{EOS}"

	@ src/data/easy_chat/easy_chat_group_lifestyle.h:244 easy_chat_group_lifestyle_line_244
	.globl gText_Rom_577686
gText_Rom_577686: @ 0x08577686
	.string "ようちえん{EOS}"
	.if (. - gText_Rom_577686) > 0x6
	.error "gText_Rom_577686 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577686) < 0x6
	.space 0x6 - (. - gText_Rom_577686)
	.endif

	@ src/data/easy_chat/easy_chat_group_lifestyle.h:250 easy_chat_group_lifestyle_line_250
	.globl gText_Rom_57768C
gText_Rom_57768C: @ 0x0857768C
	.string "ライフ{EOS}"
	.if (. - gText_Rom_57768C) > 0x4
	.error "gText_Rom_57768C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57768C) < 0x4
	.space 0x4 - (. - gText_Rom_57768C)
	.endif

	@ src/data/easy_chat/easy_chat_group_lifestyle.h:256 easy_chat_group_lifestyle_line_256
	.globl gText_Rom_577690
gText_Rom_577690: @ 0x08577690
	.string "ラジオ{EOS}"
	.if (. - gText_Rom_577690) > 0x4
	.error "gText_Rom_577690 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577690) < 0x4
	.space 0x4 - (. - gText_Rom_577690)
	.endif

	@ src/data/easy_chat/easy_chat_group_lifestyle.h:262 easy_chat_group_lifestyle_line_262
	.globl gText_Rom_577694
gText_Rom_577694: @ 0x08577694
	.string "レンタル{EOS}"
	.if (. - gText_Rom_577694) > 0x5
	.error "gText_Rom_577694 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577694) < 0x5
	.space 0x5 - (. - gText_Rom_577694)
	.endif

	@ src/data/easy_chat/easy_chat_group_lifestyle.h:268 easy_chat_group_lifestyle_line_268
	.globl gText_Rom_577699
gText_Rom_577699: @ 0x08577699
	.string "ワールド{EOS}"
	.if (. - gText_Rom_577699) > 0x5
	.error "gText_Rom_577699 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577699) < 0x5
	.space 0x5 - (. - gText_Rom_577699)
	.endif
	@ analyzed canonical ROM range 0x0857769E-0x085778BB
	@ struct EasyChatWordInfo[]; format verified against every 12-byte record
	@ prefix before aligned word-info array: 0x2 bytes
	.byte 0x00, 0x00
	.globl gEasyChatGroup_Lifestyle
gEasyChatGroup_Lifestyle: @ 0x085776A0
	easy_chat_word_info gText_Rom_5775CC, 0, 1 @ word 0
	easy_chat_word_info 0x085775D2, 1, 1 @ word 1
	easy_chat_word_info gText_Rom_5775D5, 2, 1 @ word 2
	easy_chat_word_info gText_Rom_5775D9, 3, 1 @ word 3
	easy_chat_word_info gText_Rom_5775DF, 4, 1 @ word 4
	easy_chat_word_info gText_Rom_5775E3, 5, 1 @ word 5
	easy_chat_word_info gText_Rom_5775E7, 6, 1 @ word 6
	easy_chat_word_info gText_Rom_5775EC, 7, 1 @ word 7
	easy_chat_word_info 0x085775F0, 8, 1 @ word 8
	easy_chat_word_info gText_Rom_5775F3, 9, 1 @ word 9
	easy_chat_word_info gText_Rom_5775F8, 10, 1 @ word 10
	easy_chat_word_info gText_Rom_5775FC, 11, 1 @ word 11
	easy_chat_word_info gText_Rom_577601, 12, 1 @ word 12
	easy_chat_word_info gText_Rom_577606, 13, 1 @ word 13
	easy_chat_word_info gText_Rom_57760A, 14, 1 @ word 14
	easy_chat_word_info gText_Rom_57760F, 15, 1 @ word 15
	easy_chat_word_info gText_Rom_577615, 16, 1 @ word 16
	easy_chat_word_info gText_Rom_57761B, 17, 1 @ word 17
	easy_chat_word_info gText_Rom_57761F, 18, 1 @ word 18
	easy_chat_word_info gText_Rom_577625, 19, 1 @ word 19
	easy_chat_word_info gText_Rom_57762A, 20, 1 @ word 20
	easy_chat_word_info gText_Rom_57762F, 21, 1 @ word 21
	easy_chat_word_info gText_Rom_577634, 22, 1 @ word 22
	easy_chat_word_info gText_Rom_577638, 23, 1 @ word 23
	easy_chat_word_info gText_Rom_57763D, 24, 1 @ word 24
	easy_chat_word_info gText_Rom_577642, 25, 1 @ word 25
	easy_chat_word_info gText_Rom_577646, 26, 1 @ word 26
	easy_chat_word_info gText_Rom_57764B, 27, 1 @ word 27
	easy_chat_word_info gText_Rom_57764F, 28, 1 @ word 28
	easy_chat_word_info gText_Rom_577653, 29, 1 @ word 29
	easy_chat_word_info gText_Rom_577657, 30, 1 @ word 30
	easy_chat_word_info gText_Rom_57765B, 31, 1 @ word 31
	easy_chat_word_info gText_Rom_577660, 32, 1 @ word 32
	easy_chat_word_info gText_Rom_577664, 33, 1 @ word 33
	easy_chat_word_info gText_Rom_57766A, 34, 1 @ word 34
	easy_chat_word_info gText_Rom_577670, 35, 1 @ word 35
	easy_chat_word_info gText_Rom_577674, 36, 1 @ word 36
	easy_chat_word_info gText_Rom_577678, 37, 1 @ word 37
	easy_chat_word_info gText_Rom_57767E, 38, 1 @ word 38
	easy_chat_word_info 0x08577683, 39, 1 @ word 39
	easy_chat_word_info gText_Rom_577686, 40, 1 @ word 40
	easy_chat_word_info gText_Rom_57768C, 41, 1 @ word 41
	easy_chat_word_info gText_Rom_577690, 42, 1 @ word 42
	easy_chat_word_info gText_Rom_577694, 43, 1 @ word 43
	easy_chat_word_info gText_Rom_577699, 44, 1 @ word 44
