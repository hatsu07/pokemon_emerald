	@ src/strings.c:611 gText_SectionMustBeCompleted
	.globl gText_Rom_5CBC6D
gText_Rom_5CBC6D: @ 0x085CBC6D
	.string "やめることは できません!$"
	.if (. - gText_Rom_5CBC6D) > 0xe
	.error "gText_Rom_5CBC6D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBC6D) < 0xe
	.space 0xe - (. - gText_Rom_5CBC6D)
	.endif
