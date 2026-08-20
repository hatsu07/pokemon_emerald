	@ data/text/trainers.inc:2048 Route119_Text_PhilPostBattle
	.globl gText_Rom_25EB2A
gText_Rom_25EB2A: @ 0x0825EB2A
	.string "ぼくは ちいさい ころから\nとりポケモンに あこがれて いたんだ!{EOS}"
	.if (. - gText_Rom_25EB2A) > 0x22
	.error "gText_Rom_25EB2A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25EB2A) < 0x22
	.space 0x22 - (. - gText_Rom_25EB2A)
	.endif
