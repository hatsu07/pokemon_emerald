	@ src/strings.c:719 gText_HealthboxGender_Male
	.globl gText_Rom_5CC4F0
gText_Rom_5CC4F0: @ 0x085CC4F0
	.string "{COLOR DYNAMIC_COLOR2}♂$"
	.if (. - gText_Rom_5CC4F0) > 0x5
	.error "gText_Rom_5CC4F0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC4F0) < 0x5
	.space 0x5 - (. - gText_Rom_5CC4F0)
	.endif
