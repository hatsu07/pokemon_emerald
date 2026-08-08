	@ data/text/trainers.inc:3320 Route133_Text_BeckIntro (+1 aliases)
	.globl gText_Rom_261F6E
gText_Rom_261F6E: @ 0x08261F6E
	.string "とりポケモンと いっしょに\nこんな ところまで きました$"
	.if (. - gText_Rom_261F6E) > 0x1d
	.error "gText_Rom_261F6E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_261F6E) < 0x1d
	.space 0x1d - (. - gText_Rom_261F6E)
	.endif
