	@ asm/party_menu.s:13150 sub_081B6468
	.globl gText_Rom_5C9FC1
gText_Rom_5C9FC1: @ 0x085C9FC1
	.string "{0xFD}{0x02}は　ちょっと　なついた！\n{0xFD}{0x03}の　きそポイントは　もうさがらない！{PAUSE_UNTIL_PRESS}{EOS}"
	.if (. - gText_Rom_5C9FC1) > 0x26
	.error "gText_Rom_5C9FC1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9FC1) < 0x26
	.space 0x26 - (. - gText_Rom_5C9FC1)
	.endif
