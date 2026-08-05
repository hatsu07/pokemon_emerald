	@ src/strings.c:277 gText_MoveNotLearned
	.globl gText_Rom_5C9E0D
gText_Rom_5C9E0D: @ 0x085C9E0D
	.string "{STR_VAR_1}は {STR_VAR_2}を\nおぼえずに おわった!{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_5C9E0D) > 0x16
	.error "gText_Rom_5C9E0D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9E0D) < 0x16
	.space 0x16 - (. - gText_Rom_5C9E0D)
	.endif
