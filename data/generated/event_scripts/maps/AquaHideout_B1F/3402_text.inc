	@ data/maps/AquaHideout_B1F/scripts.inc:139 AquaHideout_B1F_Text_Grunt7Defeat (+1 aliases)
	.globl gText_Rom_217F6E
gText_Rom_217F6E: @ 0x08217F6E
	.string "かっこよく まけたわ……{EOS}"
	.if (. - gText_Rom_217F6E) > 0xd
	.error "gText_Rom_217F6E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_217F6E) < 0xd
	.space 0xd - (. - gText_Rom_217F6E)
	.endif
