	@ data/text/match_call.inc:70 MatchCall_NegativeBattleText9
	.globl gText_Rom_26589B
gText_Rom_26589B: @ 0x0826589B
	.string "あ {PLAYER}{KUN} こんにちはー!\n{STR_VAR_1} でーす\pねー きいて きいて!\nこのまえ ポケモン しょうぶ したんだけど\pあとちょっとの ところで\nまけちゃったのよー! くやしい!$"
	.if (. - gText_Rom_26589B) > 0x56
	.error "gText_Rom_26589B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26589B) < 0x56
	.space 0x56 - (. - gText_Rom_26589B)
	.endif
