	@ src/berry_blender.c:278 sText_CommunicationStandby
	.globl gText_Rom_595430
gText_Rom_595430: @ 0x08595430
	.string "つうしんたいきちゅうです{EOS}"
	.if (. - gText_Rom_595430) > 0xd
	.error "gText_Rom_595430 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_595430) < 0xd
	.space 0xd - (. - gText_Rom_595430)
	.endif
	@ analyzed canonical ROM range 0x0859543D-0x08595445
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0xFC, 0x01, 0x02, 0xFC, 0x02, 0x01, 0xFC, 0x03, 0x03
