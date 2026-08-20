	@ data/maps/LittlerootTown_BrendansHouse_1F/scripts.inc:378 PlayersHouse_1F_Text_RunningShoesManual
	.globl gText_Rom_1EFD5A
gText_Rom_1EFD5A: @ 0x081EFD5A
	.string "ランニングシューズの\nせつめいしょが ある!\p「ランニングシューズは\n Bボタンを おすことで いままでよりも\l はやく はしれるように なります!\p ランニングシューズを はいて\n おもいっきり そとを はしろう!」{EOS}"
	.if (. - gText_Rom_1EFD5A) > 0x6e
	.error "gText_Rom_1EFD5A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EFD5A) < 0x6e
	.space 0x6e - (. - gText_Rom_1EFD5A)
	.endif
