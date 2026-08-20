	@ data/maps/VerdanturfTown/scripts.inc:67 VerdanturfTown_Text_ManDugTunnelForLove
	.globl gText_Rom_1E616F
gText_Rom_1E616F: @ 0x081E616F
	.string "あいする ひとの ために\nどうくつを ほっていた ひとが いるの!\pなんだか すごーい!{EOS}"
	.if (. - gText_Rom_1E616F) > 0x2d
	.error "gText_Rom_1E616F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E616F) < 0x2d
	.space 0x2d - (. - gText_Rom_1E616F)
	.endif
