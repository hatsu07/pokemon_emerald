	@ data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.inc:350 BattleFrontier_BattlePikeThreePathRoom_Text_HeardWhispering
	.globl gText_Rom_2342F8
gText_Rom_2342F8: @ 0x082342F8
	.string "なにかが ささやく ような ものおとが\nきこえたの ですが……"
	.byte EOS
	.if (. - gText_Rom_2342F8) > 0x20
	.error "gText_Rom_2342F8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2342F8) < 0x20
	.space 0x20 - (. - gText_Rom_2342F8)
	.endif
