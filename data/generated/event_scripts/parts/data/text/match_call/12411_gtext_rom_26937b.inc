	@ data/text/match_call.inc:508 MatchCall_BattleDomeText7
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_26937B
gText_Rom_26937B: @ 0x0826937B
	.string "{PLAYER}{KUN}?\nああ {STR_VAR_1} だけど\p{STR_VAR_2}で ゆうしょうを\n{STR_VAR_3}かいも したんだって?\pへー ところで さいきん\nめずらしい ポケモン つかまえた?\pあ そう\nじゃあ またね"
	.byte EOS
	.if (. - gText_Rom_26937B) != 0x55
	.error "gText_Rom_26937B must retain its original byte length"
	.endif
