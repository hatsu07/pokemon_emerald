	@ data/text/match_call.inc:28 MatchCall_WildBattleText10
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2654C3
gText_Rom_2654C3: @ 0x082654C3
	.string "あ {PLAYER}{KUN} こんにちは\n{STR_VAR_1} よ\pもうすこしで {STR_VAR_2} を\nつかまえられそう だったのに\lにげられちゃった\pもっと がんばらなきゃ!\nじゃあ またね$"
	.if (. - gText_Rom_2654C3) != 0x4b
	.error "gText_Rom_2654C3 must retain its original byte length"
	.endif
