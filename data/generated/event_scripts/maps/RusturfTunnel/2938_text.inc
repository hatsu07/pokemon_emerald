	@ data/maps/RusturfTunnel/scripts.inc:436 RusturfTunnel_Text_PeekoGladToSeeYouSafe
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_213A8C
gText_Rom_213A8C: @ 0x08213A8C
	.string "ピーコちゃん! ぶじで よかった!{EOS}"
	.if (. - gText_Rom_213A8C) != 0x12
	.error "gText_Rom_213A8C must retain its original byte length"
	.endif
