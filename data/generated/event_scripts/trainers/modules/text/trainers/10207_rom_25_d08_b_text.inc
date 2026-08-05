	@ data/text/trainers.inc:1424 Route114_Text_AngelinaIntro (+1 aliases)
	.globl gText_Rom_25D08B
gText_Rom_25D08B: @ 0x0825D08B
	.string "あなたの ポケモンって\nどの くらい しんか させてる?$"
	.if (. - gText_Rom_25D08B) > 0x1d
	.error "gText_Rom_25D08B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D08B) < 0x1d
	.space 0x1d - (. - gText_Rom_25D08B)
	.endif
