	@ data/maps/LittlerootTown_BrendansHouse_1F/scripts.inc:316 PlayersHouse_1F_Text_ItsOverWeMissedHim
	.globl gText_Rom_1EFB52
gText_Rom_1EFB52: @ 0x081EFB52
	.string "ママ『あらら…… おわっちゃった\pパパが でてたみたい だったのに ざんねんね$"
	.if (. - gText_Rom_1EFB52) > 0x28
	.error "gText_Rom_1EFB52 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EFB52) < 0x28
	.space 0x28 - (. - gText_Rom_1EFB52)
	.endif
