	@ src/battle_dome.c:947 battle_dome_line_947
	.globl gText_Rom_273FEF
gText_Rom_273FEF: @ 0x08273FEF
	.string "こうげきと すばやさに ちからを いれていない!{EOS}"
	.if (. - gText_Rom_273FEF) > 0x19
	.error "gText_Rom_273FEF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273FEF) < 0x19
	.space 0x19 - (. - gText_Rom_273FEF)
	.endif
