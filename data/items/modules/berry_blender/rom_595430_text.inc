	@ src/berry_blender.c:278 sText_CommunicationStandby
	.globl sText_CommunicationStandby_Copy_BerryBlender
sText_CommunicationStandby_Copy_BerryBlender: @ 0x08595430
	.string "つうしんたいきちゅうです{EOS}"
	.if (. - sText_CommunicationStandby_Copy_BerryBlender) > 0xd
	.error "sText_CommunicationStandby_Copy_BerryBlender may not grow beyond its original slot"
	.endif
	.if (. - sText_CommunicationStandby_Copy_BerryBlender) < 0xd
	.space 0xd - (. - sText_CommunicationStandby_Copy_BerryBlender)
	.endif
	@ analyzed canonical ROM range 0x0859543D-0x08595445
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0xFC, 0x01, 0x02, 0xFC, 0x02, 0x01, 0xFC, 0x03, 0x03
