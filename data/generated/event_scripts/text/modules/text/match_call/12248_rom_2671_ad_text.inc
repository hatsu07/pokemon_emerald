	@ data/text/match_call.inc:274 MatchCall_PersonalizedText21
	.globl gText_Rom_2671AD
gText_Rom_2671AD: @ 0x082671AD
	.string "…… …… ……\n…… …… ……\l{STR_VAR_1} です……\p…… …… ……\n…… …… ……\lきょうは それだけ……$"
	.if (. - gText_Rom_2671AD) > 0x38
	.error "gText_Rom_2671AD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2671AD) < 0x38
	.space 0x38 - (. - gText_Rom_2671AD)
	.endif
