	@ data/maps/Route120/scripts.inc:379 Route120_Text_StevenReadyForBattle
	.globl gText_Rom_1EDECC
gText_Rom_1EDECC: @ 0x081EDECC
	.string "ダイゴ『{PLAYER}{KUN} きみの ポケモン\nたたかう じゅんびは できて いるのかい?{EOS}"
	.if (. - gText_Rom_1EDECC) > 0x28
	.error "gText_Rom_1EDECC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EDECC) < 0x28
	.space 0x28 - (. - gText_Rom_1EDECC)
	.endif
