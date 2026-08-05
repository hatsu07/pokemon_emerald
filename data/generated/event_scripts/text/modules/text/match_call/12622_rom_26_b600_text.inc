	@ data/text/match_call.inc:808 MatchCall_Text_Brendan12
	.globl gText_Rom_26B600
gText_Rom_26B600: @ 0x0826B600
	.string "ユウキ『{PLAYER} おつかれ!\pうみのうえで みえてるのに むこうがわへ\nいけない ところ なんかは\pどこかから いったん もぐって\nかいていの みちを とおりぬけて\lむこうの すいめんに でれば いいんだ!"
	.byte EOS
	.if (. - gText_Rom_26B600) > 0x66
	.error "gText_Rom_26B600 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26B600) < 0x66
	.space 0x66 - (. - gText_Rom_26B600)
	.endif
