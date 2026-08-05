	@ src/strings.c:160 gText_CantWriteMail
	.globl gText_Rom_5C945C
gText_Rom_5C945C: @ 0x085C945C
	.string "ここで メールを\nかくことは できません!$"
	.if (. - gText_Rom_5C945C) > 0x16
	.error "gText_Rom_5C945C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C945C) < 0x16
	.space 0x16 - (. - gText_Rom_5C945C)
	.endif
