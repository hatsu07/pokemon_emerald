	@ src/battle_dome.c:951 battle_dome_line_951
	.globl gText_Rom_274053
gText_Rom_274053: @ 0x08274053
	.string "ぼうぎょと とくこうに ちからを いれていない!{EOS}"
	.if (. - gText_Rom_274053) > 0x19
	.error "gText_Rom_274053 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_274053) < 0x19
	.space 0x19 - (. - gText_Rom_274053)
	.endif
