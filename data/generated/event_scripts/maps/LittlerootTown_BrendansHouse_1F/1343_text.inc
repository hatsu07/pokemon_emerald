	@ data/maps/LittlerootTown_BrendansHouse_1F/scripts.inc:312 PlayersHouse_1F_Text_MaybeDadWillBeOn
	.globl gText_Rom_1EFB33
gText_Rom_1EFB33: @ 0x081EFB33
	.string "ママ『トウカの ジムが うつってるわ\nパパが でるかもよ!!{EOS}"
	.if (. - gText_Rom_1EFB33) > 0x1f
	.error "gText_Rom_1EFB33 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EFB33) < 0x1f
	.space 0x1f - (. - gText_Rom_1EFB33)
	.endif
