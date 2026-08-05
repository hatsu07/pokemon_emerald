	@ data/text/trainers.inc:218 Route104_Text_BillyPostBattle
	.globl gText_Rom_259EC9
gText_Rom_259EC9: @ 0x08259EC9
	.string "すなはまを ボクの あしあとで\nいっぱいに したいんだけど\lすぐに きえちゃうんだよなぁ"
	.byte EOS
	.if (. - gText_Rom_259EC9) > 0x2d
	.error "gText_Rom_259EC9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_259EC9) < 0x2d
	.space 0x2d - (. - gText_Rom_259EC9)
	.endif
