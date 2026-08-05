	@ data/text/match_call.inc:241 MatchCall_PersonalizedText10
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_266C20
gText_Rom_266C20: @ 0x08266C20
	.string "わたくし {STR_VAR_1}ですわ\nごきげんよう\pはなれていても こうして\nおはなし できるなんて べんりね\pいままでは あいたい ひとが いたら\nパパに おくってもらって いたもの……\pそれではまた……\nおはなし できて うれしかった ですわ$"
	.if (. - gText_Rom_266C20) != 0x74
	.error "gText_Rom_266C20 must retain its original byte length"
	.endif
