	@ data/text/match_call.inc:730 MatchCall_Text_May1
	.globl gText_Rom_26AC61
gText_Rom_26AC61: @ 0x0826AC61
	.string "ハルカ『あっ {PLAYER}{KUN}!\pハギろうじんは\nふなのりを いんたい したけど\pときどき ピーコちゃんと いっしょに\nうみに でてるのを みかけるよ\pきっと いまも うみが すきなんだね!"
	.byte EOS
	.if (. - gText_Rom_26AC61) > 0x5c
	.error "gText_Rom_26AC61 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26AC61) < 0x5c
	.space 0x5c - (. - gText_Rom_26AC61)
	.endif
