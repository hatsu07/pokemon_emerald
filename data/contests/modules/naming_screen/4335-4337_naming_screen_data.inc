	.globl gText_Rom_5C93ED
gText_Rom_5C93ED: @ 0x085C93ED
	@ Decoded text from ROM range: offset=0x5C93ED, size=0x8
	.string "なし{EOS}"
	.string "かいじょ{EOS}"

	@ asm/berry_tag_screen.s:704 sub_0817804C
	.globl gText_Rom_5C93F5
gText_Rom_5C93F5: @ 0x085C93F5
	.string "？？？{EOS}"
	.if (. - gText_Rom_5C93F5) > 0x4
	.error "gText_Rom_5C93F5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C93F5) < 0x4
	.space 0x4 - (. - gText_Rom_5C93F5)
	.endif

	@ asm/trader.s:150 sub_08133AAC
	.globl gText_Rom_5C93F9
gText_Rom_5C93F9: @ 0x085C93F9
	.string "？？？？？{EOS}"
	.if (. - gText_Rom_5C93F9) > 0x6
	.error "gText_Rom_5C93F9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C93F9) < 0x6
	.space 0x6 - (. - gText_Rom_5C93F9)
	.endif

	@ asm/battle_interface.s:1482 UpdateHpTextInHealthboxInDoubles
	.globl gText_Rom_5C93FF
gText_Rom_5C93FF: @ 0x085C93FF
	.string "/{EOS}"
	.if (. - gText_Rom_5C93FF) > 0x2
	.error "gText_Rom_5C93FF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C93FF) < 0x2
	.space 0x2 - (. - gText_Rom_5C93FF)
	.endif

	@ asm/contest.s:10884 ContestDebugDoPrint
	.globl gText_Rom_5C9401
gText_Rom_5C9401: @ 0x085C9401
	.string "ー{EOS}"
	.if (. - gText_Rom_5C9401) > 0x2
	.error "gText_Rom_5C9401 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9401) < 0x2
	.space 0x2 - (. - gText_Rom_5C9401)
	.endif
	.globl gText_Rom_5C9403
gText_Rom_5C9403: @ 0x085C9403
	@ Decoded text from ROM range: offset=0x5C9403, size=0x3
	.string "ーー{EOS}"

	@ src/data/easy_chat/easy_chat_group_voices.h:52 easy_chat_group_voices_line_52 (+3 aliases)
	.globl gText_Rom_5C9406
gText_Rom_5C9406: @ 0x085C9406
	.string "ーーー{EOS}"
	.if (. - gText_Rom_5C9406) > 0x4
	.error "gText_Rom_5C9406 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9406) < 0x4
	.space 0x4 - (. - gText_Rom_5C9406)
	.endif

	@ asm/naming_screen.s:3629 sub_080E3E7C
	.globl gText_Rom_5C940A
gText_Rom_5C940A: @ 0x085C940A
	.string "♂{EOS}"
	.if (. - gText_Rom_5C940A) > 0x2
	.error "gText_Rom_5C940A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C940A) < 0x2
	.space 0x2 - (. - gText_Rom_5C940A)
	.endif

	@ asm/naming_screen.s:3641 sub_080E3E7C
	.globl gText_Rom_5C940C
gText_Rom_5C940C: @ 0x085C940C
	.string "♀{EOS}"
	.if (. - gText_Rom_5C940C) > 0x2
	.error "gText_Rom_5C940C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C940C) < 0x2
	.space 0x2 - (. - gText_Rom_5C940C)
	.endif
