	@ data/text/apprentice.inc:25 gText_ApprenticeChallenge8
	.globl gText_Rom_26CE7B
gText_Rom_26CE7B: @ 0x0826CE7B
	.string "キャー! {STR_VAR_1}せんせいの\n{STR_VAR_2}ばん でし ですっ! がんばります!"
	.byte EOS
	.if (. - gText_Rom_26CE7B) > 0x22
	.error "gText_Rom_26CE7B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26CE7B) < 0x22
	.space 0x22 - (. - gText_Rom_26CE7B)
	.endif
