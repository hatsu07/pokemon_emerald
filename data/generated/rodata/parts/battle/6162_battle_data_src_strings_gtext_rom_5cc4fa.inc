	@ src/strings.c:721 gText_HealthboxGender_None
	.globl gText_Rom_5CC4FA
gText_Rom_5CC4FA: @ 0x085CC4FA
	.string "{COLOR DYNAMIC_COLOR2}$"
	.if (. - gText_Rom_5CC4FA) > 0x4
	.error "gText_Rom_5CC4FA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC4FA) < 0x4
	.space 0x4 - (. - gText_Rom_5CC4FA)
	.endif
