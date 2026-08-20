	@ data/text/trainers.inc:2660 Route124_Text_LilaRoyRegister
	.globl gText_Rom_2604A3
gText_Rom_2604A3: @ 0x082604A3
	.string "コウ『また こんど しょうぶしてよ\n……そのときは てかげんして くれよ!{EOS}"
	.if (. - gText_Rom_2604A3) > 0x26
	.error "gText_Rom_2604A3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2604A3) < 0x26
	.space 0x26 - (. - gText_Rom_2604A3)
	.endif
