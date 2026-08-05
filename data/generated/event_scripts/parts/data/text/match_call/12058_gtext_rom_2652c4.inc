	@ data/text/match_call.inc:10 MatchCall_WildBattleText4
	.globl gText_Rom_2652C4
gText_Rom_2652C4: @ 0x082652C4
	.string "やあ {PLAYER}{KUN}\n{STR_VAR_1} だ\p{STR_VAR_2}って ポケモン しってるかい?\nこのまえ あとすこしで\pつかまえられそう だったんだけど\nにげられて しまったよ\pこんど みつけたら ぜったい\nつかまえて みせるよ\pじゃあ またな$"
	.if (. - gText_Rom_2652C4) > 0x6a
	.error "gText_Rom_2652C4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2652C4) < 0x6a
	.space 0x6a - (. - gText_Rom_2652C4)
	.endif
