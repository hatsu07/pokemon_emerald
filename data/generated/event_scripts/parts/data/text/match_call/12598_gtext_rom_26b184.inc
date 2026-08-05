	@ data/text/match_call.inc:772 MatchCall_Text_May15
	.globl gText_Rom_26B184
gText_Rom_26B184: @ 0x0826B184
	.string "ハルカ『もう ホウエンちほうで\n{PLAYER}{KUN}を しらない\lトレーナー なんて いないんだよ!\pあたしが {PLAYER}{KUN}と\nともだちだ っていうと\lみんな ビックリ するんだから!"
	.byte EOS
	.if (. - gText_Rom_26B184) > 0x55
	.error "gText_Rom_26B184 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26B184) < 0x55
	.space 0x55 - (. - gText_Rom_26B184)
	.endif
