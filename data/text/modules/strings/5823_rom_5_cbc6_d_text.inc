	@ src/strings.c:611 gText_SectionMustBeCompleted
	.globl gText_SectionMustBeCompleted
gText_SectionMustBeCompleted: @ 0x085CBC6D
	.string "やめることは できません!{EOS}"
	.if (. - gText_SectionMustBeCompleted) > 0xe
	.error "gText_SectionMustBeCompleted may not grow beyond its original slot"
	.endif
	.if (. - gText_SectionMustBeCompleted) < 0xe
	.space 0xe - (. - gText_SectionMustBeCompleted)
	.endif
