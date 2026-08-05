	@ data/text/match_call.inc:355 MatchCall_PersonalizedText48
	.globl gText_Rom_268035
gText_Rom_268035: @ 0x08268035
	.string "あ こんにちは\n{STR_VAR_1} でーす\pルミと いっしょに がんばって\nポケモン そだててるの!\pもっと がんばったら\nいちばんに なれるかなあ?\lじゃあ またねー!$"
	.if (. - gText_Rom_268035) > 0x4f
	.error "gText_Rom_268035 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_268035) < 0x4f
	.space 0x4f - (. - gText_Rom_268035)
	.endif
