	@ data/maps/AquaHideout_B2F/scripts.inc:122 AquaHideout_B2F_Text_Grunt8Defeat (+1 aliases)
	.globl gText_Rom_21830C
gText_Rom_21830C: @ 0x0821830C
	.string "ワープパネルの ことで\nあたまが いっぱい だったから……{EOS}"
	.if (. - gText_Rom_21830C) > 0x1e
	.error "gText_Rom_21830C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21830C) < 0x1e
	.space 0x1e - (. - gText_Rom_21830C)
	.endif
