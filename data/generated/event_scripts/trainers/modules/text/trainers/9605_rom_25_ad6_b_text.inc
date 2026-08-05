	@ data/text/trainers.inc:560 Route108_Text_CoryRematchPostBattle
	.globl gText_Rom_25AD6B
gText_Rom_25AD6B: @ 0x0825AD6B
	.string "きみも いきづまった ときは\nなにかを うみに むかって さけべーっ!$"
	.if (. - gText_Rom_25AD6B) > 0x24
	.error "gText_Rom_25AD6B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25AD6B) < 0x24
	.space 0x24 - (. - gText_Rom_25AD6B)
	.endif
