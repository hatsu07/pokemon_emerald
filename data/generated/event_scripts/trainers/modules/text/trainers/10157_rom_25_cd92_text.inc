	@ data/text/trainers.inc:1352 Route114_Text_BernieRegister
	.globl gText_Rom_25CD92
gText_Rom_25CD92: @ 0x0825CD92
	.string "もえあがった きもちの まま\nポケナビに とうろく しあおう!{EOS}"
	.if (. - gText_Rom_25CD92) > 0x20
	.error "gText_Rom_25CD92 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25CD92) < 0x20
	.space 0x20 - (. - gText_Rom_25CD92)
	.endif
