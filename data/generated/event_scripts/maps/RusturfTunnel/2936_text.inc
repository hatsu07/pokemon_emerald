	@ data/maps/RusturfTunnel/scripts.inc:433 RusturfTunnel_Text_GruntTakePackage
	.globl gText_Rom_213A32
gText_Rom_213A32: @ 0x08213A32
	.string "おかしいなあ……\pリーダーの はなしでは なにかの にもつを\nデボンから ぬすんでくる っていう\lらくな しごと だった はずなのに……\pちぇっ!\nこんなもん かえして やらあ!$"
	.if (. - gText_Rom_213A32) > 0x5a
	.error "gText_Rom_213A32 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_213A32) < 0x5a
	.space 0x5a - (. - gText_Rom_213A32)
	.endif
