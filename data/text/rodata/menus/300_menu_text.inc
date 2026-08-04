	@ src/data/script_menu.h:958 script_menu_line_958 (+1 aliases)
	.globl gText_Rom_5FB902
gText_Rom_5FB902: @ 0x085FB902
	.string "2F$"
	.if (. - gText_Rom_5FB902) > 0x3
	.error "gText_Rom_5FB902 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5FB902) < 0x3
	.space 0x3 - (. - gText_Rom_5FB902)
	.endif

	@ src/data/script_menu.h:957 script_menu_line_957 (+1 aliases)
	.globl gText_Rom_5FB905
gText_Rom_5FB905: @ 0x085FB905
	.string "3F$"
	.if (. - gText_Rom_5FB905) > 0x3
	.error "gText_Rom_5FB905 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5FB905) < 0x3
	.space 0x3 - (. - gText_Rom_5FB905)
	.endif
	.incbin "baserom.gba", 0x5fb908, 0x4
	.globl gUnknown_85FB90C
gUnknown_85FB90C: @ 0x085FB90C
	.incbin "baserom.gba", 0x5fb90c, 0x10
	.globl gUnknown_85FB91C
gUnknown_85FB91C: @ 0x085FB91C
	.4byte TrainerHillStartChallenge
	.4byte sub_081D4F2C
	.4byte sub_081D4F78
	.4byte sub_081D5024
	.4byte TrainerHillResumeTimer
	.4byte TrainerHillSetPlayerLost
	.4byte TrainerHillGetChallengeStatus
	.4byte sub_081D5164
	.4byte sub_081D51F4
	.4byte sub_081D5238
	.4byte sub_081D5334
	.4byte sub_081D5C50
	.4byte sub_081D5E4C
	.4byte sub_081D5E7C
	.4byte sub_081D5E9C
	.4byte nullsub_2
	.4byte sub_081D5F08
	.globl gUnknown_85FB960
gUnknown_85FB960: @ 0x085FB960
	.space 0x1, 0xAE

	@ src/dexnav.c:183 sText_DexNav_NoInfo
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5FB961
gText_Rom_5FB961: @ 0x085FB961
	.string "--------$"
	.if (. - gText_Rom_5FB961) != 0x9
	.error "gText_Rom_5FB961 must retain its original byte length"
	.endif
	.globl gText_Rom_5FB962
	.set gText_Rom_5FB962, gText_Rom_5FB961 + 0x1
	.globl gText_Rom_5FB965
	.set gText_Rom_5FB965, gText_Rom_5FB961 + 0x4
	.globl gText_Rom_5FB966
	.set gText_Rom_5FB966, gText_Rom_5FB961 + 0x5
	.space 0x2, 0x00
	.globl gUnknown_85FB96C
gUnknown_85FB96C: @ 0x085FB96C
	.incbin "baserom.gba", 0x5fb96c, 0x18
	.globl gUnknown_85FB984
gUnknown_85FB984: @ 0x085FB984
	@ Resolved pointer table; original ROM range 0x5FB984..0x5FB993.
	.4byte ABILITY_GUTS
	.4byte GENDER_FEMALE_25
	.4byte PSR_F_BIT
	.4byte ABILITY_OVERGROW
	.globl gUnknown_85FB994
gUnknown_85FB994: @ 0x085FB994
	.incbin "baserom.gba", 0x5fb994, 0x8
	.globl gUnknown_85FB99C
gUnknown_85FB99C: @ 0x085FB99C
	.incbin "baserom.gba", 0x5fb99c, 0x8c
	.globl gUnknown_85FBA28
gUnknown_85FBA28: @ 0x085FBA28
	.incbin "baserom.gba", 0x5fba28, 0x24
	.globl gUnknown_85FBA4C
gUnknown_85FBA4C: @ 0x085FBA4C
	.incbin "baserom.gba", 0x5fba4c, 0x24
	.globl gUnknown_85FBA70
gUnknown_85FBA70: @ 0x085FBA70
	.incbin "baserom.gba", 0x5fba70, 0xa8
	.globl gUnknown_85FBB18
gUnknown_85FBB18: @ 0x085FBB18
	.incbin "baserom.gba", 0x5fbb18, 0x30
	.globl gUnknown_85FBB48
gUnknown_85FBB48: @ 0x085FBB48
	.incbin "baserom.gba", 0x5fbb48, 0x18
	.globl gUnknown_85FBB60
gUnknown_85FBB60: @ 0x085FBB60
	.incbin "baserom.gba", 0x5fbb60, 0x18
	.globl gUnknown_85FBB78
gUnknown_85FBB78: @ 0x085FBB78
	.incbin "baserom.gba", 0x5fbb78, 0xc
	.globl gUnknown_85FBB84
gUnknown_85FBB84: @ 0x085FBB84
	.incbin "baserom.gba", 0x5fbb84, 0x3c
	.globl gUnknown_85FBBC0
gUnknown_85FBBC0: @ 0x085FBBC0
	.incbin "baserom.gba", 0x5fbbc0, 0x8
	.globl gUnknown_85FBBC8
gUnknown_85FBBC8: @ 0x085FBBC8
	.incbin "baserom.gba", 0x5fbbc8, 0x8
	.globl gUnknown_85FBBD0
gUnknown_85FBBD0: @ 0x085FBBD0
	.incbin "baserom.gba", 0x5fbbd0, 0x24
	.globl gUnknown_85FBBF4
gUnknown_85FBBF4: @ 0x085FBBF4
	.incbin "baserom.gba", 0x5fbbf4, 0x8
	.globl gUnknown_85FBBFC
gUnknown_85FBBFC: @ 0x085FBBFC
	.incbin "baserom.gba", 0x5fbbfc, 0x24
	.globl gUnknown_85FBC20
gUnknown_85FBC20: @ 0x085FBC20
	.incbin "baserom.gba", 0x5fbc20, 0x8
	.globl gUnknown_85FBC28
gUnknown_85FBC28: @ 0x085FBC28
	.incbin "baserom.gba", 0x5fbc28, 0xa8
	.globl gUnknown_85FBCD0
gUnknown_85FBCD0: @ 0x085FBCD0
	.incbin "baserom.gba", 0x5fbcd0, 0x8
	.globl gUnknown_85FBCD8
gUnknown_85FBCD8: @ 0x085FBCD8
	.incbin "baserom.gba", 0x5fbcd8, 0x8
	.globl gUnknown_85FBCE0
gUnknown_85FBCE0: @ 0x085FBCE0
	.incbin "baserom.gba", 0x5fbce0, 0x30
	.globl gUnknown_85FBD10
gUnknown_85FBD10: @ 0x085FBD10
	.incbin "baserom.gba", 0x5fbd10, 0x8
	.globl gUnknown_85FBD18
gUnknown_85FBD18: @ 0x085FBD18
	.incbin "baserom.gba", 0x5fbd18, 0x18
	.globl gUnknown_85FBD30
gUnknown_85FBD30: @ 0x085FBD30
	.incbin "baserom.gba", 0x5fbd30, 0x8
	.globl gUnknown_85FBD38
gUnknown_85FBD38: @ 0x085FBD38
	.incbin "baserom.gba", 0x5fbd38, 0x18
	.globl gUnknown_85FBD50
gUnknown_85FBD50: @ 0x085FBD50
	.incbin "baserom.gba", 0x5fbd50, 0x3c
	.globl gUnknown_85FBD8C
gUnknown_85FBD8C: @ 0x085FBD8C
	.incbin "baserom.gba", 0x5fbd8c, 0x8
	.globl gUnknown_85FBD94
gUnknown_85FBD94: @ 0x085FBD94
	.incbin "baserom.gba", 0x5fbd94, 0x8
	.globl gUnknown_85FBD9C
gUnknown_85FBD9C: @ 0x085FBD9C
	.incbin "baserom.gba", 0x5fbd9c, 0x18
	.globl gUnknown_85FBDB4
gUnknown_85FBDB4: @ 0x085FBDB4
	.incbin "baserom.gba", 0x5fbdb4, 0x14
	.globl gUnknown_85FBDC8
gUnknown_85FBDC8: @ 0x085FBDC8
	.incbin "baserom.gba", 0x5fbdc8, 0x30
	.globl gUnknown_85FBDF8
gUnknown_85FBDF8: @ 0x085FBDF8
	.incbin "baserom.gba", 0x5fbdf8, 0x8
	.globl gUnknown_85FBE00
gUnknown_85FBE00: @ 0x085FBE00
	.incbin "baserom.gba", 0x5fbe00, 0x8
	.globl gUnknown_85FBE08
gUnknown_85FBE08: @ 0x085FBE08
	.incbin "baserom.gba", 0x5fbe08, 0x8
	.globl gUnknown_85FBE10
gUnknown_85FBE10: @ 0x085FBE10
	.incbin "baserom.gba", 0x5fbe10, 0x18
	.globl gUnknown_85FBE28
gUnknown_85FBE28: @ 0x085FBE28
	.incbin "baserom.gba", 0x5fbe28, 0x18
	.globl gUnknown_85FBE40
gUnknown_85FBE40: @ 0x085FBE40
	.incbin "baserom.gba", 0x5fbe40, 0xe4
	.globl gUnknown_85FBF24
gUnknown_85FBF24: @ 0x085FBF24
	.incbin "baserom.gba", 0x5fbf24, 0x8
	.globl gUnknown_85FBF2C
gUnknown_85FBF2C: @ 0x085FBF2C
	.incbin "baserom.gba", 0x5fbf2c, 0x8
	.globl gUnknown_85FBF34
gUnknown_85FBF34: @ 0x085FBF34
	.incbin "baserom.gba", 0x5fbf34, 0x8
	.globl gUnknown_85FBF3C
gUnknown_85FBF3C: @ 0x085FBF3C
	.incbin "baserom.gba", 0x5fbf3c, 0x8
	.globl gUnknown_85FBF44
gUnknown_85FBF44: @ 0x085FBF44
	.incbin "baserom.gba", 0x5fbf44, 0x8
	.globl gUnknown_85FBF4C
gUnknown_85FBF4C: @ 0x085FBF4C
	.incbin "baserom.gba", 0x5fbf4c, 0x8
	.globl gUnknown_85FBF54
gUnknown_85FBF54: @ 0x085FBF54
	.incbin "baserom.gba", 0x5fbf54, 0x8
	.globl gUnknown_85FBF5C
gUnknown_85FBF5C: @ 0x085FBF5C
	.incbin "baserom.gba", 0x5fbf5c, 0x8
	.globl gUnknown_85FBF64
gUnknown_85FBF64: @ 0x085FBF64
	.incbin "baserom.gba", 0x5fbf64, 0x8
	.globl gUnknown_85FBF6C
gUnknown_85FBF6C: @ 0x085FBF6C
	.incbin "baserom.gba", 0x5fbf6c, 0x8
	.globl gUnknown_85FBF74
gUnknown_85FBF74: @ 0x085FBF74
	.incbin "baserom.gba", 0x5fbf74, 0x18
	.globl gUnknown_85FBF8C
gUnknown_85FBF8C: @ 0x085FBF8C
	.incbin "baserom.gba", 0x5fbf8c, 0x18
	.globl gUnknown_85FBFA4
gUnknown_85FBFA4: @ 0x085FBFA4
	.incbin "baserom.gba", 0x5fbfa4, 0x18
	.globl gUnknown_85FBFBC
gUnknown_85FBFBC: @ 0x085FBFBC
	.incbin "baserom.gba", 0x5fbfbc, 0x18
	.globl gUnknown_85FBFD4
gUnknown_85FBFD4: @ 0x085FBFD4
	.incbin "baserom.gba", 0x5fbfd4, 0x18
	.globl gUnknown_85FBFEC
gUnknown_85FBFEC: @ 0x085FBFEC
	.incbin "baserom.gba", 0x5fbfec, 0x18
	.globl gUnknown_85FC004
gUnknown_85FC004: @ 0x085FC004
	.incbin "baserom.gba", 0x5fc004, 0xc
	.globl gUnknown_85FC010
gUnknown_85FC010: @ 0x085FC010
	.incbin "baserom.gba", 0x5fc010, 0xc
	.globl gUnknown_85FC01C
gUnknown_85FC01C: @ 0x085FC01C
	.incbin "baserom.gba", 0x5fc01c, 0x10
	.globl gUnknown_85FC02C
gUnknown_85FC02C: @ 0x085FC02C
	.incbin "baserom.gba", 0x5fc02c, 0x10
	.globl gUnknown_85FC03C
gUnknown_85FC03C: @ 0x085FC03C
	.incbin "baserom.gba", 0x5fc03c, 0x1dc
	.globl gUnknown_85FC218
gUnknown_85FC218: @ 0x085FC218
	.incbin "baserom.gba", 0x5fc218, 0x60c
	.globl gUnknown_85FC824
gUnknown_85FC824: @ 0x085FC824
	.incbin "baserom.gba", 0x5fc824, 0x1e8
	.globl gUnknown_85FCA0C
gUnknown_85FCA0C: @ 0x085FCA0C
	.incbin "baserom.gba", 0x5fca0c, 0x8
	.globl gUnknown_85FCA14
gUnknown_85FCA14: @ 0x085FCA14
	.incbin "baserom.gba", 0x5fca14, 0x2c
	.globl gUnknown_85FCA40
gUnknown_85FCA40: @ 0x085FCA40
	.incbin "baserom.gba", 0x5fca40, 0x18
	.globl gUnknown_85FCA58
gUnknown_85FCA58: @ 0x085FCA58
	.4byte sub_081DA31C
	.4byte sub_081DA464
	.4byte sub_081DA40C
	.4byte sub_081DA39C
	.4byte sub_081DA4D0
	.globl gUnknown_85FCA6C
gUnknown_85FCA6C: @ 0x085FCA6C
	.4byte sub_081DA31C
	.4byte sub_081DA53C
	.4byte sub_081DA40C
	.4byte sub_081DA39C
	.4byte sub_081DA5A8
	.globl gUnknown_85FCA80
gUnknown_85FCA80: @ 0x085FCA80
	.4byte sub_081DA31C
	.4byte sub_081DA614
	.4byte sub_081DA40C
	.4byte sub_081DA39C
	.4byte sub_081DA694
	.globl gUnknown_85FCA94
gUnknown_85FCA94: @ 0x085FCA94
	.4byte sub_081DA31C
	.4byte sub_081DA700
	.4byte sub_081DA40C
	.4byte sub_081DA39C
	.4byte sub_081DA784
	.globl gUnknown_85FCAA8
gUnknown_85FCAA8: @ 0x085FCAA8
	.4byte sub_081DA31C
	.4byte sub_081DA7F0
	.4byte sub_081DA40C
	.4byte sub_081DA39C
	.4byte sub_081DA87C
	.globl gUnknown_85FCABC
gUnknown_85FCABC: @ 0x085FCABC
	.4byte sub_081DA31C
	.4byte sub_081DA8E8
	.4byte sub_081DA40C
	.4byte sub_081DA39C
	.4byte sub_081DA974
	.globl gUnknown_85FCAD0
gUnknown_85FCAD0: @ 0x085FCAD0
	.4byte sub_081DA31C
	.4byte sub_081DA9E0
	.4byte sub_081DA40C
	.4byte sub_081DA39C
	.4byte sub_081DAA74
	.globl gUnknown_85FCAE4
gUnknown_85FCAE4: @ 0x085FCAE4
	.4byte sub_081DA31C
	.4byte sub_081DAAE0
	.4byte sub_081DA40C
	.4byte sub_081DA39C
	.4byte sub_081DAB78
	.globl gUnknown_85FCAF8
gUnknown_85FCAF8: @ 0x085FCAF8
	.incbin "baserom.gba", 0x5fcaf8, 0x21
	.globl gUnknown_85FCB19
gUnknown_85FCB19: @ 0x085FCB19
	.incbin "baserom.gba", 0x5fcb19, 0x13
	.globl gUnknown_85FCB2C
gUnknown_85FCB2C: @ 0x085FCB2C
	.incbin "baserom.gba", 0x5fcb2c, 0x11
	.globl gUnknown_85FCB3D
gUnknown_85FCB3D: @ 0x085FCB3D

	@ asm/mystery_event_script.s:553 MEScrCmd_giveribbon
	.globl gText_Rom_5FCB3D
gText_Rom_5FCB3D: @ 0x085FCB3D
	.string "てもちのポケモンに\nとくべつなリボンが　あたえられた！$"
	.if (. - gText_Rom_5FCB3D) > 0x1c
	.error "gText_Rom_5FCB3D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5FCB3D) < 0x1c
	.space 0x1c - (. - gText_Rom_5FCB3D)
	.endif
	.globl gUnknown_85FCB59
gUnknown_85FCB59: @ 0x085FCB59

	@ asm/mystery_event_script.s:625 MEScrCmd_enableresetrtc
	.globl gText_Rom_5FCB59
gText_Rom_5FCB59: @ 0x085FCB59
	.string "ずかんに　ぜんこくモードが\nついか　された！$"
	.if (. - gText_Rom_5FCB59) > 0x17
	.error "gText_Rom_5FCB59 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5FCB59) < 0x17
	.space 0x17 - (. - gText_Rom_5FCB59)
	.endif
	.globl gUnknown_85FCB70
gUnknown_85FCB70: @ 0x085FCB70

	@ asm/mystery_event_script.s:648 MEScrCmd_addrareword
	.globl gText_Rom_5FCB70
gText_Rom_5FCB70: @ 0x085FCB70
	.string "めずらしい　ことばを　ついかしました$"
	.if (. - gText_Rom_5FCB70) > 0x13
	.error "gText_Rom_5FCB70 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5FCB70) < 0x13
	.space 0x13 - (. - gText_Rom_5FCB70)
	.endif
	.globl gUnknown_85FCB83
gUnknown_85FCB83: @ 0x085FCB83

	@ asm/mystery_event_script.s:785 MEScrCmd_givepokemon
	.globl gText_Rom_5FCB83
gText_Rom_5FCB83: @ 0x085FCB83
	.string "{0xFD}{0x02}が　おくられてきた！$"
	.if (. - gText_Rom_5FCB83) > 0xd
	.error "gText_Rom_5FCB83 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5FCB83) < 0xd
	.space 0xd - (. - gText_Rom_5FCB83)
	.endif
	.globl gUnknown_85FCB90
gUnknown_85FCB90: @ 0x085FCB90

	@ asm/mystery_event_script.s:733 MEScrCmd_givepokemon
	.globl gText_Rom_5FCB90
gText_Rom_5FCB90: @ 0x085FCB90
	.string "てもちが　いっぱいなので\n{0xFD}{0x02}は　もらえなかった…$"
	.if (. - gText_Rom_5FCB90) > 0x1a
	.error "gText_Rom_5FCB90 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5FCB90) < 0x1a
	.space 0x1a - (. - gText_Rom_5FCB90)
	.endif
	.globl gUnknown_85FCBAA
gUnknown_85FCBAA: @ 0x085FCBAA

	@ asm/mystery_event_script.s:821 MEScrCmd_addtrainer
	.globl gText_Rom_5FCBAA
gText_Rom_5FCBAA: @ 0x085FCBAA
	.string "あらたな　トレーナーが\nホウエンに　やってきた$"
	.if (. - gText_Rom_5FCBAA) > 0x18
	.error "gText_Rom_5FCBAA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5FCBAA) < 0x18
	.space 0x18 - (. - gText_Rom_5FCBAA)
	.endif
	.incbin "baserom.gba", 0x5fcbc2, 0x1c
	.globl gUnknown_85FCBDE
gUnknown_85FCBDE: @ 0x085FCBDE

	@ asm/mystery_event_script.s:44 SetIncompatible
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5FCBDE
gText_Rom_5FCBDE: @ 0x085FCBDE
	.string "このデータは　このバージョンでは\nしよう　できません$"
	.if (. - gText_Rom_5FCBDE) != 0x1b
	.error "gText_Rom_5FCBDE must retain its original byte length"
	.endif
	.globl gText_Rom_5FCBF5
	.set gText_Rom_5FCBF5, gText_Rom_5FCBDE + 0x17
	.incbin "baserom.gba", 0x5fcbf9, 0x552

	@ data/text/questionnaire.inc:42 MysteryGift_Text_TryUsingItAtLilycovePort
	.globl gText_Rom_5FD14B
gText_Rom_5FD14B: @ 0x085FD14B
	.string "ミナモシティの ふなつきば で\nつかえる ようですね\pぜひ ごりよう してみては\nいかがでしょうか?$"
	.if (. - gText_Rom_5FD14B) > 0x33
	.error "gText_Rom_5FD14B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5FD14B) < 0x33
	.space 0x33 - (. - gText_Rom_5FD14B)
	.endif
	.incbin "baserom.gba", 0x5fd17e, 0x115

	@ data/text/questionnaire.inc:42 MysteryGift_Text_TryUsingItAtLilycovePort
	.globl gText_Rom_5FD293
gText_Rom_5FD293: @ 0x085FD293
	.string "ミナモシティの ふなつきば で\nつかえる ようですね\pぜひ ごりよう してみては\nいかがでしょうか?$"
	.if (. - gText_Rom_5FD293) > 0x33
	.error "gText_Rom_5FD293 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5FD293) < 0x33
	.space 0x33 - (. - gText_Rom_5FD293)
	.endif
	.incbin "baserom.gba", 0x5fd2c6, 0x1af

	@ data/text/questionnaire.inc:42 MysteryGift_Text_TryUsingItAtLilycovePort
	.globl gText_Rom_5FD475
gText_Rom_5FD475: @ 0x085FD475
	.string "ミナモシティの ふなつきば で\nつかえる ようですね\pぜひ ごりよう してみては\nいかがでしょうか?$"
	.if (. - gText_Rom_5FD475) > 0x33
	.error "gText_Rom_5FD475 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5FD475) < 0x33
	.space 0x33 - (. - gText_Rom_5FD475)
	.endif
	.incbin "baserom.gba", 0x5fd4a8, 0x58
	.globl gUnknown_85FD500
gUnknown_85FD500: @ 0x085FD500
	.incbin "baserom.gba", 0x5fd500, 0x90
	.globl gUnknown_85FD590
gUnknown_85FD590: @ 0x085FD590
	.incbin "baserom.gba", 0x5fd590, 0x10
	.globl gUnknown_85FD5A0
gUnknown_85FD5A0: @ 0x085FD5A0
	.incbin "baserom.gba", 0x5fd5a0, 0xb4
	.globl gUnknown_85FD654
gUnknown_85FD654: @ 0x085FD654
	.incbin "baserom.gba", 0x5fd654, 0x30
	.globl gUnknown_85FD684
gUnknown_85FD684: @ 0x085FD684
	.incbin "baserom.gba", 0x5fd684, 0x18
	.globl gUnknown_85FD69C
gUnknown_85FD69C: @ 0x085FD69C
	.incbin "baserom.gba", 0x5fd69c, 0x84
	.globl gUnknown_85FD720
gUnknown_85FD720: @ 0x085FD720
	.incbin "baserom.gba", 0x5fd720, 0x18
	.globl gUnknown_85FD738
gUnknown_85FD738: @ 0x085FD738
	.incbin "baserom.gba", 0x5fd738, 0x3c
	.globl gUnknown_85FD774
gUnknown_85FD774: @ 0x085FD774
	.incbin "baserom.gba", 0x5fd774, 0x10
	.globl gUnknown_85FD784
gUnknown_85FD784: @ 0x085FD784
	.incbin "baserom.gba", 0x5fd784, 0x34
	.globl gUnknown_85FD7B8
gUnknown_85FD7B8: @ 0x085FD7B8
	.incbin "baserom.gba", 0x5fd7b8, 0x34
	.globl gUnknown_85FD7EC
gUnknown_85FD7EC: @ 0x085FD7EC
	.incbin "baserom.gba", 0x5fd7ec, 0x28028
	.globl gUnknown_8625814
gUnknown_8625814: @ 0x08625814
	.incbin "baserom.gba", 0x625814, 0x600
	.globl gUnknown_8625E14
gUnknown_8625E14: @ 0x08625E14
	.incbin "baserom.gba", 0x625e14, 0x600
	.globl gUnknown_8626414
gUnknown_8626414: @ 0x08626414
	.incbin "baserom.gba", 0x626414, 0x600
	.globl gUnknown_8626A14
gUnknown_8626A14: @ 0x08626A14
	.incbin "baserom.gba", 0x626a14, 0x30
	.globl gUnknown_8626A44
gUnknown_8626A44: @ 0x08626A44
	.incbin "baserom.gba", 0x626a44, 0x600
	.globl gUnknown_8627044
gUnknown_8627044: @ 0x08627044
	.incbin "baserom.gba", 0x627044, 0x600
	.globl gUnknown_8627644
gUnknown_8627644: @ 0x08627644
	.incbin "baserom.gba", 0x627644, 0x600
	.globl gUnknown_8627C44
gUnknown_8627C44: @ 0x08627C44
	.incbin "baserom.gba", 0x627c44, 0x14638
	.globl gUnknown_863C27C
gUnknown_863C27C: @ 0x0863C27C
	.incbin "baserom.gba", 0x63c27c, 0x30
	.globl gUnknown_863C2AC
gUnknown_863C2AC: @ 0x0863C2AC
	.incbin "baserom.gba", 0x63c2ac, 0x8a5d

	@ src/rtc.c:22 sText_AM
	.globl gText_Rom_644D09
gText_Rom_644D09: @ 0x08644D09
	.string "AM$"
	.if (. - gText_Rom_644D09) > 0x3
	.error "gText_Rom_644D09 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_644D09) < 0x3
	.space 0x3 - (. - gText_Rom_644D09)
	.endif
	.incbin "baserom.gba", 0x644d0c, 0x436

	@ src/data/easy_chat/easy_chat_group_people.h:184 easy_chat_group_people_line_184
	.globl gText_Rom_645142
gText_Rom_645142: @ 0x08645142
	.string "きみは$"
	.if (. - gText_Rom_645142) > 0x4
	.error "gText_Rom_645142 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_645142) < 0x4
	.space 0x4 - (. - gText_Rom_645142)
	.endif
	.incbin "baserom.gba", 0x645146, 0x77b6

