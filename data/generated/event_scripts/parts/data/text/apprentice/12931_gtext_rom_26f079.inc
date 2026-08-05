	@ data/text/apprentice.inc:313 gText_ApprenticeItemAlreadyRecommended4
	.globl gText_Rom_26F079
gText_Rom_26F079: @ 0x0826F079
	.string "えっ なに いってるのよ\n{STR_VAR_1}は もう\lおしえて もらった じゃない!\pそれとも {STR_VAR_2}は\nてぶらで がんばれ って ことかしら?"
	.byte EOS
	.if (. - gText_Rom_26F079) > 0x41
	.error "gText_Rom_26F079 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26F079) < 0x41
	.space 0x41 - (. - gText_Rom_26F079)
	.endif
