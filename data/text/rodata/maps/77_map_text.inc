	@ src/field_specials.c:2542 field_specials_line_2542
	.globl gText_Rom_45DFDA
gText_Rom_45DFDA: @ 0x0845DFDA
	.string "  ？$"
	.if (. - gText_Rom_45DFDA) > 0x4
	.error "gText_Rom_45DFDA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_45DFDA) < 0x4
	.space 0x4 - (. - gText_Rom_45DFDA)
	.endif
	.incbin "baserom.gba", 0x45dfde, 0x9ba
	.globl gUnknown_845E998
gUnknown_845E998: @ 0x0845E998
	.incbin "baserom.gba", 0x45e998, 0x980
	.globl gUnknown_845F318
gUnknown_845F318: @ 0x0845F318
	.incbin "baserom.gba", 0x45f318, 0x4
	.globl gUnknown_845F31C
gUnknown_845F31C: @ 0x0845F31C
	.incbin "baserom.gba", 0x45f31c, 0x10090
	.globl gUnknown_846F3AC
gUnknown_846F3AC: @ 0x0846F3AC
	.incbin "baserom.gba", 0x46f3ac, 0x14
	.globl gUnknown_846F3C0
gUnknown_846F3C0: @ 0x0846F3C0
	.incbin "baserom.gba", 0x46f3c0, 0x14
	.globl gUnknown_846F3D4
gUnknown_846F3D4: @ 0x0846F3D4
	.incbin "baserom.gba", 0x46f3d4, 0x1c0
	.globl gUnknown_846F594
gUnknown_846F594: @ 0x0846F594
	.incbin "baserom.gba", 0x46f594, 0x288
	.globl gUnknown_846F81C
gUnknown_846F81C: @ 0x0846F81C
	.incbin "baserom.gba", 0x46f81c, 0x48
	.globl gUnknown_846F864
gUnknown_846F864: @ 0x0846F864
	.incbin "baserom.gba", 0x46f864, 0x4c
	.globl gUnknown_846F8B0
gUnknown_846F8B0: @ 0x0846F8B0
	.incbin "baserom.gba", 0x46f8b0, 0xc
	.globl gUnknown_846F8BC
gUnknown_846F8BC: @ 0x0846F8BC
	.incbin "baserom.gba", 0x46f8bc, 0x14
	.globl gUnknown_846F8D0
gUnknown_846F8D0: @ 0x0846F8D0
	.incbin "baserom.gba", 0x46f8d0, 0x8
	.globl gUnknown_846F8D8
gUnknown_846F8D8: @ 0x0846F8D8
	.incbin "baserom.gba", 0x46f8d8, 0x20
	.globl gUnknown_846F8F8
gUnknown_846F8F8: @ 0x0846F8F8
	.incbin "baserom.gba", 0x46f8f8, 0x10
	.globl gUnknown_846F908
gUnknown_846F908: @ 0x0846F908
	.incbin "baserom.gba", 0x46f908, 0x10
	.globl gUnknown_846F918
gUnknown_846F918: @ 0x0846F918
	.incbin "baserom.gba", 0x46f918, 0x10
	.globl gUnknown_846F928
gUnknown_846F928: @ 0x0846F928
	.incbin "baserom.gba", 0x46f928, 0x2
	.globl gUnknown_846F92A
gUnknown_846F92A: @ 0x0846F92A
	.incbin "baserom.gba", 0x46f92a, 0x2
	.globl gUnknown_846F92C
gUnknown_846F92C: @ 0x0846F92C
	.incbin "baserom.gba", 0x46f92c, 0x14
	.globl gUnknown_846F940
gUnknown_846F940: @ 0x0846F940
	.incbin "baserom.gba", 0x46f940, 0x10
	.globl gUnknown_846F950
gUnknown_846F950: @ 0x0846F950
	.incbin "baserom.gba", 0x46f950, 0xc
	.globl gUnknown_846F95C
gUnknown_846F95C: @ 0x0846F95C
	.incbin "baserom.gba", 0x46f95c, 0x4
	.globl gUnknown_846F960
gUnknown_846F960: @ 0x0846F960
	.incbin "baserom.gba", 0x46f960, 0x10
	.globl gUnknown_846F970
gUnknown_846F970: @ 0x0846F970
	.incbin "baserom.gba", 0x46f970, 0x4
	.globl gUnknown_846F974
gUnknown_846F974: @ 0x0846F974
	.incbin "baserom.gba", 0x46f974, 0x8
	.globl gUnknown_846F97C
gUnknown_846F97C: @ 0x0846F97C
	.incbin "baserom.gba", 0x46f97c, 0x40
	.globl gUnknown_846F9BC
gUnknown_846F9BC: @ 0x0846F9BC
	.incbin "baserom.gba", 0x46f9bc, 0x6
	.globl gUnknown_846F9C2
gUnknown_846F9C2: @ 0x0846F9C2
	.incbin "baserom.gba", 0x46f9c2, 0x6
	.globl gUnknown_846F9C8
gUnknown_846F9C8: @ 0x0846F9C8
	.incbin "baserom.gba", 0x46f9c8, 0x2
	.globl gUnknown_846F9CA
gUnknown_846F9CA: @ 0x0846F9CA
	.incbin "baserom.gba", 0x46f9ca, 0xc
	.globl gUnknown_846F9D6
gUnknown_846F9D6: @ 0x0846F9D6
	.incbin "baserom.gba", 0x46f9d6, 0x6
	.globl gUnknown_846F9DC
gUnknown_846F9DC: @ 0x0846F9DC
	.incbin "baserom.gba", 0x46f9dc, 0xc
	.globl gUnknown_846F9E8
gUnknown_846F9E8: @ 0x0846F9E8

	@ asm/field_player_avatar.s:4692 Fishing10
	.globl gText_Rom_46F9E8
gText_Rom_46F9E8: @ 0x0846F9E8
	.string "ポケモンを　つりあげた！{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_46F9E8) > 0xf
	.error "gText_Rom_46F9E8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_46F9E8) < 0xf
	.space 0xf - (. - gText_Rom_46F9E8)
	.endif
	.globl gUnknown_846F9F7
gUnknown_846F9F7: @ 0x0846F9F7

	@ asm/field_player_avatar.s:4855 Fishing12
	.globl gText_Rom_46F9F7
gText_Rom_46F9F7: @ 0x0846F9F7
	.string "つれないなあ・・・{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_46F9F7) > 0xc
	.error "gText_Rom_46F9F7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_46F9F7) < 0xc
	.space 0xc - (. - gText_Rom_46F9F7)
	.endif
	.globl gUnknown_846FA03
gUnknown_846FA03: @ 0x0846FA03

	@ asm/field_player_avatar.s:4906 Fishing13
	.globl gText_Rom_46FA03
gText_Rom_46FA03: @ 0x0846FA03
	.string "にげられて　しまった・・・{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_46FA03) > 0x10
	.error "gText_Rom_46FA03 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_46FA03) < 0x10
	.space 0x10 - (. - gText_Rom_46FA03)
	.endif
	.globl gUnknown_846FA13
gUnknown_846FA13: @ 0x0846FA13
	.incbin "baserom.gba", 0x46fa13, 0x5
	.globl gUnknown_846FA18
gUnknown_846FA18: @ 0x0846FA18
	.incbin "baserom.gba", 0x46fa18, 0x10
	.globl gUnknown_846FA28
gUnknown_846FA28: @ 0x0846FA28
	.incbin "baserom.gba", 0x46fa28, 0x18
	.globl gUnknown_846FA40
gUnknown_846FA40: @ 0x0846FA40
	.incbin "baserom.gba", 0x46fa40, 0x120c
	.globl gUnknown_8470C4C
gUnknown_8470C4C: @ 0x08470C4C
	.incbin "baserom.gba", 0x470c4c, 0x1220
	.globl gUnknown_8471E6C
gUnknown_8471E6C: @ 0x08471E6C
	.incbin "baserom.gba", 0x471e6c, 0xa860
	.globl gUnknown_847C6CC
gUnknown_847C6CC: @ 0x0847C6CC
	.incbin "baserom.gba", 0x47c6cc, 0x1240
	.globl gUnknown_847D90C
gUnknown_847D90C: @ 0x0847D90C
	.incbin "baserom.gba", 0x47d90c, 0x40785

	@ src/data/easy_chat/easy_chat_group_voices.h:346 easy_chat_group_voices_line_346
	.globl gText_Rom_4BE091
gText_Rom_4BE091: @ 0x084BE091
	.string "ラララ$"
	.if (. - gText_Rom_4BE091) > 0x4
	.error "gText_Rom_4BE091 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_4BE091) < 0x4
	.space 0x4 - (. - gText_Rom_4BE091)
	.endif
	.incbin "baserom.gba", 0x4be095, 0x1c

	@ src/data/easy_chat/easy_chat_group_voices.h:346 easy_chat_group_voices_line_346
	.globl gText_Rom_4BE0B1
gText_Rom_4BE0B1: @ 0x084BE0B1
	.string "ラララ$"
	.if (. - gText_Rom_4BE0B1) > 0x4
	.error "gText_Rom_4BE0B1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_4BE0B1) < 0x4
	.space 0x4 - (. - gText_Rom_4BE0B1)
	.endif
	.incbin "baserom.gba", 0x4be0b5, 0x1c

	@ src/data/easy_chat/easy_chat_group_voices.h:346 easy_chat_group_voices_line_346
	.globl gText_Rom_4BE0D1
gText_Rom_4BE0D1: @ 0x084BE0D1
	.string "ラララ$"
	.if (. - gText_Rom_4BE0D1) > 0x4
	.error "gText_Rom_4BE0D1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_4BE0D1) < 0x4
	.space 0x4 - (. - gText_Rom_4BE0D1)
	.endif
	.incbin "baserom.gba", 0x4be0d5, 0x1c

	@ src/data/easy_chat/easy_chat_group_voices.h:346 easy_chat_group_voices_line_346
	.globl gText_Rom_4BE0F1
gText_Rom_4BE0F1: @ 0x084BE0F1
	.string "ラララ$"
	.if (. - gText_Rom_4BE0F1) > 0x4
	.error "gText_Rom_4BE0F1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_4BE0F1) < 0x4
	.space 0x4 - (. - gText_Rom_4BE0F1)
	.endif
	.incbin "baserom.gba", 0x4be0f5, 0x117b6

	@ src/text_input_strings.c:39 gText_UnionRoomChatKeyboard_z
	.globl gText_Rom_4CF8AB
gText_Rom_4CF8AB: @ 0x084CF8AB
	.string "z    $"
	.if (. - gText_Rom_4CF8AB) > 0x6
	.error "gText_Rom_4CF8AB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_4CF8AB) < 0x6
	.space 0x6 - (. - gText_Rom_4CF8AB)
	.endif
	.incbin "baserom.gba", 0x4cf8b1, 0xdfdb
	.globl gUnknown_84DD88C
gUnknown_84DD88C: @ 0x084DD88C
	.incbin "baserom.gba", 0x4dd88c, 0x144
	.globl gUnknown_84DD9D0
gUnknown_84DD9D0: @ 0x084DD9D0
	.incbin "baserom.gba", 0x4dd9d0, 0x51
	.globl gUnknown_84DDA21
gUnknown_84DDA21: @ 0x084DDA21
	.incbin "baserom.gba", 0x4dda21, 0x53
	.globl gUnknown_84DDA74
gUnknown_84DDA74: @ 0x084DDA74
	.incbin "baserom.gba", 0x4dda74, 0x3bc
	.globl gUnknown_84DDE30
gUnknown_84DDE30: @ 0x084DDE30
	.incbin "baserom.gba", 0x4dde30, 0x1c
	.globl gUnknown_84DDE4C
gUnknown_84DDE4C: @ 0x084DDE4C
	.incbin "baserom.gba", 0x4dde4c, 0x3ab4
	.globl gUnknown_84E1900
gUnknown_84E1900: @ 0x084E1900
	.incbin "baserom.gba", 0x4e1900, 0x271c
	.globl gUnknown_84E401C
gUnknown_84E401C: @ 0x084E401C
	.incbin "baserom.gba", 0x4e401c, 0x138
	.globl gUnknown_84E4154
gUnknown_84E4154: @ 0x084E4154
	.incbin "baserom.gba", 0x4e4154, 0x78
	.globl gUnknown_84E41CC
gUnknown_84E41CC: @ 0x084E41CC
	.incbin "baserom.gba", 0x4e41cc, 0xc0
	.globl gUnknown_84E428C
gUnknown_84E428C: @ 0x084E428C
	.incbin "baserom.gba", 0x4e428c, 0x978
	.globl gUnknown_84E4C04
gUnknown_84E4C04: @ 0x084E4C04
	.incbin "baserom.gba", 0x4e4c04, 0xac
	.globl gUnknown_84E4CB0
gUnknown_84E4CB0: @ 0x084E4CB0
	.incbin "baserom.gba", 0x4e4cb0, 0xac
	.globl gUnknown_84E4D5C
gUnknown_84E4D5C: @ 0x084E4D5C
	.incbin "baserom.gba", 0x4e4d5c, 0xc0
	.globl gUnknown_84E4E1C
gUnknown_84E4E1C: @ 0x084E4E1C
	.incbin "baserom.gba", 0x4e4e1c, 0xd14
	.globl gUnknown_84E5B30
gUnknown_84E5B30: @ 0x084E5B30
	.incbin "baserom.gba", 0x4e5b30, 0x10
	.globl gUnknown_84E5B40
gUnknown_84E5B40: @ 0x084E5B40
	.incbin "baserom.gba", 0x4e5b40, 0x8
	.globl gUnknown_84E5B48
gUnknown_84E5B48: @ 0x084E5B48
	.incbin "baserom.gba", 0x4e5b48, 0x1c
	.globl gUnknown_84E5B64
gUnknown_84E5B64: @ 0x084E5B64
	.incbin "baserom.gba", 0x4e5b64, 0x4
	.globl gUnknown_84E5B68
gUnknown_84E5B68: @ 0x084E5B68
	.incbin "baserom.gba", 0x4e5b68, 0x2c
	.globl gUnknown_84E5B94
gUnknown_84E5B94: @ 0x084E5B94
	.incbin "baserom.gba", 0x4e5b94, 0x14
	.globl gUnknown_84E5BA8
gUnknown_84E5BA8: @ 0x084E5BA8
	.incbin "baserom.gba", 0x4e5ba8, 0x1c
	.globl gUnknown_84E5BC4
gUnknown_84E5BC4: @ 0x084E5BC4
	.incbin "baserom.gba", 0x4e5bc4, 0x4
	.globl gUnknown_84E5BC8
gUnknown_84E5BC8: @ 0x084E5BC8
	.incbin "baserom.gba", 0x4e5bc8, 0x1c
	.globl gUnknown_84E5BE4
gUnknown_84E5BE4: @ 0x084E5BE4
	.incbin "baserom.gba", 0x4e5be4, 0x4
	.globl gUnknown_84E5BE8
gUnknown_84E5BE8: @ 0x084E5BE8
	.incbin "baserom.gba", 0x4e5be8, 0xc
	.globl gUnknown_84E5BF4
gUnknown_84E5BF4: @ 0x084E5BF4
	.incbin "baserom.gba", 0x4e5bf4, 0x14
	.globl gUnknown_84E5C08
gUnknown_84E5C08: @ 0x084E5C08
	.incbin "baserom.gba", 0x4e5c08, 0x14
	.globl gUnknown_84E5C1C
gUnknown_84E5C1C: @ 0x084E5C1C
	.incbin "baserom.gba", 0x4e5c1c, 0x14
	.globl gUnknown_84E5C30
gUnknown_84E5C30: @ 0x084E5C30
	.incbin "baserom.gba", 0x4e5c30, 0x14
	.globl gUnknown_84E5C44
gUnknown_84E5C44: @ 0x084E5C44
	.incbin "baserom.gba", 0x4e5c44, 0x4
	.globl gUnknown_84E5C48
gUnknown_84E5C48: @ 0x084E5C48
	.incbin "baserom.gba", 0x4e5c48, 0x14
	.globl gUnknown_84E5C5C
gUnknown_84E5C5C: @ 0x084E5C5C
	.incbin "baserom.gba", 0x4e5c5c, 0x4
	.globl gUnknown_84E5C60
gUnknown_84E5C60: @ 0x084E5C60
	.incbin "baserom.gba", 0x4e5c60, 0x14
	.globl gUnknown_84E5C74
gUnknown_84E5C74: @ 0x084E5C74
	.incbin "baserom.gba", 0x4e5c74, 0x4
	.globl gUnknown_84E5C78
gUnknown_84E5C78: @ 0x084E5C78
	.incbin "baserom.gba", 0x4e5c78, 0x14
	.globl gUnknown_84E5C8C
gUnknown_84E5C8C: @ 0x084E5C8C
	.incbin "baserom.gba", 0x4e5c8c, 0x4
	.globl gUnknown_84E5C90
gUnknown_84E5C90: @ 0x084E5C90
	.incbin "baserom.gba", 0x4e5c90, 0x14
	.globl gUnknown_84E5CA4
gUnknown_84E5CA4: @ 0x084E5CA4
	.incbin "baserom.gba", 0x4e5ca4, 0x4
	.globl gUnknown_84E5CA8
gUnknown_84E5CA8: @ 0x084E5CA8
	.incbin "baserom.gba", 0x4e5ca8, 0x14
	.globl gUnknown_84E5CBC
gUnknown_84E5CBC: @ 0x084E5CBC
	.incbin "baserom.gba", 0x4e5cbc, 0x4
	.globl gUnknown_84E5CC0
gUnknown_84E5CC0: @ 0x084E5CC0
	.incbin "baserom.gba", 0x4e5cc0, 0x14
	.globl gUnknown_84E5CD4
gUnknown_84E5CD4: @ 0x084E5CD4
	.incbin "baserom.gba", 0x4e5cd4, 0x4
	.globl gUnknown_84E5CD8
gUnknown_84E5CD8: @ 0x084E5CD8
	.incbin "baserom.gba", 0x4e5cd8, 0x14
	.globl gUnknown_84E5CEC
gUnknown_84E5CEC: @ 0x084E5CEC
	.incbin "baserom.gba", 0x4e5cec, 0x4
	.globl gUnknown_84E5CF0
gUnknown_84E5CF0: @ 0x084E5CF0
	.incbin "baserom.gba", 0x4e5cf0, 0x10
	.globl gUnknown_84E5D00
gUnknown_84E5D00: @ 0x084E5D00
	.incbin "baserom.gba", 0x4e5d00, 0x8
	.globl gUnknown_84E5D08
gUnknown_84E5D08: @ 0x084E5D08
	.incbin "baserom.gba", 0x4e5d08, 0x10
	.globl gUnknown_84E5D18
gUnknown_84E5D18: @ 0x084E5D18
	.incbin "baserom.gba", 0x4e5d18, 0x8
	.globl gUnknown_84E5D20
gUnknown_84E5D20: @ 0x084E5D20
	.incbin "baserom.gba", 0x4e5d20, 0x10
	.globl gUnknown_84E5D30
gUnknown_84E5D30: @ 0x084E5D30
	.incbin "baserom.gba", 0x4e5d30, 0xc
	.globl gUnknown_84E5D3C
gUnknown_84E5D3C: @ 0x084E5D3C
	.incbin "baserom.gba", 0x4e5d3c, 0x4
	.globl gUnknown_84E5D40
gUnknown_84E5D40: @ 0x084E5D40
	.incbin "baserom.gba", 0x4e5d40, 0xc
	.globl gUnknown_84E5D4C
gUnknown_84E5D4C: @ 0x084E5D4C
	.incbin "baserom.gba", 0x4e5d4c, 0x4
	.globl gUnknown_84E5D50
gUnknown_84E5D50: @ 0x084E5D50
	.incbin "baserom.gba", 0x4e5d50, 0xc
	.globl gUnknown_84E5D5C
gUnknown_84E5D5C: @ 0x084E5D5C
	.incbin "baserom.gba", 0x4e5d5c, 0x4
	.globl gUnknown_84E5D60
gUnknown_84E5D60: @ 0x084E5D60
	.incbin "baserom.gba", 0x4e5d60, 0xc
	.globl gUnknown_84E5D6C
gUnknown_84E5D6C: @ 0x084E5D6C
	.incbin "baserom.gba", 0x4e5d6c, 0x4
	.globl gUnknown_84E5D70
gUnknown_84E5D70: @ 0x084E5D70
	.incbin "baserom.gba", 0x4e5d70, 0xc
	.globl gUnknown_84E5D7C
gUnknown_84E5D7C: @ 0x084E5D7C
	.incbin "baserom.gba", 0x4e5d7c, 0x4
	.globl gUnknown_84E5D80
gUnknown_84E5D80: @ 0x084E5D80
	.incbin "baserom.gba", 0x4e5d80, 0xc
	.globl gUnknown_84E5D8C
gUnknown_84E5D8C: @ 0x084E5D8C
	.incbin "baserom.gba", 0x4e5d8c, 0x4
	.globl gUnknown_84E5D90
gUnknown_84E5D90: @ 0x084E5D90
	.incbin "baserom.gba", 0x4e5d90, 0xc
	.globl gUnknown_84E5D9C
gUnknown_84E5D9C: @ 0x084E5D9C
	.incbin "baserom.gba", 0x4e5d9c, 0xc
	.globl gUnknown_84E5DA8
gUnknown_84E5DA8: @ 0x084E5DA8
	.incbin "baserom.gba", 0x4e5da8, 0x4
	.globl gUnknown_84E5DAC
gUnknown_84E5DAC: @ 0x084E5DAC
	.incbin "baserom.gba", 0x4e5dac, 0xc
	.globl gUnknown_84E5DB8
gUnknown_84E5DB8: @ 0x084E5DB8
	.incbin "baserom.gba", 0x4e5db8, 0x4
	.globl gUnknown_84E5DBC
gUnknown_84E5DBC: @ 0x084E5DBC
	.incbin "baserom.gba", 0x4e5dbc, 0xc
	.globl gUnknown_84E5DC8
gUnknown_84E5DC8: @ 0x084E5DC8
	.incbin "baserom.gba", 0x4e5dc8, 0x4
	.globl gUnknown_84E5DCC
gUnknown_84E5DCC: @ 0x084E5DCC
	.incbin "baserom.gba", 0x4e5dcc, 0xc
	.globl gUnknown_84E5DD8
gUnknown_84E5DD8: @ 0x084E5DD8
	.incbin "baserom.gba", 0x4e5dd8, 0x4
	.globl gUnknown_84E5DDC
gUnknown_84E5DDC: @ 0x084E5DDC
	.incbin "baserom.gba", 0x4e5ddc, 0xc
	.globl gUnknown_84E5DE8
gUnknown_84E5DE8: @ 0x084E5DE8
	.incbin "baserom.gba", 0x4e5de8, 0x4
	.globl gUnknown_84E5DEC
gUnknown_84E5DEC: @ 0x084E5DEC
	.incbin "baserom.gba", 0x4e5dec, 0xc
	.globl gUnknown_84E5DF8
gUnknown_84E5DF8: @ 0x084E5DF8
	.incbin "baserom.gba", 0x4e5df8, 0x4
	.globl gUnknown_84E5DFC
gUnknown_84E5DFC: @ 0x084E5DFC
	.incbin "baserom.gba", 0x4e5dfc, 0xc
	.globl gUnknown_84E5E08
gUnknown_84E5E08: @ 0x084E5E08
	.incbin "baserom.gba", 0x4e5e08, 0x4
	.globl gUnknown_84E5E0C
gUnknown_84E5E0C: @ 0x084E5E0C
	.incbin "baserom.gba", 0x4e5e0c, 0xc
	.globl gUnknown_84E5E18
gUnknown_84E5E18: @ 0x084E5E18
	.incbin "baserom.gba", 0x4e5e18, 0x4
	.globl gUnknown_84E5E1C
gUnknown_84E5E1C: @ 0x084E5E1C
	.incbin "baserom.gba", 0x4e5e1c, 0xc
	.globl gUnknown_84E5E28
gUnknown_84E5E28: @ 0x084E5E28
	.incbin "baserom.gba", 0x4e5e28, 0x4
	.globl gUnknown_84E5E2C
gUnknown_84E5E2C: @ 0x084E5E2C
	.incbin "baserom.gba", 0x4e5e2c, 0xc
	.globl gUnknown_84E5E38
gUnknown_84E5E38: @ 0x084E5E38
	.incbin "baserom.gba", 0x4e5e38, 0x4
	.globl gUnknown_84E5E3C
gUnknown_84E5E3C: @ 0x084E5E3C
	.incbin "baserom.gba", 0x4e5e3c, 0xc
	.globl gUnknown_84E5E48
gUnknown_84E5E48: @ 0x084E5E48
	.incbin "baserom.gba", 0x4e5e48, 0x4
	.globl gUnknown_84E5E4C
gUnknown_84E5E4C: @ 0x084E5E4C
	.incbin "baserom.gba", 0x4e5e4c, 0xc
	.globl gUnknown_84E5E58
gUnknown_84E5E58: @ 0x084E5E58
	.incbin "baserom.gba", 0x4e5e58, 0x4
	.globl gUnknown_84E5E5C
gUnknown_84E5E5C: @ 0x084E5E5C
	.incbin "baserom.gba", 0x4e5e5c, 0xc
	.globl gUnknown_84E5E68
gUnknown_84E5E68: @ 0x084E5E68
	.incbin "baserom.gba", 0x4e5e68, 0x4
	.globl gUnknown_84E5E6C
gUnknown_84E5E6C: @ 0x084E5E6C
	.incbin "baserom.gba", 0x4e5e6c, 0xc
	.globl gUnknown_84E5E78
gUnknown_84E5E78: @ 0x084E5E78
	.incbin "baserom.gba", 0x4e5e78, 0x4
	.globl gUnknown_84E5E7C
gUnknown_84E5E7C: @ 0x084E5E7C
	.incbin "baserom.gba", 0x4e5e7c, 0xc
	.globl gUnknown_84E5E88
gUnknown_84E5E88: @ 0x084E5E88
	.incbin "baserom.gba", 0x4e5e88, 0x4
	.globl gUnknown_84E5E8C
gUnknown_84E5E8C: @ 0x084E5E8C
	.incbin "baserom.gba", 0x4e5e8c, 0xc
	.globl gUnknown_84E5E98
gUnknown_84E5E98: @ 0x084E5E98
	.incbin "baserom.gba", 0x4e5e98, 0x4
	.globl gUnknown_84E5E9C
gUnknown_84E5E9C: @ 0x084E5E9C
	.incbin "baserom.gba", 0x4e5e9c, 0xc
	.globl gUnknown_84E5EA8
gUnknown_84E5EA8: @ 0x084E5EA8
	.incbin "baserom.gba", 0x4e5ea8, 0x4
	.globl gUnknown_84E5EAC
gUnknown_84E5EAC: @ 0x084E5EAC
	.incbin "baserom.gba", 0x4e5eac, 0xc
	.globl gUnknown_84E5EB8
gUnknown_84E5EB8: @ 0x084E5EB8
	.incbin "baserom.gba", 0x4e5eb8, 0x2c
	.globl gUnknown_84E5EE4
gUnknown_84E5EE4: @ 0x084E5EE4
	.incbin "baserom.gba", 0x4e5ee4, 0xc
	.globl gUnknown_84E5EF0
gUnknown_84E5EF0: @ 0x084E5EF0
	.incbin "baserom.gba", 0x4e5ef0, 0x4
	.globl gUnknown_84E5EF4
gUnknown_84E5EF4: @ 0x084E5EF4
	.incbin "baserom.gba", 0x4e5ef4, 0x8
	.globl gUnknown_84E5EFC
gUnknown_84E5EFC: @ 0x084E5EFC
	.incbin "baserom.gba", 0x4e5efc, 0x8
	.globl gUnknown_84E5F04
gUnknown_84E5F04: @ 0x084E5F04
	.incbin "baserom.gba", 0x4e5f04, 0x8
	.globl gUnknown_84E5F0C
gUnknown_84E5F0C: @ 0x084E5F0C
	.incbin "baserom.gba", 0x4e5f0c, 0x8
	.globl gUnknown_84E5F14
gUnknown_84E5F14: @ 0x084E5F14
	.incbin "baserom.gba", 0x4e5f14, 0xc
	.globl gUnknown_84E5F20
gUnknown_84E5F20: @ 0x084E5F20
	.incbin "baserom.gba", 0x4e5f20, 0x9
	.globl gUnknown_84E5F29
gUnknown_84E5F29: @ 0x084E5F29
	.incbin "baserom.gba", 0x4e5f29, 0x9
	.globl gUnknown_84E5F32
gUnknown_84E5F32: @ 0x084E5F32
	.incbin "baserom.gba", 0x4e5f32, 0x9
	.globl gUnknown_84E5F3B
gUnknown_84E5F3B: @ 0x084E5F3B
	.incbin "baserom.gba", 0x4e5f3b, 0x9
	.globl gUnknown_84E5F44
gUnknown_84E5F44: @ 0x084E5F44
	.incbin "baserom.gba", 0x4e5f44, 0x9
	.globl gUnknown_84E5F4D
gUnknown_84E5F4D: @ 0x084E5F4D
	.incbin "baserom.gba", 0x4e5f4d, 0x9
	.globl gUnknown_84E5F56
gUnknown_84E5F56: @ 0x084E5F56
	.incbin "baserom.gba", 0x4e5f56, 0x9
	.globl gUnknown_84E5F5F
gUnknown_84E5F5F: @ 0x084E5F5F
	.incbin "baserom.gba", 0x4e5f5f, 0x9
	.globl gUnknown_84E5F68
gUnknown_84E5F68: @ 0x084E5F68
	.incbin "baserom.gba", 0x4e5f68, 0x9
	.globl gUnknown_84E5F71
gUnknown_84E5F71: @ 0x084E5F71
	.incbin "baserom.gba", 0x4e5f71, 0x9
	.globl gUnknown_84E5F7A
gUnknown_84E5F7A: @ 0x084E5F7A
	.incbin "baserom.gba", 0x4e5f7a, 0x9
	.globl gUnknown_84E5F83
gUnknown_84E5F83: @ 0x084E5F83
	.incbin "baserom.gba", 0x4e5f83, 0x9
	.globl gUnknown_84E5F8C
gUnknown_84E5F8C: @ 0x084E5F8C
	.incbin "baserom.gba", 0x4e5f8c, 0x9
	.globl gUnknown_84E5F95
gUnknown_84E5F95: @ 0x084E5F95
	.incbin "baserom.gba", 0x4e5f95, 0x9
	.globl gUnknown_84E5F9E
gUnknown_84E5F9E: @ 0x084E5F9E
	.incbin "baserom.gba", 0x4e5f9e, 0x9
	.globl gUnknown_84E5FA7
gUnknown_84E5FA7: @ 0x084E5FA7
	.incbin "baserom.gba", 0x4e5fa7, 0x9
	.globl gUnknown_84E5FB0
gUnknown_84E5FB0: @ 0x084E5FB0
	.incbin "baserom.gba", 0x4e5fb0, 0x10
	.globl gUnknown_84E5FC0
gUnknown_84E5FC0: @ 0x084E5FC0
	.incbin "baserom.gba", 0x4e5fc0, 0x10
	.globl gUnknown_84E5FD0
gUnknown_84E5FD0: @ 0x084E5FD0
	.incbin "baserom.gba", 0x4e5fd0, 0x24
	.globl gUnknown_84E5FF4
gUnknown_84E5FF4: @ 0x084E5FF4
	.incbin "baserom.gba", 0x4e5ff4, 0x5
	.globl gUnknown_84E5FF9
gUnknown_84E5FF9: @ 0x084E5FF9
	.incbin "baserom.gba", 0x4e5ff9, 0x5
	.globl gUnknown_84E5FFE
gUnknown_84E5FFE: @ 0x084E5FFE
	.incbin "baserom.gba", 0x4e5ffe, 0x5
	.globl gUnknown_84E6003
gUnknown_84E6003: @ 0x084E6003
	.incbin "baserom.gba", 0x4e6003, 0x5
	.globl gUnknown_84E6008
gUnknown_84E6008: @ 0x084E6008
	.incbin "baserom.gba", 0x4e6008, 0x5
	.globl gUnknown_84E600D
gUnknown_84E600D: @ 0x084E600D
	.incbin "baserom.gba", 0x4e600d, 0x5
	.globl gUnknown_84E6012
gUnknown_84E6012: @ 0x084E6012
	.incbin "baserom.gba", 0x4e6012, 0x5
	.globl gUnknown_84E6017
gUnknown_84E6017: @ 0x084E6017
	.incbin "baserom.gba", 0x4e6017, 0x5
	.globl gUnknown_84E601C
gUnknown_84E601C: @ 0x084E601C
	.incbin "baserom.gba", 0x4e601c, 0x5
	.globl gUnknown_84E6021
gUnknown_84E6021: @ 0x084E6021
	.incbin "baserom.gba", 0x4e6021, 0x5
	.globl gUnknown_84E6026
gUnknown_84E6026: @ 0x084E6026
	.incbin "baserom.gba", 0x4e6026, 0x5
	.globl gUnknown_84E602B
gUnknown_84E602B: @ 0x084E602B
	.incbin "baserom.gba", 0x4e602b, 0x5
	.globl gUnknown_84E6030
gUnknown_84E6030: @ 0x084E6030
	.incbin "baserom.gba", 0x4e6030, 0x5
	.globl gUnknown_84E6035
gUnknown_84E6035: @ 0x084E6035
	.incbin "baserom.gba", 0x4e6035, 0x5
	.globl gUnknown_84E603A
gUnknown_84E603A: @ 0x084E603A
	.incbin "baserom.gba", 0x4e603a, 0x5
	.globl gUnknown_84E603F
gUnknown_84E603F: @ 0x084E603F
	.incbin "baserom.gba", 0x4e603f, 0x5
	.globl gUnknown_84E6044
gUnknown_84E6044: @ 0x084E6044
	.incbin "baserom.gba", 0x4e6044, 0x5
	.globl gUnknown_84E6049
gUnknown_84E6049: @ 0x084E6049
	.incbin "baserom.gba", 0x4e6049, 0x5
	.globl gUnknown_84E604E
gUnknown_84E604E: @ 0x084E604E
	.incbin "baserom.gba", 0x4e604e, 0x5
	.globl gUnknown_84E6053
gUnknown_84E6053: @ 0x084E6053
	.incbin "baserom.gba", 0x4e6053, 0x5
	.globl gUnknown_84E6058
gUnknown_84E6058: @ 0x084E6058
	.incbin "baserom.gba", 0x4e6058, 0x5
	.globl gUnknown_84E605D
gUnknown_84E605D: @ 0x084E605D
	.incbin "baserom.gba", 0x4e605d, 0x5
	.globl gUnknown_84E6062
gUnknown_84E6062: @ 0x084E6062
	.incbin "baserom.gba", 0x4e6062, 0x5
	.globl gUnknown_84E6067
gUnknown_84E6067: @ 0x084E6067
	.incbin "baserom.gba", 0x4e6067, 0x5
	.globl gUnknown_84E606C
gUnknown_84E606C: @ 0x084E606C
	.incbin "baserom.gba", 0x4e606c, 0x5
	.globl gUnknown_84E6071
gUnknown_84E6071: @ 0x084E6071
	.incbin "baserom.gba", 0x4e6071, 0x5
	.globl gUnknown_84E6076
gUnknown_84E6076: @ 0x084E6076
	.incbin "baserom.gba", 0x4e6076, 0x5
	.globl gUnknown_84E607B
gUnknown_84E607B: @ 0x084E607B
	.incbin "baserom.gba", 0x4e607b, 0x8
	.globl gUnknown_84E6083
gUnknown_84E6083: @ 0x084E6083
	.incbin "baserom.gba", 0x4e6083, 0x10
	.globl gUnknown_84E6093
gUnknown_84E6093: @ 0x084E6093
	.incbin "baserom.gba", 0x4e6093, 0x11
	.globl gUnknown_84E60A4
gUnknown_84E60A4: @ 0x084E60A4
	.incbin "baserom.gba", 0x4e60a4, 0x298
	.globl gUnknown_84E633C
gUnknown_84E633C: @ 0x084E633C
	.incbin "baserom.gba", 0x4e633c, 0xd4
	.globl gUnknown_84E6410
gUnknown_84E6410: @ 0x084E6410
	.incbin "baserom.gba", 0x4e6410, 0x6
	.globl gUnknown_84E6416
gUnknown_84E6416: @ 0x084E6416
	.incbin "baserom.gba", 0x4e6416, 0x61a
	.globl gUnknown_84E6A30
gUnknown_84E6A30: @ 0x084E6A30
	.incbin "baserom.gba", 0x4e6a30, 0x8
	.globl gUnknown_84E6A38
gUnknown_84E6A38: @ 0x084E6A38
	.incbin "baserom.gba", 0x4e6a38, 0x18
	.globl gUnknown_84E6A50
gUnknown_84E6A50: @ 0x084E6A50
	.incbin "baserom.gba", 0x4e6a50, 0x18
	.globl gUnknown_84E6A68
gUnknown_84E6A68: @ 0x084E6A68
	.incbin "baserom.gba", 0x4e6a68, 0x10
	.globl gUnknown_84E6A78
gUnknown_84E6A78: @ 0x084E6A78
	.incbin "baserom.gba", 0x4e6a78, 0x10
	.globl gUnknown_84E6A88
gUnknown_84E6A88: @ 0x084E6A88
	.incbin "baserom.gba", 0x4e6a88, 0x10
	.globl gUnknown_84E6A98
gUnknown_84E6A98: @ 0x084E6A98
	.incbin "baserom.gba", 0x4e6a98, 0x10
	.globl gUnknown_84E6AA8
gUnknown_84E6AA8: @ 0x084E6AA8
	.incbin "baserom.gba", 0x4e6aa8, 0xc
	.globl gUnknown_84E6AB4
gUnknown_84E6AB4: @ 0x084E6AB4
	.incbin "baserom.gba", 0x4e6ab4, 0x4
	.globl gUnknown_84E6AB8
gUnknown_84E6AB8: @ 0x084E6AB8
	.incbin "baserom.gba", 0x4e6ab8, 0x10
	.globl gUnknown_84E6AC8
gUnknown_84E6AC8: @ 0x084E6AC8
	.incbin "baserom.gba", 0x4e6ac8, 0xe0
	.globl gUnknown_84E6BA8
gUnknown_84E6BA8: @ 0x084E6BA8
	.incbin "baserom.gba", 0x4e6ba8, 0x14
	.globl gUnknown_84E6BBC
gUnknown_84E6BBC: @ 0x084E6BBC
	.incbin "baserom.gba", 0x4e6bbc, 0xa
	.globl gUnknown_84E6BC6
gUnknown_84E6BC6: @ 0x084E6BC6
	.incbin "baserom.gba", 0x4e6bc6, 0x48
	.globl gUnknown_84E6C0E
gUnknown_84E6C0E: @ 0x084E6C0E
	.incbin "baserom.gba", 0x4e6c0e, 0x7a
	.globl gUnknown_84E6C88
gUnknown_84E6C88: @ 0x084E6C88
	.incbin "baserom.gba", 0x4e6c88, 0xc
	.globl gUnknown_84E6C94
gUnknown_84E6C94: @ 0x084E6C94
	.incbin "baserom.gba", 0x4e6c94, 0x6
	.globl gUnknown_84E6C9A
gUnknown_84E6C9A: @ 0x084E6C9A
	.incbin "baserom.gba", 0x4e6c9a, 0x4
	.globl gUnknown_84E6C9E
gUnknown_84E6C9E: @ 0x084E6C9E
	.incbin "baserom.gba", 0x4e6c9e, 0x6
	.globl gUnknown_84E6CA4
gUnknown_84E6CA4: @ 0x084E6CA4
	.incbin "baserom.gba", 0x4e6ca4, 0x4
	.globl gUnknown_84E6CA8
gUnknown_84E6CA8: @ 0x084E6CA8
	.incbin "baserom.gba", 0x4e6ca8, 0xc
	.globl gUnknown_84E6CB4
gUnknown_84E6CB4: @ 0x084E6CB4
	.incbin "baserom.gba", 0x4e6cb4, 0x2c
	.globl gUnknown_84E6CE0
gUnknown_84E6CE0: @ 0x084E6CE0
	.incbin "baserom.gba", 0x4e6ce0, 0x25f

	@ src/text_input_strings.c:39 gText_UnionRoomChatKeyboard_z
	.globl gText_Rom_4E6F3F
gText_Rom_4E6F3F: @ 0x084E6F3F
	.string "z    $"
	.if (. - gText_Rom_4E6F3F) > 0x6
	.error "gText_Rom_4E6F3F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_4E6F3F) < 0x6
	.space 0x6 - (. - gText_Rom_4E6F3F)
	.endif
	.incbin "baserom.gba", 0x4e6f45, 0x11a

	@ src/text_input_strings.c:39 gText_UnionRoomChatKeyboard_z
	.globl gText_Rom_4E705F
gText_Rom_4E705F: @ 0x084E705F
	.string "z    $"
	.if (. - gText_Rom_4E705F) > 0x6
	.error "gText_Rom_4E705F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_4E705F) < 0x6
	.space 0x6 - (. - gText_Rom_4E705F)
	.endif
	.incbin "baserom.gba", 0x4e7065, 0x12fb
	.globl gUnknown_84E8360
gUnknown_84E8360: @ 0x084E8360
	.incbin "baserom.gba", 0x4e8360, 0x280
	.globl gUnknown_84E85E0
gUnknown_84E85E0: @ 0x084E85E0
	.incbin "baserom.gba", 0x4e85e0, 0x1c0
	.globl gUnknown_84E87A0
gUnknown_84E87A0: @ 0x084E87A0
	.incbin "baserom.gba", 0x4e87a0, 0xa0
	.globl gUnknown_84E8840
gUnknown_84E8840: @ 0x084E8840
	.incbin "baserom.gba", 0x4e8840, 0x20
	.globl gUnknown_84E8860
gUnknown_84E8860: @ 0x084E8860
	.incbin "baserom.gba", 0x4e8860, 0xa0
	.globl gUnknown_84E8900
gUnknown_84E8900: @ 0x084E8900
	.incbin "baserom.gba", 0x4e8900, 0x4
	.globl gUnknown_84E8904
gUnknown_84E8904: @ 0x084E8904
	.incbin "baserom.gba", 0x4e8904, 0x14
	.globl gUnknown_84E8918
gUnknown_84E8918: @ 0x084E8918
	.incbin "baserom.gba", 0x4e8918, 0xc
	.globl gUnknown_84E8924
gUnknown_84E8924: @ 0x084E8924
	.incbin "baserom.gba", 0x4e8924, 0x68
	.globl gUnknown_84E898C
gUnknown_84E898C: @ 0x084E898C
	.incbin "baserom.gba", 0x4e898c, 0x20
	.globl gUnknown_84E89AC
gUnknown_84E89AC: @ 0x084E89AC
	.incbin "baserom.gba", 0x4e89ac, 0x20
	.globl gUnknown_84E89CC
gUnknown_84E89CC: @ 0x084E89CC
	.incbin "baserom.gba", 0x4e89cc, 0x20
	.globl gUnknown_84E89EC
gUnknown_84E89EC: @ 0x084E89EC
	.incbin "baserom.gba", 0x4e89ec, 0x20
	.globl gUnknown_84E8A0C
gUnknown_84E8A0C: @ 0x084E8A0C
	.incbin "baserom.gba", 0x4e8a0c, 0x34
	.globl gUnknown_84E8A40
gUnknown_84E8A40: @ 0x084E8A40
	.incbin "baserom.gba", 0x4e8a40, 0x8
	.globl gUnknown_84E8A48
gUnknown_84E8A48: @ 0x084E8A48
	.incbin "baserom.gba", 0x4e8a48, 0x4
	.globl gUnknown_84E8A4C
gUnknown_84E8A4C: @ 0x084E8A4C
	.incbin "baserom.gba", 0x4e8a4c, 0x18
	.globl gUnknown_84E8A64
gUnknown_84E8A64: @ 0x084E8A64
	.incbin "baserom.gba", 0x4e8a64, 0x8
	.globl gUnknown_84E8A6C
gUnknown_84E8A6C: @ 0x084E8A6C

	@ asm/reset_rtc_screen.s:427 PrintTime
	.globl gText_Rom_4E8A6C
gText_Rom_4E8A6C: @ 0x084E8A6C
	.string "にち$"
	.if (. - gText_Rom_4E8A6C) > 0x3
	.error "gText_Rom_4E8A6C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_4E8A6C) < 0x3
	.space 0x3 - (. - gText_Rom_4E8A6C)
	.endif
	.globl gUnknown_84E8A6F
gUnknown_84E8A6F: @ 0x084E8A6F
	.incbin "baserom.gba", 0x4e8a6f, 0x2
	.globl gUnknown_84E8A71
gUnknown_84E8A71: @ 0x084E8A71

	@ src/strings.c:134 gMenuText_Confirm (+2 aliases)
	.globl gText_Rom_4E8A71
gText_Rom_4E8A71: @ 0x084E8A71
	.string "けってい$"
	.if (. - gText_Rom_4E8A71) > 0x5
	.error "gText_Rom_4E8A71 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_4E8A71) < 0x5
	.space 0x5 - (. - gText_Rom_4E8A71)
	.endif
	.incbin "baserom.gba", 0x4e8a76, 0x9e
	.globl gUnknown_84E8B14
gUnknown_84E8B14: @ 0x084E8B14
	.incbin "baserom.gba", 0x4e8b14, 0x2c
	.globl gUnknown_84E8B40
gUnknown_84E8B40: @ 0x084E8B40
	.incbin "baserom.gba", 0x4e8b40, 0x18

