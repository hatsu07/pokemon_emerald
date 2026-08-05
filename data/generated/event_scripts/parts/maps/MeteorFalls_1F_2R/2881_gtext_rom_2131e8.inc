	@ data/maps/MeteorFalls_1F_2R/scripts.inc:69 MeteorFalls_1F_2R_Text_NicolasDefeat (+2 aliases)
	.globl gText_Rom_2131E8
gText_Rom_2131E8: @ 0x082131E8
	.string "くっ!\nこれほど つよいとは……!$"
	.if (. - gText_Rom_2131E8) > 0x12
	.error "gText_Rom_2131E8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2131E8) < 0x12
	.space 0x12 - (. - gText_Rom_2131E8)
	.endif
