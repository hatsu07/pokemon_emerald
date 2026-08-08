	@ data/text/trainers.inc:10 Route102_Text_CalvinRegister
	.globl gText_Rom_259583
gText_Rom_259583: @ 0x08259583
	.string "ボク あれから がんばってるよ!\nこんど たたかいたい から\lポケナビ とうろく してよ!"
	.byte EOS
	.if (. - gText_Rom_259583) > 0x2e
	.error "gText_Rom_259583 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_259583) < 0x2e
	.space 0x2e - (. - gText_Rom_259583)
	.endif
