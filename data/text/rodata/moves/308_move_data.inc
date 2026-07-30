	.incbin "baserom.gba", 0xd51a6c, 0x25280

	@ src/data/easy_chat/easy_chat_group_voices.h:346 easy_chat_group_voices_line_346
	.globl gText_Rom_D76CEC
gText_Rom_D76CEC: @ 0x08D76CEC
	.string "ラララ$"
	.if (. - gText_Rom_D76CEC) > 0x4
	.error "gText_Rom_D76CEC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_D76CEC) < 0x4
	.space 0x4 - (. - gText_Rom_D76CEC)
	.endif
	.incbin "baserom.gba", 0xd76cf0, 0xca4
	.globl gUnknown_8D77994
gUnknown_8D77994: @ 0x08D77994
	.incbin "baserom.gba", 0xd77994, 0xe8
	.globl gUnknown_8D77A7C
gUnknown_8D77A7C: @ 0x08D77A7C
	.incbin "baserom.gba", 0xd77a7c, 0x10c
	.globl gUnknown_8D77B88
gUnknown_8D77B88: @ 0x08D77B88
	.incbin "baserom.gba", 0xd77b88, 0x28
	.globl gUnknown_8D77BB0
gUnknown_8D77BB0: @ 0x08D77BB0
	.incbin "baserom.gba", 0xd77bb0, 0x25fc
	.globl gUnknown_8D7A1AC
gUnknown_8D7A1AC: @ 0x08D7A1AC
	.incbin "baserom.gba", 0xd7a1ac, 0x618
	.globl gUnknown_8D7A7C4
gUnknown_8D7A7C4: @ 0x08D7A7C4
	.incbin "baserom.gba", 0xd7a7c4, 0x13f4
	.globl gUnknown_8D7BBB8
gUnknown_8D7BBB8: @ 0x08D7BBB8
	.incbin "baserom.gba", 0xd7bbb8, 0x640
	.globl gUnknown_8D7C1F8
gUnknown_8D7C1F8: @ 0x08D7C1F8
	.incbin "baserom.gba", 0xd7c1f8, 0x2ec
	.globl gUnknown_8D7C4E4
gUnknown_8D7C4E4: @ 0x08D7C4E4
	.incbin "baserom.gba", 0xd7c4e4, 0x5ac
	.globl gUnknown_8D7CA90
gUnknown_8D7CA90: @ 0x08D7CA90
	.incbin "baserom.gba", 0xd7ca90, 0x3c
	.globl gUnknown_8D7CACC
gUnknown_8D7CACC: @ 0x08D7CACC
	.incbin "baserom.gba", 0xd7cacc, 0x2b0
	.globl gUnknown_8D7CD7C
gUnknown_8D7CD7C: @ 0x08D7CD7C
	.incbin "baserom.gba", 0xd7cd7c, 0x608
	.globl gUnknown_8D7D384
gUnknown_8D7D384: @ 0x08D7D384
	.incbin "baserom.gba", 0xd7d384, 0x2b0
	.globl gUnknown_8D7D634
gUnknown_8D7D634: @ 0x08D7D634
	.incbin "baserom.gba", 0xd7d634, 0x674
	.globl gUnknown_8D7DCA8
gUnknown_8D7DCA8: @ 0x08D7DCA8
	.incbin "baserom.gba", 0xd7dca8, 0x2f0
	.globl gUnknown_8D7DF98
gUnknown_8D7DF98: @ 0x08D7DF98
	.incbin "baserom.gba", 0xd7df98, 0x3c
	.globl gUnknown_8D7DFD4
gUnknown_8D7DFD4: @ 0x08D7DFD4
	.incbin "baserom.gba", 0xd7dfd4, 0x58
	.globl gUnknown_8D7E02C
gUnknown_8D7E02C: @ 0x08D7E02C
	.incbin "baserom.gba", 0xd7e02c, 0x3c
	.globl gUnknown_8D7E068
gUnknown_8D7E068: @ 0x08D7E068
	.incbin "baserom.gba", 0xd7e068, 0x3c
	.globl gUnknown_8D7E0A4
gUnknown_8D7E0A4: @ 0x08D7E0A4
	.incbin "baserom.gba", 0xd7e0a4, 0x60
	.globl gUnknown_8D7E104
gUnknown_8D7E104: @ 0x08D7E104
	.incbin "baserom.gba", 0xd7e104, 0x6c
	.globl gUnknown_8D7E170
gUnknown_8D7E170: @ 0x08D7E170
	.incbin "baserom.gba", 0xd7e170, 0x50
	.globl gUnknown_8D7E1C0
gUnknown_8D7E1C0: @ 0x08D7E1C0
	.incbin "baserom.gba", 0xd7e1c0, 0x48
	.globl gUnknown_8D7E208
gUnknown_8D7E208: @ 0x08D7E208
	.incbin "baserom.gba", 0xd7e208, 0x44
	.globl gUnknown_8D7E24C
gUnknown_8D7E24C: @ 0x08D7E24C
	.incbin "baserom.gba", 0xd7e24c, 0x50
	.globl gUnknown_8D7E29C
gUnknown_8D7E29C: @ 0x08D7E29C
	.incbin "baserom.gba", 0xd7e29c, 0x3c
	.globl gUnknown_8D7E2D8
gUnknown_8D7E2D8: @ 0x08D7E2D8
	.incbin "baserom.gba", 0xd7e2d8, 0x17c4
	.globl gUnknown_8D7FA9C
gUnknown_8D7FA9C: @ 0x08D7FA9C
	.incbin "baserom.gba", 0xd7fa9c, 0x4cc
	.globl gUnknown_8D7FF68
gUnknown_8D7FF68: @ 0x08D7FF68
	.incbin "baserom.gba", 0xd7ff68, 0x174c
	.globl gUnknown_8D816B4
gUnknown_8D816B4: @ 0x08D816B4
	.incbin "baserom.gba", 0xd816b4, 0x81c
	.globl gUnknown_8D81ED0
gUnknown_8D81ED0: @ 0x08D81ED0
	.incbin "baserom.gba", 0xd81ed0, 0x2a8
	.globl gUnknown_8D82178
gUnknown_8D82178: @ 0x08D82178
	.incbin "baserom.gba", 0xd82178, 0x410
	.globl gUnknown_8D82588
gUnknown_8D82588: @ 0x08D82588
	.incbin "baserom.gba", 0xd82588, 0x124
	.globl gUnknown_8D826AC
gUnknown_8D826AC: @ 0x08D826AC
	.incbin "baserom.gba", 0xd826ac, 0x668
	.globl gUnknown_8D82D14
gUnknown_8D82D14: @ 0x08D82D14
	.incbin "baserom.gba", 0xd82d14, 0x2a0
	.globl gUnknown_8D82FB4
gUnknown_8D82FB4: @ 0x08D82FB4
	.incbin "baserom.gba", 0xd82fb4, 0x5ec
	.globl gUnknown_8D835A0
gUnknown_8D835A0: @ 0x08D835A0
	.incbin "baserom.gba", 0xd835a0, 0x404
	.globl gUnknown_8D839A4
gUnknown_8D839A4: @ 0x08D839A4
	.incbin "baserom.gba", 0xd839a4, 0x22c
	.globl gUnknown_8D83BD0
gUnknown_8D83BD0: @ 0x08D83BD0
	.incbin "baserom.gba", 0xd83bd0, 0x110
	.globl gUnknown_8D83CE0
gUnknown_8D83CE0: @ 0x08D83CE0
	.incbin "baserom.gba", 0xd83ce0, 0x114
	.globl gUnknown_8D83DF4
gUnknown_8D83DF4: @ 0x08D83DF4
	.incbin "baserom.gba", 0xd83df4, 0xc14
	.globl gUnknown_8D84A08
gUnknown_8D84A08: @ 0x08D84A08
	.incbin "baserom.gba", 0xd84a08, 0x590
	.globl gUnknown_8D84F98
gUnknown_8D84F98: @ 0x08D84F98
	.incbin "baserom.gba", 0xd84f98, 0x3a4
	.globl gUnknown_8D8533C
gUnknown_8D8533C: @ 0x08D8533C
	.incbin "baserom.gba", 0xd8533c, 0xec
	.globl gUnknown_8D85428
gUnknown_8D85428: @ 0x08D85428
	.incbin "baserom.gba", 0xd85428, 0x84
	.globl gUnknown_8D854AC
gUnknown_8D854AC: @ 0x08D854AC
	.incbin "baserom.gba", 0xd854ac, 0x120
	.globl gUnknown_8D855CC
gUnknown_8D855CC: @ 0x08D855CC
	.incbin "baserom.gba", 0xd855cc, 0x18
	.globl gUnknown_8D855E4
gUnknown_8D855E4: @ 0x08D855E4
	.incbin "baserom.gba", 0xd855e4, 0x20
	.globl gUnknown_8D85604
gUnknown_8D85604: @ 0x08D85604
	.incbin "baserom.gba", 0xd85604, 0x2
	.globl gUnknown_8D85606
gUnknown_8D85606: @ 0x08D85606
	.incbin "baserom.gba", 0xd85606, 0xa6
	.globl gUnknown_8D856AC
gUnknown_8D856AC: @ 0x08D856AC
	.incbin "baserom.gba", 0xd856ac, 0xe0
	.globl gUnknown_8D8578C
gUnknown_8D8578C: @ 0x08D8578C
	.incbin "baserom.gba", 0xd8578c, 0x274
	.globl gUnknown_8D85A00
gUnknown_8D85A00: @ 0x08D85A00
	.incbin "baserom.gba", 0xd85a00, 0x234
	.globl gUnknown_8D85C34
gUnknown_8D85C34: @ 0x08D85C34
	.incbin "baserom.gba", 0xd85c34, 0x20
	.globl gUnknown_8D85C54
gUnknown_8D85C54: @ 0x08D85C54
	.incbin "baserom.gba", 0xd85c54, 0x20
	.globl gUnknown_8D85C74
gUnknown_8D85C74: @ 0x08D85C74
	.incbin "baserom.gba", 0xd85c74, 0x40
	.globl gUnknown_8D85CB4
gUnknown_8D85CB4: @ 0x08D85CB4
	.incbin "baserom.gba", 0xd85cb4, 0x182
	.globl gUnknown_8D85E36
gUnknown_8D85E36: @ 0x08D85E36
	.incbin "baserom.gba", 0xd85e36, 0xa
	.globl gUnknown_8D85E40
gUnknown_8D85E40: @ 0x08D85E40
	.incbin "baserom.gba", 0xd85e40, 0x16
	.globl gUnknown_8D85E56
gUnknown_8D85E56: @ 0x08D85E56
	.incbin "baserom.gba", 0xd85e56, 0xa
	.globl gUnknown_8D85E60
gUnknown_8D85E60: @ 0x08D85E60
	.incbin "baserom.gba", 0xd85e60, 0x2618
	.globl gUnknown_8D88478
gUnknown_8D88478: @ 0x08D88478
	.incbin "baserom.gba", 0xd88478, 0x8ac
	.globl gUnknown_8D88D24
gUnknown_8D88D24: @ 0x08D88D24
	.incbin "baserom.gba", 0xd88d24, 0x4e4
	.globl gUnknown_8D89208
gUnknown_8D89208: @ 0x08D89208
	.incbin "baserom.gba", 0xd89208, 0x898
	.globl gUnknown_8D89AA0
gUnknown_8D89AA0: @ 0x08D89AA0
	.incbin "baserom.gba", 0xd89aa0, 0x4c0
	.globl gUnknown_8D89F60
gUnknown_8D89F60: @ 0x08D89F60
	.incbin "baserom.gba", 0xd89f60, 0x89c
	.globl gUnknown_8D8A7FC
gUnknown_8D8A7FC: @ 0x08D8A7FC
	.incbin "baserom.gba", 0xd8a7fc, 0x11c
	.globl gUnknown_8D8A918
gUnknown_8D8A918: @ 0x08D8A918
	.incbin "baserom.gba", 0xd8a918, 0x120
	.globl gUnknown_8D8AA38
gUnknown_8D8AA38: @ 0x08D8AA38
	.incbin "baserom.gba", 0xd8aa38, 0x72c
	.globl gUnknown_8D8B164
gUnknown_8D8B164: @ 0x08D8B164
	.incbin "baserom.gba", 0xd8b164, 0x2c0
	.globl gUnknown_8D8B424
gUnknown_8D8B424: @ 0x08D8B424
	.incbin "baserom.gba", 0xd8b424, 0x2a8
	.globl gUnknown_8D8B6CC
gUnknown_8D8B6CC: @ 0x08D8B6CC
	.incbin "baserom.gba", 0xd8b6cc, 0x38c
	.globl gUnknown_8D8BA58
gUnknown_8D8BA58: @ 0x08D8BA58
	.incbin "baserom.gba", 0xd8ba58, 0x6f8
	.globl gUnknown_8D8C150
gUnknown_8D8C150: @ 0x08D8C150
	.incbin "baserom.gba", 0xd8c150, 0x6cc
	.globl gUnknown_8D8C81C
gUnknown_8D8C81C: @ 0x08D8C81C
	.incbin "baserom.gba", 0xd8c81c, 0x490
	.globl gUnknown_8D8CCAC
gUnknown_8D8CCAC: @ 0x08D8CCAC
	.incbin "baserom.gba", 0xd8ccac, 0x748
	.globl gUnknown_8D8D3F4
gUnknown_8D8D3F4: @ 0x08D8D3F4
	.incbin "baserom.gba", 0xd8d3f4, 0x17c
	.globl gUnknown_8D8D570
gUnknown_8D8D570: @ 0x08D8D570
	.incbin "baserom.gba", 0xd8d570, 0x52c
	.globl gUnknown_8D8DA9C
gUnknown_8D8DA9C: @ 0x08D8DA9C
	.incbin "baserom.gba", 0xd8da9c, 0xee0
	.globl gUnknown_8D8E97C
gUnknown_8D8E97C: @ 0x08D8E97C
	.incbin "baserom.gba", 0xd8e97c, 0x80
	.globl gUnknown_8D8E9FC
gUnknown_8D8E9FC: @ 0x08D8E9FC
	.incbin "baserom.gba", 0xd8e9fc, 0x1dc
	.globl gUnknown_8D8EBD8
gUnknown_8D8EBD8: @ 0x08D8EBD8
	.incbin "baserom.gba", 0xd8ebd8, 0xf78
	.globl gUnknown_8D8FB50
gUnknown_8D8FB50: @ 0x08D8FB50
	.incbin "baserom.gba", 0xd8fb50, 0x19fc
	.globl gUnknown_8D9154C
gUnknown_8D9154C: @ 0x08D9154C
	.incbin "baserom.gba", 0xd9154c, 0x820
	.globl gUnknown_8D91D6C
gUnknown_8D91D6C: @ 0x08D91D6C
	.incbin "baserom.gba", 0xd91d6c, 0xa34
	.globl gUnknown_8D927A0
gUnknown_8D927A0: @ 0x08D927A0
	.incbin "baserom.gba", 0xd927a0, 0xaf4
	.globl gUnknown_8D93294
gUnknown_8D93294: @ 0x08D93294
	.incbin "baserom.gba", 0xd93294, 0x2b8
	.globl gUnknown_8D9354C
gUnknown_8D9354C: @ 0x08D9354C
	.incbin "baserom.gba", 0xd9354c, 0x1e4
	.globl gUnknown_8D93730
gUnknown_8D93730: @ 0x08D93730
	.incbin "baserom.gba", 0xd93730, 0x1e4
	.globl gUnknown_8D93914
gUnknown_8D93914: @ 0x08D93914
	.incbin "baserom.gba", 0xd93914, 0x1158
	.globl gUnknown_8D94A6C
gUnknown_8D94A6C: @ 0x08D94A6C
	.incbin "baserom.gba", 0xd94a6c, 0x1320
	.globl gUnknown_8D95D8C
gUnknown_8D95D8C: @ 0x08D95D8C
	.incbin "baserom.gba", 0xd95d8c, 0x28
	.globl gUnknown_8D95DB4
gUnknown_8D95DB4: @ 0x08D95DB4
	.incbin "baserom.gba", 0xd95db4, 0x2d0
	.globl gUnknown_8D96084
gUnknown_8D96084: @ 0x08D96084
	.incbin "baserom.gba", 0xd96084, 0x2d4
	.globl gUnknown_8D96358
gUnknown_8D96358: @ 0x08D96358
	.incbin "baserom.gba", 0xd96358, 0x448
	.globl gUnknown_8D967A0
gUnknown_8D967A0: @ 0x08D967A0
	.incbin "baserom.gba", 0xd967a0, 0x2c8
	.globl gUnknown_8D96A68
gUnknown_8D96A68: @ 0x08D96A68
	.incbin "baserom.gba", 0xd96a68, 0xec
	.globl gUnknown_8D96B54
gUnknown_8D96B54: @ 0x08D96B54
	.incbin "baserom.gba", 0xd96b54, 0x1100
	.globl gUnknown_8D97C54
gUnknown_8D97C54: @ 0x08D97C54
	.incbin "baserom.gba", 0xd97c54, 0x17c
	.globl gUnknown_8D97DD0
gUnknown_8D97DD0: @ 0x08D97DD0
	.incbin "baserom.gba", 0xd97dd0, 0x9cc
	.globl gUnknown_8D9879C
gUnknown_8D9879C: @ 0x08D9879C
	.incbin "baserom.gba", 0xd9879c, 0xf0
	.globl gUnknown_8D9888C
gUnknown_8D9888C: @ 0x08D9888C
	.incbin "baserom.gba", 0xd9888c, 0x1b8
	.globl gUnknown_8D98A44
gUnknown_8D98A44: @ 0x08D98A44
	.incbin "baserom.gba", 0xd98a44, 0x164
	.globl gUnknown_8D98BA8
gUnknown_8D98BA8: @ 0x08D98BA8
	.incbin "baserom.gba", 0xd98ba8, 0x16c
	.globl gUnknown_8D98D14
gUnknown_8D98D14: @ 0x08D98D14
	.incbin "baserom.gba", 0xd98d14, 0x178
	.globl gUnknown_8D98E8C
gUnknown_8D98E8C: @ 0x08D98E8C
	.incbin "baserom.gba", 0xd98e8c, 0x18a8
	.globl gUnknown_8D9A734
gUnknown_8D9A734: @ 0x08D9A734
	.incbin "baserom.gba", 0xd9a734, 0x4c
	.globl gUnknown_8D9A780
gUnknown_8D9A780: @ 0x08D9A780
	.incbin "baserom.gba", 0xd9a780, 0x4c
	.globl gUnknown_8D9A7CC
gUnknown_8D9A7CC: @ 0x08D9A7CC
	.incbin "baserom.gba", 0xd9a7cc, 0x2b8
	.globl gUnknown_8D9AA84
gUnknown_8D9AA84: @ 0x08D9AA84
	.incbin "baserom.gba", 0xd9aa84, 0x544
	.globl gUnknown_8D9AFC8
gUnknown_8D9AFC8: @ 0x08D9AFC8
	.incbin "baserom.gba", 0xd9afc8, 0x34
	.globl gUnknown_8D9AFFC
gUnknown_8D9AFFC: @ 0x08D9AFFC
	.incbin "baserom.gba", 0xd9affc, 0x140
	.globl gUnknown_8D9B13C
gUnknown_8D9B13C: @ 0x08D9B13C
	.incbin "baserom.gba", 0xd9b13c, 0x78
	.globl gUnknown_8D9B1B4
gUnknown_8D9B1B4: @ 0x08D9B1B4
	.incbin "baserom.gba", 0xd9b1b4, 0x10c
	.globl gUnknown_8D9B2C0
gUnknown_8D9B2C0: @ 0x08D9B2C0
	.incbin "baserom.gba", 0xd9b2c0, 0x28
	.globl gUnknown_8D9B2E8
gUnknown_8D9B2E8: @ 0x08D9B2E8
	.incbin "baserom.gba", 0xd9b2e8, 0x1cc
	.globl gUnknown_8D9B4B4
gUnknown_8D9B4B4: @ 0x08D9B4B4
	.incbin "baserom.gba", 0xd9b4b4, 0x208
	.globl gUnknown_8D9B6BC
gUnknown_8D9B6BC: @ 0x08D9B6BC
	.incbin "baserom.gba", 0xd9b6bc, 0x358
	.globl gUnknown_8D9BA14
gUnknown_8D9BA14: @ 0x08D9BA14
	.incbin "baserom.gba", 0xd9ba14, 0x27c
	.globl gUnknown_8D9BC90
gUnknown_8D9BC90: @ 0x08D9BC90
	.incbin "baserom.gba", 0xd9bc90, 0x100
	.globl gUnknown_8D9BD90
gUnknown_8D9BD90: @ 0x08D9BD90
	.incbin "baserom.gba", 0xd9bd90, 0x41c
	.globl gUnknown_8D9C1AC
gUnknown_8D9C1AC: @ 0x08D9C1AC
	.incbin "baserom.gba", 0xd9c1ac, 0xa8
	.globl gUnknown_8D9C254
gUnknown_8D9C254: @ 0x08D9C254
	.incbin "baserom.gba", 0xd9c254, 0x190
	.globl gUnknown_8D9C3E4
gUnknown_8D9C3E4: @ 0x08D9C3E4
	.incbin "baserom.gba", 0xd9c3e4, 0x7284
	.globl gUnknown_8DA3668
gUnknown_8DA3668: @ 0x08DA3668
	.incbin "baserom.gba", 0xda3668, 0x428
	.globl gUnknown_8DA3A90
gUnknown_8DA3A90: @ 0x08DA3A90
	.incbin "baserom.gba", 0xda3a90, 0x3c
	.globl gUnknown_8DA3ACC
gUnknown_8DA3ACC: @ 0x08DA3ACC
	.incbin "baserom.gba", 0xda3acc, 0x164
	.globl gUnknown_8DA3C30
gUnknown_8DA3C30: @ 0x08DA3C30
	.incbin "baserom.gba", 0xda3c30, 0x100
	.globl gUnknown_8DA3D30
gUnknown_8DA3D30: @ 0x08DA3D30
	.incbin "baserom.gba", 0xda3d30, 0x20c
	.globl gUnknown_8DA3F3C
gUnknown_8DA3F3C: @ 0x08DA3F3C
	.incbin "baserom.gba", 0xda3f3c, 0x1114
	.globl gUnknown_8DA5050
gUnknown_8DA5050: @ 0x08DA5050
	.incbin "baserom.gba", 0xda5050, 0x44
	.globl gUnknown_8DA5094
gUnknown_8DA5094: @ 0x08DA5094
	.incbin "baserom.gba", 0xda5094, 0x184
	.globl gUnknown_8DA5218
gUnknown_8DA5218: @ 0x08DA5218
	.incbin "baserom.gba", 0xda5218, 0x1148
	.globl gUnknown_8DA6360
gUnknown_8DA6360: @ 0x08DA6360
	.incbin "baserom.gba", 0xda6360, 0x904
	.globl gUnknown_8DA6C64
gUnknown_8DA6C64: @ 0x08DA6C64
	.incbin "baserom.gba", 0xda6c64, 0xb6c
	.globl gUnknown_8DA77D0
gUnknown_8DA77D0: @ 0x08DA77D0
	.incbin "baserom.gba", 0xda77d0, 0x21c
	.globl gUnknown_8DA79EC
gUnknown_8DA79EC: @ 0x08DA79EC
	.incbin "baserom.gba", 0xda79ec, 0x40
	.globl gUnknown_8DA7A2C
gUnknown_8DA7A2C: @ 0x08DA7A2C
	.incbin "baserom.gba", 0xda7a2c, 0x328
	.globl gUnknown_8DA7D54
gUnknown_8DA7D54: @ 0x08DA7D54
	.incbin "baserom.gba", 0xda7d54, 0x184
	.globl gUnknown_8DA7ED8
gUnknown_8DA7ED8: @ 0x08DA7ED8
	.incbin "baserom.gba", 0xda7ed8, 0x13c
	.globl gUnknown_8DA8014
gUnknown_8DA8014: @ 0x08DA8014
	.incbin "baserom.gba", 0xda8014, 0x140
	.globl gUnknown_8DA8154
gUnknown_8DA8154: @ 0x08DA8154
	.incbin "baserom.gba", 0xda8154, 0x108
	.globl gUnknown_8DA825C
gUnknown_8DA825C: @ 0x08DA825C
	.incbin "baserom.gba", 0xda825c, 0x108
	.globl gUnknown_8DA8364
gUnknown_8DA8364: @ 0x08DA8364
	.incbin "baserom.gba", 0xda8364, 0xa84
	.globl gUnknown_8DA8DE8
gUnknown_8DA8DE8: @ 0x08DA8DE8
	.incbin "baserom.gba", 0xda8de8, 0x22c
	.globl gUnknown_8DA9014
gUnknown_8DA9014: @ 0x08DA9014
	.incbin "baserom.gba", 0xda9014, 0x118
	.globl gUnknown_8DA912C
gUnknown_8DA912C: @ 0x08DA912C
	.incbin "baserom.gba", 0xda912c, 0x1a30
	.globl gUnknown_8DAAB5C
gUnknown_8DAAB5C: @ 0x08DAAB5C
	.incbin "baserom.gba", 0xdaab5c, 0x270
	.globl gUnknown_8DAADCC
gUnknown_8DAADCC: @ 0x08DAADCC
	.incbin "baserom.gba", 0xdaadcc, 0xf8
	.globl gUnknown_8DAAEC4
gUnknown_8DAAEC4: @ 0x08DAAEC4
	.incbin "baserom.gba", 0xdaaec4, 0x238
	.globl gUnknown_8DAB0FC
gUnknown_8DAB0FC: @ 0x08DAB0FC
	.incbin "baserom.gba", 0xdab0fc, 0x144
	.globl gUnknown_8DAB240
gUnknown_8DAB240: @ 0x08DAB240
	.incbin "baserom.gba", 0xdab240, 0x54
	.globl gUnknown_8DAB294
gUnknown_8DAB294: @ 0x08DAB294
	.incbin "baserom.gba", 0xdab294, 0xf52c
	.globl gUnknown_8DBA7C0
gUnknown_8DBA7C0: @ 0x08DBA7C0
	.incbin "baserom.gba", 0xdba7c0, 0xa0
	.globl gUnknown_8DBA860
gUnknown_8DBA860: @ 0x08DBA860
	.incbin "baserom.gba", 0xdba860, 0x1d30
	.globl gUnknown_8DBC590
gUnknown_8DBC590: @ 0x08DBC590
	.incbin "baserom.gba", 0xdbc590, 0x72c
	.globl gUnknown_8DBCCBC
gUnknown_8DBCCBC: @ 0x08DBCCBC
	.incbin "baserom.gba", 0xdbccbc, 0x243344
