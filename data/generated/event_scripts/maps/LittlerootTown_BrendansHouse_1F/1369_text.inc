	@ data/maps/LittlerootTown_BrendansHouse_1F/scripts.inc:368 PlayersHouse_1F_Text_ReportFromPetalburgGym
	.globl gText_Rom_1EFCF7
gText_Rom_1EFCF7: @ 0x081EFCF7
	.string "インタビュアー『…… いじょう\nトウカジムの まえ からでした!{EOS}"
	.if (. - gText_Rom_1EFCF7) > 0x21
	.error "gText_Rom_1EFCF7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EFCF7) < 0x21
	.space 0x21 - (. - gText_Rom_1EFCF7)
	.endif
