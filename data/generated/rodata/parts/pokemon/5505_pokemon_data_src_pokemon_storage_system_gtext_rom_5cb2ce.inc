	@ src/pokemon_storage_system.c:1069 pokemon_storage_system_line_1069
	.globl gText_Rom_5CB2CE
gText_Rom_5CB2CE: @ 0x085CB2CE
	.string "ボックスそうさを つづけますか?$"
	.if (. - gText_Rom_5CB2CE) > 0x11
	.error "gText_Rom_5CB2CE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB2CE) < 0x11
	.space 0x11 - (. - gText_Rom_5CB2CE)
	.endif
	@ Decoded text from ROM range: offset=0x5CB2DF, size=0xC
	.string "{SE_M_HYPER_BEAM2}は　かえってきた！$"
