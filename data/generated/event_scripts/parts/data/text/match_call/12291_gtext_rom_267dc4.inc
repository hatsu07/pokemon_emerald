	@ data/text/match_call.inc:337 MatchCall_PersonalizedText42
	.globl gText_Rom_267DC4
gText_Rom_267DC4: @ 0x08267DC4
	.string "{STR_VAR_1}だ\nおれの {STR_VAR_2}\lあれから いちだんと つよくなったぜ!\pつぎ キミと しょうぶ するときは\nまけない からな!\pじゃあ またな!$"
	.if (. - gText_Rom_267DC4) > 0x44
	.error "gText_Rom_267DC4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_267DC4) < 0x44
	.space 0x44 - (. - gText_Rom_267DC4)
	.endif
