	@ data/text/match_call.inc:13 MatchCall_WildBattleText5 (+1 aliases)
	.globl gText_Rom_26532E
gText_Rom_26532E: @ 0x0826532E
	.string "やあ {PLAYER}{KUN}\n{STR_VAR_1} だけど\lポケモン つかまえてる?\pおれも このまえ もうすこしで\nつかまえられそう だったけど\pにげられちゃったよ\nじゃあ またな$"
	.if (. - gText_Rom_26532E) > 0x4d
	.error "gText_Rom_26532E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26532E) < 0x4d
	.space 0x4d - (. - gText_Rom_26532E)
	.endif
