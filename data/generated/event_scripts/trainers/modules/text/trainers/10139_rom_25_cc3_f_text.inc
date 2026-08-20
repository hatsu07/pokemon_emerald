	@ data/text/trainers.inc:1322 Route114_Text_SteveIntro (+1 aliases)
	.globl gText_Rom_25CC3F
gText_Rom_25CC3F: @ 0x0825CC3F
	.string "うふふふふふ……\nボクの ポケモンと しょうぶしない?{EOS}"
	.if (. - gText_Rom_25CC3F) > 0x1c
	.error "gText_Rom_25CC3F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25CC3F) < 0x1c
	.space 0x1c - (. - gText_Rom_25CC3F)
	.endif
