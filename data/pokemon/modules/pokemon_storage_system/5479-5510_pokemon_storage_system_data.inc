	@ src/data/script_menu.h:780 script_menu_line_780
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl sScriptMenuText_DontRemember
sScriptMenuText_DontRemember: @ 0x085CB1B1
	.string "おぼえていない{EOS}"
	.if (. - sScriptMenuText_DontRemember) != 0x8
	.error "sScriptMenuText_DontRemember must retain its original byte length"
	.endif

	@ src/pokemon_storage_system.c:8078 pokemon_storage_system_line_8078 (+5 aliases)
	.globl gText_Rom_5CB1B9
gText_Rom_5CB1B9: @ 0x085CB1B9
	.string "やめる{EOS}"
	.if (. - gText_Rom_5CB1B9) > 0x4
	.error "gText_Rom_5CB1B9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB1B9) < 0x4
	.space 0x4 - (. - gText_Rom_5CB1B9)
	.endif
	@ Decoded text from ROM range: offset=0x5CB1BD, size=0x13
	.string "ボックスを　しゅうりょうしますか？　{EOS}"

	@ src/pokemon_storage_system.c:1052 pokemon_storage_system_line_1052
	.globl gPokemonStorageMessageText_Message01
gPokemonStorageMessageText_Message01: @ 0x085CB1D0
	.string "このボックスを どうしますか?{EOS}"
	.if (. - gPokemonStorageMessageText_Message01) > 0x10
	.error "gPokemonStorageMessageText_Message01 may not grow beyond its original slot"
	.endif
	.if (. - gPokemonStorageMessageText_Message01) < 0x10
	.space 0x10 - (. - gPokemonStorageMessageText_Message01)
	.endif

	@ src/pokemon_storage_system.c:1053 pokemon_storage_system_line_1053
	.globl gPokemonStorageMessageText_Message02
gPokemonStorageMessageText_Message02: @ 0x085CB1E0
	.string "どの テーマにしますか?{EOS}"
	.if (. - gPokemonStorageMessageText_Message02) > 0xd
	.error "gPokemonStorageMessageText_Message02 may not grow beyond its original slot"
	.endif
	.if (. - gPokemonStorageMessageText_Message02) < 0xd
	.space 0xd - (. - gPokemonStorageMessageText_Message02)
	.endif

	@ src/pokemon_storage_system.c:1054 pokemon_storage_system_line_1054
	.globl gPokemonStorageMessageText_Message03
gPokemonStorageMessageText_Message03: @ 0x085CB1ED
	.string "どの かべがみにしますか?{EOS}"
	.if (. - gPokemonStorageMessageText_Message03) > 0xe
	.error "gPokemonStorageMessageText_Message03 may not grow beyond its original slot"
	.endif
	.if (. - gPokemonStorageMessageText_Message03) < 0xe
	.space 0xe - (. - gPokemonStorageMessageText_Message03)
	.endif
	@ Decoded text from ROM range: offset=0x5CB1FB, size=0xC
	.string "{SE_M_HYPER_BEAM2}を　どうしますか？{EOS}"

	@ src/pokemon_storage_system.c:1056 pokemon_storage_system_line_1056
	.globl gPokemonStorageMessageText_Message05
gPokemonStorageMessageText_Message05: @ 0x085CB207
	.string "どの ボックスに ジャンプしますか?{EOS}"
	.if (. - gPokemonStorageMessageText_Message05) > 0x13
	.error "gPokemonStorageMessageText_Message05 may not grow beyond its original slot"
	.endif
	.if (. - gPokemonStorageMessageText_Message05) < 0x13
	.space 0x13 - (. - gPokemonStorageMessageText_Message05)
	.endif

	@ src/pokemon_storage_system.c:1057 pokemon_storage_system_line_1057
	.globl gPokemonStorageMessageText_Message06
gPokemonStorageMessageText_Message06: @ 0x085CB21A
	.string "どの ボックスに あずけますか?{EOS}"
	.if (. - gPokemonStorageMessageText_Message06) > 0x11
	.error "gPokemonStorageMessageText_Message06 may not grow beyond its original slot"
	.endif
	.if (. - gPokemonStorageMessageText_Message06) < 0x11
	.space 0x11 - (. - gPokemonStorageMessageText_Message06)
	.endif
	@ Decoded text from ROM range: offset=0x5CB22B, size=0xB
	.string "{SE_M_HYPER_BEAM2}を　あずけました{EOS}"

	@ src/pokemon_storage_system.c:1059 pokemon_storage_system_line_1059
	.globl gPokemonStorageMessageText_Message08
gPokemonStorageMessageText_Message08: @ 0x085CB236
	.string "このボックスは いっぱいだ!{EOS}"
	.if (. - gPokemonStorageMessageText_Message08) > 0xf
	.error "gPokemonStorageMessageText_Message08 may not grow beyond its original slot"
	.endif
	.if (. - gPokemonStorageMessageText_Message08) < 0xf
	.space 0xf - (. - gPokemonStorageMessageText_Message08)
	.endif

	@ src/pokemon_storage_system.c:1060 pokemon_storage_system_line_1060
	.globl gPokemonStorageMessageText_Message09
gPokemonStorageMessageText_Message09: @ 0x085CB245
	.string "ほんとうに にがしますか?{EOS}"
	.if (. - gPokemonStorageMessageText_Message09) > 0xe
	.error "gPokemonStorageMessageText_Message09 may not grow beyond its original slot"
	.endif
	.if (. - gPokemonStorageMessageText_Message09) < 0xe
	.space 0xe - (. - gPokemonStorageMessageText_Message09)
	.endif
	@ Decoded text from ROM range: offset=0x5CB253, size=0x19
	.string "{SE_M_HYPER_BEAM2}を　そとに　にがしてあげた{EOS}"
	.string "ばいばい　{SE_M_HYPER_BEAM2}！{EOS}"

	@ src/pokemon_storage_system.c:1063 pokemon_storage_system_line_1063
	.globl gPokemonStorageMessageText_Message12
gPokemonStorageMessageText_Message12: @ 0x085CB26C
	.string "マーキングしてください{EOS}"
	.if (. - gPokemonStorageMessageText_Message12) > 0xc
	.error "gPokemonStorageMessageText_Message12 may not grow beyond its original slot"
	.endif
	.if (. - gPokemonStorageMessageText_Message12) < 0xc
	.space 0xc - (. - gPokemonStorageMessageText_Message12)
	.endif

	@ src/pokemon_storage_system.c:1064 pokemon_storage_system_line_1064
	.globl gPokemonStorageMessageText_Message13
gPokemonStorageMessageText_Message13: @ 0x085CB278
	.string "たたかうポケモンが いなくなります!{EOS}"
	.if (. - gPokemonStorageMessageText_Message13) > 0x13
	.error "gPokemonStorageMessageText_Message13 may not grow beyond its original slot"
	.endif
	.if (. - gPokemonStorageMessageText_Message13) < 0x13
	.space 0x13 - (. - gPokemonStorageMessageText_Message13)
	.endif
	@ Decoded text from ROM range: offset=0x5CB28B, size=0xD
	.string "てもちが　いっぱいです！{EOS}"

	@ src/pokemon_storage_system.c:1066 pokemon_storage_system_line_1066
	.globl gPokemonStorageMessageText_Message15
gPokemonStorageMessageText_Message15: @ 0x085CB298
	.string "ポケモンを つかんだままですよ!{EOS}"
	.if (. - gPokemonStorageMessageText_Message15) > 0x11
	.error "gPokemonStorageMessageText_Message15 may not grow beyond its original slot"
	.endif
	.if (. - gPokemonStorageMessageText_Message15) < 0x11
	.space 0x11 - (. - gPokemonStorageMessageText_Message15)
	.endif

	@ src/pokemon_storage_system.c:1067 pokemon_storage_system_line_1067
	.globl gPokemonStorageMessageText_Message16
gPokemonStorageMessageText_Message16: @ 0x085CB2A9
	.string "つれていく ポケモンを えらんで!{EOS}"
	.if (. - gPokemonStorageMessageText_Message16) > 0x12
	.error "gPokemonStorageMessageText_Message16 may not grow beyond its original slot"
	.endif
	.if (. - gPokemonStorageMessageText_Message16) < 0x12
	.space 0x12 - (. - gPokemonStorageMessageText_Message16)
	.endif

	@ src/pokemon_storage_system.c:1068 pokemon_storage_system_line_1068
	.globl gPokemonStorageMessageText_Message17
gPokemonStorageMessageText_Message17: @ 0x085CB2BB
	.string "タマゴを にがすことは できません!{EOS}"
	.if (. - gPokemonStorageMessageText_Message17) > 0x13
	.error "gPokemonStorageMessageText_Message17 may not grow beyond its original slot"
	.endif
	.if (. - gPokemonStorageMessageText_Message17) < 0x13
	.space 0x13 - (. - gPokemonStorageMessageText_Message17)
	.endif

	@ src/pokemon_storage_system.c:1069 pokemon_storage_system_line_1069
	.globl gPokemonStorageMessageText_Message18
gPokemonStorageMessageText_Message18: @ 0x085CB2CE
	.string "ボックスそうさを つづけますか?{EOS}"
	.if (. - gPokemonStorageMessageText_Message18) > 0x11
	.error "gPokemonStorageMessageText_Message18 may not grow beyond its original slot"
	.endif
	.if (. - gPokemonStorageMessageText_Message18) < 0x11
	.space 0x11 - (. - gPokemonStorageMessageText_Message18)
	.endif
	@ Decoded text from ROM range: offset=0x5CB2DF, size=0xC
	.string "{SE_M_HYPER_BEAM2}は　かえってきた！{EOS}"

	@ src/pokemon_storage_system.c:1071 pokemon_storage_system_line_1071
	.globl gPokemonStorageMessageText_Message20
gPokemonStorageMessageText_Message20: @ 0x085CB2EB
	.string "しんぱい だったのかな……{EOS}"
	.if (. - gPokemonStorageMessageText_Message20) > 0xe
	.error "gPokemonStorageMessageText_Message20 may not grow beyond its original slot"
	.endif
	.if (. - gPokemonStorageMessageText_Message20) < 0xe
	.space 0xe - (. - gPokemonStorageMessageText_Message20)
	.endif

	@ src/pokemon_storage_system.c:1072 pokemon_storage_system_line_1072
	.globl gPokemonStorageMessageText_Message21
gPokemonStorageMessageText_Message21: @ 0x085CB2F9
	.string "……………!{EOS}"
	.if (. - gPokemonStorageMessageText_Message21) > 0x7
	.error "gPokemonStorageMessageText_Message21 may not grow beyond its original slot"
	.endif
	.if (. - gPokemonStorageMessageText_Message21) < 0x7
	.space 0x7 - (. - gPokemonStorageMessageText_Message21)
	.endif

