	@ src/data/easy_chat/easy_chat_group_endings.h:184 easy_chat_group_endings_line_184
	.globl gText_Rom_5630AA
gText_Rom_5630AA: @ 0x085630AA
	.string "ている$"
	.if (. - gText_Rom_5630AA) > 0x4
	.error "gText_Rom_5630AA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5630AA) < 0x4
	.space 0x4 - (. - gText_Rom_5630AA)
	.endif
	.incbin "baserom.gba", 0x5630ae, 0x86
	.globl gUnknown_8563134
gUnknown_8563134: @ 0x08563134
	.incbin "baserom.gba", 0x563134, 0x1c
	.globl gUnknown_8563150
gUnknown_8563150: @ 0x08563150
	.incbin "baserom.gba", 0x563150, 0x4b4
	.globl gUnknown_8563604
gUnknown_8563604: @ 0x08563604
	.incbin "baserom.gba", 0x563604, 0xac
	.globl gUnknown_85636B0
gUnknown_85636B0: @ 0x085636B0
	.incbin "baserom.gba", 0x5636b0, 0xb68
	.globl gUnknown_8564218
gUnknown_8564218: @ 0x08564218
	.incbin "baserom.gba", 0x564218, 0x388
	.globl gUnknown_85645A0
gUnknown_85645A0: @ 0x085645A0
	.incbin "baserom.gba", 0x5645a0, 0x78
	.globl gUnknown_8564618
gUnknown_8564618: @ 0x08564618
	.incbin "baserom.gba", 0x564618, 0x8
	.globl gUnknown_8564620
gUnknown_8564620: @ 0x08564620
	.incbin "baserom.gba", 0x564620, 0x1c
	.globl gUnknown_856463C
gUnknown_856463C: @ 0x0856463C
	.incbin "baserom.gba", 0x56463c, 0x10
	.globl gUnknown_856464C
gUnknown_856464C: @ 0x0856464C
	.incbin "baserom.gba", 0x56464c, 0x10
	.globl gUnknown_856465C
gUnknown_856465C: @ 0x0856465C
	.incbin "baserom.gba", 0x56465c, 0x10
	.globl gUnknown_856466C
gUnknown_856466C: @ 0x0856466C
	.incbin "baserom.gba", 0x56466c, 0x14
	.globl gUnknown_8564680
gUnknown_8564680: @ 0x08564680
	.incbin "baserom.gba", 0x564680, 0xc
	.globl gUnknown_856468C
gUnknown_856468C: @ 0x0856468C
	.incbin "baserom.gba", 0x56468c, 0xb8c
	.globl gUnknown_8565218
gUnknown_8565218: @ 0x08565218
	.incbin "baserom.gba", 0x565218, 0x40
	.globl gUnknown_8565258
gUnknown_8565258: @ 0x08565258
	.incbin "baserom.gba", 0x565258, 0xc0
	.globl gUnknown_8565318
gUnknown_8565318: @ 0x08565318
	.incbin "baserom.gba", 0x565318, 0x20c
	.globl gUnknown_8565524
gUnknown_8565524: @ 0x08565524
	.incbin "baserom.gba", 0x565524, 0xdc
	.globl gUnknown_8565600
gUnknown_8565600: @ 0x08565600
	.incbin "baserom.gba", 0x565600, 0xc8
	.globl gUnknown_85656C8
gUnknown_85656C8: @ 0x085656C8
	.incbin "baserom.gba", 0x5656c8, 0x190
	.globl gUnknown_8565858
gUnknown_8565858: @ 0x08565858
	.incbin "baserom.gba", 0x565858, 0x10

	@ src/naming_screen.c:2607 naming_screen_line_2607
	.globl gText_Rom_565868
gText_Rom_565868: @ 0x08565868
	.string "あなた の なまえは?$"
	.if (. - gText_Rom_565868) > 0xc
	.error "gText_Rom_565868 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_565868) < 0xc
	.space 0xc - (. - gText_Rom_565868)
	.endif

	@ src/naming_screen.c:2618 naming_screen_line_2618
	.globl gText_Rom_565874
gText_Rom_565874: @ 0x08565874
	.string "ボックス の なまえは?$"
	.if (. - gText_Rom_565874) > 0xd
	.error "gText_Rom_565874 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_565874) < 0xd
	.space 0xd - (. - gText_Rom_565874)
	.endif
	.incbin "baserom.gba", 0x565881, 0xe

	@ src/naming_screen.c:2640 naming_screen_line_2640
	.globl gText_Rom_56588F
gText_Rom_56588F: @ 0x0856588F
	.string "おじさんに ことばを おしえよう$"
	.if (. - gText_Rom_56588F) > 0x11
	.error "gText_Rom_56588F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_56588F) < 0x11
	.space 0x11 - (. - gText_Rom_56588F)
	.endif
	.globl gUnknown_85658A0
gUnknown_85658A0: @ 0x085658A0
	.incbin "baserom.gba", 0x5658a0, 0x21
	.globl gUnknown_85658C1
gUnknown_85658C1: @ 0x085658C1

	@ src/naming_screen.c:225 sText_AlphabetUpperLower
	.globl gText_Rom_5658C1
gText_Rom_5658C1: @ 0x085658C1
	.string "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz！$"
	.if (. - gText_Rom_5658C1) > 0x36
	.error "gText_Rom_5658C1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5658C1) < 0x36
	.space 0x36 - (. - gText_Rom_5658C1)
	.endif
	.incbin "baserom.gba", 0x5658f7, 0x105
	.globl gUnknown_85659FC
gUnknown_85659FC: @ 0x085659FC
	.incbin "baserom.gba", 0x5659fc, 0x10
	.globl gUnknown_8565A0C
gUnknown_8565A0C: @ 0x08565A0C
	.incbin "baserom.gba", 0x565a0c, 0x30
	.globl gUnknown_8565A3C
gUnknown_8565A3C: @ 0x08565A3C
	.incbin "baserom.gba", 0x565a3c, 0x6
	.globl gUnknown_8565A42
gUnknown_8565A42: @ 0x08565A42
	.incbin "baserom.gba", 0x565a42, 0x6
	.globl gUnknown_8565A48
gUnknown_8565A48: @ 0x08565A48
	.incbin "baserom.gba", 0x565a48, 0x8
	.globl gUnknown_8565A50
gUnknown_8565A50: @ 0x08565A50
	.incbin "baserom.gba", 0x565a50, 0x10
	.globl gUnknown_8565A60
gUnknown_8565A60: @ 0x08565A60
	.incbin "baserom.gba", 0x565a60, 0x8
	.globl gUnknown_8565A68
gUnknown_8565A68: @ 0x08565A68
	.incbin "baserom.gba", 0x565a68, 0x8
	.globl gUnknown_8565A70
gUnknown_8565A70: @ 0x08565A70
	.incbin "baserom.gba", 0x565a70, 0x4
	.globl gUnknown_8565A74
gUnknown_8565A74: @ 0x08565A74
	.incbin "baserom.gba", 0x565a74, 0x10
	.globl gUnknown_8565A84
gUnknown_8565A84: @ 0x08565A84
	.incbin "baserom.gba", 0x565a84, 0x6
	.globl gUnknown_8565A8A
gUnknown_8565A8A: @ 0x08565A8A
	.incbin "baserom.gba", 0x565a8a, 0x6
	.globl gUnknown_8565A90
gUnknown_8565A90: @ 0x08565A90
	.incbin "baserom.gba", 0x565a90, 0x14
	.globl gUnknown_8565AA4
gUnknown_8565AA4: @ 0x08565AA4
	.incbin "baserom.gba", 0x565aa4, 0x10
	.globl gUnknown_8565AB4
gUnknown_8565AB4: @ 0x08565AB4
	.incbin "baserom.gba", 0x565ab4, 0xc
	.globl gUnknown_8565AC0
gUnknown_8565AC0: @ 0x08565AC0
	.incbin "baserom.gba", 0x565ac0, 0xa
	.globl gUnknown_8565ACA
gUnknown_8565ACA: @ 0x08565ACA
	.incbin "baserom.gba", 0x565aca, 0xa
	.globl gUnknown_8565AD4
gUnknown_8565AD4: @ 0x08565AD4
	.incbin "baserom.gba", 0x565ad4, 0x8
	.globl gUnknown_8565ADC
gUnknown_8565ADC: @ 0x08565ADC
	.incbin "baserom.gba", 0x565adc, 0x8
	.globl gUnknown_8565AE4
gUnknown_8565AE4: @ 0x08565AE4
	.incbin "baserom.gba", 0x565ae4, 0x14
	.globl gUnknown_8565AF8
gUnknown_8565AF8: @ 0x08565AF8
	.incbin "baserom.gba", 0x565af8, 0x8
	.globl gUnknown_8565B00
gUnknown_8565B00: @ 0x08565B00
	.incbin "baserom.gba", 0x565b00, 0x6
	.globl gUnknown_8565B06
gUnknown_8565B06: @ 0x08565B06
	.incbin "baserom.gba", 0x565b06, 0xb5

	@ src/text_input_strings.c:31 gText_UnionRoomChatKeyboard_56789Upper (+1 aliases)
	.globl gText_Rom_565BBB
gText_Rom_565BBB: @ 0x08565BBB
	.string "56789$"
	.if (. - gText_Rom_565BBB) > 0x6
	.error "gText_Rom_565BBB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_565BBB) < 0x6
	.space 0x6 - (. - gText_Rom_565BBB)
	.endif
	.globl gUnknown_8565BC1
gUnknown_8565BC1: @ 0x08565BC1
	.incbin "baserom.gba", 0x565bc1, 0xba
	.globl gUnknown_8565C7B
gUnknown_8565C7B: @ 0x08565C7B
	.incbin "baserom.gba", 0x565c7b, 0x11
	.globl gUnknown_8565C8C
gUnknown_8565C8C: @ 0x08565C8C
	.incbin "baserom.gba", 0x565c8c, 0x4
	.globl gUnknown_8565C90
gUnknown_8565C90: @ 0x08565C90
	.incbin "baserom.gba", 0x565c90, 0xc
	.globl gUnknown_8565C9C
gUnknown_8565C9C: @ 0x08565C9C
	.incbin "baserom.gba", 0x565c9c, 0x18
	.globl gUnknown_8565CB4
gUnknown_8565CB4: @ 0x08565CB4
	.incbin "baserom.gba", 0x565cb4, 0x34
	.globl gUnknown_8565CE8
gUnknown_8565CE8: @ 0x08565CE8
	.incbin "baserom.gba", 0x565ce8, 0x80
	.globl gUnknown_8565D68
gUnknown_8565D68: @ 0x08565D68
	.incbin "baserom.gba", 0x565d68, 0x8
	.globl gUnknown_8565D70
gUnknown_8565D70: @ 0x08565D70
	.incbin "baserom.gba", 0x565d70, 0x18
	.globl gUnknown_8565D88
gUnknown_8565D88: @ 0x08565D88
	.incbin "baserom.gba", 0x565d88, 0x8
	.globl gUnknown_8565D90
gUnknown_8565D90: @ 0x08565D90
	.incbin "baserom.gba", 0x565d90, 0x48
	.globl gUnknown_8565DD8
gUnknown_8565DD8: @ 0x08565DD8
	.incbin "baserom.gba", 0x565dd8, 0x18
	.globl gUnknown_8565DF0
gUnknown_8565DF0: @ 0x08565DF0
	.incbin "baserom.gba", 0x565df0, 0x18
	.globl gUnknown_8565E08
gUnknown_8565E08: @ 0x08565E08
	.incbin "baserom.gba", 0x565e08, 0x18
	.globl gUnknown_8565E20
gUnknown_8565E20: @ 0x08565E20
	.incbin "baserom.gba", 0x565e20, 0x18
	.globl gUnknown_8565E38
gUnknown_8565E38: @ 0x08565E38
	.incbin "baserom.gba", 0x565e38, 0x18
	.globl gUnknown_8565E50
gUnknown_8565E50: @ 0x08565E50
	.incbin "baserom.gba", 0x565e50, 0x18
	.globl gUnknown_8565E68
gUnknown_8565E68: @ 0x08565E68
	.incbin "baserom.gba", 0x565e68, 0x18
	.globl gUnknown_8565E80
gUnknown_8565E80: @ 0x08565E80
	.incbin "baserom.gba", 0x565e80, 0x18
	.globl gUnknown_8565E98
gUnknown_8565E98: @ 0x08565E98
	.incbin "baserom.gba", 0x565e98, 0x18
	.globl gUnknown_8565EB0
gUnknown_8565EB0: @ 0x08565EB0
	.incbin "baserom.gba", 0x565eb0, 0x30
	.globl gUnknown_8565EE0
gUnknown_8565EE0: @ 0x08565EE0
	.incbin "baserom.gba", 0x565ee0, 0x68
	.globl gUnknown_8565F48
gUnknown_8565F48: @ 0x08565F48
	.incbin "baserom.gba", 0x565f48, 0x5c
	.globl gUnknown_8565FA4
gUnknown_8565FA4: @ 0x08565FA4
	.incbin "baserom.gba", 0x565fa4, 0x18
	.globl gUnknown_8565FBC
gUnknown_8565FBC: @ 0x08565FBC
	.incbin "baserom.gba", 0x565fbc, 0x8
	.globl gUnknown_8565FC4
gUnknown_8565FC4: @ 0x08565FC4
	.incbin "baserom.gba", 0x565fc4, 0x8
	.globl gUnknown_8565FCC
gUnknown_8565FCC: @ 0x08565FCC
	.incbin "baserom.gba", 0x565fcc, 0xb18
	.globl gUnknown_8566AE4
gUnknown_8566AE4: @ 0x08566AE4
	.incbin "baserom.gba", 0x566ae4, 0xc0
	.globl gUnknown_8566BA4
gUnknown_8566BA4: @ 0x08566BA4
	.incbin "baserom.gba", 0x566ba4, 0x40
	.globl gUnknown_8566BE4
gUnknown_8566BE4: @ 0x08566BE4
	.incbin "baserom.gba", 0x566be4, 0xc0
	.globl gUnknown_8566CA4
gUnknown_8566CA4: @ 0x08566CA4

	@ src/strings.c:990 gText_MixingRecords
	.globl gText_Rom_566CA4
gText_Rom_566CA4: @ 0x08566CA4
	.string "レコードを まぜています$"
	.if (. - gText_Rom_566CA4) > 0xd
	.error "gText_Rom_566CA4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_566CA4) < 0xd
	.space 0xd - (. - gText_Rom_566CA4)
	.endif
	.globl gUnknown_8566CB1
gUnknown_8566CB1: @ 0x08566CB1

	@ src/strings.c:991 gText_RecordMixingComplete
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_566CB1
gText_Rom_566CB1: @ 0x08566CB1
	.string "しゅうりょう しました\nおつかれさまでした$"
	.if (. - gText_Rom_566CB1) != 0x16
	.error "gText_Rom_566CB1 must retain its original byte length"
	.endif
	.globl gText_Rom_566CC3
	.set gText_Rom_566CC3, gText_Rom_566CB1 + 0x12
	.globl gUnknown_8566CC7
gUnknown_8566CC7: @ 0x08566CC7
	.incbin "baserom.gba", 0x566cc7, 0x2
	.globl gUnknown_8566CC9
gUnknown_8566CC9: @ 0x08566CC9
	.incbin "baserom.gba", 0x566cc9, 0x6
	.globl gUnknown_8566CCF
gUnknown_8566CCF: @ 0x08566CCF
	.incbin "baserom.gba", 0x566ccf, 0x24
	.globl gUnknown_8566CF3
gUnknown_8566CF3: @ 0x08566CF3
	.incbin "baserom.gba", 0x566cf3, 0x6
	.globl gUnknown_8566CF9
gUnknown_8566CF9: @ 0x08566CF9
	.incbin "baserom.gba", 0x566cf9, 0xf
	.globl gUnknown_8566D08
gUnknown_8566D08: @ 0x08566D08
	.incbin "baserom.gba", 0x566d08, 0x4
	.globl gUnknown_8566D0C
gUnknown_8566D0C: @ 0x08566D0C
	.incbin "baserom.gba", 0x566d0c, 0x20
	.globl gUnknown_8566D2C
gUnknown_8566D2C: @ 0x08566D2C
	.incbin "baserom.gba", 0x566d2c, 0x12

	@ src/data/easy_chat/easy_chat_group_time.h:64 easy_chat_group_time_line_64
	.globl gText_Rom_566D3E
gText_Rom_566D3E: @ 0x08566D3E
	.string "おわり$"
	.if (. - gText_Rom_566D3E) > 0x4
	.error "gText_Rom_566D3E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_566D3E) < 0x4
	.space 0x4 - (. - gText_Rom_566D3E)
	.endif
	.globl gUnknown_8566D42
gUnknown_8566D42: @ 0x08566D42
	.incbin "baserom.gba", 0x566d42, 0x4
	.globl gUnknown_8566D46
gUnknown_8566D46: @ 0x08566D46
	.incbin "baserom.gba", 0x566d46, 0x4
	.globl gUnknown_8566D4A
gUnknown_8566D4A: @ 0x08566D4A
	.incbin "baserom.gba", 0x566d4a, 0xc
	.globl gUnknown_8566D56
gUnknown_8566D56: @ 0x08566D56
	.incbin "baserom.gba", 0x566d56, 0xe
	.globl gUnknown_8566D64
gUnknown_8566D64: @ 0x08566D64
	.incbin "baserom.gba", 0x566d64, 0x10
	.globl gUnknown_8566D74
gUnknown_8566D74: @ 0x08566D74
	.incbin "baserom.gba", 0x566d74, 0x6

	@ src/data/info_viewer.h:119 sInfoText_ChoiceBack (+5 aliases)
	.globl gText_Rom_566D7A
gText_Rom_566D7A: @ 0x08566D7A
	.string "もどる$"
	.if (. - gText_Rom_566D7A) > 0x4
	.error "gText_Rom_566D7A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_566D7A) < 0x4
	.space 0x4 - (. - gText_Rom_566D7A)
	.endif
	.globl gUnknown_8566D7E
gUnknown_8566D7E: @ 0x08566D7E
	.incbin "baserom.gba", 0x566d7e, 0xb
	.globl gUnknown_8566D89
gUnknown_8566D89: @ 0x08566D89
	.incbin "baserom.gba", 0x566d89, 0x6

	@ src/data/easy_chat/easy_chat_group_voices.h:40 easy_chat_group_voices_line_40
	.globl gText_Rom_566D8F
gText_Rom_566D8F: @ 0x08566D8F
	.string "………$"
	.if (. - gText_Rom_566D8F) > 0x4
	.error "gText_Rom_566D8F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_566D8F) < 0x4
	.space 0x4 - (. - gText_Rom_566D8F)
	.endif
	.globl gUnknown_8566D93
gUnknown_8566D93: @ 0x08566D93
	.incbin "baserom.gba", 0x566d93, 0x6

	@ src/data/easy_chat/easy_chat_group_voices.h:40 easy_chat_group_voices_line_40
	.globl gText_Rom_566D99
gText_Rom_566D99: @ 0x08566D99
	.string "………$"
	.if (. - gText_Rom_566D99) > 0x4
	.error "gText_Rom_566D99 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_566D99) < 0x4
	.space 0x4 - (. - gText_Rom_566D99)
	.endif
	.globl gUnknown_8566D9D
gUnknown_8566D9D: @ 0x08566D9D
	.incbin "baserom.gba", 0x566d9d, 0x6

	@ src/data/easy_chat/easy_chat_group_voices.h:40 easy_chat_group_voices_line_40
	.globl gText_Rom_566DA3
gText_Rom_566DA3: @ 0x08566DA3
	.string "………$"
	.if (. - gText_Rom_566DA3) > 0x4
	.error "gText_Rom_566DA3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_566DA3) < 0x4
	.space 0x4 - (. - gText_Rom_566DA3)
	.endif
	.globl gUnknown_8566DA7
gUnknown_8566DA7: @ 0x08566DA7
	.incbin "baserom.gba", 0x566da7, 0x6

	@ src/data/easy_chat/easy_chat_group_voices.h:40 easy_chat_group_voices_line_40
	.globl gText_Rom_566DAD
gText_Rom_566DAD: @ 0x08566DAD
	.string "………$"
	.if (. - gText_Rom_566DAD) > 0x4
	.error "gText_Rom_566DAD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_566DAD) < 0x4
	.space 0x4 - (. - gText_Rom_566DAD)
	.endif
	.globl gUnknown_8566DB1
gUnknown_8566DB1: @ 0x08566DB1
	.incbin "baserom.gba", 0x566db1, 0x6

	@ src/data/easy_chat/easy_chat_group_voices.h:40 easy_chat_group_voices_line_40
	.globl gText_Rom_566DB7
gText_Rom_566DB7: @ 0x08566DB7
	.string "………$"
	.if (. - gText_Rom_566DB7) > 0x4
	.error "gText_Rom_566DB7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_566DB7) < 0x4
	.space 0x4 - (. - gText_Rom_566DB7)
	.endif
	.globl gUnknown_8566DBB
gUnknown_8566DBB: @ 0x08566DBB
	.incbin "baserom.gba", 0x566dbb, 0xa
	.globl gUnknown_8566DC5
gUnknown_8566DC5: @ 0x08566DC5
	.incbin "baserom.gba", 0x566dc5, 0xa
	.globl gUnknown_8566DCF
gUnknown_8566DCF: @ 0x08566DCF
	.incbin "baserom.gba", 0x566dcf, 0x6

	@ src/data/easy_chat/easy_chat_group_voices.h:40 easy_chat_group_voices_line_40
	.globl gText_Rom_566DD5
gText_Rom_566DD5: @ 0x08566DD5
	.string "………$"
	.if (. - gText_Rom_566DD5) > 0x4
	.error "gText_Rom_566DD5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_566DD5) < 0x4
	.space 0x4 - (. - gText_Rom_566DD5)
	.endif
	.globl gUnknown_8566DD9
gUnknown_8566DD9: @ 0x08566DD9
	.incbin "baserom.gba", 0x566dd9, 0xa
	.globl gUnknown_8566DE3
gUnknown_8566DE3: @ 0x08566DE3
	.incbin "baserom.gba", 0x566de3, 0x9
	.globl gUnknown_8566DEC
gUnknown_8566DEC: @ 0x08566DEC
	.incbin "baserom.gba", 0x566dec, 0x5

	@ src/data/easy_chat/easy_chat_group_voices.h:40 easy_chat_group_voices_line_40
	.globl gText_Rom_566DF1
gText_Rom_566DF1: @ 0x08566DF1
	.string "………$"
	.if (. - gText_Rom_566DF1) > 0x4
	.error "gText_Rom_566DF1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_566DF1) < 0x4
	.space 0x4 - (. - gText_Rom_566DF1)
	.endif
	.globl gUnknown_8566DF5
gUnknown_8566DF5: @ 0x08566DF5
	.incbin "baserom.gba", 0x566df5, 0x5

	@ src/data/easy_chat/easy_chat_group_voices.h:40 easy_chat_group_voices_line_40
	.globl gText_Rom_566DFA
gText_Rom_566DFA: @ 0x08566DFA
	.string "………$"
	.if (. - gText_Rom_566DFA) > 0x4
	.error "gText_Rom_566DFA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_566DFA) < 0x4
	.space 0x4 - (. - gText_Rom_566DFA)
	.endif
	.incbin "baserom.gba", 0x566dfe, 0x2
	.globl gUnknown_8566E00
gUnknown_8566E00: @ 0x08566E00
	.incbin "baserom.gba", 0x566e00, 0x40
	.globl gUnknown_8566E40
gUnknown_8566E40: @ 0x08566E40
	.incbin "baserom.gba", 0x566e40, 0x18
	.globl gUnknown_8566E58
gUnknown_8566E58: @ 0x08566E58
	.incbin "baserom.gba", 0x566e58, 0x5
	.globl gUnknown_8566E5D
gUnknown_8566E5D: @ 0x08566E5D
	.incbin "baserom.gba", 0x566e5d, 0x3
	.globl gUnknown_8566E60
gUnknown_8566E60: @ 0x08566E60
	.incbin "baserom.gba", 0x566e60, 0x4
	.globl gUnknown_8566E64
gUnknown_8566E64: @ 0x08566E64
	.incbin "baserom.gba", 0x566e64, 0x5
	.globl gUnknown_8566E69
gUnknown_8566E69: @ 0x08566E69
	.incbin "baserom.gba", 0x566e69, 0xf1f

