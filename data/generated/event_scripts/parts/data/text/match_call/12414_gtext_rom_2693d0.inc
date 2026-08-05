	@ data/text/match_call.inc:511 MatchCall_BattleDomeText8
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2693D0
gText_Rom_2693D0: @ 0x082693D0
	.string "こんにちは {PLAYER}{KUN}\n{STR_VAR_1} です\pげんき ですか?\n{STR_VAR_2}で {STR_VAR_3}かいも\lゆうしょう したんですって?\pすごいですね!\nわたしも がんばって\pポケモン そだてないと!\nじゃあ またね"
	.byte EOS
	.if (. - gText_Rom_2693D0) != 0x5b
	.error "gText_Rom_2693D0 must retain its original byte length"
	.endif
