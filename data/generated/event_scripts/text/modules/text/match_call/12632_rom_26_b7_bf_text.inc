	@ data/text/match_call.inc:823 MatchCall_Text_Wally2
	.globl gText_Rom_26B7BF
gText_Rom_26B7BF: @ 0x0826B7BF
	.string "ミツル『{PLAYER}さん こんにちは!\pカナシダトンネルが かいつう したせいで\nミチルおねえちゃんも\lすっごく うれしそう ですよ!"
	.byte EOS
	.if (. - gText_Rom_26B7BF) > 0x40
	.error "gText_Rom_26B7BF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26B7BF) < 0x40
	.space 0x40 - (. - gText_Rom_26B7BF)
	.endif
