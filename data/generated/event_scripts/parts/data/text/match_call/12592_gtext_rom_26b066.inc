	@ data/text/match_call.inc:763 MatchCall_Text_May12
	.globl gText_Rom_26B066
gText_Rom_26B066: @ 0x0826B066
	.string "ハルカ『{PLAYER}{KUN} おつかれ!\pうみのうえで みえてるのに むこうがわへ\nいけない ところ なんかは\pどこかから いったん もぐって\nかいていの みちを とおりぬけて\lむこうの すいめんに でれば いいの!"
	.byte EOS
	.if (. - gText_Rom_26B066) > 0x67
	.error "gText_Rom_26B066 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26B066) < 0x67
	.space 0x67 - (. - gText_Rom_26B066)
	.endif
