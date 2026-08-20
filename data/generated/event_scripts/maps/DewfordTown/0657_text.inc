	@ data/maps/DewfordTown/scripts.inc:633 DewfordTown_Text_TownSign
	.globl gText_Rom_1E512A
gText_Rom_1E512A: @ 0x081E512A
	.string "ここは ムロ タウン\nあおい うみに うかぶ ちいさな しま{EOS}"
	.if (. - gText_Rom_1E512A) > 0x1f
	.error "gText_Rom_1E512A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E512A) < 0x1f
	.space 0x1f - (. - gText_Rom_1E512A)
	.endif
