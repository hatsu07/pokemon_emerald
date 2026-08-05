	@ data/maps/DewfordTown/scripts.inc:684 DewfordTown_Text_GreatHaulInSomeBigOnes
	.globl gText_Rom_1E5401
gText_Rom_1E5401: @ 0x081E5401
	.string "そうか! そりゃ すごい!\nおおものを つりあげて くれよ!$"
	.if (. - gText_Rom_1E5401) > 0x1f
	.error "gText_Rom_1E5401 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E5401) < 0x1f
	.space 0x1f - (. - gText_Rom_1E5401)
	.endif
