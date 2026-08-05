	@ data/maps/Route120/scripts.inc:417 Kecleon_Text_UseDevonScopeMonAttacked
	.globl gText_Rom_1EE05A
gText_Rom_1EE05A: @ 0x081EE05A
	.string "{PLAYER}は\nデボンスコープを つかった!\pとうめいに なっていた\nポケモンの すがたが まるわかりだ!\pポケモンは\nおどろいて おそいかかってきた!$"
	.if (. - gText_Rom_1EE05A) > 0x49
	.error "gText_Rom_1EE05A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EE05A) < 0x49
	.space 0x49 - (. - gText_Rom_1EE05A)
	.endif
