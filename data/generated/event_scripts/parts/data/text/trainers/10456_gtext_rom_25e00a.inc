	@ data/text/trainers.inc:1781 Route117_Text_AnnaAndMegRegister
	.globl gText_Rom_25E00A
gText_Rom_25E00A: @ 0x0825E00A
	.string "ミホ『まけっぱなしでは\nひきさがれない わたしたち!\lまた きて くれるわよね?$"
	.if (. - gText_Rom_25E00A) > 0x29
	.error "gText_Rom_25E00A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E00A) < 0x29
	.space 0x29 - (. - gText_Rom_25E00A)
	.endif
