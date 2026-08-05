	@ data/text/match_call.inc:847 MatchCall_Text_Scott3
	.globl gText_Rom_26BAC4
gText_Rom_26BAC4: @ 0x0826BAC4
	.string "エニシダ『やあやあ {PLAYER}{KUN}!\pきみは おくりびやま って\nのぼったこと ある?\pあそこは ポケモンの たましいが\nまつられている ばしょ だからねえ\pトレーナー ならば いちど ぐらいは\nてっぺんまで のぼって みないとね!"
	.byte EOS
	.if (. - gText_Rom_26BAC4) > 0x72
	.error "gText_Rom_26BAC4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26BAC4) < 0x72
	.space 0x72 - (. - gText_Rom_26BAC4)
	.endif
