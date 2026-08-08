	@ data/maps/BattleFrontier_OutsideWest/scripts.inc:396 BattleFrontier_OutsideWest_Text_SquareFilledWithToughPeople
	.globl gText_Rom_21F428
gText_Rom_21F428: @ 0x0821F428
	.string "もぐ もぐ\pこの ひろば には\nつよいひと いっぱい らしいねえ\lもぐ もぐ"
	.byte EOS
	.if (. - gText_Rom_21F428) > 0x27
	.error "gText_Rom_21F428 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21F428) < 0x27
	.space 0x27 - (. - gText_Rom_21F428)
	.endif
