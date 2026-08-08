	@ data/text/trainers.inc:106 Route103_Text_LivRematchPostBattle
	.globl gText_Rom_2599FE
gText_Rom_2599FE: @ 0x082599FE
	.string "ルミ『おねえちゃんと あたしは\nいきが ぴったり あってるのに……\pどうして また まけちゃったの?"
	.byte EOS
	.if (. - gText_Rom_2599FE) > 0x33
	.error "gText_Rom_2599FE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2599FE) < 0x33
	.space 0x33 - (. - gText_Rom_2599FE)
	.endif
