	@ data/text/apprentice.inc:4 gText_ApprenticeChallenge1
	.globl gText_Rom_26CD9F
gText_Rom_26CD9F: @ 0x0826CD9F
	.string "ぼく {STR_VAR_1}さんの\n{STR_VAR_2}ばんの でし なんだ! いくぞー!"
	.byte EOS
	.if (. - gText_Rom_26CD9F) > 0x1d
	.error "gText_Rom_26CD9F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26CD9F) < 0x1d
	.space 0x1d - (. - gText_Rom_26CD9F)
	.endif
