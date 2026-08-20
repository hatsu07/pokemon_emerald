	@ data/maps/LittlerootTown_BrendansHouse_1F/scripts.inc:338 PlayersHouse_1F_Text_TakeCareHoney
	.globl gText_Rom_1EFC1E
gText_Rom_1EFC1E: @ 0x081EFC1E
	.string "ママ『じゃあ きをつけてね!{EOS}"
	.if (. - gText_Rom_1EFC1E) > 0xf
	.error "gText_Rom_1EFC1E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EFC1E) < 0xf
	.space 0xf - (. - gText_Rom_1EFC1E)
	.endif
