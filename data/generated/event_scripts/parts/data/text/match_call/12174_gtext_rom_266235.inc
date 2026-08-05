	@ data/text/match_call.inc:166 MatchCall_SameRouteBattleRequestText13
	.globl gText_Rom_266235
gText_Rom_266235: @ 0x08266235
	.string "やあ {PLAYER}{KUN}\n{STR_VAR_1} じゃが げんきかのう?\pほうほう いまは {STR_VAR_2}に おるのか\nちかいから こっちへ よって\pいちど しょうぶ して いかんかの?\nまっておるぞ じゃあの$"
	.if (. - gText_Rom_266235) > 0x57
	.error "gText_Rom_266235 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_266235) < 0x57
	.space 0x57 - (. - gText_Rom_266235)
	.endif
