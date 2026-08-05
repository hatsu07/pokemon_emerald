	@ data/text/match_call.inc:883 MatchCall_Text_Norman_RematchReady
	.globl gText_Rom_26BF0E
gText_Rom_26BF0E: @ 0x0826BF0E
	.string "パパ『……ん? {PLAYER}か?\nこれは ちょうど よかった!\pこんどは パパから おまえに\nしょうぶを もうしこんで やろう\pトウカの ジムで まってるから\nいつでも ちょうせんしに おいで!"
	.byte EOS
	.if (. - gText_Rom_26BF0E) > 0x5e
	.error "gText_Rom_26BF0E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26BF0E) < 0x5e
	.space 0x5e - (. - gText_Rom_26BF0E)
	.endif
