	@ data/text/trainers.inc:1061 Route111_Text_TyronPostBattle
	.globl gText_Rom_25C1C4
gText_Rom_25C1C4: @ 0x0825C1C4
	.string "しょうぶを する ときって\nじぶんの ポケモンを みせびらかす\lたのしみが ゼッタイ あるよねー{EOS}"
	.if (. - gText_Rom_25C1C4) > 0x31
	.error "gText_Rom_25C1C4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25C1C4) < 0x31
	.space 0x31 - (. - gText_Rom_25C1C4)
	.endif
