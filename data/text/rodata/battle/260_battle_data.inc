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
	.incbin "baserom.gba", 0x5cc339, 0x3
	.globl gUnknown_85CC33C
gUnknown_85CC33C: @ 0x085CC33C
	.incbin "baserom.gba", 0x5cc33c, 0x5
	.globl gUnknown_85CC341
gUnknown_85CC341: @ 0x085CC341

