	@ src/strings.c:398 gText_HMMovesCantBeForgotten2
	.globl gText_Rom_5CA487
gText_Rom_5CA487: @ 0x085CA487
	.string "それは たいせつなわざです\nわすれさせることは できません!$"
	.if (. - gText_Rom_5CA487) > 0x1f
	.error "gText_Rom_5CA487 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA487) < 0x1f
	.space 0x1f - (. - gText_Rom_5CA487)
	.endif
