	@ data/text/match_call.inc:574 MatchCall_BattlePyramidText1
	.globl gText_Rom_2699AB
gText_Rom_2699AB: @ 0x082699AB
	.string "あ! {PLAYER}?\nこんにちは {STR_VAR_1} です!\pきいたよ!\n{STR_VAR_2} で\p{STR_VAR_3}だん も\nのぼったんだって?\pすごいねー ぼくも こんど\nちょうせん してみようかなー"
	.byte EOS
	.if (. - gText_Rom_2699AB) > 0x4d
	.error "gText_Rom_2699AB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2699AB) < 0x4d
	.space 0x4d - (. - gText_Rom_2699AB)
	.endif
