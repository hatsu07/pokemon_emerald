	@ data/text/match_call.inc:904 MatchCall_Text_Steven6
	.globl gText_Rom_26C151
gText_Rom_26C151: @ 0x0826C151
	.string "…… …… ……\pダイゴには よびだしが\nつうじていない ようだ……"
	.byte EOS
	.if (. - gText_Rom_26C151) > 0x23
	.error "gText_Rom_26C151 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26C151) < 0x23
	.space 0x23 - (. - gText_Rom_26C151)
	.endif
