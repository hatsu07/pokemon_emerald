	@ data/text/apprentice.inc:118 gText_ApprenticeLevelModeThanks5
	.globl gText_Rom_26D983
gText_Rom_26D983: @ 0x0826D983
	.string "{STR_VAR_1} ね! オーケー!\nなんとか じかん つくって やってみるぜ!\p……っと いけね バイトのじかんだ!\nじゃあ サンキュー またな!"
	.byte EOS
	.if (. - gText_Rom_26D983) > 0x44
	.error "gText_Rom_26D983 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26D983) < 0x44
	.space 0x44 - (. - gText_Rom_26D983)
	.endif
