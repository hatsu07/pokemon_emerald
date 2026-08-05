	@ data/maps/RusturfTunnel/scripts.inc:430 RusturfTunnel_Text_GruntDefeat (+1 aliases)
	.globl gText_Rom_213A18
gText_Rom_213A18: @ 0x08213A18
	.string "む むぐぐー!\nおれの あくじも いきどまりかっ!$"
	.if (. - gText_Rom_213A18) > 0x1a
	.error "gText_Rom_213A18 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_213A18) < 0x1a
	.space 0x1a - (. - gText_Rom_213A18)
	.endif
