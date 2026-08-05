	@ data/text/apprentice.inc:16 gText_ApprenticeChallenge5
	.globl gText_Rom_26CE16
gText_Rom_26CE16: @ 0x0826CE16
	.string "いそがしい なか {STR_VAR_1}さんの\n{STR_VAR_2}ばんの でし やってる オレです!"
	.byte EOS
	.if (. - gText_Rom_26CE16) > 0x23
	.error "gText_Rom_26CE16 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26CE16) < 0x23
	.space 0x23 - (. - gText_Rom_26CE16)
	.endif
