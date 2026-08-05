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
	@ Decoded text from ROM range: offset=0x5AA7AE, size=0xE
	.string "ヘドロえきを　すいとった！$"
