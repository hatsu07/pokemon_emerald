	@ src/battle_message.c:486 battle_message_line_486
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5AA746
gText_Rom_5AA746: @ 0x085AA746
	.string "{B_SCR_NAME_WITH_PREFIX}の {B_SCR_ABILITY}で\nひざしが つよくなった!$"
	.if (. - gText_Rom_5AA746) != 0x15
	.error "gText_Rom_5AA746 must retain its original byte length"
	.endif
	.globl gText_Rom_5AA74E
	.set gText_Rom_5AA74E, gText_Rom_5AA746 + 0x8
	.incbin "baserom.gba", 0x5aa75b, 0x3c

	@ src/battle_message.c:504 battle_message_line_504
	.globl gText_Rom_5AA797
gText_Rom_5AA797: @ 0x085AA797
	.string "{B_SCR_NAME_WITH_PREFIX}は {B_SCR_ABILITY}で\n{B_BUFF1}じょうたいが なおった!$"
	.if (. - gText_Rom_5AA797) > 0x17
	.error "gText_Rom_5AA797 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA797) < 0x17
	.space 0x17 - (. - gText_Rom_5AA797)
	.endif
	.incbin "baserom.gba", 0x5aa7ae, 0xe

	@ src/battle_message.c:469 battle_message_line_469
	.globl gText_Rom_5AA7BC
gText_Rom_5AA7BC: @ 0x085AA7BC
	.string "{B_SCR_NAME_WITH_PREFIX}の すがたが\nへんかした!$"
	.if (. - gText_Rom_5AA7BC) > 0x10
	.error "gText_Rom_5AA7BC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA7BC) < 0x10
	.space 0x10 - (. - gText_Rom_5AA7BC)
	.endif
	.incbin "baserom.gba", 0x5aa7cc, 0x13
	.globl gUnknown_85AA7DF
gUnknown_85AA7DF: @ 0x085AA7DF

