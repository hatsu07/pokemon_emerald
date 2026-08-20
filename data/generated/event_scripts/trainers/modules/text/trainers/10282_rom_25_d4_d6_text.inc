	@ data/text/trainers.inc:1529 Route115_Text_JaidenPostBattle
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_25D4D6
gText_Rom_25D4D6: @ 0x0825D4D6
	.string "でも ぼくの ポケモン\nすごポケモン だった でしょ?{EOS}"
	.if (. - gText_Rom_25D4D6) != 0x1c
	.error "gText_Rom_25D4D6 must retain its original byte length"
	.endif
