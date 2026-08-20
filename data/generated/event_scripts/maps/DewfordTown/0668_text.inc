	@ data/maps/DewfordTown/scripts.inc:648 DewfordTown_Text_PetalburgWereSettingSail2
	.globl gText_Rom_1E51E2
gText_Rom_1E51E2: @ 0x081E51E2
	.string "ハギ『では トウカに もどると しよう!\pよっしゃ! いくぞ ピーコちゃん!{EOS}"
	.if (. - gText_Rom_1E51E2) > 0x27
	.error "gText_Rom_1E51E2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E51E2) < 0x27
	.space 0x27 - (. - gText_Rom_1E51E2)
	.endif
