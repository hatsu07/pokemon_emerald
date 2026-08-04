	@ src/data/battle_frontier/apprentice.h:356 apprentice_line_356
	.globl gText_Rom_5B83C4
gText_Rom_5B83C4: @ 0x085B83C4
	.string "カズサ$"
	.if (. - gText_Rom_5B83C4) > 0x4
	.error "gText_Rom_5B83C4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5B83C4) < 0x4
	.space 0x4 - (. - gText_Rom_5B83C4)
	.endif
	.incbin "baserom.gba", 0x5b83c8, 0x338
	.globl gUnknown_85B8700
gUnknown_85B8700: @ 0x085B8700
	.incbin "baserom.gba", 0x5b8700, 0x3720
	.globl gUnknown_85BBE20
gUnknown_85BBE20: @ 0x085BBE20
	.incbin "baserom.gba", 0x5bbe20, 0x1e
	.globl gUnknown_85BBE3E
gUnknown_85BBE3E: @ 0x085BBE3E
	.incbin "baserom.gba", 0x5bbe3e, 0x14
	.globl gUnknown_85BBE52
gUnknown_85BBE52: @ 0x085BBE52
	.incbin "baserom.gba", 0x5bbe52, 0x1e
	.globl gUnknown_85BBE70
gUnknown_85BBE70: @ 0x085BBE70
	.incbin "baserom.gba", 0x5bbe70, 0x14
	.globl gUnknown_85BBE84
gUnknown_85BBE84: @ 0x085BBE84
	.incbin "baserom.gba", 0x5bbe84, 0x5c0
	.globl gUnknown_85BC444
gUnknown_85BC444: @ 0x085BC444
	.incbin "baserom.gba", 0x5bc444, 0x190
	.globl gUnknown_85BC5D4
gUnknown_85BC5D4: @ 0x085BC5D4
	.incbin "baserom.gba", 0x5bc5d4, 0x40
	.globl gUnknown_85BC614
gUnknown_85BC614: @ 0x085BC614
	.incbin "baserom.gba", 0x5bc614, 0x5
	.globl gUnknown_85BC619
gUnknown_85BC619: @ 0x085BC619
	.incbin "baserom.gba", 0x5bc619, 0x7
	.globl gUnknown_85BC620
gUnknown_85BC620: @ 0x085BC620
	.incbin "baserom.gba", 0x5bc620, 0x338
	.globl gUnknown_85BC958
gUnknown_85BC958: @ 0x085BC958
	.incbin "baserom.gba", 0x5bc958, 0x3a

	@ src/data/trainers.h:3787 trainers_line_3787 (+5 aliases)
	.globl gText_Rom_5BC992
gText_Rom_5BC992: @ 0x085BC992
	.string "ショウ$"
	.if (. - gText_Rom_5BC992) > 0x4
	.error "gText_Rom_5BC992 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5BC992) < 0x4
	.space 0x4 - (. - gText_Rom_5BC992)
	.endif
	.incbin "baserom.gba", 0x5bc996, 0x168

	@ src/data/trainers.h:24407 trainers_line_24407 (+4 aliases)
	.globl gText_Rom_5BCAFE
gText_Rom_5BCAFE: @ 0x085BCAFE
	.string "ジロウ$"
	.if (. - gText_Rom_5BCAFE) > 0x4
	.error "gText_Rom_5BCAFE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5BCAFE) < 0x4
	.space 0x4 - (. - gText_Rom_5BCAFE)
	.endif
	.incbin "baserom.gba", 0x5bcb02, 0x134

	@ src/data/trainers.h:24407 trainers_line_24407 (+4 aliases)
	.globl gText_Rom_5BCC36
gText_Rom_5BCC36: @ 0x085BCC36
	.string "ジロウ$"
	.if (. - gText_Rom_5BCC36) > 0x4
	.error "gText_Rom_5BCC36 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5BCC36) < 0x4
	.space 0x4 - (. - gText_Rom_5BCC36)
	.endif
	.incbin "baserom.gba", 0x5bcc3a, 0x336
	.globl gUnknown_85BCF70
gUnknown_85BCF70: @ 0x085BCF70
	.incbin "baserom.gba", 0x5bcf70, 0x5e4
	.globl gUnknown_85BD554
gUnknown_85BD554: @ 0x085BD554
	.incbin "baserom.gba", 0x5bd554, 0x13c

	@ src/data/trainers.h:17816 trainers_line_17816
	.globl gText_Rom_5BD690
gText_Rom_5BD690: @ 0x085BD690
	.string "カズオ$"
	.if (. - gText_Rom_5BD690) > 0x4
	.error "gText_Rom_5BD690 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5BD690) < 0x4
	.space 0x4 - (. - gText_Rom_5BD690)
	.endif
	.incbin "baserom.gba", 0x5bd694, 0x4d8
	.globl gUnknown_85BDB6C
gUnknown_85BDB6C: @ 0x085BDB6C
	.incbin "baserom.gba", 0x5bdb6c, 0x45c
	.globl gUnknown_85BDFC8
gUnknown_85BDFC8: @ 0x085BDFC8
	.incbin "baserom.gba", 0x5bdfc8, 0x15d

	@ src/data/abilities.h:214 abilities_line_214 (+1 aliases)
	.globl gText_Rom_5BE125
gText_Rom_5BE125: @ 0x085BE125
	.string "ほうし$"
	.if (. - gText_Rom_5BE125) > 0x4
	.error "gText_Rom_5BE125 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5BE125) < 0x4
	.space 0x4 - (. - gText_Rom_5BE125)
	.endif
	.incbin "baserom.gba", 0x5be129, 0x4b7
	.globl gUnknown_85BE5E0
gUnknown_85BE5E0: @ 0x085BE5E0
	.incbin "baserom.gba", 0x5be5e0, 0x2d0
	.globl gUnknown_85BE8B0
gUnknown_85BE8B0: @ 0x085BE8B0
	.4byte sub_08161EA8
	.4byte sub_08161F68
	.4byte sub_08162008
	.4byte ChooseNextBattleTowerTrainer
	.4byte sub_081620D4
	.4byte AwardBattleTowerRibbons
	.4byte SaveBattleTowerProgress
	.4byte sub_0816383C
	.4byte SpriteCB_Null6
	.4byte GetEreaderTrainerFrontSpriteId
	.4byte sub_081641C8
	.4byte sub_08164718
	.4byte sub_08164A54
	.4byte sub_08164CAC
	.4byte sub_08164CC4
	.4byte sub_08164CE4
	.globl gUnknown_85BE8F0
gUnknown_85BE8F0: @ 0x085BE8F0
	.incbin "baserom.gba", 0x5be8f0, 0x20
	.globl gUnknown_85BE910
gUnknown_85BE910: @ 0x085BE910
	.incbin "baserom.gba", 0x5be910, 0x20
	.globl gUnknown_85BE930
gUnknown_85BE930: @ 0x085BE930
	.incbin "baserom.gba", 0x5be930, 0xa
	.globl gUnknown_85BE93A
gUnknown_85BE93A: @ 0x085BE93A
	.incbin "baserom.gba", 0x5be93a, 0x4
	.globl gUnknown_85BE93E
gUnknown_85BE93E: @ 0x085BE93E
	.incbin "baserom.gba", 0x5be93e, 0x20
	.globl gUnknown_85BE95E
gUnknown_85BE95E: @ 0x085BE95E
	.incbin "baserom.gba", 0x5be95e, 0x28
	.globl gUnknown_85BE986
gUnknown_85BE986: @ 0x085BE986
	.incbin "baserom.gba", 0x5be986, 0xc
	.globl gUnknown_85BE992
gUnknown_85BE992: @ 0x085BE992
	.incbin "baserom.gba", 0x5be992, 0x22e
	.globl gUnknown_85BEBC0
gUnknown_85BEBC0: @ 0x085BEBC0
	.incbin "baserom.gba", 0x5bebc0, 0xcc0
	.globl gUnknown_85BF880
gUnknown_85BF880: @ 0x085BF880
	.incbin "baserom.gba", 0x5bf880, 0x40
	.globl gUnknown_85BF8C0
gUnknown_85BF8C0: @ 0x085BF8C0
	.incbin "baserom.gba", 0x5bf8c0, 0xe0
	.globl gUnknown_85BF9A0
gUnknown_85BF9A0: @ 0x085BF9A0
	.incbin "baserom.gba", 0x5bf9a0, 0xac
	.globl gUnknown_85BFA4C
gUnknown_85BFA4C: @ 0x085BFA4C
	.incbin "baserom.gba", 0x5bfa4c, 0x60
	.globl gUnknown_85BFAAC
gUnknown_85BFAAC: @ 0x085BFAAC
	.incbin "baserom.gba", 0x5bfaac, 0x784
	.globl gUnknown_85C0230
gUnknown_85C0230: @ 0x085C0230
	.incbin "baserom.gba", 0x5c0230, 0x1e0
	.globl gUnknown_85C0410
gUnknown_85C0410: @ 0x085C0410
	.incbin "baserom.gba", 0x5c0410, 0x78
	.globl gUnknown_85C0488
gUnknown_85C0488: @ 0x085C0488
	.incbin "baserom.gba", 0x5c0488, 0x50c
	.globl gUnknown_85C0994
gUnknown_85C0994: @ 0x085C0994
	@ Resolved pointer table; original ROM range 0x5C0994..0x5C09A7.
	.4byte MAP_NUM_ROUTE107
	.4byte MAP_NUM_ROUTE132
	.4byte MAP_NUM_ROUTE118
	.4byte MAP_NUM_ROUTE109
	.4byte PSR_ABT_MODE
	.globl gUnknown_85C09A8
gUnknown_85C09A8: @ 0x085C09A8
	.incbin "baserom.gba", 0x5c09a8, 0x5
	.globl gUnknown_85C09AD
gUnknown_85C09AD: @ 0x085C09AD
	.incbin "baserom.gba", 0x5c09ad, 0x3
	.globl gUnknown_85C09B0
gUnknown_85C09B0: @ 0x085C09B0
	.incbin "baserom.gba", 0x5c09b0, 0x10
	.globl gUnknown_85C09C0
gUnknown_85C09C0: @ 0x085C09C0
	.incbin "baserom.gba", 0x5c09c0, 0x20
	.globl gUnknown_85C09E0
gUnknown_85C09E0: @ 0x085C09E0
	.incbin "baserom.gba", 0x5c09e0, 0x8
	.globl gUnknown_85C09E8
gUnknown_85C09E8: @ 0x085C09E8
	.4byte gText_Rom_5CBD21
	.4byte gText_Rom_5CBD37
	.4byte gText_Rom_5CBD32
	.4byte gText_Rom_5CBD2D
	.4byte gText_Rom_5CBD27
	.globl gUnknown_85C09FC
gUnknown_85C09FC: @ 0x085C09FC
	.incbin "baserom.gba", 0x5c09fc, 0x8
	.globl gUnknown_85C0A04
gUnknown_85C0A04: @ 0x085C0A04
	.incbin "baserom.gba", 0x5c0a04, 0x8
	.globl gUnknown_85C0A0C
gUnknown_85C0A0C: @ 0x085C0A0C
	.incbin "baserom.gba", 0x5c0a0c, 0x34
	.globl gUnknown_85C0A40
gUnknown_85C0A40: @ 0x085C0A40
	.incbin "baserom.gba", 0x5c0a40, 0x44
	.globl gUnknown_85C0A84
gUnknown_85C0A84: @ 0x085C0A84
	.incbin "baserom.gba", 0x5c0a84, 0x18
	.globl gUnknown_85C0A9C
gUnknown_85C0A9C: @ 0x085C0A9C
	.incbin "baserom.gba", 0x5c0a9c, 0x8
	.globl gUnknown_85C0AA4
gUnknown_85C0AA4: @ 0x085C0AA4
	.4byte WallyHandleGetMonData
	.4byte sub_081691C8
	.4byte WallyHandleSetMonData
	.4byte WallyHandleSetRawMonData
	.4byte WallyHandleLoadMonSprite
	.4byte WallyHandleSwitchInAnim
	.4byte WallyHandleReturnMonToBall
	.4byte WallyHandleDrawTrainerPic
	.4byte WallyHandleTrainerSlide
	.4byte WallyHandleTrainerSlideBack
	.4byte WallyHandleFaintAnimation
	.4byte WallyHandlePaletteFade
	.4byte WallyHandleSuccessBallThrowAnim
	.4byte WallyHandleBallThrowAnim
	.4byte WallyHandlePause
	.4byte WallyHandleMoveAnimation
	.4byte WallyHandlePrintString
	.4byte WallyHandlePrintSelectionString
	.4byte WallyHandleChooseAction
	.4byte WallyHandleUnknownYesNoBox
	.4byte WallyHandleChooseMove
	.4byte WallyHandleChooseItem
	.4byte WallyHandleChoosePokemon
	.4byte WallyHandleCmd23
	.4byte WallyHandleHealthBarUpdate
	.4byte WallyHandleExpUpdate
	.4byte WallyHandleStatusIconUpdate
	.4byte WallyHandleStatusAnimation
	.4byte WallyHandleStatusXor
	.4byte WallyHandleDataTransfer
	.4byte WallyHandleDMA3Transfer
	.4byte WallyHandlePlayBGM
	.4byte WallyHandleCmd32
	.4byte WallyHandleTwoReturnValues
	.4byte sub_0816A548
	.4byte sub_0816A554
	.4byte WallyHandleOneReturnValue_Duplicate
	.4byte WallyHandleCmd37
	.4byte WallyHandleCmd38
	.4byte sub_0816A584
	.4byte WallyHandleCmd40
	.4byte WallyHandleHitAnimation
	.4byte WallyHandleCmd42
	.4byte WallyHandlePlaySE
	.4byte WallyHandlePlayFanfareOrBGM
	.4byte WallyHandleFaintingCry
	.4byte WallyHandleIntroSlide
	.4byte WallyHandleIntroTrainerBallThrow
	.4byte WallyHandleDrawPartyStatusSummary
	.4byte WallyHandleHidePartyStatusSummary
	.4byte WallyHandleEndBounceEffect
	.4byte WallyHandleSpriteInvisibility
	.4byte WallyHandleBattleAnimation
	.4byte WallyHandleLinkStandbyMsg
	.4byte WallyHandleResetActionMoveSelection
	.4byte WallyHandleCmd55
	.4byte SpriteCB_Null7
	.globl gUnknown_85C0B88
gUnknown_85C0B88: @ 0x085C0B88
	.4byte gText_Rom_5CA8EC
	.4byte gText_Rom_5CA8DA
	.4byte gText_Rom_5CA900
	.4byte gText_Rom_5C9423
	.globl gUnknown_85C0B98
gUnknown_85C0B98: @ 0x085C0B98
	.4byte gText_Rom_5CA8AC
	.4byte PlayerPC_ItemStorage
	.4byte gText_Rom_5CA8B5
	.4byte PlayerPC_Mailbox
	.4byte gText_Rom_5CA8A6
	.4byte PlayerPC_Decoration
	.4byte gText_Rom_5CA89D
	.4byte PlayerPC_TurnOff
	.globl gUnknown_85C0BB8
gUnknown_85C0BB8: @ 0x085C0BB8
	.incbin "baserom.gba", 0x5c0bb8, 0x4
	.globl gUnknown_85C0BBC
gUnknown_85C0BBC: @ 0x085C0BBC
	.incbin "baserom.gba", 0x5c0bbc, 0x4
	.globl gUnknown_85C0BC0
gUnknown_85C0BC0: @ 0x085C0BC0
	.4byte gText_Rom_5CA8C7
	.4byte ItemStorage_Withdraw
	.4byte gText_Rom_5CA8BD
	.4byte ItemStorage_Deposit
	.4byte gText_Rom_5CA8D1
	.4byte ItemStorage_Toss
	.4byte gText_Rom_5C93C4
	.4byte ItemStorage_Exit
	.globl gUnknown_85C0BE0
gUnknown_85C0BE0: @ 0x085C0BE0
	.incbin "baserom.gba", 0x5c0be0, 0x8
	.globl gUnknown_85C0BE8
gUnknown_85C0BE8: @ 0x085C0BE8
	.4byte gText_Rom_5CA959
	.4byte Mailbox_DoMailRead
	.4byte gText_Rom_5CA962
	.4byte Mailbox_MoveToBag
	.4byte gText_Rom_5CA96B
	.4byte Mailbox_Give
	.4byte gText_Rom_5C93C8
	.4byte Mailbox_Cancel
	.globl gUnknown_85C0C08
gUnknown_85C0C08: @ 0x085C0C08
	.incbin "baserom.gba", 0x5c0c08, 0x8
	.globl gUnknown_85C0C10
gUnknown_85C0C10: @ 0x085C0C10
	.incbin "baserom.gba", 0x5c0c10, 0x8
	.globl gUnknown_85C0C18
gUnknown_85C0C18: @ 0x085C0C18
	.incbin "baserom.gba", 0x5c0c18, 0x8
	.globl gUnknown_85C0C20
gUnknown_85C0C20: @ 0x085C0C20
	.4byte ItemStorage_ResumeInputFromYesToss
	.4byte ItemStorage_ResumeInputFromNoToss
	.globl gUnknown_85C0C28
gUnknown_85C0C28: @ 0x085C0C28
	.incbin "baserom.gba", 0x5c0c28, 0x18
	.globl gUnknown_85C0C40
gUnknown_85C0C40: @ 0x085C0C40
	.incbin "baserom.gba", 0x5c0c40, 0x28
	.globl gUnknown_85C0C68
gUnknown_85C0C68: @ 0x085C0C68
	.incbin "baserom.gba", 0x5c0c68, 0x8
	.globl gUnknown_85C0C70
gUnknown_85C0C70: @ 0x085C0C70
	.incbin "baserom.gba", 0x5c0c70, 0x4
	.globl gUnknown_85C0C74
gUnknown_85C0C74: @ 0x085C0C74
	.incbin "baserom.gba", 0x5c0c74, 0x20
	.globl gUnknown_85C0C94
gUnknown_85C0C94: @ 0x085C0C94
	.incbin "baserom.gba", 0x5c0c94, 0x264
	.globl gUnknown_85C0EF8
gUnknown_85C0EF8: @ 0x085C0EF8
	.incbin "baserom.gba", 0x5c0ef8, 0x780
	.globl gUnknown_85C1678
gUnknown_85C1678: @ 0x085C1678
	.incbin "baserom.gba", 0x5c1678, 0x200
	.globl gUnknown_85C1878
gUnknown_85C1878: @ 0x085C1878
	.incbin "baserom.gba", 0x5c1878, 0x3b4
	.globl gUnknown_85C1C2C
gUnknown_85C1C2C: @ 0x085C1C2C
	.incbin "baserom.gba", 0x5c1c2c, 0x334
	.globl gUnknown_85C1F60
gUnknown_85C1F60: @ 0x085C1F60
	.incbin "baserom.gba", 0x5c1f60, 0x2f0
	.globl gUnknown_85C2250
gUnknown_85C2250: @ 0x085C2250
	.incbin "baserom.gba", 0x5c2250, 0x218
	.globl gUnknown_85C2468
gUnknown_85C2468: @ 0x085C2468
	.incbin "baserom.gba", 0x5c2468, 0x2170
	.globl gUnknown_85C45D8
gUnknown_85C45D8: @ 0x085C45D8
	.incbin "baserom.gba", 0x5c45d8, 0x200
	.globl gUnknown_85C47D8
gUnknown_85C47D8: @ 0x085C47D8
	.incbin "baserom.gba", 0x5c47d8, 0x130
	.globl gUnknown_85C4908
gUnknown_85C4908: @ 0x085C4908
	.incbin "baserom.gba", 0x5c4908, 0x1220
	.globl gUnknown_85C5B28
gUnknown_85C5B28: @ 0x085C5B28
	.incbin "baserom.gba", 0x5c5b28, 0x10
	.globl gUnknown_85C5B38
gUnknown_85C5B38: @ 0x085C5B38
	.incbin "baserom.gba", 0x5c5b38, 0x34
	.globl gUnknown_85C5B6C
gUnknown_85C5B6C: @ 0x085C5B6C
	.incbin "baserom.gba", 0x5c5b6c, 0x18
	.globl gUnknown_85C5B84
gUnknown_85C5B84: @ 0x085C5B84
	.incbin "baserom.gba", 0x5c5b84, 0x18
	.globl gUnknown_85C5B9C
gUnknown_85C5B9C: @ 0x085C5B9C
	.incbin "baserom.gba", 0x5c5b9c, 0x20
	.globl gUnknown_85C5BBC
gUnknown_85C5BBC: @ 0x085C5BBC
	.incbin "baserom.gba", 0x5c5bbc, 0x38
	.globl gUnknown_85C5BF4
gUnknown_85C5BF4: @ 0x085C5BF4
	.incbin "baserom.gba", 0x5c5bf4, 0x64
	.globl gUnknown_85C5C58
gUnknown_85C5C58: @ 0x085C5C58
	.incbin "baserom.gba", 0x5c5c58, 0x38
	.globl gUnknown_85C5C90
gUnknown_85C5C90: @ 0x085C5C90
	.incbin "baserom.gba", 0x5c5c90, 0x18
	.globl gUnknown_85C5CA8
gUnknown_85C5CA8: @ 0x085C5CA8
	.incbin "baserom.gba", 0x5c5ca8, 0x10
	.globl gUnknown_85C5CB8
gUnknown_85C5CB8: @ 0x085C5CB8
	.incbin "baserom.gba", 0x5c5cb8, 0x48
	.globl gUnknown_85C5D00
gUnknown_85C5D00: @ 0x085C5D00
	.incbin "baserom.gba", 0x5c5d00, 0x18
	.globl gUnknown_85C5D18
gUnknown_85C5D18: @ 0x085C5D18
	.incbin "baserom.gba", 0x5c5d18, 0x24
	.globl gUnknown_85C5D3C
gUnknown_85C5D3C: @ 0x085C5D3C
	.incbin "baserom.gba", 0x5c5d3c, 0x10
	.globl gUnknown_85C5D4C
gUnknown_85C5D4C: @ 0x085C5D4C
	.incbin "baserom.gba", 0x5c5d4c, 0x10
	.globl gUnknown_85C5D5C
gUnknown_85C5D5C: @ 0x085C5D5C
	.incbin "baserom.gba", 0x5c5d5c, 0x6c
	.globl gUnknown_85C5DC8
gUnknown_85C5DC8: @ 0x085C5DC8
	.incbin "baserom.gba", 0x5c5dc8, 0x50
	.globl gUnknown_85C5E18
gUnknown_85C5E18: @ 0x085C5E18
	.incbin "baserom.gba", 0x5c5e18, 0x60
	.globl gUnknown_85C5E78
gUnknown_85C5E78: @ 0x085C5E78
	.incbin "baserom.gba", 0x5c5e78, 0xd0
	.globl gUnknown_85C5F48
gUnknown_85C5F48: @ 0x085C5F48
	.incbin "baserom.gba", 0x5c5f48, 0xb4
	.globl gUnknown_85C5FFC
gUnknown_85C5FFC: @ 0x085C5FFC
	.incbin "baserom.gba", 0x5c5ffc, 0x14
	.globl gUnknown_85C6010
gUnknown_85C6010: @ 0x085C6010
	.incbin "baserom.gba", 0x5c6010, 0x30
	.globl gUnknown_85C6040
gUnknown_85C6040: @ 0x085C6040
	.incbin "baserom.gba", 0x5c6040, 0x18
	.globl gUnknown_85C6058
gUnknown_85C6058: @ 0x085C6058
	.incbin "baserom.gba", 0x5c6058, 0x20
	.globl gUnknown_85C6078
gUnknown_85C6078: @ 0x085C6078
	.incbin "baserom.gba", 0x5c6078, 0x18
	.globl gUnknown_85C6090
gUnknown_85C6090: @ 0x085C6090
	.incbin "baserom.gba", 0x5c6090, 0x10
	.globl gUnknown_85C60A0
gUnknown_85C60A0: @ 0x085C60A0
	.incbin "baserom.gba", 0x5c60a0, 0x10
	.globl gUnknown_85C60B0
gUnknown_85C60B0: @ 0x085C60B0
	.incbin "baserom.gba", 0x5c60b0, 0x34
	.globl gUnknown_85C60E4
gUnknown_85C60E4: @ 0x085C60E4
	.incbin "baserom.gba", 0x5c60e4, 0x18
	.globl gUnknown_85C60FC
gUnknown_85C60FC: @ 0x085C60FC
	.incbin "baserom.gba", 0x5c60fc, 0x10
	.globl gUnknown_85C610C
gUnknown_85C610C: @ 0x085C610C
	.incbin "baserom.gba", 0x5c610c, 0x10
	.globl gUnknown_85C611C
gUnknown_85C611C: @ 0x085C611C

	@ src/strings.c:974 gText_Hoenn
	.globl gText_Rom_5C611C
gText_Rom_5C611C: @ 0x085C611C
	.string "ホウエンちほう$"
	.if (. - gText_Rom_5C611C) > 0x8
	.error "gText_Rom_5C611C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C611C) < 0x8
	.space 0x8 - (. - gText_Rom_5C611C)
	.endif
	.globl gUnknown_85C6124
gUnknown_85C6124: @ 0x085C6124
	.incbin "baserom.gba", 0x5c6124, 0x8
	.globl gUnknown_85C612C
gUnknown_85C612C: @ 0x085C612C
	.incbin "baserom.gba", 0x5c612c, 0x18
	.globl gUnknown_85C6144
gUnknown_85C6144: @ 0x085C6144
	.incbin "baserom.gba", 0x5c6144, 0xc
	.globl gUnknown_85C6150
gUnknown_85C6150: @ 0x085C6150
	.incbin "baserom.gba", 0x5c6150, 0x60
	.globl gUnknown_85C61B0
gUnknown_85C61B0: @ 0x085C61B0
	.incbin "baserom.gba", 0x5c61b0, 0xc0
	.globl gUnknown_85C6270
gUnknown_85C6270: @ 0x085C6270
	.incbin "baserom.gba", 0x5c6270, 0xc
	.globl gUnknown_85C627C
gUnknown_85C627C: @ 0x085C627C
	.4byte PokeBallOpenParticleAnimation
	.4byte GreatBallOpenParticleAnimation
	.4byte SafariBallOpenParticleAnimation
	.4byte UltraBallOpenParticleAnimation
	.4byte MasterBallOpenParticleAnimation
	.4byte SafariBallOpenParticleAnimation
	.4byte DiveBallOpenParticleAnimation
	.4byte UltraBallOpenParticleAnimation
	.4byte RepeatBallOpenParticleAnimation
	.4byte TimerBallOpenParticleAnimation
	.4byte GreatBallOpenParticleAnimation
	.4byte PremierBallOpenParticleAnimation
	.globl gUnknown_85C62AC
gUnknown_85C62AC: @ 0x085C62AC
	.incbin "baserom.gba", 0x5c62ac, 0x60
	.globl gUnknown_85C630C
gUnknown_85C630C: @ 0x085C630C
	.incbin "baserom.gba", 0x5c630c, 0xc0
	.globl gUnknown_85C63CC
gUnknown_85C63CC: @ 0x085C63CC
	.incbin "baserom.gba", 0x5c63cc, 0x64
	.globl gUnknown_85C6430
gUnknown_85C6430: @ 0x085C6430
	.incbin "baserom.gba", 0x5c6430, 0xc
	.globl gUnknown_85C643C
gUnknown_85C643C: @ 0x085C643C
	.incbin "baserom.gba", 0x5c643c, 0x8
	.globl gUnknown_85C6444
gUnknown_85C6444: @ 0x085C6444
	.incbin "baserom.gba", 0x5c6444, 0x4
	.globl gUnknown_85C6448
gUnknown_85C6448: @ 0x085C6448
	.incbin "baserom.gba", 0x5c6448, 0x8
	.globl gUnknown_85C6450
gUnknown_85C6450: @ 0x085C6450
	.incbin "baserom.gba", 0x5c6450, 0x10
	.globl gUnknown_85C6460
gUnknown_85C6460: @ 0x085C6460
	.incbin "baserom.gba", 0x5c6460, 0x10
	.globl gUnknown_85C6470
gUnknown_85C6470: @ 0x085C6470
	.incbin "baserom.gba", 0x5c6470, 0x6
	.globl gUnknown_85C6476
gUnknown_85C6476: @ 0x085C6476
	.incbin "baserom.gba", 0x5c6476, 0x2a
	.globl gUnknown_85C64A0
gUnknown_85C64A0: @ 0x085C64A0
	.incbin "baserom.gba", 0x5c64a0, 0x18
	.globl gUnknown_85C64B8
gUnknown_85C64B8: @ 0x085C64B8
	.incbin "baserom.gba", 0x5c64b8, 0xd4
	.globl gUnknown_85C658C
gUnknown_85C658C: @ 0x085C658C
	.incbin "baserom.gba", 0x5c658c, 0x18
	.globl gUnknown_85C65A4
gUnknown_85C65A4: @ 0x085C65A4
	.incbin "baserom.gba", 0x5c65a4, 0x20
	.globl gUnknown_85C65C4
gUnknown_85C65C4: @ 0x085C65C4
	.incbin "baserom.gba", 0x5c65c4, 0x1cc
	.globl gUnknown_85C6790
gUnknown_85C6790: @ 0x085C6790
	.incbin "baserom.gba", 0x5c6790, 0x1c
	.globl gUnknown_85C67AC
gUnknown_85C67AC: @ 0x085C67AC
	.incbin "baserom.gba", 0x5c67ac, 0x80
	.globl gUnknown_85C682C
gUnknown_85C682C: @ 0x085C682C
	.incbin "baserom.gba", 0x5c682c, 0x43c
	.globl gUnknown_85C6C68
gUnknown_85C6C68: @ 0x085C6C68
	.incbin "baserom.gba", 0x5c6c68, 0xf
	.globl gUnknown_85C6C77
gUnknown_85C6C77: @ 0x085C6C77
	.incbin "baserom.gba", 0x5c6c77, 0xf
	.globl gUnknown_85C6C86
gUnknown_85C6C86: @ 0x085C6C86
	.incbin "baserom.gba", 0x5c6c86, 0xf
	.globl gUnknown_85C6C95
gUnknown_85C6C95: @ 0x085C6C95
	.incbin "baserom.gba", 0x5c6c95, 0xf
	.globl gUnknown_85C6CA4
gUnknown_85C6CA4: @ 0x085C6CA4
	.incbin "baserom.gba", 0x5c6ca4, 0x10

