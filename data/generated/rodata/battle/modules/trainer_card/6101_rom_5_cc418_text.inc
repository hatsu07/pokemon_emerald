	@ asm/trainer_card.s:3446 PrintBattleFacilityNumsOnCard
	.globl gText_Rom_5CC418
gText_Rom_5CC418: @ 0x085CC418
	.string "{0xFD}{0x02}　　　　　　{0xFD}{0x03}{EOS}"
	.if (. - gText_Rom_5CC418) > 0xb
	.error "gText_Rom_5CC418 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC418) < 0xb
	.space 0xb - (. - gText_Rom_5CC418)
	.endif
