	@ data/text/match_call.inc:670 MatchCall_Text_Flannery_PostRematch
	.globl gText_Rom_26A43E
gText_Rom_26A43E: @ 0x0826A43E
	.string "アスナ『{PLAYER}さん……\nポケモンの あつかいかたが\lどんどん うまくなってる きがするよ!"
	.byte EOS
	.if (. - gText_Rom_26A43E) > 0x2d
	.error "gText_Rom_26A43E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26A43E) < 0x2d
	.space 0x2d - (. - gText_Rom_26A43E)
	.endif
