	@ data/text/match_call.inc:832 MatchCall_Text_Wally5
	.globl gText_Rom_26B8D1
gText_Rom_26B8D1: @ 0x0826B8D1
	.string "ミツル『{PLAYER}さん? すごいですよ!\n{PLAYER}さんと いっしょに つかまえた\lラルトスが しんか したんです!\pぼくって さいのう あるのかなあ……\pなーんて ちょうしに のったら\nいけませんよね\pえらいのは ポケモン ですもん!"
	.byte EOS
	.if (. - gText_Rom_26B8D1) > 0x71
	.error "gText_Rom_26B8D1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26B8D1) < 0x71
	.space 0x71 - (. - gText_Rom_26B8D1)
	.endif
