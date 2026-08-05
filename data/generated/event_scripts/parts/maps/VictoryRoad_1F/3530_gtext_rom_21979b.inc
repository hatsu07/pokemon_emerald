	@ data/maps/VictoryRoad_1F/scripts.inc:139 VictoryRoad_1F_Text_EdgarIntro (+1 aliases)
	.globl gText_Rom_21979B
gText_Rom_21979B: @ 0x0821979B
	.string "ここまでは なんとか これたが\nあと すこしが とても とおいよ……"
	.byte EOS
	.if (. - gText_Rom_21979B) > 0x23
	.error "gText_Rom_21979B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21979B) < 0x23
	.space 0x23 - (. - gText_Rom_21979B)
	.endif
