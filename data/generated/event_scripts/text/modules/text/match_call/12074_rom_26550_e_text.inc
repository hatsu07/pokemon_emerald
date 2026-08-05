	@ data/text/match_call.inc:31 MatchCall_WildBattleText11
	.globl gText_Rom_26550E
gText_Rom_26550E: @ 0x0826550E
	.string "ああ {PLAYER}{KUN}\n{STR_VAR_1}だけど\lちょうしは どうだい?\pおれは このまえ {STR_VAR_2} を\nつかまえようと したんだけど\pにげられちゃったよ\nがっくり$"
	.if (. - gText_Rom_26550E) > 0x46
	.error "gText_Rom_26550E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26550E) < 0x46
	.space 0x46 - (. - gText_Rom_26550E)
	.endif
