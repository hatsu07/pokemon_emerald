	@ data/text/match_call.inc:67 MatchCall_NegativeBattleText8
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_26584B
gText_Rom_26584B: @ 0x0826584B
	.string "あ {PLAYER}{KUN} こんにちは\n{STR_VAR_1} です\pポケモンの ちょうしは どう?\nわたしは このまえの しょうぶで\lまけちゃった\pもっと がんばらなきゃ!\nじゃあ またね$"
	.if (. - gText_Rom_26584B) != 0x50
	.error "gText_Rom_26584B must retain its original byte length"
	.endif
