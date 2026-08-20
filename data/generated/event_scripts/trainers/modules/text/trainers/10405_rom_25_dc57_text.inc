	@ data/text/trainers.inc:1706 Route117_Text_LydiaPostBattle
	.globl gText_Rom_25DC57
gText_Rom_25DC57: @ 0x0825DC57
	.string "ポケモンの こせいにも きをくばって\nそだてて みて くださいね{EOS}"
	.if (. - gText_Rom_25DC57) > 0x21
	.error "gText_Rom_25DC57 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25DC57) < 0x21
	.space 0x21 - (. - gText_Rom_25DC57)
	.endif
