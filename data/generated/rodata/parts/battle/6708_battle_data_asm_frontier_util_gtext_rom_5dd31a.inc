	@ asm/frontier_util.s:869 ShowTowerResultsWindow
	.globl gText_Rom_5DD31A
gText_Rom_5DD31A: @ 0x085DD31A
	.string "　　{0xFD}{0x01}　の　マルチ　バトルルーム　せいせき$"
	.if (. - gText_Rom_5DD31A) > 0x17
	.error "gText_Rom_5DD31A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DD31A) < 0x17
	.space 0x17 - (. - gText_Rom_5DD31A)
	.endif
