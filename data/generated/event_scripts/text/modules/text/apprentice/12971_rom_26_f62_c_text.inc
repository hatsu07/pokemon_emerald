	@ data/text/apprentice.inc:373 gText_ApprenticeItemAlreadyRecommended8
	.globl gText_Rom_26F62C
gText_Rom_26F62C: @ 0x0826F62C
	.string "あれ まえにも {STR_VAR_1}を\nおすすめして くれました よね!\pやっぱり コレが いちばん ですかっ?\nあ それとも もしかして\l{STR_VAR_2}には なにも\lもたせなくて いいって ことですかっ?"
	.byte EOS
	.if (. - gText_Rom_26F62C) > 0x5b
	.error "gText_Rom_26F62C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26F62C) < 0x5b
	.space 0x5b - (. - gText_Rom_26F62C)
	.endif
