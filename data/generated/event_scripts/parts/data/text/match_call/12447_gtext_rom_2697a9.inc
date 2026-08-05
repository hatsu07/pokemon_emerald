	@ data/text/match_call.inc:553 MatchCall_BattlePikeText8
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2697A9
gText_Rom_2697A9: @ 0x082697A9
	.string "こんにちは {PLAYER}{KUN}\n{STR_VAR_1} です\pげんき ですか?\n{STR_VAR_2}で {STR_VAR_3}へやも\lとっぱ したんですって?\pすごいですね!\nわたしも がんばって\pポケモン そだてないと!\nじゃあ またね"
	.byte EOS
	.if (. - gText_Rom_2697A9) != 0x59
	.error "gText_Rom_2697A9 must retain its original byte length"
	.endif
