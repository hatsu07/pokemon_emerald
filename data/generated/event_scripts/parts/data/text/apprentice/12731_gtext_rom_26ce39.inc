	@ data/text/apprentice.inc:19 gText_ApprenticeChallenge6
	.globl gText_Rom_26CE39
gText_Rom_26CE39: @ 0x0826CE39
	.string "{STR_VAR_1}さんの {STR_VAR_2}ばんの\nでしトレーナーよ よっろしくぅ!"
	.byte EOS
	.if (. - gText_Rom_26CE39) > 0x1d
	.error "gText_Rom_26CE39 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26CE39) < 0x1d
	.space 0x1d - (. - gText_Rom_26CE39)
	.endif
