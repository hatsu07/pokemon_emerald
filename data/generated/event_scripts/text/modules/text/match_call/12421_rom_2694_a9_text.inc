	@ data/text/match_call.inc:520 MatchCall_BattleDomeText11
	.globl gText_Rom_2694A9
gText_Rom_2694A9: @ 0x082694A9
	.string "やあやあ {PLAYER}{KUN}\n{STR_VAR_1}だ\p{STR_VAR_2}で\nだいかつやく らしいなあ\l{STR_VAR_3}れんしょう したんだって?\pすげえなあ おれでも\nゆうしょう できるのかな\p・・・ むりかな?\nじゃあ またな"
	.byte EOS
	.if (. - gText_Rom_2694A9) > 0x59
	.error "gText_Rom_2694A9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2694A9) < 0x59
	.space 0x59 - (. - gText_Rom_2694A9)
	.endif
