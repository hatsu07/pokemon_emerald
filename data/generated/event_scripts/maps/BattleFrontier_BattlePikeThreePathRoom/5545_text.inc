	@ data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.inc:346 BattleFrontier_BattlePikeThreePathRoom_Text_PresenceOfPeople
	.globl gText_Rom_2342D2
gText_Rom_2342D2: @ 0x082342D2
	.string "トレーナー…… でしょうか……?\nひとの けはいを かんじるの ですが……"
	.byte EOS
	.if (. - gText_Rom_2342D2) > 0x26
	.error "gText_Rom_2342D2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2342D2) < 0x26
	.space 0x26 - (. - gText_Rom_2342D2)
	.endif
