	@ data/text/match_call.inc:244 MatchCall_PersonalizedText11
	.globl gText_Rom_266C94
gText_Rom_266C94: @ 0x08266C94
	.string "{STR_VAR_1}よ\nちょっと はなし ききなさいよ!\pわたし サファリゾーンが すきなんだけど\nあそこに いくと かならず まようのよ!\lくさ ばっかり はえてて\lちょっと ひろすぎるのよねー! ぷんぷん!\pあー おこったら きが すんだわ\nちょっと サファリゾーンでも いこっと!\lまたね!$"
	.if (. - gText_Rom_266C94) > 0x8d
	.error "gText_Rom_266C94 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_266C94) < 0x8d
	.space 0x8d - (. - gText_Rom_266C94)
	.endif
