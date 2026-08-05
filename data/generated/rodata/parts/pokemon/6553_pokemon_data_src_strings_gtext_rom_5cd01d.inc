	@ src/strings.c:874 gJPText_NewTrainerHasComeToHoenn
	.globl gText_Rom_5CD01D
gText_Rom_5CD01D: @ 0x085CD01D
	.string "あらたな トレーナーが\nホウエンに やってきた!$"
	.if (. - gText_Rom_5CD01D) > 0x19
	.error "gText_Rom_5CD01D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CD01D) < 0x19
	.space 0x19 - (. - gText_Rom_5CD01D)
	.endif
