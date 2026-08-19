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
	.globl sText_ID
sText_ID:
	@ {ID} is encoded as F9 07.
	.string "{ID}$"
	.byte 0 @ alignment

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
	.globl sText_WirelessSearchCanceled
sText_WirelessSearchCanceled:
	.string "ジョイスポットの　けんさくを\nちゅうししました$"
sText_AwaitingCommunication2:
	@ Unused in the corresponding decomp source.
	.string "ともだちからの　れんらくを\nまっています$"
	.space 3, 0 @ alignment

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
	.globl sPlayersNeededOrModeTexts

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
	.globl sText_PlayerContactedYouForXAccept

sText_PlayerContactedYouForXAccept: @ 0x082C08C4
	.string "{STR_VAR_2}から れんらくあり！\n{STR_VAR_1}を しますか？$"
	.space 1, 0 @ alignment
	.globl sText_PlayerContactedYouShareX

sText_PlayerContactedYouShareX: @ 0x082C08DC
	.string "{STR_VAR_2}から れんらくあり！\n{STR_VAR_1}を くばりますか？$"
	.space 3, 0 @ alignment

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
	.globl sText_AreTheseMembersOK

sText_AreTheseMembersOK: @ 0x082C0914
	.string "{STR_VAR_1}！\nこの メンバーで よろしいですか？$"
	.space 2, 0 @ alignment
	.globl sText_CancelModeWithTheseMembers

sText_CancelModeWithTheseMembers: @ 0x082C092C
	.string "この メンバーで {STR_VAR_1}を\nするのは やめますか？$"
	.space 3, 0 @ alignment

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
	.globl sCantTransmitToTrainerTexts

sCantTransmitToTrainerTexts: @ 0x082C09A0
	.4byte sText_CantTransmitTrainerTooFar
	.4byte sText_TrainersNotReadyYet
	.globl sText_ModeWithTheseMembersWillBeCanceled

sText_ModeWithTheseMembersWillBeCanceled: @ 0x082C09A8
	.string "この メンバーで {STR_VAR_1}を\nするのは やめます{PAUSE 60}$"
	.space 2, 0 @ align sText_MemberNoLongerAvailable
sText_MemberNoLongerAvailable: @ 0x082C09C4
	.string "つごうが わるくなってしまった\nメンバーが います\p$"
	.space 1, 0 @ alignment
	.globl sPlayerUnavailableTexts

sPlayerUnavailableTexts: @ 0x082C09E0
	.4byte sText_OtherTrainerUnavailableNow
	.4byte sText_MemberNoLongerAvailable
sText_TrainerAppearsUnavailable: @ 0x082C09E8
	.string "つごうが わるいみたい…\p$"
	.space 2, 0 @ alignment

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
	.globl sText_QuitBeingMember

sText_QuitBeingMember: @ 0x082C0A64
	.string "メンバーから ぬけますか？$"
	.space 2, 0 @ align sText_StoppedBeingMember
sText_StoppedBeingMember: @ 0x082C0A74
	.string "メンバーから ぬけました\p$"
	.space 2, 0 @ alignment
	.globl sPlayerDisconnectedTexts

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

	.globl sText_WirelessLinkDropped
sText_WirelessLinkDropped:
	.string "ジョイスポットから　せつぞくを\nせつだん　されました…$"
	.globl sText_LinkWithFriendDropped
sText_LinkWithFriendDropped:
	.string "おともだちとの　つうしんが\nせつだん　されました…$"
	.space 2, 0 @ align sText_PlayerRepliedNo2

sText_PlayerRepliedNo2:
	.string "{STR_VAR_1}から　NGとの\nへんじが　きてしまいました…$"
	.space 3, 0 @ alignment
	.globl sLinkDroppedTexts
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

	.globl gText_Rom_2C0B80
gText_Rom_2C0B80: @ 0x082C0B80
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
	.globl sCommunicatingWaitTexts
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
	.globl sHiDoSomethingTexts
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
	.globl sPlayerContactedYouTexts
sPlayerContactedYouTexts:
	.4byte sText_SomebodyHasContactedYou
	.4byte sText_PlayerHasContactedYou

sText_AwaitingResponseFromTrainer:
	.string "あいての　へんじを\nまっています$"
	.space 3, 0 @ align sText_AwaitingResponseFromPlayer

sText_AwaitingResponseFromPlayer:
	.string "{STR_VAR_1}の　へんじを\nまっています$"
	.globl sAwaitingResponseTexts
sAwaitingResponseTexts:
	.4byte sText_AwaitingResponseFromTrainer
	.4byte sText_AwaitingResponseFromPlayer
	.globl sText_ShowTrainerCard
sText_ShowTrainerCard:
	.string "あいてが　トレーナーカードを\nみせて　きました\pこちらも　トレーナーカードを\nみせますか？$"
	.space 2, 0 @ alignment
	.globl sText_BattleChallenge
sText_BattleChallenge:
	.string "あいてが　たいせんを\nもうしこんで　きました\pたいせん　しますか？$"
	.space 2, 0 @ alignment
	.globl sText_ChatInvitation
sText_ChatInvitation:
	.string "あいてが　チャット　に\nさそって　きました\pいっしょに　チャット\nしますか？$"
	.byte 0 @ alignment
	.globl sText_OfferToTradeMon
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
	@ Boundary of the next generated union-room data region.
	@ asm/union_room.s:10767 sub_08017960
	.globl gText_Rom_2C0EA8
gText_Rom_2C0EA8: @ 0x082C0EA8
sText_OfferToTradeEgg:
	.string "とうろく　していた　タマゴの\nこうかん　もうしこみが　きています\lこうかん　しますか？$"
	.if (. - gText_Rom_2C0EA8) > 0x2c
	.error "gText_Rom_2C0EA8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C0EA8) < 0x2c
	.space 0x2c - (. - gText_Rom_2C0EA8)
	.endif

	@ asm/union_room.s:10805 sub_08017960
	.globl gText_Rom_2C0ED4
gText_Rom_2C0ED4: @ 0x082C0ED4
sText_ChatDropped:
	.string "かいわが　きれました\p$"
	.if (. - gText_Rom_2C0ED4) > 0xc
	.error "gText_Rom_2C0ED4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C0ED4) < 0xc
	.space 0xc - (. - gText_Rom_2C0ED4)
	.endif

	@ asm/union_room.s:1382 sub_08012B78
	.globl gText_Rom_2C0EE0
gText_Rom_2C0EE0: @ 0x082C0EE0
sText_OfferDeclined1:
	.string "もうしこみを\nことわり　ました\p$"
	.if (. - gText_Rom_2C0EE0) > 0x11
	.error "gText_Rom_2C0EE0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C0EE0) < 0x11
	.space 0x11 - (. - gText_Rom_2C0EE0)
	.endif
	.space 0x3, 0x00

	@ asm/union_room.s:1388 sub_08012B78
	.globl gText_Rom_2C0EF4
gText_Rom_2C0EF4: @ 0x082C0EF4
sText_OfferDeclined2:
	.string "おさそいを\nことわり　ました\p$"
	.if (. - gText_Rom_2C0EF4) > 0x10
	.error "gText_Rom_2C0EF4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C0EF4) < 0x10
	.space 0x10 - (. - gText_Rom_2C0EF4)
	.endif

	@ asm/union_room.s:6950 sub_080151E8
	.globl gText_Rom_2C0F04
gText_Rom_2C0F04: @ 0x082C0F04
sText_ChatEnded:
	.string "かいわを　きりました\p$"
	.if (. - gText_Rom_2C0F04) > 0xc
	.error "gText_Rom_2C0F04 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C0F04) < 0xc
	.space 0xc - (. - gText_Rom_2C0F04)
	.endif
sInvitationTexts:
	.4byte sText_ShowTrainerCard
	.4byte sText_BattleChallenge
	.4byte sText_ChatInvitation
	.4byte sText_OfferToTradeMon

	@ asm/union_room.s:10063 sub_08017484
	.globl gText_Rom_2C0F20
gText_Rom_2C0F20: @ 0x082C0F20
sText_JoinChatMale:
	.string "お！　いま　おれたち\nチャットちゅう　なんだ！\lよかったら　いっしょに　はいるかい？$"
	.if (. - gText_Rom_2C0F20) > 0x2b
	.error "gText_Rom_2C0F20 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C0F20) < 0x2b
	.space 0x2b - (. - gText_Rom_2C0F20)
	.endif
	.space 0x1, 0x00

	@ asm/union_room.s:10063 sub_08017484
	.globl gText_Rom_2C0F4C
gText_Rom_2C0F4C: @ 0x082C0F4C
sText_PlayerJoinChatMale:
	.string "{STR_VAR_1}「お！　{PLAYER}\nいま　チャットちゅう　なんだ！\lよかったら　いっしょに　はいるかい？$"
	.if (. - gText_Rom_2C0F4C) > 0x2c
	.error "gText_Rom_2C0F4C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C0F4C) < 0x2c
	.space 0x2c - (. - gText_Rom_2C0F4C)
	.endif

	@ asm/union_room.s:10063 sub_08017484
	.globl gText_Rom_2C0F78
gText_Rom_2C0F78: @ 0x082C0F78
sText_JoinChatFemale:
	.string "あ！　いまね　わたしたち\nチャット　してるんだ\lよかったら　いっしょに　しない？$"
	.if (. - gText_Rom_2C0F78) > 0x29
	.error "gText_Rom_2C0F78 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C0F78) < 0x29
	.space 0x29 - (. - gText_Rom_2C0F78)
	.endif
	.space 0x3, 0x00

	@ asm/union_room.s:10063 sub_08017484
	.globl gText_Rom_2C0FA4
gText_Rom_2C0FA4: @ 0x082C0FA4
sText_PlayerJoinChatFemale:
	.string "{STR_VAR_1}「あ！　{PLAYER}\nいまね　チャット　してるんだ\lよかったら　いっしょに　しない？$"
	.if (. - gText_Rom_2C0FA4) > 0x29
	.error "gText_Rom_2C0FA4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C0FA4) < 0x29
	.space 0x29 - (. - gText_Rom_2C0FA4)
	.endif
	.space 0x3, 0x00
	.globl sJoinChatTexts
sJoinChatTexts:
	.4byte sText_JoinChatMale
	.4byte sText_JoinChatFemale
	.4byte sText_PlayerJoinChatMale
	.4byte sText_PlayerJoinChatFemale

	@ asm/union_room.s:10185 sub_08017484
	.globl gText_Rom_2C0FE0
gText_Rom_2C0FE0: @ 0x082C0FE0
sText_TrainerAppearsBusy:
	.string "……\nいまは　とりこみちゅうの　ようだ\p$"
	.if (. - gText_Rom_2C0FE0) > 0x15
	.error "gText_Rom_2C0FE0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C0FE0) < 0x15
	.space 0x15 - (. - gText_Rom_2C0FE0)
	.endif
	.space 3, 0 @ align sText_WaitForBattleMale
sText_WaitForBattleMale:
	.string "たいせんだね！\nよーし　ちょっと　まってて！$"
	.space 1, 0 @ alignment
sText_WaitForChatMale:
	.string "チャットだね！\nわかった　ちょっと　まってて！$"
sText_ShowTrainerCardMale:
	.string "わかった！　じゃあ　あいさつがわりに\nトレーナーカードを　みせてあげるよ$"
	.space 3, 0 @ alignment
sText_WaitForBattleFemale:
	.string "たいせんね！\nよーし　ちょっと　まってて！$"
	.space 2, 0 @ alignment
sText_WaitForChatFemale:
	.string "チャットね！\nわかったわ　ちょっと　まってて！$"
sText_ShowTrainerCardFemale:
	.string "じゃあ　あいさつの　かわりに\nトレーナーカードを　みせてあげるね$"
	.space 3, 0 @ alignment
	.globl sText_WaitOrShowCardTexts
sText_WaitOrShowCardTexts:
	.4byte sText_WaitForBattleMale
	.4byte sText_WaitForChatMale
	.4byte 0
	.4byte sText_ShowTrainerCardMale
	.4byte sText_WaitForBattleFemale
	.4byte sText_WaitForChatFemale
	.4byte 0
	.4byte sText_ShowTrainerCardFemale
sText_WaitForChatMale2:
	.string "チャットだね！\nわかった　ちょっと　まってて！$"
sText_DoneWaitingBattleMale:
	.string "またせたね！\nそれじゃあ　たいせん　しようか！{PAUSE 60}$"
	.space 1, 0 @ alignment
sText_DoneWaitingChatMale:
	.string "よし！　じゃあ　いっしょに\nチャット　しようぜ！{PAUSE 60}$"
sText_DoneWaitingBattleFemale:
	.string "おまたせ！\nそれじゃあ　はじめましょう！{PAUSE 60}$"
sText_DoneWaitingChatFemale:
	.string "おまたせ！　じゃあ　いっしょに\nチャット　しましょう！{PAUSE 60}$"
	.space 1, 0 @ alignment
sText_TradeWillBeStarted:
	.string "こうかんを\nかいし　します{PAUSE 60}$"
	.space 3, 0 @ alignment
sText_BattleWillBeStarted:
	.string "たいせんを\nかいし　します！{PAUSE 60}$"
	.space 2, 0 @ alignment
sText_EnteringChat:
	.string "チャットを\nかいし　します！{PAUSE 60}$"
	.space 2, 0 @ alignment
	.globl sStartActivityTexts
sStartActivityTexts:
	.4byte sText_BattleWillBeStarted
	.4byte sText_EnteringChat
	.4byte sText_TradeWillBeStarted
	.4byte sText_BattleWillBeStarted
	.4byte sText_EnteringChat
	.4byte sText_TradeWillBeStarted
	.4byte sText_DoneWaitingBattleMale
	.4byte sText_DoneWaitingChatMale
	.4byte sText_TradeWillBeStarted
	.4byte sText_DoneWaitingBattleFemale
	.4byte sText_DoneWaitingChatFemale
	.4byte sText_TradeWillBeStarted
sText_BattleDeclinedMale:
	.string "ごめん！　ちょっと　ポケモンの\nちょうしが　わるい　みたいなんだ\lまた　こんど　たいせん　しよう\p$"
	.space 2, 0 @ alignment
sText_BattleDeclinedFemale:
	.string "ごめんなさい！\nちょっと　ポケモンの　ちょうしが\lわるい　みたいなの……\pまた　こんど\nたいせん　しようね！\p$"
	.globl sBattleDeclinedTexts
sBattleDeclinedTexts:
	.4byte sText_BattleDeclinedMale
	.4byte sText_BattleDeclinedFemale
sText_ShowTrainerCardDeclinedMale:
	.string "あれ！？　トレーナーカードが\nみあたらない　なあ\lごめん！　またこんどね\p$"
	.space 2, 0 @ alignment
sText_ShowTrainerCardDeclinedFemale:
	.string "あれ！？　トレーナーカード\nどこ　いったかな？……\lごめん！　またこんどね\p$"
	.space 1, 0 @ alignment
	.globl sShowTrainerCardDeclinedTexts
sShowTrainerCardDeclinedTexts:
	.4byte sText_ShowTrainerCardDeclinedMale
	.4byte sText_ShowTrainerCardDeclinedFemale
sText_IfYouWantToDoSomethingMale:
	.string "なにか　したくなったら\nまた　こえを　かけてくれよ\p$"
	.space 1, 0 @ alignment
sText_IfYouWantToDoSomethingFemale:
	.string "なにか　したくなったら\nまた　こえを　かけてね！\p$"
	.space 2, 0 @ alignment
	.globl sIfYouWantToDoSomethingTexts
sIfYouWantToDoSomethingTexts:
	.4byte sText_IfYouWantToDoSomethingMale
	.4byte sText_IfYouWantToDoSomethingFemale

	@ asm/union_room.s:6451 sub_080151E8
	.globl gText_Rom_2C12C4
gText_Rom_2C12C4: @ 0x082C12C4
sText_TrainerBattleBusy:
	.string "あ！　ごめん\nほかに　ようじが　あるから\lまたこんどね\p$"
	.if (. - gText_Rom_2C12C4) > 0x1d
	.error "gText_Rom_2C12C4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C12C4) < 0x1d
	.space 0x1d - (. - gText_Rom_2C12C4)
	.endif
	.space 0x3, 0x00
	.globl sText_NeedTwoMonsOfLevel30OrLower1
sText_NeedTwoMonsOfLevel30OrLower1:
	.string "たいせんを　するためには\nレベル30より　ひくい　ポケモンが\l2ひき　ひつよう　だよ\p$"

	@ asm/union_room.s:7041 sub_080151E8
	.globl gText_Rom_2C1310
gText_Rom_2C1310: @ 0x082C1310
sText_NeedTwoMonsOfLevel30OrLower2:
	.string "たいせんを　するためには\nレベル30　よりひくい　ポケモンが\l2ひき　ひつようです\p$"
	.if (. - gText_Rom_2C1310) > 0x2b
	.error "gText_Rom_2C1310 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C1310) < 0x2b
	.space 0x2b - (. - gText_Rom_2C1310)
	.endif
	.byte 0 @ alignment
sText_DeclineChatMale:
	.string "そうか\nまた　いつでも　おいでよ！\p$"
	.space 1, 0 @ alignment
stext_DeclineChatFemale:
	.string "そう……\nまた　いつでも　きてね！\p$"
	.space 1, 0 @ alignment
	.globl sDeclineChatTexts
sDeclineChatTexts:
	.4byte sText_DeclineChatMale
	.4byte stext_DeclineChatFemale
sText_ChatDeclinedMale:
	.string "あっ　ごめん！\nやっぱり　いま　つごうがわるいんだ\lまた　こんど　チャット　しような\p$"
sText_ChatDeclinedFemale:
	.string "ごめん！\nやっぱり　いま　つごうが　わるいの\lまた　こんど　チャット　しようね\p$"
	.space 3, 0 @ alignment
	.globl sChatDeclinedTexts
sChatDeclinedTexts:
	.4byte sText_ChatDeclinedMale
	.4byte sText_ChatDeclinedFemale
sText_YoureToughMale:
	.string "おー！\nなかなか　てごわいな！\p$"
	.space 3, 0 @ alignment
sText_UsedGoodMoveMale:
	.string "ここで　そんな　わざを\nだして　くるなんて　やるな！\p$"
sText_BattleSurpriseMale:
	.string "さすがだ！\nそんな　たたかいかたも　あるのか！\p$"
	.space 3, 0 @ alignment
sText_SwitchedMonsMale:
	.string "この　ポケモンを\nこんな　ばめんで　だしてくるとは！\p$"
sText_YoureToughFemale:
	.string "その　ポケモン\nすごくよく　そだてられてるね！\p$"
	.space 3, 0 @ alignment
sText_UsedGoodMoveFemale:
	.string "そうよ！\nそこで　このわざよ！！\p$"
	.space 2, 0 @ alignment
sText_BattleSurpriseFemale:
	.string "すごい！\nそんな　たたかいかたも　あるのね！\p$"
sText_SwitchedMonsFemale:
	.string "ポケモン　いれかえの　タイミングが\nぜつみょうね！\p$"
	.space 1, 0 @ alignment
	.globl sBattleReactionTexts
sBattleReactionTexts:
	.4byte sText_YoureToughMale
	.4byte sText_UsedGoodMoveMale
	.4byte sText_BattleSurpriseMale
	.4byte sText_SwitchedMonsMale
	.4byte sText_YoureToughFemale
	.4byte sText_UsedGoodMoveFemale
	.4byte sText_BattleSurpriseFemale
	.4byte sText_SwitchedMonsFemale
sText_LearnedSomethingMale:
	.string "なるほど！\nへー　ふむふむ\p$"
	.space 1, 0 @ alignment
sText_ThatsFunnyMale:
	.string "また　へんなこと　いって\nあんまり　わらわせるなよ！\p$"
sText_RandomChatMale1:
	.string "へー\nそんなことが　あったんだ\p$"
	.space 3, 0 @ alignment
sText_RandomChatMale2:
	.string "……ふんふん　なに？\nと　いうことは　こういうことか？\p$"
	.space 3, 0 @ alignment
sText_LearnedSomethingFemale:
	.string "……え？\nそんなこと　しらなかったわ！\p$"
	.space 3, 0 @ alignment
sText_ThatsFunnyFemale:
	.string "あはは！\nなにそれ！\p$"
sText_RandomChatFemale1:
	.string "あっ　そうそう！\nそのことよ！\p$"
	.space 3, 0 @ alignment
sText_RandomChatFemale2:
	.string "つまりね……\nうん！　それそれ！\p$"
	.space 2, 0 @ alignment
	.globl sChatReactionTexts
sChatReactionTexts:
	.4byte sText_LearnedSomethingMale
	.4byte sText_ThatsFunnyMale
	.4byte sText_RandomChatMale1
	.4byte sText_RandomChatMale2
	.4byte sText_LearnedSomethingFemale
	.4byte sText_ThatsFunnyFemale
	.4byte sText_RandomChatFemale1
	.4byte sText_RandomChatFemale2
sText_ShowedTrainerCardMale1:
	.string "いま　あいさつがわりに\nトレーナーカードを　みせてるんだ\p$"
	.space 2, 0 @ alignment
sText_ShowedTrainerCardMale2:
	.string "これからも\nよろしく！\p$"
	.space 3, 0 @ alignment
sText_ShowedTrainerCardFemale1:
	.string "いま　あいさつの　かわりに\nトレーナーカードを　みせあってるの\p$"
	.space 3, 0 @ alignment
sText_ShowedTrainerCardFemale2:
	.string "これからも\nよろしくね！\p$"
	.space 2, 0 @ alignment
	.globl sTrainerCardReactionTexts
sTrainerCardReactionTexts:
	.4byte sText_ShowedTrainerCardMale1
	.4byte sText_ShowedTrainerCardMale2
	.4byte sText_ShowedTrainerCardFemale1
	.4byte sText_ShowedTrainerCardFemale2
sText_MaleTraded1:
	.string "やった！\nこのポケモン　ほしかったんだ！\p$"
	.space 2, 0 @ alignment
sText_MaleTraded2:
	.string "さがしてた　ポケモンを\nやっと　こうかんして　もらったよ\p\n$"
	.space 1, 0 @ alignment
sText_FemaleTraded1:
	.string "いまね　ポケモンの\nこうかんを　してるの！\p$"
	.space 1, 0 @ alignment
sText_FemaleTraded2:
	.string "ほしい　ポケモンが\nやっと　こうかんして　もらえたわ！\p$"
	.space 3, 0 @ alignment
	.globl sTradeReactionTexts
sTradeReactionTexts:
	.4byte sText_MaleTraded1
	.4byte sText_MaleTraded2
	.4byte 0
	.4byte 0
	.4byte sText_FemaleTraded1
	.4byte sText_FemaleTraded2
	.4byte 0
	.4byte 0
	.globl sText_XCheckedTradingBoard
sText_XCheckedTradingBoard:
	.string "{STR_VAR_1}は\nこうかんけいじばんを　みた！\p$"
	.globl sText_RegisterMonAtTradingBoard
sText_RegisterMonAtTradingBoard:
	.string "いらっしゃいませ\nここでは　こうかんけいじばん　に\pごじぶんの　ポケモンを　とうろく\nすることが　できます\pとうろく　しますか？$"
	.space 3, 0 @ alignment
	.globl sText_TradingBoardInfo
sText_TradingBoardInfo:
	.string "この　こうかんけいじばん　に\nポケモンを　とうろく　しておくと\pけいじばんを　みた　トレーナーが\nその　とうろくされた　ポケモンと\pてもちの　ポケモンを\nこうかん　することが　できます\pぜひポケモンを　とうろくして\nいろいろな　トレーナー　との\lこうかんを　たのしんで　ください\pとうろく　しますか？$"
	.space 1, 0 @ alignment
sText_ThankYouForRegistering:
	.string "こうかんけいじばん　の　とうろくが\nかんりょう　しました\pごりよう　ありがとう\nございました！\p$"
	.space 3, 0 @ alignment
sText_NobodyHasRegistered:
	.string "けいじばんに　だれも　ポケモンを\nとうろく　していません\p\n$"
	.space 1, 0 @ alignment
	.globl sText_ChooseRequestedMonType
sText_ChooseRequestedMonType:
	.string "ほしい　ポケモンの　タイプを\nえらんで　ください\n$"
	.space 2, 0 @ alignment
	.globl sText_WhichMonWillYouOffer
sText_WhichMonWillYouOffer:
	.string "こうかんに　だす　ポケモンを\nてもちから　えらんで　ください\p$"
	.globl sText_RegistrationCanceled
sText_RegistrationCanceled:
	.string "とうろくを　ちゅうし　しました\p$"
	.space 3, 0 @ alignment
	.globl sText_RegistrationCompleted
sText_RegistrationCompleted:
	.string "とうろくが　かんりょう　しました！\p$"
	.space 1, 0 @ alignment
	.globl sText_TradeCanceled
sText_TradeCanceled:
	.string "こうかんを　キャンセルしました\p$"
	.space 3, 0 @ alignment

	@ asm/union_room.s:7248 sub_080151E8
	.globl gText_Rom_2C1844
gText_Rom_2C1844: @ 0x082C1844
sText_CancelRegistrationOfMon:
	.string "とうろく　されている　{STR_VAR_1}\nレベル{STR_VAR_2}を　かいじょ　しますか？$"
	.if (. - gText_Rom_2C1844) > 0x20
	.error "gText_Rom_2C1844 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C1844) < 0x20
	.space 0x20 - (. - gText_Rom_2C1844)
	.endif

	@ asm/union_room.s:7220 sub_080151E8
	.globl gText_Rom_2C1864
gText_Rom_2C1864: @ 0x082C1864
sText_CancelRegistrationOfEgg:
	.string "とうろく　されている　タマゴを\nかいじょ　しますか？$"
	.if (. - gText_Rom_2C1864) > 0x1b
	.error "gText_Rom_2C1864 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C1864) < 0x1b
	.space 0x1b - (. - gText_Rom_2C1864)
	.endif
	.space 0x1, 0x00
	.globl sText_RegistrationCanceled2
sText_RegistrationCanceled2:
	.string "とうろくを　かいじょ　しました\p$"
	.space 3, 0 @ align sText_TradeTrainersWillBeListed

sText_TradeTrainersWillBeListed: @ 0x082C1894
	@ Continues in the next generated union-room data file.
	.string "こうかんを　きぼうしているひとを\nひょうじ"
	@ src/data/easy_chat/easy_chat_group_endings.h:64 easy_chat_group_endings_line_64
	.globl gText_Rom_2C18A9
gText_Rom_2C18A9: @ 0x082C18A9
	@ Continuation of sText_TradeTrainersWillBeListed from the preceding file.
	.string "します$"
	.if (. - gText_Rom_2C18A9) > 0x4
	.error "gText_Rom_2C18A9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C18A9) < 0x4
	.space 0x4 - (. - gText_Rom_2C18A9)
	.endif
	.space 3, 0 @ align sText_ChooseTrainerToTradeWith2
sText_ChooseTrainerToTradeWith2:
	.string "こうかん　したい　トレーナーを\nえらんで　ください$"
	.space 2, 0 @ alignment
	.globl sText_AskTrainerToMakeTrade
sText_AskTrainerToMakeTrade:
	.string "{STR_VAR_1}に　こうかんを\nもうしこみ　ますか？$"
	.space 3, 0 @ align sText_AwaitingResponseFromTrainer2
sText_AwaitingResponseFromTrainer2:
	.string "……\nあいての　へんじを　まっています$"
sText_NotRegisteredAMonForTrade:
	.string "あなたが　こうかんにだす\nポケモンが　とうろくされていません\p$"
	.globl sText_DontHaveTypeTrainerWants
sText_DontHaveTypeTrainerWants:
	.string "てもちに\n{STR_VAR_1}の　ほしがっている\l{STR_VAR_2}ポケモンが　ありません\p$"
	.globl sText_DontHaveEggTrainerWants
sText_DontHaveEggTrainerWants:
	.string "{STR_VAR_1}の　ほしがっている\nタマゴを　もっていません\p$"
	.space 2, 0 @ align sText_PlayerCantTradeForYourMon
sText_PlayerCantTradeForYourMon:
	.string "いまは　{STR_VAR_1}は　あなたの\nポケモンと　こうかんできません\p$"
	.space 2, 0 @ align sText_CantTradeForPartnersMon
sText_CantTradeForPartnersMon:
	.string "{STR_VAR_1}の　ポケモンとは\nいまは　こうかんできません\p$"
	.space 2, 0 @ align sCantTradeMonTexts
sCantTradeMonTexts:
	.4byte sText_PlayerCantTradeForYourMon @ player cannot trade for your mon
	.4byte sText_CantTradeForPartnersMon @ you cannot trade for partner's mon
	.globl sText_TradeOfferRejected
sText_TradeOfferRejected:
	.string "こうかんを\nことわられ　ました\p$"
	.space 3, 0 @ alignment
	.globl sText_EggTrade
sText_EggTrade:
	.string "タマゴの"

	@ src/data/easy_chat/easy_chat_group_trainer.h:16 easy_chat_group_trainer_line_16 (+2 aliases)
	.globl gText_Rom_2C19B0
gText_Rom_2C19B0: @ 0x082C19B0
	@ Suffix of sText_EggTrade.
	.string "こうかん$"
	.if (. - gText_Rom_2C19B0) > 0x5
	.error "gText_Rom_2C19B0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C19B0) < 0x5
	.space 0x5 - (. - gText_Rom_2C19B0)
	.endif
	.space 0x3, 0x00
	.globl sText_ChooseJoinCancel
sText_ChooseJoinCancel:
	.string "{DPAD_UPDOWN}えらぶ:{A_BUTTON}さんかする:"

	@ src/data/union_room.h:88 sText_BButtonCancel (+2 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2C19C6
gText_Rom_2C19C6: @ 0x082C19C6
	@ Suffix of sText_ChooseJoinCancel.
	.string "{B_BUTTON}やめる$"
	.if (. - gText_Rom_2C19C6) != 0x6
	.error "gText_Rom_2C19C6 must retain its original byte length"
	.endif
	.globl gText_Rom_2C19C8
	.set gText_Rom_2C19C8, gText_Rom_2C19C6 + 0x2

	@ asm/union_room.s:4950 sub_08014A50
	.globl gText_Rom_2C19CC
gText_Rom_2C19CC: @ 0x082C19CC
sText_ChooseTrainer:
	.string "ともだちを　えらんでください$"
	.if (. - gText_Rom_2C19CC) > 0xf
	.error "gText_Rom_2C19CC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C19CC) < 0xf
	.space 0xf - (. - gText_Rom_2C19CC)
	.endif
	.byte 0 @ align sText_ChooseTrainerSingleBattle
sText_ChooseTrainerSingleBattle:
	.string "シングルバトルをする　ともだちを\nえらんでください$"
	.space 2, 0 @ align sText_ChooseTrainerDoubleBattle
sText_ChooseTrainerDoubleBattle:
	.string "ダブルバトルをする　ともだちを\nえらんでください$"
	.space 3, 0 @ align sText_ChooseLeaderMultiBattle
sText_ChooseLeaderMultiBattle:
	.string "マルチバトル！\nリーダーを　えらんでください$"
	.byte 0 @ align sText_ChooseTrainerToTradeWith
sText_ChooseTrainerToTradeWith:
	.string "ポケモンの　こうかんをする\nともだちを　えらんでください$"
	.space 3, 0 @ align sText_ChooseTrainerToShareWonderCards
sText_ChooseTrainerToShareWonderCards:
	.string "ふしぎなカードを　くばっている\nともだちを　えらんでください$"
	.byte 0 @ align sText_ChooseTrainerToShareWonderNews
sText_ChooseTrainerToShareWonderNews:
	.string "ふしぎなニュースを　くばっている\nともだちを　えらんでください$"
sText_ChooseLeaderPokemonJump:
	.string "ミニポケモンでジャンプ！\nリーダーを　えらんでください$"
sText_ChooseLeaderBerryCrush:
	.string "きのみクラッシュ！\nリーダーを　えらんでください$"
	.space 3, 0 @ align sText_ChooseLeaderBerryPicking
sText_ChooseLeaderBerryPicking:
	.string "ドードリオのきのみどり！\nリーダーを　えらんでください$"
sText_ChooseLeaderBerryBlender:
	.string "きのみブレンダー！\nリーダーを　えらんでください$"
	.space 3, 0 @ align sText_ChooseLeaderRecordCorner
sText_ChooseLeaderRecordCorner:
	.string "レコードコーナー！\nリーダーを　えらんでください$"
	.space 3, 0 @ align sText_ChooseLeaderCoolContest
sText_ChooseLeaderCoolContest:
	.string "かっこよさコンテスト！\nリーダーを　えらんでください$"
	.byte 0 @ align sText_ChooseLeaderBeautyContest
sText_ChooseLeaderBeautyContest:
	.string "うつくしさコンテスト！\nリーダーを　えらんでください$"
	.byte 0 @ align sText_ChooseLeaderCuteContest
sText_ChooseLeaderCuteContest:
	.string "かわいさコンテスト！\nリーダーを　えらんでください$"
	.space 2, 0 @ align sText_ChooseLeaderSmartContest
sText_ChooseLeaderSmartContest:
	.string "かしこさコンテスト！\nリーダーを　えらんでください$"
	.space 2, 0 @ align sText_ChooseLeaderToughContest
sText_ChooseLeaderToughContest:
	.string "たくましさコンテスト！\nリーダーを　えらんでください$"
	.byte 0 @ align sText_ChooseLeaderBattleTowerLv50
sText_ChooseLeaderBattleTowerLv50:
	.string "バトルタワー　レベル50！\nリーダーを　えらんでください$"
	.space 3, 0 @ align sText_ChooseLeaderBattleTowerOpenLv
sText_ChooseLeaderBattleTowerOpenLv:
	.string "バトルタワー　オープンレベル！\nリーダーを　えらんでください$"
	.byte 0 @ alignment
	.globl sChooseTrainerTexts
sChooseTrainerTexts:
	.4byte sText_ChooseTrainerSingleBattle @ LINK_GROUP_SINGLE_BATTLE
	.4byte sText_ChooseTrainerDoubleBattle @ LINK_GROUP_DOUBLE_BATTLE
	.4byte sText_ChooseLeaderMultiBattle @ LINK_GROUP_MULTI_BATTLE
	.4byte sText_ChooseTrainerToTradeWith @ LINK_GROUP_TRADE
	.4byte sText_ChooseLeaderPokemonJump @ LINK_GROUP_POKEMON_JUMP
	.4byte sText_ChooseLeaderBerryCrush @ LINK_GROUP_BERRY_CRUSH
	.4byte sText_ChooseLeaderBerryPicking @ LINK_GROUP_BERRY_PICKING
	.4byte sText_ChooseTrainerToShareWonderCards @ LINK_GROUP_WONDER_CARD
	.4byte sText_ChooseTrainerToShareWonderNews @ LINK_GROUP_WONDER_NEWS
	.4byte 0 @ LINK_GROUP_UNION_ROOM_RESUME
	.4byte 0 @ LINK_GROUP_UNION_ROOM_INIT
	.4byte 0 @ LINK_GROUP_UNK_11
	.4byte sText_ChooseLeaderRecordCorner @ LINK_GROUP_RECORD_CORNER
	.4byte sText_ChooseLeaderBerryBlender @ LINK_GROUP_BERRY_BLENDER
	.4byte 0 @ LINK_GROUP_UNK_14
	.4byte sText_ChooseLeaderCoolContest @ LINK_GROUP_COOL_CONTEST
	.4byte sText_ChooseLeaderBeautyContest @ LINK_GROUP_BEAUTY_CONTEST
	.4byte sText_ChooseLeaderCuteContest @ LINK_GROUP_CUTE_CONTEST
	.4byte sText_ChooseLeaderSmartContest @ LINK_GROUP_SMART_CONTEST
	.4byte sText_ChooseLeaderToughContest @ LINK_GROUP_TOUGH_CONTEST
	.4byte sText_ChooseLeaderBattleTowerLv50 @ LINK_GROUP_BATTLE_TOWER
	.4byte sText_ChooseLeaderBattleTowerOpenLv @ LINK_GROUP_BATTLE_TOWER_OPEN

	@ asm/union_room.s:5364 sub_08014DFC
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2C1C3C
gText_Rom_2C1C3C: @ 0x082C1C3C
sText_SearchingForWirelessSystemWait:
	.string "ジョイスポットを　さがしています\nしばらく　おまちください$"
	.if (. - gText_Rom_2C1C3C) != 0x1e
	.error "gText_Rom_2C1C3C must retain its original byte length"
	.endif
	.globl gText_Rom_2C1C4D
	.set gText_Rom_2C1C4D, gText_Rom_2C1C3C + 0x11
	.space 2, 0 @ align sText_MustHaveTwoMonsForDoubleBattle
sText_MustHaveTwoMonsForDoubleBattle:
	.string "ダブルバトルでは　2ひき　いじょうの\nポケモンが　ひつようです\p$"
	.space 3, 0 @ alignment

	@ asm/union_room.s:1443 sub_08012BB4
	.globl gText_Rom_2C1C80
gText_Rom_2C1C80: @ 0x082C1C80
sText_AwaitingPlayersResponse:
	.string "{STR_VAR_1}からの\nへんじを　まっています$"
	.if (. - gText_Rom_2C1C80) > 0x12
	.error "gText_Rom_2C1C80 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C1C80) < 0x12
	.space 0x12 - (. - gText_Rom_2C1C80)
	.endif
	.space 0x2, 0x00

	@ asm/union_room.s:1450 sub_08012BB4
	.globl gText_Rom_2C1C94
gText_Rom_2C1C94: @ 0x082C1C94
sText_PlayerHasBeenAskedToRegisterYouPleaseWait:
	.string "{STR_VAR_1}に　メンバー　とうろくを\nおねがいしています！　おまちください$"
	.if (. - gText_Rom_2C1C94) > 0x22
	.error "gText_Rom_2C1C94 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C1C94) < 0x22
	.space 0x22 - (. - gText_Rom_2C1C94)
	.endif
	.space 0x2, 0x00

	@ asm/union_room.s:5523 sub_08014DFC
	.globl gText_Rom_2C1CB8
gText_Rom_2C1CB8: @ 0x082C1CB8
sText_AwaitingResponseFromWirelessSystem:
	.string "ジョイスポットからの\nへんじを　まっています$"
	.if (. - gText_Rom_2C1CB8) > 0x17
	.error "gText_Rom_2C1CB8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C1CB8) < 0x17
	.space 0x17 - (. - gText_Rom_2C1CB8)
	.endif
	.byte 0 @ align sText_PleaseWaitForOtherTrainersToGather
sText_PleaseWaitForOtherTrainersToGather:
	.string "ほかの　さんかしゃが　そろうまで\n"
	@ data/text/cable_club.inc:142 CableClub_Text_PleaseWait
	.globl gText_Rom_2C1CE1
gText_Rom_2C1CE1: @ 0x082C1CE1
	@ Suffix of sText_PleaseWaitForOtherTrainersToGather.
	.string "しょうしょう おまちください$"
	.if (. - gText_Rom_2C1CE1) > 0xf
	.error "gText_Rom_2C1CE1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C1CE1) < 0xf
	.space 0xf - (. - gText_Rom_2C1CE1)
	.endif
sText_NoCardsSharedRightNow:
	.string "ただいま　カードの　はいふは\nおこなわれて　いないようです…$"
	.byte 0 @ align sText_NoNewsSharedRightNow
sText_NoNewsSharedRightNow:
	.string "ただいま　ニュースの　はいふは\nおこなわれて　いないようです…$"
	.globl sNoWonderSharedTexts
sNoWonderSharedTexts:
	.4byte sText_NoCardsSharedRightNow @ wonder cards
	.4byte sText_NoNewsSharedRightNow @ wonder news

	@ src/data/easy_chat/easy_chat_group_battle.h:172 easy_chat_group_battle_line_172 (+1 aliases)
	.globl gText_Rom_2C1D38
gText_Rom_2C1D38: @ 0x082C1D38
sText_Battle:
	.string "たいせん$"
	.if (. - gText_Rom_2C1D38) > 0x5
	.error "gText_Rom_2C1D38 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C1D38) < 0x5
	.space 0x5 - (. - gText_Rom_2C1D38)
	.endif
	.space 0x3, 0x00
	@ src/data/union_room.h:539 sText_Chat2 (+1 aliases)
	.globl gText_Rom_2C1D40
gText_Rom_2C1D40: @ 0x082C1D40
sText_Chat2:
	.string "チャット$"
	.if (. - gText_Rom_2C1D40) > 0x5
	.error "gText_Rom_2C1D40 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C1D40) < 0x5
	.space 0x5 - (. - gText_Rom_2C1D40)
	.endif
	.space 0x3, 0x00
	@ src/data/easy_chat/easy_chat_groups.h:57 easy_chat_groups_line_57 (+1 aliases)
	.globl gText_Rom_2C1D48
gText_Rom_2C1D48: @ 0x082C1D48
sText_Greetings:
	.string "あいさつ$"
	.if (. - gText_Rom_2C1D48) > 0x5
	.error "gText_Rom_2C1D48 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C1D48) < 0x5
	.space 0x5 - (. - gText_Rom_2C1D48)
	.endif
	.space 0x3, 0x00

	@ src/pokemon_storage_system.c:8078 pokemon_storage_system_line_8078 (+5 aliases)
	.globl gText_Rom_2C1D50
gText_Rom_2C1D50: @ 0x082C1D50
sText_Exit:
	.string "やめる$"
	.if (. - gText_Rom_2C1D50) > 0x4
	.error "gText_Rom_2C1D50 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C1D50) < 0x4
	.space 0x4 - (. - gText_Rom_2C1D50)
	.endif
	@ src/data/info_viewer.h:120 sInfoText_ChoiceClose (+4 aliases)
	.globl gText_Rom_2C1D54
gText_Rom_2C1D54: @ 0x082C1D54
sText_Exit2:
	.string "とじる$"
	.if (. - gText_Rom_2C1D54) > 0x4
	.error "gText_Rom_2C1D54 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C1D54) < 0x4
	.space 0x4 - (. - gText_Rom_2C1D54)
	.endif
	@ Decoded text from ROM range: offset=0x2C1D58, size=0x8
sText_Info:
	.string "せつめいをきく$"
	.globl sText_NameWantedOfferLv
sText_NameWantedOfferLv:
	@ Trading-board column headings:
	@   なまえ / ほしいタイプ / あげるポケモン / レベル
	.string "なまえ　　　　ほしいタイプ　あげるポケモン　　レベル$"
	.if (. - sText_NameWantedOfferLv) != 0x1B
	.error "sText_NameWantedOfferLv must retain its original byte length"
	.endif

	@ This suffix is also referenced independently by Berry Blender code.
	.globl gText_Rom_2C1D77
	.set gText_Rom_2C1D77, sText_NameWantedOfferLv + 0x17
	.set sText_TheLevelIs, gText_Rom_2C1D77
	.space 0x1, 0x00 @ alignment

	@ src/data/script_menu.h:500 script_menu_line_500 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2C1D7C
gText_Rom_2C1D7C: @ 0x082C1D7C
sText_SingleBattle:
	.string "シングルバトル$"
	.if (. - gText_Rom_2C1D7C) != 0x8
	.error "gText_Rom_2C1D7C must retain its original byte length"
	.endif
	.globl gText_Rom_2C1D80
	.set gText_Rom_2C1D80, gText_Rom_2C1D7C + 0x4

	@ src/battle_debug.c:431 battle_debug_line_431 (+2 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2C1D84
gText_Rom_2C1D84: @ 0x082C1D84
sText_DoubleBattle:
	.string "ダブルバトル$"
	.if (. - gText_Rom_2C1D84) != 0x7
	.error "gText_Rom_2C1D84 must retain its original byte length"
	.endif
	.globl gText_Rom_2C1D87
	.set gText_Rom_2C1D87, gText_Rom_2C1D84 + 0x3
	.space 0x1, 0x00

	@ src/data/script_menu.h:502 script_menu_line_502 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2C1D8C
gText_Rom_2C1D8C: @ 0x082C1D8C
sText_MultiBattle:
	.string "マルチバトル$"
	.if (. - gText_Rom_2C1D8C) != 0x7
	.error "gText_Rom_2C1D8C must retain its original byte length"
	.endif
	.globl gText_Rom_2C1D8F
	.set gText_Rom_2C1D8F, gText_Rom_2C1D8C + 0x3
	.space 0x1, 0x00
	@ src/data/union_room.h:548 sText_PokemonTrades
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2C1D94
gText_Rom_2C1D94: @ 0x082C1D94
sText_PokemonTrades:
	.string "ポケモンこうかん$"
	.if (. - gText_Rom_2C1D94) != 0x9
	.error "gText_Rom_2C1D94 must retain its original byte length"
	.endif
	.globl gText_Rom_2C1D98
	.set gText_Rom_2C1D98, gText_Rom_2C1D94 + 0x4
	.space 0x3, 0x00

	.globl gText_Rom_Chat
gText_Rom_Chat: @ 0x082C1DA0
	.string "チャット$"
	.if (. - gText_Rom_Chat) > 0x5
	.error "gText_Rom_Chat may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_Chat) < 0x5
	.space 0x5 - (. - gText_Rom_Chat)
	.endif
	.space 0x3, 0x00
	@ src/data/easy_chat/easy_chat_group_hobbies.h:58 easy_chat_group_hobbies_line_58 (+1 aliases)
	.globl gText_Rom_2C1DA8
gText_Rom_2C1DA8: @ 0x082C1DA8
sText_Cards:
	.string "カード$"
	.if (. - gText_Rom_2C1DA8) > 0x4
	.error "gText_Rom_2C1DA8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C1DA8) < 0x4
	.space 0x4 - (. - gText_Rom_2C1DA8)
	.endif
	@ src/data/union_room.h:551 sText_WonderCards (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2C1DAC
gText_Rom_2C1DAC: @ 0x082C1DAC
sText_WonderCards:
	.string "ふしぎなカード$"
	.if (. - gText_Rom_2C1DAC) != 0x8
	.error "gText_Rom_2C1DAC must retain its original byte length"
	.endif
	.globl gText_Rom_2C1DB0
	.set gText_Rom_2C1DB0, gText_Rom_2C1DAC + 0x4

	@ src/data/union_room.h:552 sText_WonderNews (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2C1DB4
gText_Rom_2C1DB4: @ 0x082C1DB4
sText_WonderNews:
	.string "ふしぎなニュース$"
	.if (. - gText_Rom_2C1DB4) != 0x9
	.error "gText_Rom_2C1DB4 must retain its original byte length"
	.endif
	.globl gText_Rom_2C1DB8
	.set gText_Rom_2C1DB8, gText_Rom_2C1DB4 + 0x4
	.space 0x3, 0x00
	@ src/data/script_menu.h:535 script_menu_line_535 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2C1DC0
gText_Rom_2C1DC0: @ 0x082C1DC0
sText_PokemonJump:
	.string "ポケモンジャンプ$"
	.if (. - gText_Rom_2C1DC0) != 0x9
	.error "gText_Rom_2C1DC0 must retain its original byte length"
	.endif
	.globl gText_Rom_2C1DC4
	.set gText_Rom_2C1DC4, gText_Rom_2C1DC0 + 0x4
	.space 0x3, 0x00

	@ src/data/script_menu.h:507 gText_BerryCrush3 (+3 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2C1DCC
gText_Rom_2C1DCC: @ 0x082C1DCC
sText_BerryCrush:
	.string "きのみクラッシュ$"
	.if (. - gText_Rom_2C1DCC) != 0x9
	.error "gText_Rom_2C1DCC must retain its original byte length"
	.endif
	.globl gText_Rom_2C1DCF
	.set gText_Rom_2C1DCF, gText_Rom_2C1DCC + 0x3
	.space 0x3, 0x00
	@ src/data/union_room.h:555 sText_BerryPicking
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2C1DD8
gText_Rom_2C1DD8: @ 0x082C1DD8
sText_BerryPicking:
	.string "きのみどり$"
	.if (. - gText_Rom_2C1DD8) != 0x6
	.error "gText_Rom_2C1DD8 must retain its original byte length"
	.endif
	.globl gText_Rom_2C1DDA
	.set gText_Rom_2C1DDA, gText_Rom_2C1DD8 + 0x2
sText_Search: @ 0x082C1DDE
	.string "　　サーチ$"

	@ src/data/union_room.h:557 sText_BerryBlender
	.globl gText_Rom_2C1DE4
gText_Rom_2C1DE4: @ 0x082C1DE4
sText_BerryBlender:
	.string "きのみブレンダー$"
	.if (. - gText_Rom_2C1DE4) > 0x9
	.error "gText_Rom_2C1DE4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C1DE4) < 0x9
	.space 0x9 - (. - gText_Rom_2C1DE4)
	.endif
	.space 3, 0 @ align sText_RecordCorner

sText_RecordCorner: @ 0x082C1DF0
	.string "レコードコーナー$"
	.space 3, 0 @ alignment

	@ src/data/text/ribbon_descriptions.h:3 gRibbonDescriptionPart1_CoolContest (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2C1DFC
gText_Rom_2C1DFC: @ 0x082C1DFC
sText_CoolContest:
	.string "かっこよさコンテスト$"
	.if (. - gText_Rom_2C1DFC) != 0xb
	.error "gText_Rom_2C1DFC must retain its original byte length"
	.endif
	.globl gText_Rom_2C1E01
	.set gText_Rom_2C1E01, gText_Rom_2C1DFC + 0x5
	.globl gText_Rom_2C1E03
	.set gText_Rom_2C1E03, gText_Rom_2C1DFC + 0x7
	.space 0x1, 0x00

	@ src/data/text/ribbon_descriptions.h:4 gRibbonDescriptionPart1_BeautyContest (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2C1E08
gText_Rom_2C1E08: @ 0x082C1E08
sText_BeautyContest:
	.string "うつくしさコンテスト$"
	.if (. - gText_Rom_2C1E08) != 0xb
	.error "gText_Rom_2C1E08 must retain its original byte length"
	.endif
	.globl gText_Rom_2C1E0D
	.set gText_Rom_2C1E0D, gText_Rom_2C1E08 + 0x5
	.globl gText_Rom_2C1E0F
	.set gText_Rom_2C1E0F, gText_Rom_2C1E08 + 0x7
	.space 0x1, 0x00

	@ src/data/text/ribbon_descriptions.h:5 gRibbonDescriptionPart1_CuteContest (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2C1E14
gText_Rom_2C1E14: @ 0x082C1E14
sText_CuteContest:
	.string "かわいさコンテスト$"
	.if (. - gText_Rom_2C1E14) != 0xa
	.error "gText_Rom_2C1E14 must retain its original byte length"
	.endif
	.globl gText_Rom_2C1E18
	.set gText_Rom_2C1E18, gText_Rom_2C1E14 + 0x4
	.globl gText_Rom_2C1E1A
	.set gText_Rom_2C1E1A, gText_Rom_2C1E14 + 0x6
	.space 0x2, 0x00

	@ src/data/text/ribbon_descriptions.h:6 gRibbonDescriptionPart1_SmartContest (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2C1E20
gText_Rom_2C1E20: @ 0x082C1E20
sText_SmartContest:
	.string "かしこさコンテスト$"
	.if (. - gText_Rom_2C1E20) != 0xa
	.error "gText_Rom_2C1E20 must retain its original byte length"
	.endif
	.globl gText_Rom_2C1E24
	.set gText_Rom_2C1E24, gText_Rom_2C1E20 + 0x4
	.globl gText_Rom_2C1E26
	.set gText_Rom_2C1E26, gText_Rom_2C1E20 + 0x6
	.space 0x2, 0x00

	@ src/data/text/ribbon_descriptions.h:7 gRibbonDescriptionPart1_ToughContest (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2C1E2C
gText_Rom_2C1E2C: @ 0x082C1E2C
sText_ToughContest:
	.string "たくましさコンテスト$"
	.if (. - gText_Rom_2C1E2C) != 0xb
	.error "gText_Rom_2C1E2C must retain its original byte length"
	.endif
	.globl gText_Rom_2C1E31
	.set gText_Rom_2C1E31, gText_Rom_2C1E2C + 0x5
	.globl gText_Rom_2C1E33
	.set gText_Rom_2C1E33, gText_Rom_2C1E2C + 0x7
	.space 1, 0 @ align sText_BattleTowerLv50

sText_BattleTowerLv50: @ 0x082C1E38
	@ Continues into gText_Rom_2C1E3F ("レベル50$").
	.string "バトルタワー　"

	@ src/strings.c:468 gText_Lv50
	.globl gText_Rom_2C1E3F
gText_Rom_2C1E3F: @ 0x082C1E3F
	.globl gText_Lv50
gText_Lv50:
	.string "レベル50$"
	.if (. - gText_Rom_2C1E3F) > 0x6
	.error "gText_Rom_2C1E3F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C1E3F) < 0x6
	.space 0x6 - (. - gText_Rom_2C1E3F)
	.endif
	.space 0x3, 0x00

	@ src/data/union_room.h:565 sText_BattleTowerOpenLv
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2C1E48
gText_Rom_2C1E48: @ 0x082C1E48
sText_BattleTowerOpenLv:
	.string "バトルタワー オープンレベル$"
	.if (. - gText_Rom_2C1E48) != 0xf
	.error "gText_Rom_2C1E48 must retain its original byte length"
	.endif
	.globl gText_Rom_2C1E4F
	.set gText_Rom_2C1E4F, gText_Rom_2C1E48 + 0x7
	.globl gText_Rom_2C1E53
	.set gText_Rom_2C1E53, gText_Rom_2C1E48 + 0xb
	.space 0x1, 0x00
	.globl sLinkGroupActivityNameTexts
sLinkGroupActivityNameTexts:
	.4byte 0x082C0640 @ ACTIVITY_NONE
	.4byte sText_SingleBattle @ ACTIVITY_BATTLE_SINGLE
	.4byte sText_DoubleBattle @ ACTIVITY_BATTLE_DOUBLE
	.4byte sText_MultiBattle @ ACTIVITY_BATTLE_MULTI
	.4byte sText_PokemonTrades @ ACTIVITY_TRADE
	.4byte gText_Rom_Chat @ ACTIVITY_CHAT
	.4byte sText_WonderCards @ ACTIVITY_WONDER_CARD_DUP
	.4byte sText_WonderNews @ ACTIVITY_WONDER_NEWS_DUP
	.4byte sText_Cards @ ACTIVITY_CARD
	.4byte sText_PokemonJump @ ACTIVITY_POKEMON_JUMP
	.4byte sText_BerryCrush @ ACTIVITY_BERRY_CRUSH
	.4byte sText_BerryPicking @ ACTIVITY_BERRY_PICK
	.4byte 0x082C1DE0 @ ACTIVITY_SEARCH: sText_Search + 2
	.4byte 0x082C0640 @ ACTIVITY_SPIN_TRADE
	.4byte sText_BattleTowerOpenLv @ ACTIVITY_BATTLE_TOWER_OPEN
	.4byte sText_RecordCorner @ ACTIVITY_RECORD_CORNER
	.4byte sText_BerryBlender @ ACTIVITY_BERRY_BLENDER
	.4byte 0x082C0640 @ ACTIVITY_ACCEPT
	.4byte 0x082C0640 @ ACTIVITY_DECLINE
	.4byte 0x082C0640 @ ACTIVITY_NPCTALK
	.4byte 0x082C0640 @ ACTIVITY_PLYRTALK
	.4byte 0x082C0640 @ unused activity
	.4byte 0x082C0640 @ unused activity
	.4byte sText_CoolContest @ ACTIVITY_CONTEST_COOL
	.4byte sText_BeautyContest @ ACTIVITY_CONTEST_BEAUTY
	.4byte sText_CuteContest @ ACTIVITY_CONTEST_CUTE
	.4byte sText_SmartContest @ ACTIVITY_CONTEST_SMART
	.4byte sText_ToughContest @ ACTIVITY_CONTEST_TOUGH
	.4byte sText_BattleTowerLv50 @ ACTIVITY_BATTLE_TOWER

	@ asm/union_room.s:11199 sub_08017CDC
	.globl gText_Rom_2C1ECC
gText_Rom_2C1ECC: @ 0x082C1ECC
sText_ItsNormalCard:
	.string "ノーマルカードだ！$"
	.if (. - gText_Rom_2C1ECC) > 0xa
	.error "gText_Rom_2C1ECC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C1ECC) < 0xa
	.space 0xa - (. - gText_Rom_2C1ECC)
	.endif
	.space 0x2, 0x00

	@ asm/union_room.s:11199 sub_08017CDC
	.globl gText_Rom_2C1ED8
gText_Rom_2C1ED8: @ 0x082C1ED8
sText_ItsBronzeCard:
	.string "ブロンズカードだ！$"
	.if (. - gText_Rom_2C1ED8) > 0xa
	.error "gText_Rom_2C1ED8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C1ED8) < 0xa
	.space 0xa - (. - gText_Rom_2C1ED8)
	.endif
	.space 0x2, 0x00

	@ asm/union_room.s:11199 sub_08017CDC
	.globl gText_Rom_2C1EE4
gText_Rom_2C1EE4: @ 0x082C1EE4
sText_ItsCopperCard:
	.string "カッパーカードだ！$"
	.if (. - gText_Rom_2C1EE4) > 0xa
	.error "gText_Rom_2C1EE4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C1EE4) < 0xa
	.space 0xa - (. - gText_Rom_2C1EE4)
	.endif
	.space 0x2, 0x00

	@ asm/union_room.s:11199 sub_08017CDC
	.globl gText_Rom_2C1EF0
gText_Rom_2C1EF0: @ 0x082C1EF0
sText_ItsSilverCard:
	.string "シルバーカードだ！$"
	.if (. - gText_Rom_2C1EF0) > 0xa
	.error "gText_Rom_2C1EF0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C1EF0) < 0xa
	.space 0xa - (. - gText_Rom_2C1EF0)
	.endif
	.space 0x2, 0x00

	@ asm/union_room.s:11199 sub_08017CDC
	.globl gText_Rom_2C1EFC
gText_Rom_2C1EFC: @ 0x082C1EFC
sText_ItsGoldCard:
	.string "ゴールドカードだ！$"
	.if (. - gText_Rom_2C1EFC) > 0xa
	.error "gText_Rom_2C1EFC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C1EFC) < 0xa
	.space 0xa - (. - gText_Rom_2C1EFC)
	.endif
	.space 0x2, 0x00
	.globl sCardColorTexts
sCardColorTexts:
	.4byte sText_ItsNormalCard
	.4byte sText_ItsBronzeCard
	.4byte sText_ItsCopperCard
	.4byte sText_ItsSilverCard
	.4byte sText_ItsGoldCard
	.globl sText_TrainerCardInfoPage1
sText_TrainerCardInfoPage1:
	.string "{DYNAMIC 0}の　{DYNAMIC 1}の\nトレーナーカードを　みせてもらった\l{DYNAMIC 2}\pポケモンずかん　{DYNAMIC 3}\nプレイ　じかん　{DYNAMIC 4}:{DYNAMIC 5}\p$"
	.byte 0 @ alignment
	.globl sText_TrainerCardInfoPage2
sText_TrainerCardInfoPage2:
	.string "たいせん　かち{DYNAMIC 0}　まけ{DYNAMIC 2}\nこうかん　{DYNAMIC 3}かい\p「{DYNAMIC 4}　{DYNAMIC 5}\n　{DYNAMIC 6}　{DYNAMIC 7}\p$"

sText_GladToMeetYouMale:
	.string "{DYNAMIC 1}「これからも　よろしく！{PAUSE 60}$"
	.space 2, 0 @ align sText_GladToMeetYouFemale

sText_GladToMeetYouFemale:
	.string "{DYNAMIC 1}「これからも　よろしくね！{PAUSE 60}$"
	.byte 0 @ alignment
	.globl sGladToMeetYouTexts
sGladToMeetYouTexts:
	.4byte sText_GladToMeetYouMale
	.4byte sText_GladToMeetYouFemale
	.globl sText_FinishedCheckingPlayersTrainerCard
sText_FinishedCheckingPlayersTrainerCard:
	.string "{DYNAMIC 1}の　トレーナーカードを\nみおわった！{PAUSE 60}$"
	.globl sWindowTemplate_BButtonCancel
sWindowTemplate_BButtonCancel:
	.byte 0 @ bg
	.byte 0 @ tilemapLeft
	.byte 0 @ tilemapTop
	.byte 30 @ width
	.byte 2 @ height
	.byte 15 @ paletteNum
	.2byte 0x0008 @ baseBlock
	.globl sLinkGroupToActivityAndCapacity
sLinkGroupToActivityAndCapacity:
	.4byte 0x00000201 @ LINK_GROUP_SINGLE_BATTLE
	.4byte 0x00000202 @ LINK_GROUP_DOUBLE_BATTLE
	.4byte 0x00000403 @ LINK_GROUP_MULTI_BATTLE
	.4byte 0x00000204 @ LINK_GROUP_TRADE
	.4byte 0x00002509 @ LINK_GROUP_POKEMON_JUMP
	.4byte 0x0000250A @ LINK_GROUP_BERRY_CRUSH
	.4byte 0x0000350B @ LINK_GROUP_BERRY_PICKING
	.4byte 0x00000000 @ LINK_GROUP_WONDER_CARD
	.4byte 0x00000000 @ LINK_GROUP_WONDER_NEWS
	.4byte 0x00000000 @ LINK_GROUP_UNION_ROOM_RESUME
	.4byte 0x00000000 @ LINK_GROUP_UNION_ROOM_INIT
	.4byte 0x00000000 @ LINK_GROUP_UNK_11
	.4byte 0x0000240F @ LINK_GROUP_RECORD_CORNER
	.4byte 0x00002410 @ LINK_GROUP_BERRY_BLENDER
	.4byte 0x00000000 @ LINK_GROUP_UNK_14
	.4byte 0x00002417 @ LINK_GROUP_COOL_CONTEST
	.4byte 0x00002418 @ LINK_GROUP_BEAUTY_CONTEST
	.4byte 0x00002419 @ LINK_GROUP_CUTE_CONTEST
	.4byte 0x0000241A @ LINK_GROUP_SMART_CONTEST
	.4byte 0x0000241B @ LINK_GROUP_TOUGH_CONTEST
	.4byte 0x0000021C @ LINK_GROUP_BATTLE_TOWER
	.4byte 0x0000020E @ LINK_GROUP_BATTLE_TOWER_OPEN
	.globl sWindowTemplate_PlayerList
sWindowTemplate_PlayerList:
	.byte 0 @ bg
	.byte 1 @ tilemapLeft
	.byte 3 @ tilemapTop
	.byte 13 @ width
	.byte 8 @ height
	.byte 15 @ paletteNum
	.2byte 0x0044 @ baseBlock
	.globl sWindowTemplate_5PlayerList
sWindowTemplate_5PlayerList:
	.byte 0 @ bg
	.byte 1 @ tilemapLeft
	.byte 3 @ tilemapTop
	.byte 13 @ width
	.byte 10 @ height
	.byte 15 @ paletteNum
	.2byte 0x0044 @ baseBlock
	.globl sWindowTemplate_NumPlayerMode
sWindowTemplate_NumPlayerMode:
	.byte 0 @ bg
	.byte 16 @ tilemapLeft
	.byte 3 @ tilemapTop
	.byte 7 @ width
	.byte 4 @ height
	.byte 15 @ paletteNum
	.2byte 0x00C6 @ baseBlock

sPossibleGroupMembersListMenuItems: @ 0x082C203C
	.4byte 0x082C0640 @ sText_EmptyString
	.4byte 0
	.4byte 0x082C0640 @ sText_EmptyString
	.4byte 1
	.4byte 0x082C0640 @ sText_EmptyString
	.4byte 2
	.4byte 0x082C0640 @ sText_EmptyString
	.4byte 3
	.4byte 0x082C0640 @ sText_EmptyString
	.4byte 4
	.globl sListMenuTemplate_PossibleGroupMembers
sListMenuTemplate_PossibleGroupMembers:
	.4byte sPossibleGroupMembersListMenuItems @ items
	.4byte 0 @ moveCursorFunc
	.4byte sub_08012D7C @ ItemPrintFunc_PossibleGroupMembers + 1 @ itemPrintFunc
	.2byte 5 @ totalItems
	.2byte 5 @ maxShowed
	.byte 0x00, 0x00, 0x01, 0x00, 0x20, 0x31, 0x00, 0x41 @ packed window/cursor/font fields
	.globl sWindowTemplate_GroupList
sWindowTemplate_GroupList:
	.byte 0 @ bg
	.byte 1 @ tilemapLeft
	.byte 3 @ tilemapTop
	.byte 17 @ width
	.byte 10 @ height
	.byte 15 @ paletteNum
	.2byte 0x0044 @ baseBlock
	.globl sWindowTemplate_PlayerNameAndId
sWindowTemplate_PlayerNameAndId:
	.byte 0 @ bg
	.byte 20 @ tilemapLeft
	.byte 3 @ tilemapTop
	.byte 7 @ width
	.byte 4 @ height
	.byte 15 @ paletteNum
	.2byte 0x00EE @ baseBlock

sUnionRoomGroupsMenuItems: @ 0x082C208C
	.4byte 0x082C0640 @ sText_EmptyString
	.4byte 0
	.4byte 0x082C0640 @ sText_EmptyString
	.4byte 1
	.4byte 0x082C0640 @ sText_EmptyString
	.4byte 2
	.4byte 0x082C0640 @ sText_EmptyString
	.4byte 3
	.4byte 0x082C0640 @ sText_EmptyString
	.4byte 4
	.4byte 0x082C0640 @ sText_EmptyString
	.4byte 5
	.4byte 0x082C0640 @ sText_EmptyString
	.4byte 6
	.4byte 0x082C0640 @ sText_EmptyString
	.4byte 7
	.4byte 0x082C0640 @ sText_EmptyString
	.4byte 8
	.4byte 0x082C0640 @ sText_EmptyString
	.4byte 9
	.4byte 0x082C0640 @ sText_EmptyString
	.4byte 10
	.4byte 0x082C0640 @ sText_EmptyString
	.4byte 11
	.4byte 0x082C0640 @ sText_EmptyString
	.4byte 12
	.4byte 0x082C0640 @ sText_EmptyString
	.4byte 13
	.4byte 0x082C0640 @ sText_EmptyString
	.4byte 14
	.4byte 0x082C0640 @ sText_EmptyString
	.4byte 15
	.globl sListMenuTemplate_UnionRoomGroups
sListMenuTemplate_UnionRoomGroups:
	.4byte sUnionRoomGroupsMenuItems @ items
	.4byte ListMenuDefaultCursorMoveFunc @ ListMenuDefaultCursorMoveFunc + 1 @ moveCursorFunc
	.4byte sub_080138FC @ ListMenuItemPrintFunc_UnionRoomGroups + 1 @ itemPrintFunc
	.2byte 16 @ totalItems
	.2byte 5 @ maxShowed
	.byte 0x00, 0x00, 0x08, 0x01, 0x21, 0x31, 0x40, 0x01 @ packed window/cursor/font fields
	.globl sWindowTemplate_InviteToActivity
sWindowTemplate_InviteToActivity:
	.byte 0 @ bg
	.byte 20 @ tilemapLeft
	.byte 5 @ tilemapTop
	.byte 8 @ width
	.byte 8 @ height
	.byte 15 @ paletteNum
	.2byte 0x0001 @ baseBlock

sInviteToActivityMenuItems: @ 0x082C212C
	.4byte gText_Rom_2C1D48 @ sText_Greetings
	.4byte 0x00000208
	.4byte gText_Rom_2C1D38 @ sText_Battle
	.4byte 0x00000241
	.4byte gText_Rom_2C1D40 @ sText_Chat2
	.4byte 0x00000245
	.4byte gText_Rom_2C1D50 @ sText_Exit
	.4byte 0x00000040
	.globl sListMenuTemplate_InviteToActivity
sListMenuTemplate_InviteToActivity:
	.4byte sInviteToActivityMenuItems @ items
	.4byte ListMenuDefaultCursorMoveFunc @ ListMenuDefaultCursorMoveFunc + 1 @ moveCursorFunc
	.4byte 0 @ itemPrintFunc
	.2byte 4 @ totalItems
	.2byte 4 @ maxShowed
	.byte 0x00, 0x00, 0x0C, 0x01, 0x21, 0x31, 0x01, 0x01 @ packed window/cursor/font fields
	.globl sWindowTemplate_RegisterForTrade
sWindowTemplate_RegisterForTrade:
	.byte 0 @ bg
	.byte 18 @ tilemapLeft
	.byte 7 @ tilemapTop
	.byte 11 @ width
	.byte 6 @ height
	.byte 15 @ paletteNum
	.2byte 0x0001 @ baseBlock

sRegisterForTradeListMenuItems: @ 0x082C216C
	.4byte gText_Rom_5CA368 @ gText_Register
	.4byte 1
	.4byte 0x082C1D58 @ sText_Info
	.4byte 2
	.4byte gText_Rom_2C1D50 @ sText_Exit
	.4byte 3
	.globl sListMenuTemplate_RegisterForTrade
sListMenuTemplate_RegisterForTrade:
	.4byte sRegisterForTradeListMenuItems @ items
	.4byte ListMenuDefaultCursorMoveFunc @ ListMenuDefaultCursorMoveFunc + 1 @ moveCursorFunc
	.4byte 0 @ itemPrintFunc
	.2byte 3 @ totalItems
	.2byte 3 @ maxShowed
	.byte 0x00, 0x00, 0x0C, 0x01, 0x21, 0x31, 0x01, 0x01 @ packed window/cursor/font fields
	.globl sWindowTemplate_TradingBoardRequestType
sWindowTemplate_TradingBoardRequestType:
	.byte 0 @ bg
	.byte 20 @ tilemapLeft
	.byte 1 @ tilemapTop
	.byte 9 @ width
	.byte 12 @ height
	.byte 15 @ paletteNum
	.2byte 0x0001 @ baseBlock

sTradingBoardTypes: @ 0x082C21A4
	.4byte gTypeNames @ TYPE_NORMAL
	.4byte 0
	.4byte gTypeName_Fire @ TYPE_FIRE
	.4byte 10
	.4byte gTypeName_Water @ TYPE_WATER
	.4byte 11
	.4byte gTypeName_Electric @ TYPE_ELECTRIC
	.4byte 13
	.4byte gTypeName_Grass @ TYPE_GRASS
	.4byte 12
	.4byte gTypeName_Ice @ TYPE_ICE
	.4byte 15
	.4byte gTypeName_Ground @ TYPE_GROUND
	.4byte 4
	.4byte gTypeName_Rock @ TYPE_ROCK
	.4byte 5
	.4byte gTypeName_Flying @ TYPE_FLYING
	.4byte 2
	.4byte gTypeName_Psychic @ TYPE_PSYCHIC
	.4byte 14
	.4byte gTypeName_Fighting @ TYPE_FIGHTING
	.4byte 1
	.4byte gTypeName_Poison @ TYPE_POISON
	.4byte 3
	.4byte gTypeName_Bug @ TYPE_BUG
	.4byte 6
	.4byte gTypeName_Ghost @ TYPE_GHOST
	.4byte 7
	.4byte gTypeName_Dragon @ TYPE_DRAGON
	.4byte 16
	.4byte gTypeName_Steel @ TYPE_STEEL
	.4byte 8
	.4byte gTypeName_Dark @ TYPE_DARK
	.4byte 17
	.4byte gText_Rom_2C1D50 @ sText_Exit
	.4byte 18
	.globl sMenuTemplate_TradingBoardRequestType
sMenuTemplate_TradingBoardRequestType:
	.4byte sTradingBoardTypes @ items
	.4byte ListMenuDefaultCursorMoveFunc @ ListMenuDefaultCursorMoveFunc + 1 @ moveCursorFunc
	.4byte 0 @ itemPrintFunc
	.2byte 18 @ totalItems
	.2byte 6 @ maxShowed
	.byte 0x00, 0x00, 0x0C, 0x01, 0x21, 0x31, 0x01, 0x01 @ packed window/cursor/font fields
	.globl sWindowTemplate_TradingBoardHeader
sWindowTemplate_TradingBoardHeader:
	.byte 0 @ bg
	.byte 1 @ tilemapLeft
	.byte 1 @ tilemapTop
	.byte 28 @ width
	.byte 2 @ height
	.byte 13 @ paletteNum
	.2byte 0x0001 @ baseBlock
	.globl sWindowTemplate_TradingBoardMain
sWindowTemplate_TradingBoardMain:
	.byte 0 @ bg
	.byte 1 @ tilemapLeft
	.byte 5 @ tilemapTop
	.byte 28 @ width
	.byte 12 @ height
	.byte 13 @ paletteNum
	.2byte 0x0039 @ baseBlock

sTradeBoardListMenuItems: @ 0x082C225C
	.4byte 0x082C0640 @ LIST_HEADER
	.4byte 0xFFFFFFFD
	.4byte 0x082C0640 @ offer 0
	.4byte 0
	.4byte 0x082C0640 @ offer 1
	.4byte 1
	.4byte 0x082C0640 @ offer 2
	.4byte 2
	.4byte 0x082C0640 @ offer 3
	.4byte 3
	.4byte 0x082C0640 @ offer 4
	.4byte 4
	.4byte 0x082C0640 @ offer 5
	.4byte 5
	.4byte 0x082C0640 @ offer 6
	.4byte 6
	.4byte 0x082C0640 @ offer 7
	.4byte 7
	.4byte gText_Rom_2C1D54 @ sText_Exit2
	.4byte 8
	.globl sTradeBoardListMenuTemplate
sTradeBoardListMenuTemplate:
	.4byte sTradeBoardListMenuItems @ items
	.4byte ListMenuDefaultCursorMoveFunc @ ListMenuDefaultCursorMoveFunc + 1 @ moveCursorFunc
	.4byte sub_080176B0 @ TradeBoardListMenuItemPrintFunc + 1 @ itemPrintFunc
	.2byte 10 @ totalItems
	.2byte 6 @ maxShowed
	.byte 0x00, 0x00, 0x0C, 0x01, 0xE1, 0xDF, 0x01, 0x01 @ packed window/cursor/font fields

sWindowTemplate_Unused:
	.byte 0 @ bg
	.byte 1 @ tilemapLeft
	.byte 5 @ tilemapTop
	.byte 28 @ width
	.byte 12 @ height
	.byte 13 @ paletteNum
	.2byte 0x0039 @ baseBlock

sEmptyListMenuItems: @ 0x082C22CC
	.4byte 0x082C0640 @ sText_EmptyString
	.4byte 0
	.4byte 0x082C0640 @ sText_EmptyString
	.4byte 1
	.4byte 0x082C0640 @ sText_EmptyString
	.4byte 2
	.4byte 0x082C0640 @ sText_EmptyString
	.4byte 3
	.4byte 0x082C0640 @ sText_EmptyString
	.4byte 4
	.4byte 0x082C0640 @ sText_EmptyString
	.4byte 5
	.4byte 0x082C0640 @ sText_EmptyString
	.4byte 6
	.4byte 0x082C0640 @ sText_EmptyString
	.4byte 7
	.4byte 0x082C0640 @ sText_EmptyString
	.4byte 8
	.4byte 0x082C0640 @ sText_EmptyString
	.4byte 9
	.4byte 0x082C0640 @ sText_EmptyString
	.4byte 10
	.4byte 0x082C0640 @ sText_EmptyString
	.4byte 11
	.4byte 0x082C0640 @ sText_EmptyString
	.4byte 12
	.4byte 0x082C0640 @ sText_EmptyString
	.4byte 13
	.4byte 0x082C0640 @ sText_EmptyString
	.4byte 14
	.4byte 0x082C0640 @ sText_EmptyString
	.4byte 15

sEmptyListMenuTemplate:
	.4byte sEmptyListMenuItems @ items
	.4byte ListMenuDefaultCursorMoveFunc @ ListMenuDefaultCursorMoveFunc + 1 @ moveCursorFunc
	.4byte nullsub_89 @ ItemPrintFunc_EmptyList + 1 @ itemPrintFunc
	.2byte 16 @ totalItems
	.2byte 4 @ maxShowed
	.byte 0x00, 0x00, 0x08, 0x01, 0x20, 0x31, 0x41, 0x01 @ packed window/cursor/font fields
	.globl sUnionRoomPlayer_DummyRfu
sUnionRoomPlayer_DummyRfu:
	.space 0x18, 0

sAcceptedActivityIds_SingleBattle: @ 0x082C237C
	@ semanticized-mass: charmap string (2 bytes including EOS)
	.string "あ"
	.byte EOS
	.space 2, 0 @ alignment

sAcceptedActivityIds_DoubleBattle: @ 0x082C2380
	@ semanticized-mass: charmap string (2 bytes including EOS)
	.string "い"
	.byte EOS
	.space 2, 0 @ alignment

sAcceptedActivityIds_MultiBattle: @ 0x082C2384
	@ semanticized-mass: charmap string (2 bytes including EOS)
	.string "う"
	.byte EOS
	.space 2, 0 @ alignment

sAcceptedActivityIds_Trade: @ 0x082C2388
	@ semanticized-mass: charmap string (2 bytes including EOS)
	.string "え"
	.byte EOS
	.space 2, 0 @ alignment

sAcceptedActivityIds_PokemonJump: @ 0x082C238C
	@ semanticized-mass: charmap string (2 bytes including EOS)
	.string "け"
	.byte EOS
	.space 2, 0 @ alignment

sAcceptedActivityIds_BerryCrush: @ 0x082C2390
	@ semanticized-mass: charmap string (2 bytes including EOS)
	.string "こ"
	.byte EOS
	.space 2, 0 @ alignment

sAcceptedActivityIds_BerryPicking: @ 0x082C2394
	@ semanticized-mass: charmap string (2 bytes including EOS)
	.string "さ"
	.byte EOS
	.space 2, 0 @ alignment

sAcceptedActivityIds_WonderCard: @ 0x082C2398
	@ semanticized-mass: charmap string (2 bytes including EOS)
	.string "か"
	.byte EOS
	.space 2, 0 @ alignment

sAcceptedActivityIds_WonderNews: @ 0x082C239C
	@ semanticized-mass: charmap string (2 bytes including EOS)
	.string "き"
	.byte EOS
	.space 2, 0 @ alignment

sAcceptedActivityIds_Resume: @ 0x082C23A0
	@ semanticized-mass: charmap string (10 bytes including EOS)
	.string "ぞだでどぶアイウエ"
	.byte EOS
	.space 2, 0 @ alignment

sAcceptedActivityIds_Init: @ 0x082C23AC
	@ semanticized-mass: charmap string (2 bytes including EOS)
	.string "し"
	.byte EOS
	.space 2, 0 @ alignment

sAcceptedActivityIds_Unk11: @ 0x082C23B0
	@ semanticized-mass: charmap string (11 bytes including EOS)
	.string "あいうえけこさかきす"
	.byte EOS
	.space 1, 0 @ alignment

sAcceptedActivityIds_RecordCorner: @ 0x082C23BC
	@ semanticized-mass: charmap string (2 bytes including EOS)
	.string "そ"
	.byte EOS
	.space 2, 0 @ alignment

sAcceptedActivityIds_BerryBlender: @ 0x082C23C0
	@ semanticized-mass: charmap string (2 bytes including EOS)
	.string "た"
	.byte EOS
	.space 2, 0 @ alignment

sAcceptedActivityIds_CoolContest: @ 0x082C23C4
	@ semanticized-mass: charmap string (2 bytes including EOS)
	.string "ぬ"
	.byte EOS
	.space 2, 0 @ alignment

sAcceptedActivityIds_BeautyContest: @ 0x082C23C8
	@ semanticized-mass: charmap string (2 bytes including EOS)
	.string "ね"
	.byte EOS
	.space 2, 0 @ alignment

sAcceptedActivityIds_CuteContest: @ 0x082C23CC
	@ semanticized-mass: charmap string (2 bytes including EOS)
	.string "の"
	.byte EOS
	.space 2, 0 @ alignment

sAcceptedActivityIds_SmartContest: @ 0x082C23D0
	@ semanticized-mass: charmap string (2 bytes including EOS)
	.string "は"
	.byte EOS
	.space 2, 0 @ alignment

sAcceptedActivityIds_ToughContest: @ 0x082C23D4
	@ semanticized-mass: charmap string (2 bytes including EOS)
	.string "ひ"
	.byte EOS
	.space 2, 0 @ alignment

sAcceptedActivityIds_BattleTower: @ 0x082C23D8
	@ semanticized-mass: charmap string (2 bytes including EOS)
	.string "ふ"
	.byte EOS
	.space 2, 0 @ alignment

sAcceptedActivityIds_BattleTowerOpen: @ 0x082C23DC
	@ semanticized-mass: charmap string (2 bytes including EOS)
	.string "せ"
	.byte EOS
	.space 2, 0 @ alignment
	.globl sAcceptedActivityIds
sAcceptedActivityIds:
	.4byte sAcceptedActivityIds_SingleBattle
	.4byte sAcceptedActivityIds_DoubleBattle
	.4byte sAcceptedActivityIds_MultiBattle
	.4byte sAcceptedActivityIds_Trade
	.4byte sAcceptedActivityIds_PokemonJump
	.4byte sAcceptedActivityIds_BerryCrush
	.4byte sAcceptedActivityIds_BerryPicking
	.4byte sAcceptedActivityIds_WonderCard
	.4byte sAcceptedActivityIds_WonderNews
	.4byte sAcceptedActivityIds_Resume
	.4byte sAcceptedActivityIds_Init
	.4byte sAcceptedActivityIds_Unk11
	.4byte sAcceptedActivityIds_RecordCorner
	.4byte sAcceptedActivityIds_BerryBlender
	.4byte 0
	.4byte sAcceptedActivityIds_CoolContest
	.4byte sAcceptedActivityIds_BeautyContest
	.4byte sAcceptedActivityIds_CuteContest
	.4byte sAcceptedActivityIds_SmartContest
	.4byte sAcceptedActivityIds_ToughContest
	.4byte sAcceptedActivityIds_BattleTower
	.4byte sAcceptedActivityIds_BattleTowerOpen
	.globl sLinkGroupToURoomActivity
sLinkGroupToURoomActivity:
	.byte 0x01 @ LINK_GROUP_SINGLE_BATTLE -> ACTIVITY_BATTLE_SINGLE
	.byte 0x02 @ LINK_GROUP_DOUBLE_BATTLE -> ACTIVITY_BATTLE_DOUBLE
	.byte 0x03 @ LINK_GROUP_MULTI_BATTLE -> ACTIVITY_BATTLE_MULTI
	.byte 0x04 @ LINK_GROUP_TRADE -> ACTIVITY_TRADE
	.byte 0x09 @ LINK_GROUP_POKEMON_JUMP
	.byte 0x0A @ LINK_GROUP_BERRY_CRUSH
	.byte 0x0B @ LINK_GROUP_BERRY_PICKING
	.byte 0x06 @ LINK_GROUP_WONDER_CARD
	.byte 0x07 @ LINK_GROUP_WONDER_NEWS
	.byte 0, 0, 0 @ resume / init / unknown
	.byte 0x0F @ LINK_GROUP_RECORD_CORNER
	.byte 0x10 @ LINK_GROUP_BERRY_BLENDER
	.byte 0 @ LINK_GROUP_UNK_14
	.byte 0x17, 0x18, 0x19, 0x1A, 0x1B @ contests
	.byte 0x1C @ LINK_GROUP_BATTLE_TOWER
	.byte 0x0E @ LINK_GROUP_BATTLE_TOWER_OPEN
