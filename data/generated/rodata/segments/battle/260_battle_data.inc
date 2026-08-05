	@ src/data/easy_chat/easy_chat_group_trainer.h:100 easy_chat_group_trainer_line_100 (+4 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CC331
gText_Rom_5CC331: @ 0x085CC331
	.string "ポケモンずかん$"
	.if (. - gText_Rom_5CC331) != 0x8
	.error "gText_Rom_5CC331 must retain its original byte length"
	.endif
	.globl gText_Rom_5CC335
	.set gText_Rom_5CC335, gText_Rom_5CC331 + 0x4
	.globl gUnknown_85CC339
gUnknown_85CC339: @ 0x085CC339
	@ Decoded text from ROM range: offset=0x5CC339, size=0x3
	.string "ひき$"
	.globl gUnknown_85CC33C
gUnknown_85CC33C: @ 0x085CC33C
	@ Replaced baserom.gba range: offset=0x5CC33C, size=0x5
	.byte 0xF0, 0xFF, 0x13, 0x2E, 0xFF
	.globl gUnknown_85CC341
gUnknown_85CC341: @ 0x085CC341

