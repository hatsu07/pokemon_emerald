	@ asm/contest.s:10884 ContestDebugDoPrint
	.globl gText_Rom_5C9401
gText_Rom_5C9401: @ 0x085C9401
	.string "ー$"
	.if (. - gText_Rom_5C9401) > 0x2
	.error "gText_Rom_5C9401 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9401) < 0x2
	.space 0x2 - (. - gText_Rom_5C9401)
	.endif
	.globl gUnknown_85C9403
gUnknown_85C9403: @ 0x085C9403
	@ Decoded text from ROM range: offset=0x5C9403, size=0x3
	.string "ーー$"
	.globl gUnknown_85C9406
gUnknown_85C9406: @ 0x085C9406

	@ src/data/easy_chat/easy_chat_group_voices.h:52 easy_chat_group_voices_line_52 (+3 aliases)
	.globl gText_Rom_5C9406
gText_Rom_5C9406: @ 0x085C9406
	.string "ーーー$"
	.if (. - gText_Rom_5C9406) > 0x4
	.error "gText_Rom_5C9406 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9406) < 0x4
	.space 0x4 - (. - gText_Rom_5C9406)
	.endif
	.globl gUnknown_85C940A
gUnknown_85C940A: @ 0x085C940A

	@ asm/naming_screen.s:3629 sub_080E3E7C
	.globl gText_Rom_5C940A
gText_Rom_5C940A: @ 0x085C940A
	.string "♂$"
	.if (. - gText_Rom_5C940A) > 0x2
	.error "gText_Rom_5C940A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C940A) < 0x2
	.space 0x2 - (. - gText_Rom_5C940A)
	.endif
	.globl gUnknown_85C940C
gUnknown_85C940C: @ 0x085C940C

	@ asm/naming_screen.s:3641 sub_080E3E7C
	.globl gText_Rom_5C940C
gText_Rom_5C940C: @ 0x085C940C
	.string "♀$"
	.if (. - gText_Rom_5C940C) > 0x2
	.error "gText_Rom_5C940C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C940C) < 0x2
	.space 0x2 - (. - gText_Rom_5C940C)
	.endif
	.globl gUnknown_85C940E
gUnknown_85C940E: @ 0x085C940E
	@ Replaced baserom.gba range: offset=0x5C940E, size=0x3
	.byte 0xF9, 0x05, 0xFF
	.globl gUnknown_85C9411
gUnknown_85C9411: @ 0x085C9411
	@ Replaced baserom.gba range: offset=0x5C9411, size=0x9
	.byte 0xF9, 0x08, 0xFF, 0xF9, 0x04, 0xFF, 0xF9, 0x03, 0xFF
	.globl gUnknown_85C941A
gUnknown_85C941A: @ 0x085C941A

	@ src/strings.c:149 gText_IDNumber2
	.globl gText_Rom_5C941A
gText_Rom_5C941A: @ 0x085C941A
	.string "{ID}{NO}$"
	.if (. - gText_Rom_5C941A) > 0x5
	.error "gText_Rom_5C941A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C941A) < 0x5
	.space 0x5 - (. - gText_Rom_5C941A)
	.endif
	.globl gUnknown_85C941F
gUnknown_85C941F: @ 0x085C941F

	@ asm/contest_painting.s:432 PrintContestPaintingCaption
	.globl gText_Rom_5C941F
gText_Rom_5C941F: @ 0x085C941F
	.string "　$"
	.if (. - gText_Rom_5C941F) > 0x2
	.error "gText_Rom_5C941F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C941F) < 0x2
	.space 0x2 - (. - gText_Rom_5C941F)
	.endif
	.globl gUnknown_85C9421
gUnknown_85C9421: @ 0x085C9421

