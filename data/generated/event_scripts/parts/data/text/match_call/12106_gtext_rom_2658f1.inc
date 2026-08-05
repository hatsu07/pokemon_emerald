	@ data/text/match_call.inc:73 MatchCall_NegativeBattleText10
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2658F1
gText_Rom_2658F1: @ 0x082658F1
	.string "あら {PLAYER}{KUN}\n{STR_VAR_1} です\pさっき しょうぶ したんだけど\nまけちゃった\pもっと ポケモン そだてないと だめね\nじゃあ またね$"
	.if (. - gText_Rom_2658F1) != 0x41
	.error "gText_Rom_2658F1 must retain its original byte length"
	.endif
