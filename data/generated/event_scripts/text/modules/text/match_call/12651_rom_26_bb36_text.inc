	@ data/text/match_call.inc:850 MatchCall_Text_Scott4
	.globl gText_Rom_26BB36
gText_Rom_26BB36: @ 0x0826BB36
	.string "エニシダ『んー {PLAYER}{KUN}!\pどうも ちかごろは\nマグマだん とか アクアだん とか\lおかしな れんちゅうが あばれてるね\pかれらの なかには\nすぐれた トレーナーも いるんだろうけど\lでも わるもの じゃあなあ……"
	.byte EOS
	.if (. - gText_Rom_26BB36) > 0x6c
	.error "gText_Rom_26BB36 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26BB36) < 0x6c
	.space 0x6c - (. - gText_Rom_26BB36)
	.endif
