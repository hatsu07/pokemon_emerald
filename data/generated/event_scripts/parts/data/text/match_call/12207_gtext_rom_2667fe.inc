	@ data/text/match_call.inc:214 MatchCall_PersonalizedText1
	.globl gText_Rom_2667FE
gText_Rom_2667FE: @ 0x082667FE
	.string "やまを あいする {STR_VAR_1}だが\pどうだね あれから\nすこしは やまが すきに なったか?\lあまり やまで きみを みかけないが……\pよし つぎは {STR_VAR_2}で\nあおう じゃないか またな!$"
	.if (. - gText_Rom_2667FE) > 0x5a
	.error "gText_Rom_2667FE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2667FE) < 0x5a
	.space 0x5a - (. - gText_Rom_2667FE)
	.endif
