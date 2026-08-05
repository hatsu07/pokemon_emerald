	@ data/maps/SootopolisCity/scripts.inc:1453 SootopolisCity_Text_LeadSuperiorTrainerToCave
	.globl gText_Rom_1E30B4
gText_Rom_1E30B4: @ 0x081E30B4
	.string "つよい いしと すぐれた さいのう\pそして たくさんの ポケモンを みてきた\nちしきと けいけん……\pそんな じんぶつが やってきたら\nこの ほこらへ あんない するよう\lミクリから もうしつけられて いたのです$"
	.if (. - gText_Rom_1E30B4) > 0x6b
	.error "gText_Rom_1E30B4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E30B4) < 0x6b
	.space 0x6b - (. - gText_Rom_1E30B4)
	.endif
