	@ data/text/trainers.inc:1022 Route111_Text_BrookeRematchDefeat (+1 aliases)
	.globl gText_Rom_25C04C
gText_Rom_25C04C: @ 0x0825C04C
	.string "いい わざを おぼえているのね!$"
	.if (. - gText_Rom_25C04C) > 0x11
	.error "gText_Rom_25C04C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25C04C) < 0x11
	.space 0x11 - (. - gText_Rom_25C04C)
	.endif
