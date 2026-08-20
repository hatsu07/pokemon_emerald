	@ data/maps/FallarborTown/scripts.inc:63 FallarborTown_Text_Azurill
	.globl gText_Rom_1E5F7A
gText_Rom_1E5F7A: @ 0x081E5F7A
	.string "ルリリ『るーりーるー{EOS}"
	.if (. - gText_Rom_1E5F7A) > 0xb
	.error "gText_Rom_1E5F7A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E5F7A) < 0xb
	.space 0xb - (. - gText_Rom_1E5F7A)
	.endif
