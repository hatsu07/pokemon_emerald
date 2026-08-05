	@ data/text/match_call.inc:775 MatchCall_Text_Brendan1
	.globl gText_Rom_26B1D9
gText_Rom_26B1D9: @ 0x0826B1D9
	.string "ユウキ『おっ {PLAYER}!\pハギろうじんは\nふなのりを いんたい したけど\pときどき ピーコちゃんと いっしょに\nうみに でてるのを みかけるんだ\pきっと いまも うみが すきなんだろうな!"
	.byte EOS
	.if (. - gText_Rom_26B1D9) > 0x5d
	.error "gText_Rom_26B1D9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26B1D9) < 0x5d
	.space 0x5d - (. - gText_Rom_26B1D9)
	.endif
