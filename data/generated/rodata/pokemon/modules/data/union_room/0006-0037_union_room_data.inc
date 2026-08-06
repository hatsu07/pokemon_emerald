	@ asm/union_room.s:9786 sub_0801727C
	.globl gText_Rom_2C0644
gText_Rom_2C0644: @ 0x082C0644
	.string ":$"
	.if (. - gText_Rom_2C0644) > 0x2
	.error "gText_Rom_2C0644 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C0644) < 0x2
	.space 0x2 - (. - gText_Rom_2C0644)
	.endif
	.space 0x2, 0x00
	.globl gUnknown_82C0648
gUnknown_82C0648: @ 0x082C0648
sText_ID:
	@ {ID} is encoded as F9 07.
	.string "{ID}$"
	.byte 0 @ alignment
	.globl gUnknown_82C064C
gUnknown_82C064C: @ 0x082C064C

	@ asm/union_room.s:5239 sub_08014A50
	.globl gText_Rom_2C064C
gText_Rom_2C064C: @ 0x082C064C
	.string "もういちど　さいしょから\nてつづきを　やりなおして　ください$"
	.if (. - gText_Rom_2C064C) > 0x1f
	.error "gText_Rom_2C064C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C064C) < 0x1f
	.space 0x1f - (. - gText_Rom_2C064C)
	.endif
	.space 0x1, 0x00
	.globl gUnknown_82C066C
gUnknown_82C066C: @ 0x082C066C
sText_WirelessSearchCanceled:
	.string "ジョイスポットの　けんさくを\nちゅうししました$"
sText_AwaitingCommunication2:
	@ Unused in the corresponding decomp source.
	.string "ともだちからの　れんらくを\nまっています$"
	.space 3, 0 @ alignment
	.globl gUnknown_82C069C
gUnknown_82C069C: @ 0x082C069C

	@ asm/union_room.s:233 sub_08012134
	.globl gText_Rom_2C069C
gText_Rom_2C069C: @ 0x082C069C
	.string "{STR_VAR_1}！\nともだちからの　れんらくを　まっています$"
	.if (. - gText_Rom_2C069C) > 0x19
	.error "gText_Rom_2C069C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C069C) < 0x19
	.space 0x19 - (. - gText_Rom_2C069C)
	.endif
	.space 0x3, 0x00
	.globl gUnknown_82C06B8
gUnknown_82C06B8: @ 0x082C06B8

	@ asm/union_room.s:574 sub_08012288
	.globl gText_Rom_2C06B8
gText_Rom_2C06B8: @ 0x082C06B8
	.string "{STR_VAR_1}！　れんらくまち！\nにんずうが　そろったら　STARTボタン$"
	.if (. - gText_Rom_2C06B8) > 0x21
	.error "gText_Rom_2C06B8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C06B8) < 0x21
	.space 0x21 - (. - gText_Rom_2C06B8)
	.endif
	.space 0x3, 0x00

	@ src/data/union_room.h:9 sJPText_SingleBattle
	.globl gText_Rom_2C06DC
gText_Rom_2C06DC: @ 0x082C06DC
	.string "シングルバトルを かいさいする$"
	.if (. - gText_Rom_2C06DC) > 0x10
	.error "gText_Rom_2C06DC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C06DC) < 0x10
	.space 0x10 - (. - gText_Rom_2C06DC)
	.endif

	@ src/data/union_room.h:10 sJPText_DoubleBattle
	.globl gText_Rom_2C06EC
gText_Rom_2C06EC: @ 0x082C06EC
	.string "ダブルバトルを かいさいする$"
	.if (. - gText_Rom_2C06EC) > 0xf
	.error "gText_Rom_2C06EC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C06EC) < 0xf
	.space 0xf - (. - gText_Rom_2C06EC)
	.endif
	.space 0x1, 0x00

	@ src/data/union_room.h:11 sJPText_MultiBattle
	.globl gText_Rom_2C06FC
gText_Rom_2C06FC: @ 0x082C06FC
	.string "マルチバトルを かいさいする$"
	.if (. - gText_Rom_2C06FC) > 0xf
	.error "gText_Rom_2C06FC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C06FC) < 0xf
	.space 0xf - (. - gText_Rom_2C06FC)
	.endif
	.space 0x1, 0x00

	@ src/data/union_room.h:12 sJPText_TradePokemon
	.globl gText_Rom_2C070C
gText_Rom_2C070C: @ 0x082C070C
	.string "ポケモンこうかんを かいさいする$"
	.if (. - gText_Rom_2C070C) > 0x11
	.error "gText_Rom_2C070C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C070C) < 0x11
	.space 0x11 - (. - gText_Rom_2C070C)
	.endif
	.space 0x3, 0x00

	@ src/data/union_room.h:13 sJPText_Chat
	.globl gText_Rom_2C0720
gText_Rom_2C0720: @ 0x082C0720
	.string "チャットを かいさいする$"
	.if (. - gText_Rom_2C0720) > 0xd
	.error "gText_Rom_2C0720 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C0720) < 0xd
	.space 0xd - (. - gText_Rom_2C0720)
	.endif
	.space 0x3, 0x00

	@ src/data/union_room.h:14 sJPText_DistWonderCard
	.globl gText_Rom_2C0730
gText_Rom_2C0730: @ 0x082C0730
	.string "ふしぎなカードをくばる$"
	.if (. - gText_Rom_2C0730) > 0xc
	.error "gText_Rom_2C0730 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C0730) < 0xc
	.space 0xc - (. - gText_Rom_2C0730)
	.endif

	@ src/data/union_room.h:15 sJPText_DistWonderNews
	.globl gText_Rom_2C073C
gText_Rom_2C073C: @ 0x082C073C
	.string "ふしぎなニュースをくばる$"
	.if (. - gText_Rom_2C073C) > 0xd
	.error "gText_Rom_2C073C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C073C) < 0xd
	.space 0xd - (. - gText_Rom_2C073C)
	.endif
	.space 0x3, 0x00

	@ src/data/union_room.h:16 sJPText_DistMysteryEvent
	.globl gText_Rom_2C074C
gText_Rom_2C074C: @ 0x082C074C
	.string "ふしぎなできごとを かいさいする$"
	.if (. - gText_Rom_2C074C) > 0x11
	.error "gText_Rom_2C074C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C074C) < 0x11
	.space 0x11 - (. - gText_Rom_2C074C)
	.endif
	.space 0x3, 0x00

	@ src/data/union_room.h:17 sJPText_HoldPokemonJump
	.globl gText_Rom_2C0760
gText_Rom_2C0760: @ 0x082C0760
	.string "なわとびを かいさいする$"
	.if (. - gText_Rom_2C0760) > 0xd
	.error "gText_Rom_2C0760 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C0760) < 0xd
	.space 0xd - (. - gText_Rom_2C0760)
	.endif
	.space 0x3, 0x00

	@ src/data/union_room.h:18 sJPText_HoldBerryCrush
	.globl gText_Rom_2C0770
gText_Rom_2C0770: @ 0x082C0770
	.string "きのみマッシャーを かいさいする$"
	.if (. - gText_Rom_2C0770) > 0x11
	.error "gText_Rom_2C0770 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C0770) < 0x11
	.space 0x11 - (. - gText_Rom_2C0770)
	.endif
	.space 0x3, 0x00

	@ src/data/union_room.h:19 sJPText_HoldBerryPicking
	.globl gText_Rom_2C0784
gText_Rom_2C0784: @ 0x082C0784
	.string "きのみどりを かいさいする$"
	.if (. - gText_Rom_2C0784) > 0xe
	.error "gText_Rom_2C0784 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C0784) < 0xe
	.space 0xe - (. - gText_Rom_2C0784)
	.endif
	.space 0x2, 0x00

	@ src/data/union_room.h:20 sJPText_HoldSpinTrade
	.globl gText_Rom_2C0794
gText_Rom_2C0794: @ 0x082C0794
	.string "ぐるぐるこうかんを かいさいする$"
	.if (. - gText_Rom_2C0794) > 0x11
	.error "gText_Rom_2C0794 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C0794) < 0x11
	.space 0x11 - (. - gText_Rom_2C0794)
	.endif
	.space 0x3, 0x00

	@ src/data/union_room.h:21 sJPText_HoldSpinShop
	.globl gText_Rom_2C07A8
gText_Rom_2C07A8: @ 0x082C07A8
sJPText_HoldSpinShop:
	.string "ぐるぐるショップを かいさいする$"
	.if (. - gText_Rom_2C07A8) > 0x11
	.error "gText_Rom_2C07A8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C07A8) < 0x11
	.space 0x11 - (. - gText_Rom_2C07A8)
	.endif

	.space 3, 0 @ align sJPLinkGroupActionTexts to 4 bytes

sJPLinkGroupActionTexts: @ 0x082C07BC, unused
	.4byte gText_Rom_2C06DC @ sJPText_SingleBattle
	.4byte gText_Rom_2C06EC @ sJPText_DoubleBattle
	.4byte gText_Rom_2C06FC @ sJPText_MultiBattle
	.4byte gText_Rom_2C070C @ sJPText_TradePokemon
	.4byte gText_Rom_2C0720 @ sJPText_Chat
	.4byte gText_Rom_2C0730 @ sJPText_DistWonderCard
	.4byte gText_Rom_2C073C @ sJPText_DistWonderNews
	.4byte gText_Rom_2C0730 @ sJPText_DistWonderCard
	.4byte gText_Rom_2C0760 @ sJPText_HoldPokemonJump
	.4byte gText_Rom_2C0770 @ sJPText_HoldBerryCrush
	.4byte gText_Rom_2C0784 @ sJPText_HoldBerryPicking
	.4byte gText_Rom_2C0784 @ sJPText_HoldBerryPicking
	.4byte gText_Rom_2C0794 @ sJPText_HoldSpinTrade
	.4byte gText_Rom_2C07A8 @ sJPText_HoldSpinShop

sText_1PlayerNeeded: @ 0x082C07F4
	.string "あと1にん\nひつよう$"
sText_2PlayersNeeded: @ 0x082C07FF
	.string "あと2にん\nひつよう$"
sText_3PlayersNeeded: @ 0x082C080A
	.string "あと3にん\nひつよう$"
sText_4PlayersNeeded: @ 0x082C0815
	.string "あと4にん\nひつよう$"
sText_2PlayerMode: @ 0x082C0820
	.string "2にん\nプレイ$"
sText_3PlayerMode: @ 0x082C0828
	.string "3にん\nプレイ$"
sText_4PlayerMode: @ 0x082C0830
	.string "4にん\nプレイ$"
sText_5PlayerMode: @ 0x082C0838
	.string "5にん\nプレイ$"
	.globl gUnknown_82C0840
gUnknown_82C0840: @ 0x082C0840

sPlayersNeededOrModeTexts: @ 0x082C0840, const u8 *[5][5]
	@ 2 players required
	.4byte sText_1PlayerNeeded, sText_2PlayerMode, 0, 0, 0
	@ 4 players required
	.4byte sText_3PlayersNeeded, sText_2PlayersNeeded, sText_1PlayerNeeded, sText_4PlayerMode, 0
	@ 2-5 players required
	.4byte sText_1PlayerNeeded, sText_2PlayerMode, sText_3PlayerMode, sText_4PlayerMode, sText_5PlayerMode
	@ 3-5 players required
	.4byte sText_2PlayersNeeded, sText_1PlayerNeeded, sText_3PlayerMode, sText_4PlayerMode, sText_5PlayerMode
	@ 2-4 players required
	.4byte sText_1PlayerNeeded, sText_2PlayerMode, sText_3PlayerMode, sText_4PlayerMode, 0
	.globl gUnknown_82C08A4
gUnknown_82C08A4: @ 0x082C08A4

	@ src/data/union_room.h:88 sText_BButtonCancel (+2 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2C08A4
gText_Rom_2C08A4: @ 0x082C08A4
sText_BButtonCancel:
	.string "{B_BUTTON}やめる$"
	.if (. - gText_Rom_2C08A4) != 0x6
	.error "gText_Rom_2C08A4 must retain its original byte length"
	.endif
	.globl gText_Rom_2C08A6
	.set gText_Rom_2C08A6, gText_Rom_2C08A4 + 0x2

	.space 2, 0 @ align sJPText_SearchingForParticipants
sJPText_SearchingForParticipants: @ 0x082C08AC, unused
	.string "ため\nさんかしゃ ぼしゅうちゅう です！$"
	.space 3, 0 @ alignment
	.globl gUnknown_82C08C4
gUnknown_82C08C4: @ 0x082C08C4

sText_PlayerContactedYouForXAccept: @ 0x082C08C4
	.string "{STR_VAR_2}から れんらくあり！\n{STR_VAR_1}を しますか？$"
	.space 1, 0 @ alignment
	.globl gUnknown_82C08DC
gUnknown_82C08DC: @ 0x082C08DC

sText_PlayerContactedYouShareX: @ 0x082C08DC
	.string "{STR_VAR_2}から れんらくあり！\n{STR_VAR_1}を くばりますか？$"
	.space 3, 0 @ alignment
	.globl gUnknown_82C08F8
gUnknown_82C08F8: @ 0x082C08F8

	@ asm/union_room.s:1352 sub_08012AC4
	.globl gText_Rom_2C08F8
gText_Rom_2C08F8: @ 0x082C08F8
sText_PlayerContactedYouAddToMembers:
	.string "{STR_VAR_2}から　れんらくあり！\nメンバーに　しますか？$"
	.if (. - gText_Rom_2C08F8) > 0x19
	.error "gText_Rom_2C08F8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C08F8) < 0x19
	.space 0x19 - (. - gText_Rom_2C08F8)
	.endif
	.space 0x3, 0x00
	.globl gUnknown_82C0914
gUnknown_82C0914: @ 0x082C0914

sText_AreTheseMembersOK: @ 0x082C0914
	.string "{STR_VAR_1}！\nこの メンバーで よろしいですか？$"
	.space 2, 0 @ alignment
	.globl gUnknown_82C092C
gUnknown_82C092C: @ 0x082C092C

sText_CancelModeWithTheseMembers: @ 0x082C092C
	.string "この メンバーで {STR_VAR_1}を\nするのは やめますか？$"
	.space 3, 0 @ alignment
	.globl gUnknown_82C0948
gUnknown_82C0948: @ 0x082C0948

	@ asm/union_room.s:931 sub_08012288
	.globl gText_Rom_2C0948
gText_Rom_2C0948: @ 0x082C0948
sText_AnOKWasSentToPlayer:
	.string "{STR_VAR_1}に　OKの\nへんじを　だしました$"
	.if (. - gText_Rom_2C0948) > 0x13
	.error "gText_Rom_2C0948 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C0948) < 0x13
	.space 0x13 - (. - gText_Rom_2C0948)
	.endif

	.space 1, 0 @ align sText_OtherTrainerUnavailableNow
sText_OtherTrainerUnavailableNow: @ 0x082C095C
	.string "あいての\nつごうが わるいみたい…\p$"
	.space 1, 0 @ align sText_CantTransmitTrainerTooFar
sText_CantTransmitTrainerTooFar: @ 0x082C0970
	.string "まだ とおくの かたとは\nつうしんは できません\p$"
	.space 2, 0 @ align sText_TrainersNotReadyYet
sText_TrainersNotReadyYet: @ 0x082C098C
	.string "あいての じゅんびが\nできていません\p$"
	.globl gUnknown_82C09A0
gUnknown_82C09A0: @ 0x082C09A0

sCantTransmitToTrainerTexts: @ 0x082C09A0
	.4byte sText_CantTransmitTrainerTooFar
	.4byte sText_TrainersNotReadyYet
	.globl gUnknown_82C09A8
gUnknown_82C09A8: @ 0x082C09A8

sText_ModeWithTheseMembersWillBeCanceled: @ 0x082C09A8
	.string "この メンバーで {STR_VAR_1}を\nするのは やめます{PAUSE 60}$"
	.space 2, 0 @ align sText_MemberNoLongerAvailable
sText_MemberNoLongerAvailable: @ 0x082C09C4
	.string "つごうが わるくなってしまった\nメンバーが います\p$"
	.space 1, 0 @ alignment
	.globl gUnknown_82C09E0
gUnknown_82C09E0: @ 0x082C09E0

sPlayerUnavailableTexts: @ 0x082C09E0
	.4byte sText_OtherTrainerUnavailableNow
	.4byte sText_MemberNoLongerAvailable
sText_TrainerAppearsUnavailable: @ 0x082C09E8
	.string "つごうが わるいみたい…\p$"
	.space 2, 0 @ alignment
	.globl gUnknown_82C09F8
gUnknown_82C09F8: @ 0x082C09F8

	@ asm/union_room.s:1506 sub_08012C60
	.globl gText_Rom_2C09F8
gText_Rom_2C09F8: @ 0x082C09F8
sText_PlayerSentBackOK:
	.string "{STR_VAR_1}から　OKとの\nへんじが　ありました！$"
	.if (. - gText_Rom_2C09F8) > 0x16
	.error "gText_Rom_2C09F8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C09F8) < 0x16
	.space 0x16 - (. - gText_Rom_2C09F8)
	.endif
	.space 0x2, 0x00
	.globl gUnknown_82C0A10
gUnknown_82C0A10: @ 0x082C0A10

	@ asm/union_room.s:1513 sub_08012C60
	.globl gText_Rom_2C0A10
gText_Rom_2C0A10: @ 0x082C0A10
sText_PlayerOKdRegistration:
	.string "{STR_VAR_1}から　メンバー　とうろく\nOKとの　れんらくが　きました！$"
	.if (. - gText_Rom_2C0A10) > 0x20
	.error "gText_Rom_2C0A10 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C0A10) < 0x20
	.space 0x20 - (. - gText_Rom_2C0A10)
	.endif

sText_PlayerRepliedNo: @ 0x082C0A30
	.string "{STR_VAR_1}から NGとの\nへんじが きてしまいました…\p$"
	.space 2, 0 @ alignment
	.globl gUnknown_82C0A4C
gUnknown_82C0A4C: @ 0x082C0A4C

	@ asm/union_room.s:2354 sub_08012FEC
	.globl gText_Rom_2C0A4C
gText_Rom_2C0A4C: @ 0x082C0A4C
sText_AwaitingOtherMembers:
	.string "{STR_VAR_1}！\nほかの　メンバーを　まっています！$"
	.if (. - gText_Rom_2C0A4C) > 0x16
	.error "gText_Rom_2C0A4C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C0A4C) < 0x16
	.space 0x16 - (. - gText_Rom_2C0A4C)
	.endif
	.space 0x2, 0x00
	.globl gUnknown_82C0A64
gUnknown_82C0A64: @ 0x082C0A64

sText_QuitBeingMember: @ 0x082C0A64
	.string "メンバーから ぬけますか？$"
	.space 2, 0 @ align sText_StoppedBeingMember
sText_StoppedBeingMember: @ 0x082C0A74
	.string "メンバーから ぬけました\p$"
	.space 2, 0 @ alignment
	.globl gUnknown_82C0A84
gUnknown_82C0A84: @ 0x082C0A84

sPlayerDisconnectedTexts: @ 0x082C0A84
	.4byte 0 @ RFU_STATUS_OK
	.4byte sText_MemberNoLongerAvailable @ RFU_STATUS_FATAL_ERROR
	.4byte sText_TrainerAppearsUnavailable @ RFU_STATUS_CONNECTION_ERROR
	.4byte 0 @ RFU_STATUS_CHILD_SEND_COMPLETE
	.4byte 0 @ RFU_STATUS_NEW_CHILD_DETECTED
	.4byte 0 @ RFU_STATUS_JOIN_GROUP_OK
	.4byte sText_PlayerRepliedNo @ RFU_STATUS_JOIN_GROUP_NO
	.4byte 0 @ RFU_STATUS_WAIT_ACK_JOIN_GROUP
	.4byte 0 @ RFU_STATUS_LEAVE_GROUP_NOTICE
	.4byte sText_StoppedBeingMember @ RFU_STATUS_LEAVE_GROUP
	.globl gUnknown_82C0AAC
gUnknown_82C0AAC: @ 0x082C0AAC

	@ asm/union_room.s:5578 sub_08014DFC
	.globl gText_Rom_2C0AAC
gText_Rom_2C0AAC: @ 0x082C0AAC
sText_WirelessLinkEstablished:
	.string "ジョイスポットとの　せつぞくに\nせいこう　しました！$"
	.if (. - gText_Rom_2C0AAC) > 0x1b
	.error "gText_Rom_2C0AAC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C0AAC) < 0x1b
	.space 0x1b - (. - gText_Rom_2C0AAC)
	.endif
	.space 0x1, 0x00

	.globl gUnknown_82C0AC8
gUnknown_82C0AC8: @ 0x082C0AC8
sText_WirelessLinkDropped:
	.string "ジョイスポットから　せつぞくを\nせつだん　されました…$"
	.globl gUnknown_82C0AE4
gUnknown_82C0AE4: @ 0x082C0AE4
sText_LinkWithFriendDropped:
	.string "おともだちとの　つうしんが\nせつだん　されました…$"
	.space 2, 0 @ align sText_PlayerRepliedNo2

sText_PlayerRepliedNo2:
	.string "{STR_VAR_1}から　NGとの\nへんじが　きてしまいました…$"
	.space 3, 0 @ alignment
	.globl gUnknown_82C0B1C
gUnknown_82C0B1C: @ 0x082C0B1C
sLinkDroppedTexts:
	.4byte 0 @ RFU_STATUS_OK
	.4byte sText_LinkWithFriendDropped @ RFU_STATUS_FATAL_ERROR
	.4byte sText_LinkWithFriendDropped @ RFU_STATUS_CONNECTION_ERROR
	.4byte 0 @ RFU_STATUS_CHILD_SEND_COMPLETE
	.4byte 0 @ RFU_STATUS_NEW_CHILD_DETECTED
	.4byte 0 @ RFU_STATUS_JOIN_GROUP_OK
	.4byte sText_PlayerRepliedNo2 @ RFU_STATUS_JOIN_GROUP_NO
	.4byte 0 @ RFU_STATUS_WAIT_ACK_JOIN_GROUP
	.4byte 0 @ RFU_STATUS_LEAVE_GROUP_NOTICE
	.4byte 0 @ RFU_STATUS_LEAVE_GROUP

sText_DoYouWantXMode:
	.string "{STR_VAR_2}を　したいのかい？$"

sText_DoYouWantXMode2:
	.string "{STR_VAR_2}で　いいかしら？$"
	.byte 0 @ alignment

sDoYouWantModeTexts:
	.4byte sText_DoYouWantXMode
	.4byte sText_DoYouWantXMode2

sText_CommunicatingPleaseWait:
	@ Continues in the next generated data file.
	.string "はなしかけています…\n"

	@ data/text/cable_club.inc:142 CableClub_Text_PleaseWait
	.globl gText_Rom_2C0B6F
gText_Rom_2C0B6F: @ 0x082C0B6F
	.string "しょうしょう おまちください$"
	.if (. - gText_Rom_2C0B6F) > 0xf
	.error "gText_Rom_2C0B6F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C0B6F) < 0xf
	.space 0xf - (. - gText_Rom_2C0B6F)
	.endif
	.space 0x2, 0x00

	.globl gUnknown_82C0B80
gUnknown_82C0B80: @ 0x082C0B80
	@ Continuation of sText_AwaitingPlayersResponseAboutTrade,
	@ which starts in the preceding generated file.
	.string "{STR_VAR_1}からの　こうかんの\nへんじを　まっています…$"
	.space 3, 0 @ align sText_Communicating

sText_Communicating:
	.string "はなしかけています{PAUSE 15}・{PAUSE 15}・{PAUSE 15}・{PAUSE 15}・{PAUSE 15}・\n{PAUSE 15}・{PAUSE 15}・{PAUSE 15}・{PAUSE 15}・{PAUSE 15}・{PAUSE 15}・{PAUSE 15}・{PAUSE 15}・{PAUSE 15}・{PAUSE 15}・{PAUSE 15}・{PAUSE 15}・{PAUSE 15}・{PAUSE 15}・{PAUSE 15}・{PAUSE 15}・{PAUSE 15}・{PAUSE 15}・$"
	.byte 0 @ alignment

sText_CommunicatingWithPlayer:
	.string "{STR_VAR_1}に　はなしかけています{PAUSE 15}・{PAUSE 15}・{PAUSE 15}・\n{PAUSE 15}・{PAUSE 15}・{PAUSE 15}・{PAUSE 15}・{PAUSE 15}・{PAUSE 15}・{PAUSE 15}・{PAUSE 15}・{PAUSE 15}・{PAUSE 15}・{PAUSE 15}・{PAUSE 15}・{PAUSE 15}・{PAUSE 15}・{PAUSE 15}・{PAUSE 15}・{PAUSE 15}・{PAUSE 15}・$"
	.byte 0 @ alignment

sText_PleaseWaitAWhile:
	.string "しょうしょうおまちください{PAUSE 15}・{PAUSE 15}・{PAUSE 15}・{PAUSE 15}・{PAUSE 15}・{PAUSE 15}・\n{PAUSE 15}・{PAUSE 15}・{PAUSE 15}・{PAUSE 15}・{PAUSE 15}・{PAUSE 15}・{PAUSE 15}・{PAUSE 15}・{PAUSE 15}・{PAUSE 15}・{PAUSE 15}・{PAUSE 15}・{PAUSE 15}・{PAUSE 15}・{PAUSE 15}・{PAUSE 15}・{PAUSE 15}・{PAUSE 15}・$"
	.byte 0 @ alignment
	.globl gUnknown_82C0CD8
gUnknown_82C0CD8: @ 0x082C0CD8
sCommunicatingWaitTexts:
	.4byte sText_Communicating
	.4byte sText_CommunicatingWithPlayer
	.4byte sText_PleaseWaitAWhile

sText_HiDoSomethingMale:
	.string "やあ！\nなにか　するかい？$"
	.space 2, 0 @ align sText_HiDoSomethingFemale

sText_HiDoSomethingFemale:
	.string "こんにちは！\nなにか　する？$"
	.byte 0 @ alignment

sText_HiDoSomethingAgainMale:
	.string "{STR_VAR_1}「やあ　また　あったね！\nこんどは　なにをする？$"
	.byte 0 @ alignment

sText_HiDoSomethingAgainFemale:
	.string "{STR_VAR_1}「あ！　{PLAYER}\nこんにちは！　また　なにかする？$"
	.space 2, 0 @ alignment
	.globl gUnknown_82C0D3C
gUnknown_82C0D3C: @ 0x082C0D3C
sHiDoSomethingTexts:
	.4byte sText_HiDoSomethingMale
	.4byte sText_HiDoSomethingFemale
	.4byte sText_HiDoSomethingAgainMale
	.4byte sText_HiDoSomethingAgainFemale

sText_DoSomethingMale:
	.string "なにか　するかい？$"
	.space 2, 0 @ align sText_DoSomethingFemale

sText_DoSomethingFemale:
	.string "なにか　する？$"

sText_DoSomethingAgainMale:
	.string "{STR_VAR_1}「こんどは　なにをする？$"
	.byte 0 @ alignment

sText_DoSomethingAgainFemale:
	@ Unused in the corresponding decomp source.
	.string "{STR_VAR_1}「また　なにかする？$"
	.space 3, 0 @ alignment

sDoSomethingTexts:
	.4byte sText_DoSomethingMale
	.4byte sText_DoSomethingFemale
	.4byte sText_DoSomethingAgainMale
	.4byte sText_DoSomethingAgainMale
	@ The final entry intentionally repeats the male string.

sText_SomebodyHasContactedYou:
	.string "だれかが\nはなしかけて　きました{PAUSE 60}$"

sText_PlayerHasContactedYou:
	.string "{STR_VAR_1}が\nはなしかけて　きました{PAUSE 60}$"
	.byte 0 @ alignment
	.globl gUnknown_82C0DB8
gUnknown_82C0DB8: @ 0x082C0DB8
sPlayerContactedYouTexts:
	.4byte sText_SomebodyHasContactedYou
	.4byte sText_PlayerHasContactedYou

sText_AwaitingResponseFromTrainer:
	.string "あいての　へんじを\nまっています$"
	.space 3, 0 @ align sText_AwaitingResponseFromPlayer

sText_AwaitingResponseFromPlayer:
	.string "{STR_VAR_1}の　へんじを\nまっています$"
	.globl gUnknown_82C0DE4
gUnknown_82C0DE4: @ 0x082C0DE4
sAwaitingResponseTexts:
	.4byte sText_AwaitingResponseFromTrainer
	.4byte sText_AwaitingResponseFromPlayer
	.globl gUnknown_82C0DEC
gUnknown_82C0DEC: @ 0x082C0DEC
sText_ShowTrainerCard:
	.string "あいてが　トレーナーカードを\nみせて　きました\pこちらも　トレーナーカードを\nみせますか？$"
	.space 2, 0 @ alignment
	.globl gUnknown_82C0E1C
gUnknown_82C0E1C: @ 0x082C0E1C
sText_BattleChallenge:
	.string "あいてが　たいせんを\nもうしこんで　きました\pたいせん　しますか？$"
	.space 2, 0 @ alignment
	.globl gUnknown_82C0E40
gUnknown_82C0E40: @ 0x082C0E40
sText_ChatInvitation:
	.string "あいてが　チャット　に\nさそって　きました\pいっしょに　チャット\nしますか？$"
	.byte 0 @ alignment
	.globl gUnknown_82C0E68
gUnknown_82C0E68: @ 0x082C0E68
sText_OfferToTradeMon:
	@ Do not write "LV" as one string token here.
	@ The charmap defines LV = 0x34, but the original ROM stores
	@ the two Latin characters L = 0xC6 and V = 0xD0.
	.string "とうろく　していた\n"
	.byte 0xC6, 0xD0 @ "LV"
	.string "{DYNAMIC 0}の　{DYNAMIC 1}　と\p"
	.byte 0xC6, 0xD0 @ "LV"
	.string "{DYNAMIC 2}の　{DYNAMIC 3}　の\nこうかん　もうしこみが　きています\pこうかん　しますか？$"
	.space 3, 0 @ alignment
	.globl gUnknown_82C0EA8
gUnknown_82C0EA8: @ 0x082C0EA8
	@ Boundary of the next generated union-room data region.
