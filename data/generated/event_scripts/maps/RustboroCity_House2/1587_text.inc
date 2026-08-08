	@ data/maps/RustboroCity_House2/scripts.inc:12 RustboroCity_House2_Text_TrainerSchoolExcellent
	.globl gText_Rom_203F28
gText_Rom_203F28: @ 0x08203F28
	.string "トレーナーズ スクールは いいわよ!\pあそこで ポケモンの べんきょう すれば\nジムリーダーに だって なれますもの!$"
	.if (. - gText_Rom_203F28) > 0x3c
	.error "gText_Rom_203F28 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_203F28) < 0x3c
	.space 0x3c - (. - gText_Rom_203F28)
	.endif
