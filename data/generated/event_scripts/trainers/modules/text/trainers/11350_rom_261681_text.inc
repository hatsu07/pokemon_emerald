	@ data/text/trainers.inc:3104 Route129_Text_ClarencePostBattle
	.globl gText_Rom_261681
gText_Rom_261681: @ 0x08261681
	.string "ポケモンリーグを めざしてるのか?\nがんばれ がんばれよ!{EOS}"
	.if (. - gText_Rom_261681) > 0x1e
	.error "gText_Rom_261681 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_261681) < 0x1e
	.space 0x1e - (. - gText_Rom_261681)
	.endif
