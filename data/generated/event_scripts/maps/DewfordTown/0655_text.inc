	@ data/maps/DewfordTown/scripts.inc:630 DewfordTown_Text_TinyIslandCommunity
	.globl gText_Rom_1E50F8
gText_Rom_1E50F8: @ 0x081E50F8
	.string "ムロタウンって ちいさな しま だから\nなにかが はやりだすと\lみんな すぐに まねを するのよね$"
	.if (. - gText_Rom_1E50F8) > 0x32
	.error "gText_Rom_1E50F8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E50F8) < 0x32
	.space 0x32 - (. - gText_Rom_1E50F8)
	.endif
