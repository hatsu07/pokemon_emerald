	@ src/battle_dome.c:959 battle_dome_line_959
	.globl gText_Rom_27410A
gText_Rom_27410A: @ 0x0827410A
	.string "すばやさには ちからを いれていない!{EOS}"
	.if (. - gText_Rom_27410A) > 0x14
	.error "gText_Rom_27410A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_27410A) < 0x14
	.space 0x14 - (. - gText_Rom_27410A)
	.endif
