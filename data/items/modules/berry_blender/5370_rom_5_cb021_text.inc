	@ src/berry_blender.c:288 sText_Sec (+1 aliases)
	.globl sText_Sec_Copy_BerryBlender
sText_Sec_Copy_BerryBlender: @ 0x085CB021
	.string "びょう{EOS}"
	.if (. - sText_Sec_Copy_BerryBlender) > 0x4
	.error "sText_Sec_Copy_BerryBlender may not grow beyond its original slot"
	.endif
	.if (. - sText_Sec_Copy_BerryBlender) < 0x4
	.space 0x4 - (. - sText_Sec_Copy_BerryBlender)
	.endif
