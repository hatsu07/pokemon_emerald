	@ src/berry_blender.c:278 sText_CommunicationStandby
	.globl gText_Rom_30F78E
gText_Rom_30F78E: @ 0x0830F78E
	.string "つうしんたいきちゅうです$"
	.if (. - gText_Rom_30F78E) > 0xd
	.error "gText_Rom_30F78E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_30F78E) < 0xd
	.space 0xd - (. - gText_Rom_30F78E)
	.endif
	.globl gUnknown_830F79B
gUnknown_830F79B: @ 0x0830F79B
	.incbin "baserom.gba", 0x30f79b, 0x17
	.globl gUnknown_830F7B2
gUnknown_830F7B2: @ 0x0830F7B2

	@ src/berry_blender.c:280 sText_RunOutOfBerriesForBlending
	.globl gText_Rom_30F7B2
gText_Rom_30F7B2: @ 0x0830F7B2
	.string "きのみブレンダーに いれる きのみが\nないので これいじょう できません\p$"
	.if (. - gText_Rom_30F7B2) > 0x26
	.error "gText_Rom_30F7B2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_30F7B2) < 0x26
	.space 0x26 - (. - gText_Rom_30F7B2)
	.endif
	.globl gUnknown_830F7D8
gUnknown_830F7D8: @ 0x0830F7D8

	@ src/berry_blender.c:281 sText_YourPokeblockCaseIsFull
	.globl gText_Rom_30F7D8
gText_Rom_30F7D8: @ 0x0830F7D8
	.string "ポロックケースが いっぱいの ようです\p$"
	.if (. - gText_Rom_30F7D8) > 0x15
	.error "gText_Rom_30F7D8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_30F7D8) < 0x15
	.space 0x15 - (. - gText_Rom_30F7D8)
	.endif
	.globl gUnknown_830F7ED
gUnknown_830F7ED: @ 0x0830F7ED

	@ src/berry_blender.c:282 sText_HasNoBerriesToPut
	.globl gText_Rom_30F7ED
gText_Rom_30F7ED: @ 0x0830F7ED
	.string "は きのみブレンダーに\nいれる きのみがないようです$"
	.if (. - gText_Rom_30F7ED) > 0x1b
	.error "gText_Rom_30F7ED may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_30F7ED) < 0x1b
	.space 0x1b - (. - gText_Rom_30F7ED)
	.endif
	.globl gUnknown_830F808
gUnknown_830F808: @ 0x0830F808

	@ src/berry_blender.c:283 sText_ApostropheSPokeblockCaseIsFull
	.globl gText_Rom_30F808
gText_Rom_30F808: @ 0x0830F808
	.string "は ポロックケースが\nいっぱいの ようです\p$"
	.if (. - gText_Rom_30F808) > 0x17
	.error "gText_Rom_30F808 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_30F808) < 0x17
	.space 0x17 - (. - gText_Rom_30F808)
	.endif
	.globl gUnknown_830F81F
gUnknown_830F81F: @ 0x0830F81F

	@ src/berry_blender.c:284 sText_BlendingResults
	.globl gText_Rom_30F81F
gText_Rom_30F81F: @ 0x0830F81F
	.string "まぜたけっか$"
	.if (. - gText_Rom_30F81F) > 0x7
	.error "gText_Rom_30F81F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_30F81F) < 0x7
	.space 0x7 - (. - gText_Rom_30F81F)
	.endif
	.incbin "baserom.gba", 0x30f826, 0x7
	.globl gUnknown_830F82D
gUnknown_830F82D: @ 0x0830F82D

	@ asm/berry_blender.s:7852 Blender_PrintBlendingResults
	.globl gText_Rom_30F82D
gText_Rom_30F82D: @ 0x0830F82D
	.string "のみ$"
	.if (. - gText_Rom_30F82D) > 0x3
	.error "gText_Rom_30F82D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_30F82D) < 0x3
	.space 0x3 - (. - gText_Rom_30F82D)
	.endif
	.globl gUnknown_830F830
gUnknown_830F830: @ 0x0830F830

	@ src/data/easy_chat/easy_chat_group_time.h:118 easy_chat_group_time_line_118 (+1 aliases)
	.globl gText_Rom_30F830
gText_Rom_30F830: @ 0x0830F830
	.string "じかん$"
	.if (. - gText_Rom_30F830) > 0x4
	.error "gText_Rom_30F830 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_30F830) < 0x4
	.space 0x4 - (. - gText_Rom_30F830)
	.endif
	.globl gUnknown_830F834
gUnknown_830F834: @ 0x0830F834

	@ asm/berry_blender.s:7981 Blender_PrintBlendingResults
	.globl gText_Rom_30F834
gText_Rom_30F834: @ 0x0830F834
	.string "ふん$"
	.if (. - gText_Rom_30F834) > 0x3
	.error "gText_Rom_30F834 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_30F834) < 0x3
	.space 0x3 - (. - gText_Rom_30F834)
	.endif
	.globl gUnknown_830F837
gUnknown_830F837: @ 0x0830F837

	@ src/berry_blender.c:288 sText_Sec (+1 aliases)
	.globl gText_Rom_30F837
gText_Rom_30F837: @ 0x0830F837
	.string "びょう$"
	.if (. - gText_Rom_30F837) > 0x4
	.error "gText_Rom_30F837 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_30F837) < 0x4
	.space 0x4 - (. - gText_Rom_30F837)
	.endif
	.globl gUnknown_830F83B
gUnknown_830F83B: @ 0x0830F83B

	@ src/berry_blender.c:289 sText_MaximumSpeed
	.globl gText_Rom_30F83B
gText_Rom_30F83B: @ 0x0830F83B
	.string "さいこうそくど$"
	.if (. - gText_Rom_30F83B) > 0x8
	.error "gText_Rom_30F83B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_30F83B) < 0x8
	.space 0x8 - (. - gText_Rom_30F83B)
	.endif
	.globl gUnknown_830F843
gUnknown_830F843: @ 0x0830F843

	@ src/berry_blender.c:290 sText_RPM
	.globl gText_Rom_30F843
gText_Rom_30F843: @ 0x0830F843
	.string "rpm$"
	.if (. - gText_Rom_30F843) > 0x4
	.error "gText_Rom_30F843 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_30F843) < 0x4
	.space 0x4 - (. - gText_Rom_30F843)
	.endif
	.globl gUnknown_830F847
gUnknown_830F847: @ 0x0830F847

	@ asm/berry_blender.s:7807 Blender_PrintBlendingResults
	.globl gText_Rom_30F847
gText_Rom_30F847: @ 0x0830F847
	.string ",$"
	.if (. - gText_Rom_30F847) > 0x2
	.error "gText_Rom_30F847 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_30F847) < 0x2
	.space 0x2 - (. - gText_Rom_30F847)
	.endif
	.globl gUnknown_830F849
gUnknown_830F849: @ 0x0830F849
	.incbin "baserom.gba", 0x30f849, 0x4
	.globl gUnknown_830F84D
gUnknown_830F84D: @ 0x0830F84D

	@ src/berry_blender.c:309 sText_Ranking
	.globl gText_Rom_30F84D
gText_Rom_30F84D: @ 0x0830F84D
	.string "ランキング$"
	.if (. - gText_Rom_30F84D) > 0x6
	.error "gText_Rom_30F84D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_30F84D) < 0x6
	.space 0x6 - (. - gText_Rom_30F84D)
	.endif
	.globl gUnknown_830F853
gUnknown_830F853: @ 0x0830F853

	@ src/berry_blender.c:310 sText_TheLevelIs (+1 aliases)
	.globl gText_Rom_30F853
gText_Rom_30F853: @ 0x0830F853
	.string "レベル$"
	.if (. - gText_Rom_30F853) > 0x4
	.error "gText_Rom_30F853 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_30F853) < 0x4
	.space 0x4 - (. - gText_Rom_30F853)
	.endif
	.globl gUnknown_830F857
gUnknown_830F857: @ 0x0830F857

	@ src/berry_blender.c:311 sText_TheFeelIs
	.globl gText_Rom_30F857
gText_Rom_30F857: @ 0x0830F857
	.string "で なめらかさは$"
	.if (. - gText_Rom_30F857) > 0x9
	.error "gText_Rom_30F857 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_30F857) < 0x9
	.space 0x9 - (. - gText_Rom_30F857)
	.endif
	.globl gUnknown_830F860
gUnknown_830F860: @ 0x0830F860

	@ asm/berry_blender.s:8215 Blender_PrintMadePokeblockString
	.globl gText_Rom_30F860
gText_Rom_30F860: @ 0x0830F860
	.string "だ$"
	.if (. - gText_Rom_30F860) > 0x2
	.error "gText_Rom_30F860 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_30F860) < 0x2
	.space 0x2 - (. - gText_Rom_30F860)
	.endif
	.space 0x2, 0x00
	.globl gUnknown_830F864
gUnknown_830F864: @ 0x0830F864
	.incbin "baserom.gba", 0x30f864, 0xc
	.globl gUnknown_830F870
gUnknown_830F870: @ 0x0830F870
	.incbin "baserom.gba", 0x30f870, 0x38
	.globl gUnknown_830F8A8
gUnknown_830F8A8: @ 0x0830F8A8
	.incbin "baserom.gba", 0x30f8a8, 0x8
	.globl gUnknown_830F8B0
gUnknown_830F8B0: @ 0x0830F8B0
	.incbin "baserom.gba", 0x30f8b0, 0x8
	.globl gUnknown_830F8B8
gUnknown_830F8B8: @ 0x0830F8B8
	.incbin "baserom.gba", 0x30f8b8, 0x8
	.globl gUnknown_830F8C0
gUnknown_830F8C0: @ 0x0830F8C0
	.incbin "baserom.gba", 0x30f8c0, 0xc
	.globl gUnknown_830F8CC
gUnknown_830F8CC: @ 0x0830F8CC
	.incbin "baserom.gba", 0x30f8cc, 0x8
	.globl gUnknown_830F8D4
gUnknown_830F8D4: @ 0x0830F8D4
	.incbin "baserom.gba", 0x30f8d4, 0x3
	.globl gUnknown_830F8D7
gUnknown_830F8D7: @ 0x0830F8D7
	.incbin "baserom.gba", 0x30f8d7, 0x5
	.globl gUnknown_830F8DC
gUnknown_830F8DC: @ 0x0830F8DC
	.incbin "baserom.gba", 0x30f8dc, 0xd4
	.globl gUnknown_830F9B0
gUnknown_830F9B0: @ 0x0830F9B0
	.incbin "baserom.gba", 0x30f9b0, 0x8
	.globl gUnknown_830F9B8
gUnknown_830F9B8: @ 0x0830F9B8
	.incbin "baserom.gba", 0x30f9b8, 0x8
	.globl gUnknown_830F9C0
gUnknown_830F9C0: @ 0x0830F9C0
	.incbin "baserom.gba", 0x30f9c0, 0x8
	.globl gUnknown_830F9C8
gUnknown_830F9C8: @ 0x0830F9C8
	.incbin "baserom.gba", 0x30f9c8, 0x60
	.globl gUnknown_830FA28
gUnknown_830FA28: @ 0x0830FA28
	.incbin "baserom.gba", 0x30fa28, 0x8
	.globl gUnknown_830FA30
gUnknown_830FA30: @ 0x0830FA30
	.incbin "baserom.gba", 0x30fa30, 0x98
	.globl gUnknown_830FAC8
gUnknown_830FAC8: @ 0x0830FAC8
	.incbin "baserom.gba", 0x30fac8, 0x8
	.globl gUnknown_830FAD0
gUnknown_830FAD0: @ 0x0830FAD0
	.incbin "baserom.gba", 0x30fad0, 0x44
	.globl gUnknown_830FB14
gUnknown_830FB14: @ 0x0830FB14
	.incbin "baserom.gba", 0x30fb14, 0x8
	.globl gUnknown_830FB1C
gUnknown_830FB1C: @ 0x0830FB1C
	.incbin "baserom.gba", 0x30fb1c, 0x2c
	.globl gUnknown_830FB48
gUnknown_830FB48: @ 0x0830FB48
	.incbin "baserom.gba", 0x30fb48, 0x8
	.globl gUnknown_830FB50
gUnknown_830FB50: @ 0x0830FB50
	.incbin "baserom.gba", 0x30fb50, 0x18
	.globl gUnknown_830FB68
gUnknown_830FB68: @ 0x0830FB68
	.incbin "baserom.gba", 0x30fb68, 0x28
	.globl gUnknown_830FB90
gUnknown_830FB90: @ 0x0830FB90
	.incbin "baserom.gba", 0x30fb90, 0x1e
	.globl gUnknown_830FBAE
gUnknown_830FBAE: @ 0x0830FBAE
	.incbin "baserom.gba", 0x30fbae, 0x5
	.globl gUnknown_830FBB3
gUnknown_830FBB3: @ 0x0830FBB3
	.incbin "baserom.gba", 0x30fbb3, 0x5
	.globl gUnknown_830FBB8
gUnknown_830FBB8: @ 0x0830FBB8
	.incbin "baserom.gba", 0x30fbb8, 0x10
	.globl gUnknown_830FBC8
gUnknown_830FBC8: @ 0x0830FBC8

	@ src/berry_blender.c:314 sText_SavingDontTurnOff2
	.globl gText_Rom_30FBC8
gText_Rom_30FBC8: @ 0x0830FBC8
	.string "ポケモンレポートに かきこんでいます    \nでんげんを きらないで ください      $"
	.if (. - gText_Rom_30FBC8) > 0x2e
	.error "gText_Rom_30FBC8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_30FBC8) < 0x2e
	.space 0x2e - (. - gText_Rom_30FBC8)
	.endif

	@ src/berry_blender.c:917 sJPText_GoodTvReady
	.globl gText_Rom_30FBF6
gText_Rom_30FBF6: @ 0x0830FBF6
	.string "\nいいTVができました $"
	.if (. - gText_Rom_30FBF6) > 0xd
	.error "gText_Rom_30FBF6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_30FBF6) < 0xd
	.space 0xd - (. - gText_Rom_30FBF6)
	.endif

	@ src/berry_blender.c:918 sJPText_BadTvReady
	.globl gText_Rom_30FC03
gText_Rom_30FC03: @ 0x0830FC03
	.string "\nダメTVができました $"
	.if (. - gText_Rom_30FC03) > 0xd
	.error "gText_Rom_30FC03 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_30FC03) < 0xd
	.space 0xd - (. - gText_Rom_30FC03)
	.endif

	@ src/berry_blender.c:919 berry_blender_line_919 (+2 aliases)
	.globl gText_Rom_30FC10
gText_Rom_30FC10: @ 0x0830FC10
	.string "からい$"
	.if (. - gText_Rom_30FC10) > 0x4
	.error "gText_Rom_30FC10 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_30FC10) < 0x4
	.space 0x4 - (. - gText_Rom_30FC10)
	.endif
	.space 0x1, 0x00

	@ src/berry_blender.c:919 berry_blender_line_919 (+2 aliases)
	.globl gText_Rom_30FC15
gText_Rom_30FC15: @ 0x0830FC15
	.string "しぶい$"
	.if (. - gText_Rom_30FC15) > 0x4
	.error "gText_Rom_30FC15 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_30FC15) < 0x4
	.space 0x4 - (. - gText_Rom_30FC15)
	.endif
	.space 0x1, 0x00

	@ src/berry_blender.c:919 berry_blender_line_919 (+3 aliases)
	.globl gText_Rom_30FC1A
gText_Rom_30FC1A: @ 0x0830FC1A
	.string "あまい$"
	.if (. - gText_Rom_30FC1A) > 0x4
	.error "gText_Rom_30FC1A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_30FC1A) < 0x4
	.space 0x4 - (. - gText_Rom_30FC1A)
	.endif
	.space 0x1, 0x00

	@ src/berry_blender.c:919 berry_blender_line_919 (+2 aliases)
	.globl gText_Rom_30FC1F
gText_Rom_30FC1F: @ 0x0830FC1F
	.string "にがい$"
	.if (. - gText_Rom_30FC1F) > 0x4
	.error "gText_Rom_30FC1F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_30FC1F) < 0x4
	.space 0x4 - (. - gText_Rom_30FC1F)
	.endif
	.space 0x1, 0x00

	@ src/berry_blender.c:919 berry_blender_line_919 (+2 aliases)
	.globl gText_Rom_30FC24
gText_Rom_30FC24: @ 0x0830FC24
	.string "すっぱい$"
	.if (. - gText_Rom_30FC24) > 0x5
	.error "gText_Rom_30FC24 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_30FC24) < 0x5
	.space 0x5 - (. - gText_Rom_30FC24)
	.endif
	.globl gUnknown_830FC29
gUnknown_830FC29: @ 0x0830FC29
	.incbin "baserom.gba", 0x30fc29, 0x5
	.globl gUnknown_830FC2E
gUnknown_830FC2E: @ 0x0830FC2E
	.incbin "baserom.gba", 0x30fc2e, 0x5
	.globl gUnknown_830FC33
gUnknown_830FC33: @ 0x0830FC33
	.incbin "baserom.gba", 0x30fc33, 0x5
	.globl gUnknown_830FC38
gUnknown_830FC38: @ 0x0830FC38

	@ src/berry_blender.c:315 sText_BlenderMaxSpeedRecord
	.globl gText_Rom_30FC38
gText_Rom_30FC38: @ 0x0830FC38
	.string "きのみブレンダー\nさいこうそくど ランキング！$"
	.if (. - gText_Rom_30FC38) > 0x18
	.error "gText_Rom_30FC38 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_30FC38) < 0x18
	.space 0x18 - (. - gText_Rom_30FC38)
	.endif
	.globl gUnknown_830FC50
gUnknown_830FC50: @ 0x0830FC50

	@ src/berry_blender.c:316 sText_234Players
	.globl gText_Rom_30FC50
gText_Rom_30FC50: @ 0x0830FC50
	.string "ふたり\nさんにん\nよにん$"
	.if (. - gText_Rom_30FC50) > 0xd
	.error "gText_Rom_30FC50 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_30FC50) < 0xd
	.space 0xd - (. - gText_Rom_30FC50)
	.endif
	.space 0x3, 0x00
	.globl gUnknown_830FC60
gUnknown_830FC60: @ 0x0830FC60
	.incbin "baserom.gba", 0x30fc60, 0x8
	.globl gUnknown_830FC68
gUnknown_830FC68: @ 0x0830FC68
	.incbin "baserom.gba", 0x30fc68, 0x20
	.globl gUnknown_830FC88
gUnknown_830FC88: @ 0x0830FC88
	.incbin "baserom.gba", 0x30fc88, 0x28
	.globl gUnknown_830FCB0
gUnknown_830FCB0: @ 0x0830FCB0
	.incbin "baserom.gba", 0x30fcb0, 0x48
	.globl gUnknown_830FCF8
gUnknown_830FCF8: @ 0x0830FCF8
	.incbin "baserom.gba", 0x30fcf8, 0x10
	.globl gUnknown_830FD08
gUnknown_830FD08: @ 0x0830FD08
	.incbin "baserom.gba", 0x30fd08, 0xc
	.globl gUnknown_830FD14
gUnknown_830FD14: @ 0x0830FD14
	.4byte MovementEventModeCB_Normal
	.4byte MovementEventModeCB_Ignored
	.4byte MovementEventModeCB_Normal_2
	.globl gUnknown_830FD20
gUnknown_830FD20: @ 0x0830FD20
	.4byte FacingHandler_DoNothing
	.4byte FacingHandler_DpadMovement
	.4byte FacingHandler_DpadMovement
	.4byte FacingHandler_DpadMovement
	.4byte FacingHandler_DpadMovement
	.4byte FacingHandler_DoNothing
	.4byte FacingHandler_DoNothing
	.4byte FacingHandler_ForcedFacingChange
	.4byte FacingHandler_ForcedFacingChange
	.4byte FacingHandler_ForcedFacingChange
	.4byte FacingHandler_ForcedFacingChange
	.globl gUnknown_830FD4C
gUnknown_830FD4C: @ 0x0830FD4C
	.incbin "baserom.gba", 0x30fd4c, 0xa8348
	.globl gUnknown_83B8094
gUnknown_83B8094: @ 0x083B8094
	.incbin "baserom.gba", 0x3b8094, 0x4
	.globl gUnknown_83B8098
gUnknown_83B8098: @ 0x083B8098
	.incbin "baserom.gba", 0x3b8098, 0xa215c
	.globl gUnknown_845A1F4
gUnknown_845A1F4: @ 0x0845A1F4
	.incbin "baserom.gba", 0x45a1f4, 0x3de6

