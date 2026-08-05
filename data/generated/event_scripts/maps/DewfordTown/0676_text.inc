	@ data/maps/DewfordTown/scripts.inc:660 DewfordTown_Text_PetalburgWereSettingSail
	.globl gText_Rom_1E5291
gText_Rom_1E5291: @ 0x081E5291
	.string "ハギ『トウカシティ か\pよっしゃ! いくぞ ピーコちゃん!$"
	.if (. - gText_Rom_1E5291) > 0x1e
	.error "gText_Rom_1E5291 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E5291) < 0x1e
	.space 0x1e - (. - gText_Rom_1E5291)
	.endif
