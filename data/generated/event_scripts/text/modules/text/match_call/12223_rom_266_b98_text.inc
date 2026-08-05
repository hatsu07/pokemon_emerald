	@ data/text/match_call.inc:238 MatchCall_PersonalizedText9
	.globl gText_Rom_266B98
gText_Rom_266B98: @ 0x08266B98
	.string "{STR_VAR_1} ですけど……\nいま あなたの うしろ……\lなにかが いない……?\pここ おくりびやまで ねむっている\nポケモンたちの ちからが\lわたしに おしえて くれるの……\lふりかえらないで そのまま\lまっすぐ あるいたほうが いいわよ……\pフフ……\nそれじゃあ さよなら……$"
	.if (. - gText_Rom_266B98) > 0x88
	.error "gText_Rom_266B98 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_266B98) < 0x88
	.space 0x88 - (. - gText_Rom_266B98)
	.endif
