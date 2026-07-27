	@ src/battle_message.c:76 gText_StatRose
	.globl gText_Rom_5AA67E
gText_Rom_5AA67E: @ 0x085AA67E
	.string "あがった！$"
	.if (. - gText_Rom_5AA67E) > 0x6
	.error "gText_Rom_5AA67E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA67E) < 0x6
	.space 0x6 - (. - gText_Rom_5AA67E)
	.endif
	.incbin "baserom.gba", 0x5aa684, 0x26

	@ src/battle_message.c:77 gText_StatFell
	.globl gText_Rom_5AA6AA
gText_Rom_5AA6AA: @ 0x085AA6AA
	.string "さがった！$"
	.if (. - gText_Rom_5AA6AA) > 0x6
	.error "gText_Rom_5AA6AA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA6AA) < 0x6
	.space 0x6 - (. - gText_Rom_5AA6AA)
	.endif

	@ src/battle_message.c:374 battle_message_line_374
	.globl gText_Rom_5AA6B0
gText_Rom_5AA6B0: @ 0x085AA6B0
	.string "{B_SCR_NAME_WITH_PREFIX}は {B_SCR_ABILITY}で\nのうりょくが さがらない!$"
	.if (. - gText_Rom_5AA6B0) > 0x16
	.error "gText_Rom_5AA6B0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA6B0) < 0x16
	.space 0x16 - (. - gText_Rom_5AA6B0)
	.endif
	.incbin "baserom.gba", 0x5aa6c6, 0x13

	@ src/battle_message.c:376 battle_message_line_376
	.globl gText_Rom_5AA6D9
gText_Rom_5AA6D9: @ 0x085AA6D9
	.string "{B_SCR_NAME_WITH_PREFIX}は {B_BUFF1}の\n{B_BUFF2}を トレースした!$"
	.if (. - gText_Rom_5AA6D9) > 0x14
	.error "gText_Rom_5AA6D9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA6D9) < 0x14
	.space 0x14 - (. - gText_Rom_5AA6D9)
	.endif
	.incbin "baserom.gba", 0x5aa6ed, 0x40

