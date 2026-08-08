	@ data/maps/LittlerootTown/scripts.inc:1001 LittlerootTown_Text_ProfBirchsLab
	.globl gText_Rom_1E46C2
gText_Rom_1E46C2: @ 0x081E46C2
	.string "「オダマキ ポケモン けんきゅうじょ」$"
	.if (. - gText_Rom_1E46C2) > 0x14
	.error "gText_Rom_1E46C2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E46C2) < 0x14
	.space 0x14 - (. - gText_Rom_1E46C2)
	.endif
