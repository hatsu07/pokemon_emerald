	@ data/text/match_call.inc:814 MatchCall_Text_Brendan14
	.globl gText_Rom_26B6E9
gText_Rom_26B6E9: @ 0x0826B6E9
	.string "ユウキ『{PLAYER}!\nうわさは きいたよ!\pルネの ジムリーダーにも かったって?\nすげえなあ もうひといき だな!"
	.byte EOS
	.if (. - gText_Rom_26B6E9) > 0x38
	.error "gText_Rom_26B6E9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26B6E9) < 0x38
	.space 0x38 - (. - gText_Rom_26B6E9)
	.endif
