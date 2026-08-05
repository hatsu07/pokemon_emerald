	@ data/text/match_call.inc:82 MatchCall_NegativeBattleText13
	.globl gText_Rom_2659C5
gText_Rom_2659C5: @ 0x082659C5
	.string "おお {PLAYER}{KUN}\n{STR_VAR_1} じゃ\pげんき かのう?\nさっきまで ポケモン しょうぶを\lしておったよ\p{PLAYER}{KUN}も がんばるんじゃぞ\nでは またの$"
	.if (. - gText_Rom_2659C5) > 0x45
	.error "gText_Rom_2659C5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2659C5) < 0x45
	.space 0x45 - (. - gText_Rom_2659C5)
	.endif
