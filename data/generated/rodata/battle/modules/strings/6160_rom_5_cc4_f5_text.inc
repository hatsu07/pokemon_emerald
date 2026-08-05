	@ src/strings.c:720 gText_HealthboxGender_Female
	.globl gText_Rom_5CC4F5
gText_Rom_5CC4F5: @ 0x085CC4F5
	.string "{COLOR DYNAMIC_COLOR1}♀$"
	.if (. - gText_Rom_5CC4F5) > 0x5
	.error "gText_Rom_5CC4F5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC4F5) < 0x5
	.space 0x5 - (. - gText_Rom_5CC4F5)
	.endif
