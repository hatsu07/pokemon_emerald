	@ data/maps/SlateportCity/scripts.inc:1069 SlateportCity_Text_HotSpringsAfterOperation
	.globl gText_Rom_1DCEF9
gText_Rom_1DCEF9: @ 0x081DCEF9
	.string "このさくせんが おわったら\nおんせんに つれていって やる!\pって リーダーが いってたんだ\nたのしみ だなぁ……$"
	.if (. - gText_Rom_1DCEF9) > 0x3a
	.error "gText_Rom_1DCEF9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DCEF9) < 0x3a
	.space 0x3a - (. - gText_Rom_1DCEF9)
	.endif
