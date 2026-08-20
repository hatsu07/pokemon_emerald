	@ data/maps/RusturfTunnel/scripts.inc:424 RusturfTunnel_Text_Peeko
	.globl gText_Rom_2139A1
gText_Rom_2139A1: @ 0x082139A1
	.string "ピーコちゃん『ピ ピひょー!{EOS}"
	.if (. - gText_Rom_2139A1) > 0xf
	.error "gText_Rom_2139A1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2139A1) < 0xf
	.space 0xf - (. - gText_Rom_2139A1)
	.endif
