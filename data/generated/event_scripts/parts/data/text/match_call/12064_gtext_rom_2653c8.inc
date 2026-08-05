	@ data/text/match_call.inc:19 MatchCall_WildBattleText7
	.globl gText_Rom_2653C8
gText_Rom_2653C8: @ 0x082653C8
	.string "・・・あ {PLAYER}{KUN}?\n{STR_VAR_1} だけど・・・\pあ ちょっと まって!\nいま {STR_VAR_2}を つかまえ・・・\pああああ にげられたー!\nもうすこし だったのに!$"
	.if (. - gText_Rom_2653C8) > 0x4a
	.error "gText_Rom_2653C8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2653C8) < 0x4a
	.space 0x4a - (. - gText_Rom_2653C8)
	.endif
