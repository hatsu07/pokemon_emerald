	@ data/text/trainers.inc:515 Route108_Text_MatthewIntro (+1 aliases)
	.globl gText_Rom_25ABCF
gText_Rom_25ABCF: @ 0x0825ABCF
	.string "なあ キミ!\nキミも すてられた ふねに いくのかい?{EOS}"
	.if (. - gText_Rom_25ABCF) > 0x1c
	.error "gText_Rom_25ABCF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25ABCF) < 0x1c
	.space 0x1c - (. - gText_Rom_25ABCF)
	.endif
