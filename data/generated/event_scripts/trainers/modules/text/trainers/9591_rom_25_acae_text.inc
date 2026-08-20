	@ data/text/trainers.inc:539 Route108_Text_MissyPostBattle
	.globl gText_Rom_25ACAE
gText_Rom_25ACAE: @ 0x0825ACAE
	.string "ストレスは およいで はっさん!\nけんこうてき よねー!{EOS}"
	.if (. - gText_Rom_25ACAE) > 0x1d
	.error "gText_Rom_25ACAE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25ACAE) < 0x1d
	.space 0x1d - (. - gText_Rom_25ACAE)
	.endif
