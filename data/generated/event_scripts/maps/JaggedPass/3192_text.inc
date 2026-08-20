	@ data/maps/JaggedPass/scripts.inc:229 JaggedPass_Text_GruntDefeat (+1 aliases)
	.globl gText_Rom_215FD8
gText_Rom_215FD8: @ 0x08215FD8
	.string "うぐぐ……\pはやく\n  アジトに\l    にげこめば\l      よかった……{EOS}"
	.if (. - gText_Rom_215FD8) > 0x28
	.error "gText_Rom_215FD8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_215FD8) < 0x28
	.space 0x28 - (. - gText_Rom_215FD8)
	.endif
