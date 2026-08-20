	@ src/battle_dome.c:1001 battle_dome_line_1001
	.globl gText_Rom_27415B
gText_Rom_27415B: @ 0x0827415B
	.string "これより たいけつ!{EOS}"
	.if (. - gText_Rom_27415B) > 0xb
	.error "gText_Rom_27415B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_27415B) < 0xb
	.space 0xb - (. - gText_Rom_27415B)
	.endif
