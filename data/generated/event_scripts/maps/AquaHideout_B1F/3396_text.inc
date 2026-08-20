	@ data/maps/AquaHideout_B1F/scripts.inc:130 AquaHideout_B1F_Text_Grunt5Defeat (+1 aliases)
	.globl gText_Rom_217F0C
gText_Rom_217F0C: @ 0x08217F0C
	.string "はーあ まけたわー{EOS}"
	.if (. - gText_Rom_217F0C) > 0xa
	.error "gText_Rom_217F0C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_217F0C) < 0xa
	.space 0xa - (. - gText_Rom_217F0C)
	.endif
