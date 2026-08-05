	@ src/strings.c:974 gText_Hoenn
	.globl gText_Rom_5C611C
gText_Rom_5C611C: @ 0x085C611C
	.string "ホウエンちほう$"
	.if (. - gText_Rom_5C611C) > 0x8
	.error "gText_Rom_5C611C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C611C) < 0x8
	.space 0x8 - (. - gText_Rom_5C611C)
	.endif
