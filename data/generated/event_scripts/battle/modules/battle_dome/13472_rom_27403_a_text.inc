	@ src/battle_dome.c:950 battle_dome_line_950
	.globl gText_Rom_27403A
gText_Rom_27403A: @ 0x0827403A
	.string "ぼうぎょと すばやさに ちからを いれていない!{EOS}"
	.if (. - gText_Rom_27403A) > 0x19
	.error "gText_Rom_27403A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_27403A) < 0x19
	.space 0x19 - (. - gText_Rom_27403A)
	.endif
