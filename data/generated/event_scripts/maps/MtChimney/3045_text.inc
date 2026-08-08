	@ data/maps/MtChimney/scripts.inc:601 MtChimney_Text_TabithaDefeat (+1 aliases)
	.globl gText_Rom_2152D7
gText_Rom_2152D7: @ 0x082152D7
	.string "ウヒョヒョ……\pオレが まけても リーダーが ちゃんと\nアイツを めざめさせて……$"
	.if (. - gText_Rom_2152D7) > 0x2a
	.error "gText_Rom_2152D7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2152D7) < 0x2a
	.space 0x2a - (. - gText_Rom_2152D7)
	.endif
