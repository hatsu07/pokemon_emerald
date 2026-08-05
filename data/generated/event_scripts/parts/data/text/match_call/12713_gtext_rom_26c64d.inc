	@ data/text/match_call.inc:943 MatchCall_Text_MrStone9
	.globl gText_Rom_26C64D
gText_Rom_26C64D: @ 0x0826C64D
	.string "……え ……なにかね?\pかいて…… はい? ……どうくつ?\pなんだか…… きこえな……\pザザザザザ…… …… ……"
	.byte EOS
	.if (. - gText_Rom_26C64D) > 0x3a
	.error "gText_Rom_26C64D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26C64D) < 0x3a
	.space 0x3a - (. - gText_Rom_26C64D)
	.endif
