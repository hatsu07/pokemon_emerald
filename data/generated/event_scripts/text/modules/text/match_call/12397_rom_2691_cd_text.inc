	@ data/text/match_call.inc:490 MatchCall_BattleDomeText1
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2691CD
gText_Rom_2691CD: @ 0x082691CD
	.string "あ! {PLAYER}?\nこんにちは {STR_VAR_1} です!\pきいたよ!\n{STR_VAR_2} で\p{STR_VAR_3}かい も\nゆうしょう したんだって?\pすごいね! ぼくも がんばらなきゃ!\nじゃあ またね"
	.byte EOS
	.if (. - gText_Rom_2691CD) != 0x4f
	.error "gText_Rom_2691CD must retain its original byte length"
	.endif
