	@ data/text/trainers.inc:1943 Route119_Text_BrentPostBattle
	.globl gText_Rom_25E6B2
gText_Rom_25E6B2: @ 0x0825E6B2
	.string "マネを して なにが たのしいか……\pふふふ……\nキミには わからない だろうよ{EOS}"
	.if (. - gText_Rom_25E6B2) > 0x29
	.error "gText_Rom_25E6B2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E6B2) < 0x29
	.space 0x29 - (. - gText_Rom_25E6B2)
	.endif
