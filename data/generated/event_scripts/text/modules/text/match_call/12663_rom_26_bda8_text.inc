	@ data/text/match_call.inc:868 MatchCall_Text_Norman3
	.globl gText_Rom_26BDA8
gText_Rom_26BDA8: @ 0x0826BDA8
	.string "パパ『そうか……\nジムバッジを 4つ あつめたのか\pでは やくそく どおり\nポケモンしょうぶ だな……\pいつでも おいで まってるぞ!"
	.byte EOS
	.if (. - gText_Rom_26BDA8) > 0x44
	.error "gText_Rom_26BDA8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26BDA8) < 0x44
	.space 0x44 - (. - gText_Rom_26BDA8)
	.endif
