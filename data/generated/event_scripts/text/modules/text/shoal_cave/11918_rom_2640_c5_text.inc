	@ data/text/shoal_cave.inc:9 ShoalCave_LowTideEntranceRoom_Text_BringMe4ShoalSaltAndShells
	.globl gText_Rom_2640C5
gText_Rom_2640C5: @ 0x082640C5
	.string "あさせのしおと あさせのかいがら\nそれぞれ 4つ あれば\lかいがらのすずが つくれるんだが……\pかいがらのすずの ざいりょう なら\nまいにち とれるよ$"
	.if (. - gText_Rom_2640C5) > 0x4c
	.error "gText_Rom_2640C5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2640C5) < 0x4c
	.space 0x4c - (. - gText_Rom_2640C5)
	.endif
