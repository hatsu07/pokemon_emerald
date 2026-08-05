	@ data/text/trainers.inc:79 Route103_Text_LivPostBattle
	.globl gText_Rom_259886
gText_Rom_259886: @ 0x08259886
	.string "ルミ『おねえちゃんと あたしは\nいきが ぴったり あってるのに……\pまけちゃったよぉ……"
	.byte EOS
	.if (. - gText_Rom_259886) > 0x2d
	.error "gText_Rom_259886 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_259886) < 0x2d
	.space 0x2d - (. - gText_Rom_259886)
	.endif
