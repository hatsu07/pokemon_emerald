	@ data/maps/VerdanturfTown/scripts.inc:85 VerdanturfTown_Text_WandasHouse
	.globl gText_Rom_1E6324
gText_Rom_1E6324: @ 0x081E6324
	.string "「ミチルの いえ」{EOS}"
	.if (. - gText_Rom_1E6324) > 0xa
	.error "gText_Rom_1E6324 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E6324) < 0xa
	.space 0xa - (. - gText_Rom_1E6324)
	.endif
