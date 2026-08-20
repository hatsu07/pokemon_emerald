	@ data/text/trainers.inc:1400 Route114_Text_IvyPostBattle
	.globl gText_Rom_25CFB2
gText_Rom_25CFB2: @ 0x0825CFB2
	.string "イヨ『あたしが\nポケモン はじめた きっかけは\lセンパイが おしえてくれた からなの!{EOS}"
	.if (. - gText_Rom_25CFB2) > 0x2c
	.error "gText_Rom_25CFB2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25CFB2) < 0x2c
	.space 0x2c - (. - gText_Rom_25CFB2)
	.endif
