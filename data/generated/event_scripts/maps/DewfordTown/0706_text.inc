	@ data/maps/DewfordTown/scripts.inc:702 DewfordTown_Text_HearOfAnyTrendsComeShareWithMe
	.globl gText_Rom_1E5626
gText_Rom_1E5626: @ 0x081E5626
	.string "じゃあ あたらしい りゅうこうが あったら\nまた きかせて くれよ!$"
	.if (. - gText_Rom_1E5626) > 0x23
	.error "gText_Rom_1E5626 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E5626) < 0x23
	.space 0x23 - (. - gText_Rom_1E5626)
	.endif
