	@ data/text/trainers.inc:1799 Route117_Text_AnnaRematchIntro (+1 aliases)
	.globl gText_Rom_25E105
gText_Rom_25E105: @ 0x0825E105
	.string "ミホ『コウハイの まえで\nなんども まけてられないのよね$"
	.if (. - gText_Rom_25E105) > 0x1d
	.error "gText_Rom_25E105 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E105) < 0x1d
	.space 0x1d - (. - gText_Rom_25E105)
	.endif
