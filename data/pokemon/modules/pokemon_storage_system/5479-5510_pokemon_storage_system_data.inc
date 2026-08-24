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
	.globl gText_Rom_5CB1D0
gText_Rom_5CB1D0: @ 0x085CB1D0
	.string "このボックスを どうしますか?{EOS}"
	.if (. - gText_Rom_5CB1D0) > 0x10
	.error "gText_Rom_5CB1D0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB1D0) < 0x10
	.space 0x10 - (. - gText_Rom_5CB1D0)
	.endif

	@ src/pokemon_storage_system.c:1053 pokemon_storage_system_line_1053
	.globl gText_Rom_5CB1E0
gText_Rom_5CB1E0: @ 0x085CB1E0
	.string "どの テーマにしますか?{EOS}"
	.if (. - gText_Rom_5CB1E0) > 0xd
	.error "gText_Rom_5CB1E0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB1E0) < 0xd
	.space 0xd - (. - gText_Rom_5CB1E0)
	.endif

	@ src/pokemon_storage_system.c:1054 pokemon_storage_system_line_1054
	.globl gText_Rom_5CB1ED
gText_Rom_5CB1ED: @ 0x085CB1ED
	.string "どの かべがみにしますか?{EOS}"
	.if (. - gText_Rom_5CB1ED) > 0xe
	.error "gText_Rom_5CB1ED may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB1ED) < 0xe
	.space 0xe - (. - gText_Rom_5CB1ED)
	.endif
	@ Decoded text from ROM range: offset=0x5CB1FB, size=0xC
	.string "{SE_M_HYPER_BEAM2}を　どうしますか？{EOS}"

	@ src/pokemon_storage_system.c:1056 pokemon_storage_system_line_1056
	.globl gText_Rom_5CB207
gText_Rom_5CB207: @ 0x085CB207
	.string "どの ボックスに ジャンプしますか?{EOS}"
	.if (. - gText_Rom_5CB207) > 0x13
	.error "gText_Rom_5CB207 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB207) < 0x13
	.space 0x13 - (. - gText_Rom_5CB207)
	.endif

	@ src/pokemon_storage_system.c:1057 pokemon_storage_system_line_1057
	.globl gText_Rom_5CB21A
gText_Rom_5CB21A: @ 0x085CB21A
	.string "どの ボックスに あずけますか?{EOS}"
	.if (. - gText_Rom_5CB21A) > 0x11
	.error "gText_Rom_5CB21A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB21A) < 0x11
	.space 0x11 - (. - gText_Rom_5CB21A)
	.endif
	@ Decoded text from ROM range: offset=0x5CB22B, size=0xB
	.string "{SE_M_HYPER_BEAM2}を　あずけました{EOS}"

	@ src/pokemon_storage_system.c:1059 pokemon_storage_system_line_1059
	.globl gText_Rom_5CB236
gText_Rom_5CB236: @ 0x085CB236
	.string "このボックスは いっぱいだ!{EOS}"
	.if (. - gText_Rom_5CB236) > 0xf
	.error "gText_Rom_5CB236 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB236) < 0xf
	.space 0xf - (. - gText_Rom_5CB236)
	.endif

	@ src/pokemon_storage_system.c:1060 pokemon_storage_system_line_1060
	.globl gText_Rom_5CB245
gText_Rom_5CB245: @ 0x085CB245
	.string "ほんとうに にがしますか?{EOS}"
	.if (. - gText_Rom_5CB245) > 0xe
	.error "gText_Rom_5CB245 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB245) < 0xe
	.space 0xe - (. - gText_Rom_5CB245)
	.endif
	@ Decoded text from ROM range: offset=0x5CB253, size=0x19
	.string "{SE_M_HYPER_BEAM2}を　そとに　にがしてあげた{EOS}"
	.string "ばいばい　{SE_M_HYPER_BEAM2}！{EOS}"

	@ src/pokemon_storage_system.c:1063 pokemon_storage_system_line_1063
	.globl gText_Rom_5CB26C
gText_Rom_5CB26C: @ 0x085CB26C
	.string "マーキングしてください{EOS}"
	.if (. - gText_Rom_5CB26C) > 0xc
	.error "gText_Rom_5CB26C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB26C) < 0xc
	.space 0xc - (. - gText_Rom_5CB26C)
	.endif

	@ src/pokemon_storage_system.c:1064 pokemon_storage_system_line_1064
	.globl gText_Rom_5CB278
gText_Rom_5CB278: @ 0x085CB278
	.string "たたかうポケモンが いなくなります!{EOS}"
	.if (. - gText_Rom_5CB278) > 0x13
	.error "gText_Rom_5CB278 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB278) < 0x13
	.space 0x13 - (. - gText_Rom_5CB278)
	.endif
	@ Decoded text from ROM range: offset=0x5CB28B, size=0xD
	.string "てもちが　いっぱいです！{EOS}"

	@ src/pokemon_storage_system.c:1066 pokemon_storage_system_line_1066
	.globl gText_Rom_5CB298
gText_Rom_5CB298: @ 0x085CB298
	.string "ポケモンを つかんだままですよ!{EOS}"
	.if (. - gText_Rom_5CB298) > 0x11
	.error "gText_Rom_5CB298 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB298) < 0x11
	.space 0x11 - (. - gText_Rom_5CB298)
	.endif

	@ src/pokemon_storage_system.c:1067 pokemon_storage_system_line_1067
	.globl gText_Rom_5CB2A9
gText_Rom_5CB2A9: @ 0x085CB2A9
	.string "つれていく ポケモンを えらんで!{EOS}"
	.if (. - gText_Rom_5CB2A9) > 0x12
	.error "gText_Rom_5CB2A9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB2A9) < 0x12
	.space 0x12 - (. - gText_Rom_5CB2A9)
	.endif

	@ src/pokemon_storage_system.c:1068 pokemon_storage_system_line_1068
	.globl gText_Rom_5CB2BB
gText_Rom_5CB2BB: @ 0x085CB2BB
	.string "タマゴを にがすことは できません!{EOS}"
	.if (. - gText_Rom_5CB2BB) > 0x13
	.error "gText_Rom_5CB2BB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB2BB) < 0x13
	.space 0x13 - (. - gText_Rom_5CB2BB)
	.endif

	@ src/pokemon_storage_system.c:1069 pokemon_storage_system_line_1069
	.globl gText_Rom_5CB2CE
gText_Rom_5CB2CE: @ 0x085CB2CE
	.string "ボックスそうさを つづけますか?{EOS}"
	.if (. - gText_Rom_5CB2CE) > 0x11
	.error "gText_Rom_5CB2CE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB2CE) < 0x11
	.space 0x11 - (. - gText_Rom_5CB2CE)
	.endif
	@ Decoded text from ROM range: offset=0x5CB2DF, size=0xC
	.string "{SE_M_HYPER_BEAM2}は　かえってきた！{EOS}"

	@ src/pokemon_storage_system.c:1071 pokemon_storage_system_line_1071
	.globl gText_Rom_5CB2EB
gText_Rom_5CB2EB: @ 0x085CB2EB
	.string "しんぱい だったのかな……{EOS}"
	.if (. - gText_Rom_5CB2EB) > 0xe
	.error "gText_Rom_5CB2EB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB2EB) < 0xe
	.space 0xe - (. - gText_Rom_5CB2EB)
	.endif

	@ src/pokemon_storage_system.c:1072 pokemon_storage_system_line_1072
	.globl gText_Rom_5CB2F9
gText_Rom_5CB2F9: @ 0x085CB2F9
	.string "……………!{EOS}"
	.if (. - gText_Rom_5CB2F9) > 0x7
	.error "gText_Rom_5CB2F9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB2F9) < 0x7
	.space 0x7 - (. - gText_Rom_5CB2F9)
	.endif

