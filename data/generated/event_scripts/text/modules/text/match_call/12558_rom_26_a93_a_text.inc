	@ data/text/match_call.inc:712 MatchCall_Text_Phoebe
	.globl gText_Rom_26A93A
gText_Rom_26A93A: @ 0x0826A93A
	.string "フヨウ『ハーイ {PLAYER}!\pあなたと ポケモンの きずなが\nどれぐらい ふかく なったか\lたまには ここまで みせに きてよね!"
	.byte EOS
	.if (. - gText_Rom_26A93A) > 0x3f
	.error "gText_Rom_26A93A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26A93A) < 0x3f
	.space 0x3f - (. - gText_Rom_26A93A)
	.endif
