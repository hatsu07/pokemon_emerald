	@ data/maps/MossdeepCity_SpaceCenter_2F/scripts.inc:354 MossdeepCity_SpaceCenter_2F_Text_WishOrdinaryPeopleCouldGoIntoSpace
	.globl gText_Rom_20DBB3
gText_Rom_20DBB3: @ 0x0820DBB3
	.string "いつか ふつーの ひとも\nうちゅうに いけると いいのにな……{EOS}"
	.if (. - gText_Rom_20DBB3) > 0x20
	.error "gText_Rom_20DBB3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20DBB3) < 0x20
	.space 0x20 - (. - gText_Rom_20DBB3)
	.endif
