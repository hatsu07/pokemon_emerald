	@ data/text/trainers.inc:749 Route110_Text_BenjaminDefeated (+1 aliases)
	.globl gText_Rom_25B447
gText_Rom_25B447: @ 0x0825B447
	.string "ポケモンしょうぶも\nあせっちゃ いけないな……$"
	.if (. - gText_Rom_25B447) > 0x18
	.error "gText_Rom_25B447 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25B447) < 0x18
	.space 0x18 - (. - gText_Rom_25B447)
	.endif
