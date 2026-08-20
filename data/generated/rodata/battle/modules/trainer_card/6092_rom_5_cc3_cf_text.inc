	@ asm/trainer_card.s:3231 PrintPokeblocksNumOnCard
	.globl gText_Rom_5CC3CF
gText_Rom_5CC3CF: @ 0x085CC3CF
	.string "{0xFD}{0x02}{COLOR}{0x02}{SHADOW}{0x03}こ{EOS}"
	.if (. - gText_Rom_5CC3CF) > 0xa
	.error "gText_Rom_5CC3CF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC3CF) < 0xa
	.space 0xa - (. - gText_Rom_5CC3CF)
	.endif
