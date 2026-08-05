	@ data/text/trainers.inc:2543 Route123_Text_FrederickPostBattle
	.globl gText_Rom_25FF4B
gText_Rom_25FF4B: @ 0x0825FF4B
	.string "え こづかい?\nしょうきんを もらったから いいじゃろ!$"
	.if (. - gText_Rom_25FF4B) > 0x1d
	.error "gText_Rom_25FF4B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25FF4B) < 0x1d
	.space 0x1d - (. - gText_Rom_25FF4B)
	.endif
