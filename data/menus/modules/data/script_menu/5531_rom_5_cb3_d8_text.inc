	@ src/data/script_menu.h:9 gText_Info2 (+3 aliases)
	.globl gText_Info2
gText_Info2: @ 0x085CB3D8
	.string "せつめい{EOS}"
	.if (. - gText_Info2) > 0x5
	.error "gText_Info2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Info2) < 0x5
	.space 0x5 - (. - gText_Info2)
	.endif

