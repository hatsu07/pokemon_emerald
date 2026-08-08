	@ data/maps/AquaHideout_B1F/scripts.inc:133 AquaHideout_B1F_Text_Grunt5PostBattle
	.globl gText_Rom_217F16
gText_Rom_217F16: @ 0x08217F16
	.string "あんまり うろちょろ してると\nほかの アクアだんに やられるかもよー$"
	.if (. - gText_Rom_217F16) > 0x24
	.error "gText_Rom_217F16 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_217F16) < 0x24
	.space 0x24 - (. - gText_Rom_217F16)
	.endif
