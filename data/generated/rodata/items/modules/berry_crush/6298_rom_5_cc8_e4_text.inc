	@ asm/berry_crush.s:4221 sub_08022A78 (+1 aliases)
	.globl gText_Rom_5CC8E4
gText_Rom_5CC8E4: @ 0x085CC8E4
	.string "{PAUSE_MUSIC}{PLAY_BGM}{0x6F}{0x01}サラサラな　こなが\n{0xFD}{0x02}　できた！{RESUME_MUSIC}\pごうけいで　こなの　りょうが\n{0xFD}{0x03}　になった！\p$"
	.if (. - gText_Rom_5CC8E4) > 0x33
	.error "gText_Rom_5CC8E4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC8E4) < 0x33
	.space 0x33 - (. - gText_Rom_5CC8E4)
	.endif
