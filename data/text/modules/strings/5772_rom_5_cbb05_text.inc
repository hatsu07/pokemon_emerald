	@ src/strings.c:588 gText_EntireTextCantBeDeleted
	.globl gText_EntireTextCantBeDeleted
gText_EntireTextCantBeDeleted: @ 0x085CBB05
	.string "ことばを ぜんぶ けすことは できません!{EOS}"
	.if (. - gText_EntireTextCantBeDeleted) > 0x16
	.error "gText_EntireTextCantBeDeleted may not grow beyond its original slot"
	.endif
	.if (. - gText_EntireTextCantBeDeleted) < 0x16
	.space 0x16 - (. - gText_EntireTextCantBeDeleted)
	.endif
