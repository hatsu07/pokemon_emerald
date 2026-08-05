	@ data/text/match_call.inc:940 MatchCall_Text_MrStone8
	.globl gText_Rom_26C616
gText_Rom_26C616: @ 0x0826C616
	.string "……え ……なにかね?\pグラ…… はい? ……ドン?\pなんだか…… きこえな……\pザザザザザ…… …… ……"
	.byte EOS
	.if (. - gText_Rom_26C616) > 0x37
	.error "gText_Rom_26C616 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26C616) < 0x37
	.space 0x37 - (. - gText_Rom_26C616)
	.endif
