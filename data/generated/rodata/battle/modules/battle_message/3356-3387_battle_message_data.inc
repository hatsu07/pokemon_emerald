	@ src/battle_message.c:441 battle_message_line_441
	.globl gText_Rom_5AAD38
gText_Rom_5AAD38: @ 0x085AAD38
	.string "{B_PLAYER_NAME}は\n{B_OPPONENT_MON1_NAME}に ちかづいた!$"
	.if (. - gText_Rom_5AAD38) > 0xf
	.error "gText_Rom_5AAD38 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AAD38) < 0xf
	.space 0xf - (. - gText_Rom_5AAD38)
	.endif

	@ src/battle_message.c:442 battle_message_line_442
	.globl gText_Rom_5AAD47
gText_Rom_5AAD47: @ 0x085AAD47
	.string "{B_PLAYER_NAME}は\nこれいじょう ちかづけない!$"
	.if (. - gText_Rom_5AAD47) > 0x13
	.error "gText_Rom_5AAD47 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AAD47) < 0x13
	.space 0x13 - (. - gText_Rom_5AAD47)
	.endif

	@ src/battle_message.c:443 battle_message_line_443
	.globl gText_Rom_5AAD5A
gText_Rom_5AAD5A: @ 0x085AAD5A
	.string "{B_OPPONENT_MON1_NAME}は\nこちらの ようすを うかがっている!$"
	.if (. - gText_Rom_5AAD5A) > 0x17
	.error "gText_Rom_5AAD5A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AAD5A) < 0x17
	.space 0x17 - (. - gText_Rom_5AAD5A)
	.endif

	@ src/battle_message.c:444 battle_message_line_444
	.globl gText_Rom_5AAD71
gText_Rom_5AAD71: @ 0x085AAD71
	.string "{B_OPPONENT_MON1_NAME}は {B_BUFF1}に\nきょうみを しめしている ようだ!$"
	.if (. - gText_Rom_5AAD71) > 0x1a
	.error "gText_Rom_5AAD71 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AAD71) < 0x1a
	.space 0x1a - (. - gText_Rom_5AAD71)
	.endif

	@ src/battle_message.c:445 battle_message_line_445
	.globl gText_Rom_5AAD8B
gText_Rom_5AAD8B: @ 0x085AAD8B
	.string "{B_OPPONENT_MON1_NAME}は {B_BUFF1}に\nむちゅうに なっている ようだ!$"
	.if (. - gText_Rom_5AAD8B) > 0x19
	.error "gText_Rom_5AAD8B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AAD8B) < 0x19
	.space 0x19 - (. - gText_Rom_5AAD8B)
	.endif

	@ src/battle_message.c:446 battle_message_line_446
	.globl gText_Rom_5AADA4
gText_Rom_5AADA4: @ 0x085AADA4
	.string "{B_OPPONENT_MON1_NAME}は {B_BUFF1}に\nみむきも しない ようだ!$"
	.if (. - gText_Rom_5AADA4) > 0x16
	.error "gText_Rom_5AADA4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AADA4) < 0x16
	.space 0x16 - (. - gText_Rom_5AADA4)
	.endif
	@ Replaced baserom.gba range: offset=0x5AADBA, size=0x13
	.byte 0xFD, 0x23, 0x1A, 0xFE, 0xFD, 0x06, 0x16, 0x00, 0x9F, 0x7B, 0xA0, 0x58, 0x2D, 0x00, 0x15, 0x3A
	.byte 0x10, 0xAB, 0xFF

	@ src/battle_message.c:448 battle_message_line_448
	.globl gText_Rom_5AADCD
gText_Rom_5AADCD: @ 0x085AADCD
	.string "{PLAY_SE SE_DING_DONG}アナウンス『ピンポーン! サファリボールが\nなくなったので しゅうりょうでーす!\p$"
	.if (. - gText_Rom_5AADCD) > 0x2e
	.error "gText_Rom_5AADCD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AADCD) < 0x2e
	.space 0x2e - (. - gText_Rom_5AADCD)
	.endif
	@ Decoded text from ROM range: offset=0x5AADFB, size=0x11
	.string "あ！　{B_OPPONENT_MON1_NAME}が　とびだしてきた！\p$"
	.globl gUnknown_85AAE0C
gUnknown_85AAE0C: @ 0x085AAE0C
	@ Replaced baserom.gba range: offset=0x5AAE0C, size=0x16
	.byte 0x01, 0xAB, 0x00, 0x24, 0x0E, 0x02, 0x19, 0xFE, 0xFD, 0x06, 0x37, 0x00, 0x14, 0x47, 0x41, 0x0C
	.byte 0x13, 0x07, 0x10, 0xAB, 0xFB, 0xFF
	.globl gUnknown_85AAE22
gUnknown_85AAE22: @ 0x085AAE22
	@ Replaced baserom.gba range: offset=0x5AAE22, size=0x14
	.byte 0x01, 0xAB, 0x00, 0x24, 0x0E, 0x02, 0x19, 0xFE, 0xFD, 0x06, 0x37, 0x00, 0x01, 0x27, 0x2C, 0x2A
	.byte 0x10, 0xAB, 0xFB, 0xFF
	.globl gUnknown_85AAE36
gUnknown_85AAE36: @ 0x085AAE36
	@ Replaced baserom.gba range: offset=0x5AAE36, size=0x18
	.byte 0x01, 0xAB, 0x00, 0x24, 0x0E, 0x02, 0x19, 0xFE, 0xFD, 0x06, 0x37, 0x00, 0x14, 0x47, 0x41, 0x0C
	.byte 0x13, 0x07, 0x10, 0xAB, 0xFC, 0x08, 0x7F, 0xFF
	.globl gUnknown_85AAE4E
gUnknown_85AAE4E: @ 0x085AAE4E
	@ Replaced baserom.gba range: offset=0x5AAE4E, size=0x1A
	.byte 0x01, 0xAB, 0x00, 0x24, 0x0E, 0x02, 0x19, 0xFE, 0xFD, 0x06, 0x14, 0x00, 0xFD, 0x08, 0x37, 0x00
	.byte 0x14, 0x47, 0x41, 0x0C, 0x13, 0x07, 0x10, 0xAB, 0xFB, 0xFF
	.globl gUnknown_85AAE68
gUnknown_85AAE68: @ 0x085AAE68
	@ Replaced baserom.gba range: offset=0x5AAE68, size=0x17
	.byte 0xFD, 0x1C, 0x19, 0x00, 0xFD, 0x1D, 0x37, 0xFE, 0x0C, 0x36, 0x03, 0x48, 0x2D, 0x00, 0x0C, 0x06
	.byte 0x09, 0x13, 0x07, 0x10, 0xAB, 0xFB, 0xFF
	.globl gUnknown_85AAE7F
gUnknown_85AAE7F: @ 0x085AAE7F

	@ src/battle_message.c:97 sText_LinkTrainerWantsToBattle
	.globl gText_Rom_5AAE7F
gText_Rom_5AAE7F: @ 0x085AAE7F
	.string "{B_LINK_OPPONENT1_NAME}が\nしょうぶを しかけてきた！$"
	.if (. - gText_Rom_5AAE7F) > 0x12
	.error "gText_Rom_5AAE7F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AAE7F) < 0x12
	.space 0x12 - (. - gText_Rom_5AAE7F)
	.endif
	.globl gUnknown_85AAE91
gUnknown_85AAE91: @ 0x085AAE91

	@ src/battle_message.c:98 sText_TwoLinkTrainersWantToBattle
	.globl gText_Rom_5AAE91
gText_Rom_5AAE91: @ 0x085AAE91
	.string "{B_LINK_OPPONENT1_NAME}と {B_LINK_OPPONENT2_NAME}が\nしょうぶを しかけてきた！$"
	.if (. - gText_Rom_5AAE91) > 0x16
	.error "gText_Rom_5AAE91 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AAE91) < 0x16
	.space 0x16 - (. - gText_Rom_5AAE91)
	.endif
	.globl gUnknown_85AAEA7
gUnknown_85AAEA7: @ 0x085AAEA7
	@ Replaced baserom.gba range: offset=0x5AAEA7, size=0x13
	.byte 0xFD, 0x1C, 0x19, 0x00, 0xFD, 0x1D, 0x1A, 0xFE, 0xFD, 0x06, 0x2D, 0x00, 0x08, 0x28, 0x41, 0x0C
	.byte 0x10, 0xAB, 0xFF
	.globl gUnknown_85AAEBA
gUnknown_85AAEBA: @ 0x085AAEBA
	@ Replaced baserom.gba range: offset=0x5AAEBA, size=0x17
	.byte 0xFD, 0x1C, 0x19, 0x00, 0xFD, 0x1D, 0x1A, 0xFE, 0xFD, 0x06, 0x14, 0x00, 0xFD, 0x08, 0x2D, 0x00
	.byte 0x08, 0x28, 0x41, 0x0C, 0x10, 0xAB, 0xFF
	.globl gUnknown_85AAED1
gUnknown_85AAED1: @ 0x085AAED1
	@ Replaced baserom.gba range: offset=0x5AAED1, size=0x13
	.byte 0xFD, 0x1C, 0x19, 0x00, 0xFD, 0x1D, 0x1A, 0xFE, 0xFD, 0x00, 0x2D, 0x00, 0x08, 0x28, 0x41, 0x0C
	.byte 0x10, 0xAB, 0xFF
	.globl gUnknown_85AAEE4
gUnknown_85AAEE4: @ 0x085AAEE4
	@ Replaced baserom.gba range: offset=0x5AAEE4, size=0xF
	.byte 0xFD, 0x20, 0x1A, 0xFE, 0xFD, 0x06, 0x2D, 0x00, 0x08, 0x28, 0x41, 0x0C, 0x10, 0xAB, 0xFF
	.globl gUnknown_85AAEF3
gUnknown_85AAEF3: @ 0x085AAEF3
	@ Replaced baserom.gba range: offset=0x5AAEF3, size=0x13
	.byte 0xFD, 0x20, 0x1A, 0xFE, 0xFD, 0x06, 0x14, 0x00, 0xFD, 0x08, 0x2D, 0x00, 0x08, 0x28, 0x41, 0x0C
	.byte 0x10, 0xAB, 0xFF
	.globl gUnknown_85AAF06
gUnknown_85AAF06: @ 0x085AAF06
	@ Replaced baserom.gba range: offset=0x5AAF06, size=0x1E
	.byte 0xFD, 0x20, 0x1A, 0x00, 0xFD, 0x0A, 0x2D, 0x00, 0x08, 0x28, 0x41, 0x0C, 0x10, 0xAB, 0xFE, 0xFD
	.byte 0x21, 0x1A, 0x00, 0xFD, 0x0C, 0x2D, 0x00, 0x08, 0x28, 0x41, 0x0C, 0x10, 0xAB, 0xFF
	.globl gUnknown_85AAF24
gUnknown_85AAF24: @ 0x085AAF24

	@ src/battle_message.c:103 sText_LinkTrainerSentOutPkmn
	.globl gText_Rom_5AAF24
gText_Rom_5AAF24: @ 0x085AAF24
	.string "{B_LINK_OPPONENT1_NAME}は\n{B_BUFF1}を くりだした！$"
	.if (. - gText_Rom_5AAF24) > 0xf
	.error "gText_Rom_5AAF24 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AAF24) < 0xf
	.space 0xf - (. - gText_Rom_5AAF24)
	.endif
	.globl gUnknown_85AAF33
gUnknown_85AAF33: @ 0x085AAF33

	@ src/battle_message.c:108 sText_LinkTrainerMultiSentOutPkmn
	.globl gText_Rom_5AAF33
gText_Rom_5AAF33: @ 0x085AAF33
	.string "{B_LINK_SCR_TRAINER_NAME}は\n{B_BUFF1}を くりだした！$"
	.if (. - gText_Rom_5AAF33) > 0xf
	.error "gText_Rom_5AAF33 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AAF33) < 0xf
	.space 0xf - (. - gText_Rom_5AAF33)
	.endif
	.globl gUnknown_85AAF42
gUnknown_85AAF42: @ 0x085AAF42

	@ src/battle_message.c:109 sText_GoPkmn
	.globl gText_Rom_5AAF42
gText_Rom_5AAF42: @ 0x085AAF42
	.string "ゆけっ！ {B_PLAYER_MON1_NAME}！$"
	.if (. - gText_Rom_5AAF42) > 0x9
	.error "gText_Rom_5AAF42 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AAF42) < 0x9
	.space 0x9 - (. - gText_Rom_5AAF42)
	.endif
	.globl gUnknown_85AAF4B
gUnknown_85AAF4B: @ 0x085AAF4B

	@ src/battle_message.c:110 sText_GoTwoPkmn
	.globl gText_Rom_5AAF4B
gText_Rom_5AAF4B: @ 0x085AAF4B
	.string "ゆけっ！ {B_PLAYER_MON1_NAME}と {B_PLAYER_MON2_NAME}！$"
	.if (. - gText_Rom_5AAF4B) > 0xd
	.error "gText_Rom_5AAF4B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AAF4B) < 0xd
	.space 0xd - (. - gText_Rom_5AAF4B)
	.endif
	.globl gUnknown_85AAF58
gUnknown_85AAF58: @ 0x085AAF58

	@ src/battle_message.c:111 sText_GoPkmn2
	.globl gText_Rom_5AAF58
gText_Rom_5AAF58: @ 0x085AAF58
	.string "ゆけっ！ {B_BUFF1}！$"
	.if (. - gText_Rom_5AAF58) > 0x9
	.error "gText_Rom_5AAF58 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AAF58) < 0x9
	.space 0x9 - (. - gText_Rom_5AAF58)
	.endif
	.globl gUnknown_85AAF61
gUnknown_85AAF61: @ 0x085AAF61

	@ src/battle_message.c:112 sText_DoItPkmn
	.globl gText_Rom_5AAF61
gText_Rom_5AAF61: @ 0x085AAF61
	.string "いってこい！ {B_BUFF1}！$"
	.if (. - gText_Rom_5AAF61) > 0xb
	.error "gText_Rom_5AAF61 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AAF61) < 0xb
	.space 0xb - (. - gText_Rom_5AAF61)
	.endif
	.globl gUnknown_85AAF6C
gUnknown_85AAF6C: @ 0x085AAF6C

	@ src/battle_message.c:113 sText_GoForItPkmn
	.globl gText_Rom_5AAF6C
gText_Rom_5AAF6C: @ 0x085AAF6C
	.string "がんばれ！ {B_BUFF1}！$"
	.if (. - gText_Rom_5AAF6C) > 0xa
	.error "gText_Rom_5AAF6C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AAF6C) < 0xa
	.space 0xa - (. - gText_Rom_5AAF6C)
	.endif
	.globl gUnknown_85AAF76
gUnknown_85AAF76: @ 0x085AAF76

