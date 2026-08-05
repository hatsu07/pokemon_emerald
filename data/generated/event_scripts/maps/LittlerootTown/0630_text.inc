	@ data/maps/LittlerootTown/scripts.inc:1007 LittlerootTown_Text_ProfBirchsHouse
	.globl gText_Rom_1E46DF
gText_Rom_1E46DF: @ 0x081E46DF
	.string "「オダマキ はかせの いえ」$"
	.if (. - gText_Rom_1E46DF) > 0xf
	.error "gText_Rom_1E46DF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E46DF) < 0xf
	.space 0xf - (. - gText_Rom_1E46DF)
	.endif
