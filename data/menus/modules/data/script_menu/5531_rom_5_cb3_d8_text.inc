	@ src/data/script_menu.h:9 gText_Info2 (+3 aliases)
	.globl gText_Rom_5CB3D8
gText_Rom_5CB3D8: @ 0x085CB3D8
	.string "せつめい{EOS}"
	.if (. - gText_Rom_5CB3D8) > 0x5
	.error "gText_Rom_5CB3D8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB3D8) < 0x5
	.space 0x5 - (. - gText_Rom_5CB3D8)
	.endif

