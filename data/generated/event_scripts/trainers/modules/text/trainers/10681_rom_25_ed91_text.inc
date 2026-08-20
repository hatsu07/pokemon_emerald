	@ data/text/trainers.inc:2111 Route119_Text_RachelPostBattle
	.globl gText_Rom_25ED91
gText_Rom_25ED91: @ 0x0825ED91
	.string "パラソルが おもく ないかって?\nキミの バッグの ほうが\lいっぱい はいってるじゃない{EOS}"
	.if (. - gText_Rom_25ED91) > 0x2d
	.error "gText_Rom_25ED91 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25ED91) < 0x2d
	.space 0x2d - (. - gText_Rom_25ED91)
	.endif
