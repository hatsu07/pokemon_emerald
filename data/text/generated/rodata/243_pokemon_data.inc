	@ src/pokemon_storage_system.c:8078 pokemon_storage_system_line_8078 (+5 aliases)
	.globl gText_Rom_5CB1B9
gText_Rom_5CB1B9: @ 0x085CB1B9
	.string "やめる$"
	.if (. - gText_Rom_5CB1B9) > 0x4
	.error "gText_Rom_5CB1B9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB1B9) < 0x4
	.space 0x4 - (. - gText_Rom_5CB1B9)
	.endif
	.incbin "baserom.gba", 0x5cb1bd, 0x13

	@ src/pokemon_storage_system.c:1052 pokemon_storage_system_line_1052
	.globl gText_Rom_5CB1D0
gText_Rom_5CB1D0: @ 0x085CB1D0
	.string "このボックスを どうしますか?$"
	.if (. - gText_Rom_5CB1D0) > 0x10
	.error "gText_Rom_5CB1D0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB1D0) < 0x10
	.space 0x10 - (. - gText_Rom_5CB1D0)
	.endif

	@ src/pokemon_storage_system.c:1053 pokemon_storage_system_line_1053
	.globl gText_Rom_5CB1E0
gText_Rom_5CB1E0: @ 0x085CB1E0
	.string "どの テーマにしますか?$"
	.if (. - gText_Rom_5CB1E0) > 0xd
	.error "gText_Rom_5CB1E0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB1E0) < 0xd
	.space 0xd - (. - gText_Rom_5CB1E0)
	.endif

	@ src/pokemon_storage_system.c:1054 pokemon_storage_system_line_1054
	.globl gText_Rom_5CB1ED
gText_Rom_5CB1ED: @ 0x085CB1ED
	.string "どの かべがみにしますか?$"
	.if (. - gText_Rom_5CB1ED) > 0xe
	.error "gText_Rom_5CB1ED may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB1ED) < 0xe
	.space 0xe - (. - gText_Rom_5CB1ED)
	.endif
	.incbin "baserom.gba", 0x5cb1fb, 0xc

	@ src/pokemon_storage_system.c:1056 pokemon_storage_system_line_1056
	.globl gText_Rom_5CB207
gText_Rom_5CB207: @ 0x085CB207
	.string "どの ボックスに ジャンプしますか?$"
	.if (. - gText_Rom_5CB207) > 0x13
	.error "gText_Rom_5CB207 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB207) < 0x13
	.space 0x13 - (. - gText_Rom_5CB207)
	.endif

	@ src/pokemon_storage_system.c:1057 pokemon_storage_system_line_1057
	.globl gText_Rom_5CB21A
gText_Rom_5CB21A: @ 0x085CB21A
	.string "どの ボックスに あずけますか?$"
	.if (. - gText_Rom_5CB21A) > 0x11
	.error "gText_Rom_5CB21A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB21A) < 0x11
	.space 0x11 - (. - gText_Rom_5CB21A)
	.endif
	.incbin "baserom.gba", 0x5cb22b, 0xb

	@ src/pokemon_storage_system.c:1059 pokemon_storage_system_line_1059
	.globl gText_Rom_5CB236
gText_Rom_5CB236: @ 0x085CB236
	.string "このボックスは いっぱいだ!$"
	.if (. - gText_Rom_5CB236) > 0xf
	.error "gText_Rom_5CB236 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB236) < 0xf
	.space 0xf - (. - gText_Rom_5CB236)
	.endif

	@ src/pokemon_storage_system.c:1060 pokemon_storage_system_line_1060
	.globl gText_Rom_5CB245
gText_Rom_5CB245: @ 0x085CB245
	.string "ほんとうに にがしますか?$"
	.if (. - gText_Rom_5CB245) > 0xe
	.error "gText_Rom_5CB245 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB245) < 0xe
	.space 0xe - (. - gText_Rom_5CB245)
	.endif
	.incbin "baserom.gba", 0x5cb253, 0x19

	@ src/pokemon_storage_system.c:1063 pokemon_storage_system_line_1063
	.globl gText_Rom_5CB26C
gText_Rom_5CB26C: @ 0x085CB26C
	.string "マーキングしてください$"
	.if (. - gText_Rom_5CB26C) > 0xc
	.error "gText_Rom_5CB26C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB26C) < 0xc
	.space 0xc - (. - gText_Rom_5CB26C)
	.endif

	@ src/pokemon_storage_system.c:1064 pokemon_storage_system_line_1064
	.globl gText_Rom_5CB278
gText_Rom_5CB278: @ 0x085CB278
	.string "たたかうポケモンが いなくなります!$"
	.if (. - gText_Rom_5CB278) > 0x13
	.error "gText_Rom_5CB278 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB278) < 0x13
	.space 0x13 - (. - gText_Rom_5CB278)
	.endif
	.incbin "baserom.gba", 0x5cb28b, 0xd

	@ src/pokemon_storage_system.c:1066 pokemon_storage_system_line_1066
	.globl gText_Rom_5CB298
gText_Rom_5CB298: @ 0x085CB298
	.string "ポケモンを つかんだままですよ!$"
	.if (. - gText_Rom_5CB298) > 0x11
	.error "gText_Rom_5CB298 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB298) < 0x11
	.space 0x11 - (. - gText_Rom_5CB298)
	.endif

	@ src/pokemon_storage_system.c:1067 pokemon_storage_system_line_1067
	.globl gText_Rom_5CB2A9
gText_Rom_5CB2A9: @ 0x085CB2A9
	.string "つれていく ポケモンを えらんで!$"
	.if (. - gText_Rom_5CB2A9) > 0x12
	.error "gText_Rom_5CB2A9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB2A9) < 0x12
	.space 0x12 - (. - gText_Rom_5CB2A9)
	.endif

	@ src/pokemon_storage_system.c:1068 pokemon_storage_system_line_1068
	.globl gText_Rom_5CB2BB
gText_Rom_5CB2BB: @ 0x085CB2BB
	.string "タマゴを にがすことは できません!$"
	.if (. - gText_Rom_5CB2BB) > 0x13
	.error "gText_Rom_5CB2BB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB2BB) < 0x13
	.space 0x13 - (. - gText_Rom_5CB2BB)
	.endif

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
	.incbin "baserom.gba", 0x5cb2df, 0xc

	@ src/pokemon_storage_system.c:1071 pokemon_storage_system_line_1071
	.globl gText_Rom_5CB2EB
gText_Rom_5CB2EB: @ 0x085CB2EB
	.string "しんぱい だったのかな……$"
	.if (. - gText_Rom_5CB2EB) > 0xe
	.error "gText_Rom_5CB2EB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB2EB) < 0xe
	.space 0xe - (. - gText_Rom_5CB2EB)
	.endif

	@ src/pokemon_storage_system.c:1072 pokemon_storage_system_line_1072
	.globl gText_Rom_5CB2F9
gText_Rom_5CB2F9: @ 0x085CB2F9
	.string "……………!$"
	.if (. - gText_Rom_5CB2F9) > 0x7
	.error "gText_Rom_5CB2F9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB2F9) < 0x7
	.space 0x7 - (. - gText_Rom_5CB2F9)
	.endif

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
	.incbin "baserom.gba", 0x5cb31d, 0xd

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
	.incbin "baserom.gba", 0x5cb348, 0x15

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
	.incbin "baserom.gba", 0x5cb371, 0x2a

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
	.incbin "baserom.gba", 0x5cb3a2, 0x15

