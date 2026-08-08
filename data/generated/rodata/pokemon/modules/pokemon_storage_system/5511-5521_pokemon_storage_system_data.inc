	@ src/pokemon_storage_system.c:1073 pokemon_storage_system_line_1073
	.globl gText_Rom_5CB300
gText_Rom_5CB300: @ 0x085CB300
	.string "メールを はずして ください!$"
	.if (. - gText_Rom_5CB300) > 0x10
	.error "gText_Rom_5CB300 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB300) < 0x10
	.space 0x10 - (. - gText_Rom_5CB300)
	.endif

	@ src/pokemon_storage_system.c:1075 pokemon_storage_system_line_1075
	.globl gText_Rom_5CB310
gText_Rom_5CB310: @ 0x085CB310
	.string "どうぐを もたせますか?$"
	.if (. - gText_Rom_5CB310) > 0xd
	.error "gText_Rom_5CB310 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB310) < 0xd
	.space 0xd - (. - gText_Rom_5CB310)
	.endif
	@ Decoded text from ROM range: offset=0x5CB31D, size=0xD
	.string "{SE_M_HYPER_BEAM2}を　バッグへいれた！$"

	@ src/pokemon_storage_system.c:1077 pokemon_storage_system_line_1077
	.globl gText_Rom_5CB32A
gText_Rom_5CB32A: @ 0x085CB32A
	.string "バッグが いっぱいです!$"
	.if (. - gText_Rom_5CB32A) > 0xd
	.error "gText_Rom_5CB32A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB32A) < 0xd
	.space 0xd - (. - gText_Rom_5CB32A)
	.endif

	@ src/pokemon_storage_system.c:1078 pokemon_storage_system_line_1078
	.globl gText_Rom_5CB337
gText_Rom_5CB337: @ 0x085CB337
	.string "どうぐを バッグに いれますか?$"
	.if (. - gText_Rom_5CB337) > 0x11
	.error "gText_Rom_5CB337 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB337) < 0x11
	.space 0x11 - (. - gText_Rom_5CB337)
	.endif
	@ Decoded text from ROM range: offset=0x5CB348, size=0x15
	.string "{SE_M_HYPER_BEAM2}を　もたせた！$"
	.string "{SE_M_HYPER_BEAM2}と　とりかえた！$"

	@ src/pokemon_storage_system.c:1081 pokemon_storage_system_line_1081
	.globl gText_Rom_5CB35D
gText_Rom_5CB35D: @ 0x085CB35D
	.string "メールを あずかることは できません!$"
	.if (. - gText_Rom_5CB35D) > 0x14
	.error "gText_Rom_5CB35D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB35D) < 0x14
	.space 0x14 - (. - gText_Rom_5CB35D)
	.endif
	@ Replaced baserom.gba range: offset=0x5CB371, size=0x2A
	.byte 0x24, 0x22, 0x29, 0x00, 0x00, 0x00, 0xFF, 0x01, 0x3E, 0x09, 0x29, 0x00, 0x00, 0xFF, 0x12, 0x2A
	.byte 0x13, 0x02, 0x08, 0x00, 0xFF, 0x02, 0x2A, 0x06, 0x04, 0x29, 0x00, 0xFF, 0x12, 0x06, 0x21, 0x00
	.byte 0x00, 0x00, 0xFF, 0x0A, 0x0A, 0x16, 0x05, 0x08, 0x00, 0xFF

	@ src/pokemon_storage_system.c:8084 pokemon_storage_system_line_8084
	.globl gText_Rom_5CB39B
gText_Rom_5CB39B: @ 0x085CB39B
	.string "ようすをみる$"
	.if (. - gText_Rom_5CB39B) > 0x7
	.error "gText_Rom_5CB39B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB39B) < 0x7
	.space 0x7 - (. - gText_Rom_5CB39B)
	.endif
	@ Replaced baserom.gba range: offset=0x5CB3A2, size=0x15
	.byte 0x16, 0x37, 0x0D, 0x00, 0x00, 0x00, 0xFF, 0x6F, 0xAE, 0x57, 0x7E, 0x89, 0x00, 0xFF, 0x15, 0x1F
	.byte 0x04, 0x00, 0x00, 0x00, 0xFF

