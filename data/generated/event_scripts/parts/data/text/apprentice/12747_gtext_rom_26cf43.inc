	@ data/text/apprentice.inc:43 gText_ApprenticeChallenge14
	.globl gText_Rom_26CF43
gText_Rom_26CF43: @ 0x0826CF43
	.string "て てれますが {STR_VAR_1}さんの\n{STR_VAR_2}ばんの でし やってます……!"
	.byte EOS
	.if (. - gText_Rom_26CF43) > 0x20
	.error "gText_Rom_26CF43 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26CF43) < 0x20
	.space 0x20 - (. - gText_Rom_26CF43)
	.endif
