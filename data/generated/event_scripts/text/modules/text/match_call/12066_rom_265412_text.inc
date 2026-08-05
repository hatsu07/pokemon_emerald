	@ data/text/match_call.inc:22 MatchCall_WildBattleText8
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_265412
gText_Rom_265412: @ 0x08265412
	.string "あ {PLAYER}{KUN} こんにちは\n{STR_VAR_1} です\pあれから ポケモン つかまえた?\nわたし このまえ もうすこしで\pつかまえられそう だったのに\nにげられちゃった\pもっと がんばらなきゃ!\nじゃあ またね$"
	.if (. - gText_Rom_265412) != 0x61
	.error "gText_Rom_265412 must retain its original byte length"
	.endif
