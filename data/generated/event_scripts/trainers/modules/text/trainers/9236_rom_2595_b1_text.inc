	@ data/text/trainers.inc:13 Route102_Text_CalvinRegisterShort
	.globl gText_Rom_2595B1
gText_Rom_2595B1: @ 0x082595B1
	.string "こんど また たたかいたい から\nポケナビ とうろく してよ!"
	.byte EOS
	.if (. - gText_Rom_2595B1) > 0x20
	.error "gText_Rom_2595B1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2595B1) < 0x20
	.space 0x20 - (. - gText_Rom_2595B1)
	.endif
