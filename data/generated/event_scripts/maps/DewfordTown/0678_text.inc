	@ data/maps/DewfordTown/scripts.inc:663 DewfordTown_Text_SlateportWereSettingSail
	.globl gText_Rom_1E52AF
gText_Rom_1E52AF: @ 0x081E52AF
	.string "ハギ『カイナシティ か\pよっしゃ! いくぞ ピーコちゃん!$"
	.if (. - gText_Rom_1E52AF) > 0x1e
	.error "gText_Rom_1E52AF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E52AF) < 0x1e
	.space 0x1e - (. - gText_Rom_1E52AF)
	.endif
