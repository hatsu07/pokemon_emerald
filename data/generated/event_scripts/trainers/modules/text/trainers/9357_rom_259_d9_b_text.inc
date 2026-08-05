	@ data/text/trainers.inc:193 Route104_Text_MiaDefeat (+1 aliases)
	.globl gText_Rom_259D9B
gText_Rom_259D9B: @ 0x08259D9B
	.string "ミオ『ふたりで しょうぶ したのに\nまけちゃったです……"
	.byte EOS
	.if (. - gText_Rom_259D9B) > 0x1d
	.error "gText_Rom_259D9B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_259D9B) < 0x1d
	.space 0x1d - (. - gText_Rom_259D9B)
	.endif
