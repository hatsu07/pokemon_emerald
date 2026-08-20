	@ data/maps/Route104/scripts.inc:1052 Route104_Text_MrBrineysCottage
	.globl gText_Rom_1E7D58
gText_Rom_1E7D58: @ 0x081E7D58
	.string "「ハギろうじんの　こや」{EOS}"
	.if (. - gText_Rom_1E7D58) > 0xd
	.error "gText_Rom_1E7D58 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E7D58) < 0xd
	.space 0xd - (. - gText_Rom_1E7D58)
	.endif
