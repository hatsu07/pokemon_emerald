	@ data/text/match_call.inc:769 MatchCall_Text_May14
	.globl gText_Rom_26B149
gText_Rom_26B149: @ 0x0826B149
	.string "ハルカ『{PLAYER}{KUN}!\nうわさは きいたよ!\pルネの ジムリーダーにも かったって?\nということは もうひといき だね!"
	.byte EOS
	.if (. - gText_Rom_26B149) > 0x3b
	.error "gText_Rom_26B149 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26B149) < 0x3b
	.space 0x3b - (. - gText_Rom_26B149)
	.endif
