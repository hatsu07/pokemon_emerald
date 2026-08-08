	@ data/maps/RustboroCity_Gym/scripts.inc:171 RustboroCity_Gym_Text_MarcPostBattle
	.globl gText_Rom_2026F4
gText_Rom_2026F4: @ 0x082026F4
	.string "わかくして いわタイプに\nめを つける なんて\lうちの ジムリーダーは センスが いいぜ!$"
	.if (. - gText_Rom_2026F4) > 0x2e
	.error "gText_Rom_2026F4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2026F4) < 0x2e
	.space 0x2e - (. - gText_Rom_2026F4)
	.endif
