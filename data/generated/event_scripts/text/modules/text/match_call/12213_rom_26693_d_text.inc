	@ data/text/match_call.inc:223 MatchCall_PersonalizedText4
	.globl gText_Rom_26693D
gText_Rom_26693D: @ 0x0826693D
	.string "はいはい! いせきを さがして 30ねん\nわたし {STR_VAR_1}で ございます\pきみは せっきょくてきに あちこちを\nまわって いるよう だけど\lなにか いせきを みつけたかい?\lみつけたら おしえて くれよ!\pでは わたしは\nいせきを さがすので これで$"
	.if (. - gText_Rom_26693D) > 0x7c
	.error "gText_Rom_26693D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26693D) < 0x7c
	.space 0x7c - (. - gText_Rom_26693D)
	.endif
