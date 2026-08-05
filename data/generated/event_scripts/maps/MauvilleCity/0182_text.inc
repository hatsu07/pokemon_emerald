	@ data/maps/MauvilleCity/scripts.inc:524 MauvilleCity_Text_ThankYouNotEnoughToBattle
	.globl gText_Rom_1DE09E
gText_Rom_1DE09E: @ 0x081DE09E
	.string "{PLAYER}さん ありがとう\nやっぱり トレーナーって すごいんですね\pただ ポケモンを もっていて\nたたかわせる だけじゃ ほんとうの いみで\lトレーナーには なれないんだ……$"
	.if (. - gText_Rom_1DE09E) > 0x56
	.error "gText_Rom_1DE09E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DE09E) < 0x56
	.space 0x56 - (. - gText_Rom_1DE09E)
	.endif
