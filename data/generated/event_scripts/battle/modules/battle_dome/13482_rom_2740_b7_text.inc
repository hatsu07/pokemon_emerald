	@ src/battle_dome.c:955 battle_dome_line_955
	.globl gText_Rom_2740B7
gText_Rom_2740B7: @ 0x082740B7
	.string "とくこうと とくぼうに ちからを いれていない!{EOS}"
	.if (. - gText_Rom_2740B7) > 0x19
	.error "gText_Rom_2740B7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2740B7) < 0x19
	.space 0x19 - (. - gText_Rom_2740B7)
	.endif
