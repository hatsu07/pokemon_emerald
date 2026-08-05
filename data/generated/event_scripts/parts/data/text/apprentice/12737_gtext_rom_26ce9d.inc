	@ data/text/apprentice.inc:28 gText_ApprenticeChallenge9
	.globl gText_Rom_26CE9D
gText_Rom_26CE9D: @ 0x0826CE9D
	.string "いえーい! {STR_VAR_1}さんの\n{STR_VAR_2}ばん でしの おじさんと しょうぶ!"
	.byte EOS
	.if (. - gText_Rom_26CE9D) > 0x21
	.error "gText_Rom_26CE9D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26CE9D) < 0x21
	.space 0x21 - (. - gText_Rom_26CE9D)
	.endif
