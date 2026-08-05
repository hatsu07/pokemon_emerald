	@ data/text/match_call.inc:49 MatchCall_NegativeBattleText2
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2656C6
gText_Rom_2656C6: @ 0x082656C6
	.string "{PLAYER}{KUN} こんにちは!\n{STR_VAR_1}よ!\pわたし ね\nあれから また しょうぶ してみたの\pでも あとちょっとの ところで\nまけちゃった あーあ$"
	.if (. - gText_Rom_2656C6) != 0x45
	.error "gText_Rom_2656C6 must retain its original byte length"
	.endif
