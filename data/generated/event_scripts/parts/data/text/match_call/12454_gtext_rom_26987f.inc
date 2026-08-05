	@ data/text/match_call.inc:562 MatchCall_BattlePikeText11
	.globl gText_Rom_26987F
gText_Rom_26987F: @ 0x0826987F
	.string "やあやあ {PLAYER}{KUN}\n{STR_VAR_1}だ\p{STR_VAR_2}で\nだいかつやく らしいなあ\l{STR_VAR_3}へやも とっぱ したんだって?\pすげえなあ おれでも\nゆうしょう できるのかな\p・・・ むりかなあ?\nじゃあ またな"
	.byte EOS
	.if (. - gText_Rom_26987F) > 0x5c
	.error "gText_Rom_26987F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26987F) < 0x5c
	.space 0x5c - (. - gText_Rom_26987F)
	.endif
