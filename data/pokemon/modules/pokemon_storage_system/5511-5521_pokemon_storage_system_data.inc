	@ src/pokemon_storage_system.c:1073 pokemon_storage_system_line_1073
	.globl gPokemonStorageMessageText_Message22
gPokemonStorageMessageText_Message22: @ 0x085CB300
	.string "メールを はずして ください!{EOS}"
	.if (. - gPokemonStorageMessageText_Message22) > 0x10
	.error "gPokemonStorageMessageText_Message22 may not grow beyond its original slot"
	.endif
	.if (. - gPokemonStorageMessageText_Message22) < 0x10
	.space 0x10 - (. - gPokemonStorageMessageText_Message22)
	.endif

	@ src/pokemon_storage_system.c:1075 pokemon_storage_system_line_1075
	.globl gPokemonStorageMessageText_Message24
gPokemonStorageMessageText_Message24: @ 0x085CB310
	.string "どうぐを もたせますか?{EOS}"
	.if (. - gPokemonStorageMessageText_Message24) > 0xd
	.error "gPokemonStorageMessageText_Message24 may not grow beyond its original slot"
	.endif
	.if (. - gPokemonStorageMessageText_Message24) < 0xd
	.space 0xd - (. - gPokemonStorageMessageText_Message24)
	.endif
	@ Decoded text from ROM range: offset=0x5CB31D, size=0xD
	.string "{SE_M_HYPER_BEAM2}を　バッグへいれた！{EOS}"

	@ src/pokemon_storage_system.c:1077 pokemon_storage_system_line_1077
	.globl gPokemonStorageMessageText_Message26
gPokemonStorageMessageText_Message26: @ 0x085CB32A
	.string "バッグが いっぱいです!{EOS}"
	.if (. - gPokemonStorageMessageText_Message26) > 0xd
	.error "gPokemonStorageMessageText_Message26 may not grow beyond its original slot"
	.endif
	.if (. - gPokemonStorageMessageText_Message26) < 0xd
	.space 0xd - (. - gPokemonStorageMessageText_Message26)
	.endif

	@ src/pokemon_storage_system.c:1078 pokemon_storage_system_line_1078
	.globl gPokemonStorageMessageText_Message27
gPokemonStorageMessageText_Message27: @ 0x085CB337
	.string "どうぐを バッグに いれますか?{EOS}"
	.if (. - gPokemonStorageMessageText_Message27) > 0x11
	.error "gPokemonStorageMessageText_Message27 may not grow beyond its original slot"
	.endif
	.if (. - gPokemonStorageMessageText_Message27) < 0x11
	.space 0x11 - (. - gPokemonStorageMessageText_Message27)
	.endif
	@ Decoded text from ROM range: offset=0x5CB348, size=0x15
	.string "{SE_M_HYPER_BEAM2}を　もたせた！{EOS}"
	.string "{SE_M_HYPER_BEAM2}と　とりかえた！{EOS}"

	@ src/pokemon_storage_system.c:1081 pokemon_storage_system_line_1081
	.globl gPokemonStorageMessageText_Message30
gPokemonStorageMessageText_Message30: @ 0x085CB35D
	.string "メールを あずかることは できません!{EOS}"
	.if (. - gPokemonStorageMessageText_Message30) > 0x14
	.error "gPokemonStorageMessageText_Message30 may not grow beyond its original slot"
	.endif
	.if (. - gPokemonStorageMessageText_Message30) < 0x14
	.space 0x14 - (. - gPokemonStorageMessageText_Message30)
	.endif
	@ analyzed canonical ROM range 0x085CB371-0x085CB39A
	@ structured u16 table (semantic role inferred only to scalar width)
	.2byte 0x2224, 0x0029, 0x0000, 0x01FF, 0x093E, 0x0029, 0xFF00, 0x2A12
	.2byte 0x0213, 0x0008, 0x02FF, 0x062A, 0x2904, 0xFF00, 0x0612, 0x0021
	.2byte 0x0000, 0x0AFF, 0x160A, 0x0805, 0xFF00
	.globl gPokemonStorageMenuText_Summary
gPokemonStorageMenuText_Summary: @ 0x085CB39B
	.string "ようすをみる{EOS}"
	.if (. - gPokemonStorageMenuText_Summary) > 0x7
	.error "gPokemonStorageMenuText_Summary may not grow beyond its original slot"
	.endif
	.if (. - gPokemonStorageMenuText_Summary) < 0x7
	.space 0x7 - (. - gPokemonStorageMenuText_Summary)
	.endif
	@ analyzed canonical ROM range 0x085CB3A2-0x085CB3B6
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x16, 0x37, 0x0D, 0x00, 0x00, 0x00, 0xFF, 0x6F, 0xAE, 0x57, 0x7E, 0x89, 0x00, 0xFF, 0x15, 0x1F
	.byte 0x04, 0x00, 0x00, 0x00, 0xFF
