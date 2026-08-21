gMysteryEventScriptData_085FCAF8:
	.globl gText_MysteryEventBerry
gText_MysteryEventBerry: @ 0x085FCAF8
	.string "{0xFD}{0x03}のみを　てに　いれた！\nトウカジムの　パパから　うけとろう！{EOS}"
	.if (. - gText_MysteryEventBerry) != 0x21
	.error "gText_MysteryEventBerry must retain its original 0x21-byte slot"
	.endif

	.globl gMysteryEventScriptData_085FCB19
gMysteryEventScriptData_085FCB19:
	.globl gText_MysteryEventBerryTransform
gText_MysteryEventBerryTransform: @ 0x085FCB19
	.string "{0xFD}{0x02}のみは\n{0xFD}{0x03}のみに　へんかした！{EOS}"
	.if (. - gText_MysteryEventBerryTransform) != 0x13
	.error "gText_MysteryEventBerryTransform must retain its original 0x13-byte slot"
	.endif

	.globl gMysteryEventScriptData_085FCB2C
gMysteryEventScriptData_085FCB2C:
	.globl gText_MysteryEventBerryObtained
gText_MysteryEventBerryObtained: @ 0x085FCB2C
	.string "{0xFD}{0x02}のみは　すでに\nはいっていた{EOS}"
	.if (. - gText_MysteryEventBerryObtained) != 0x11
	.error "gText_MysteryEventBerryObtained must retain its original 0x11-byte slot"
	.endif
	.globl gText_Rom_5FCB3D
