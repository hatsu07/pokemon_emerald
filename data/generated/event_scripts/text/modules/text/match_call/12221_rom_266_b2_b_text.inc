	@ data/text/match_call.inc:235 MatchCall_PersonalizedText8
	.globl gText_Rom_266B2B
gText_Rom_266B2B: @ 0x08266B2B
	.string "ヤッホー {STR_VAR_1}よ\nこんにちは!\pいま あなたを めざして\nポケモンを そだてて いるの!\lこんど たたかう ときは\lぜったい まけない つもり! ふふっ\pトレーナー なかまが いるって いいよね\nまた あいましょう!$"
	.if (. - gText_Rom_266B2B) > 0x6d
	.error "gText_Rom_266B2B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_266B2B) < 0x6d
	.space 0x6d - (. - gText_Rom_266B2B)
	.endif
