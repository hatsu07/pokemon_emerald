	@ data/maps/LavaridgeTown/scripts.inc:337 LavaridgeTown_Text_ReceivedTheEgg
	.globl gText_Rom_1E5C01
gText_Rom_1E5C01: @ 0x081E5C01
	.string "{PLAYER}は\nタマゴを もらった!{EOS}"
	.if (. - gText_Rom_1E5C01) > 0xf
	.error "gText_Rom_1E5C01 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E5C01) < 0xf
	.space 0xf - (. - gText_Rom_1E5C01)
	.endif
