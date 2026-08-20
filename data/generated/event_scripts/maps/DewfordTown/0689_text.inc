	@ data/maps/DewfordTown/scripts.inc:678 DewfordTown_Text_ThatsTooBadThen
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_1E53E0
gText_Rom_1E53E0: @ 0x081E53E0
	.string "あらら……\nそれは ざんねん{EOS}"
	.if (. - gText_Rom_1E53E0) != 0xf
	.error "gText_Rom_1E53E0 must retain its original byte length"
	.endif
