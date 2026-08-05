	@ data/text/apprentice.inc:22 gText_ApprenticeChallenge7
	.globl gText_Rom_26CE56
gText_Rom_26CE56: @ 0x0826CE56
	.string "わたくし {STR_VAR_1}さまの {STR_VAR_2}ばんの\nでしで ございますの…… いきますわよ"
	.byte EOS
	.if (. - gText_Rom_26CE56) > 0x25
	.error "gText_Rom_26CE56 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26CE56) < 0x25
	.space 0x25 - (. - gText_Rom_26CE56)
	.endif
