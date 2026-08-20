	@ src/strings.c:588 gText_EntireTextCantBeDeleted
	.globl gText_Rom_5CBB05
gText_Rom_5CBB05: @ 0x085CBB05
	.string "ことばを ぜんぶ けすことは できません!{EOS}"
	.if (. - gText_Rom_5CBB05) > 0x16
	.error "gText_Rom_5CBB05 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBB05) < 0x16
	.space 0x16 - (. - gText_Rom_5CBB05)
	.endif
