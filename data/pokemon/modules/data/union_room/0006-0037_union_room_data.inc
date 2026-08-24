	@ asm/union_room.s:9786 sub_0801727C
	.globl gText_Rom_2C0644
gText_Rom_2C0644: @ 0x082C0644
	.string ":{EOS}"
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
	.string "{ID}{EOS}"
	.byte 0 @ alignment

	@ asm/union_room.s:5239 sub_08014A50
	.globl gText_Rom_2C064C
gText_Rom_2C064C: @ 0x082C064C
	.string "もういちど　さいしょから\nてつづきを　やりなおして　ください{EOS}"
	.if (. - gText_Rom_2C064C) > 0x1f
	.error "gText_Rom_2C064C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C064C) < 0x1f
	.space 0x1f - (. - gText_Rom_2C064C)
	.endif
	.space 0x1, 0x00
	.globl sText_WirelessSearchCanceled
sText_WirelessSearchCanceled:
	.string "ジョイスポットの　けんさくを\nちゅうししました{EOS}"
sText_AwaitingCommunication2:
	@ Unused in the corresponding decomp source.
	.string "ともだちからの　れんらくを\nまっています{EOS}"
	.space 3, 0 @ alignment

	@ asm/union_room.s:233 sub_08012134
	.globl gText_Rom_2C069C
gText_Rom_2C069C: @ 0x082C069C
	.string "{STR_VAR_1}！\nともだちからの　れんらくを　まっています{EOS}"
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
	.string "{STR_VAR_1}！　れんらくまち！\nにんずうが　そろったら　STARTボタン{EOS}"
	.if (. - gText_Rom_2C06B8) > 0x21
	.error "gText_Rom_2C06B8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C06B8) < 0x21
	.space 0x21 - (. - gText_Rom_2C06B8)
	.endif
	.space 0x3, 0x00

	@ src/data/union_room.h:9 sJPText_SingleBattle
	.globl sJPText_SingleBattle
sJPText_SingleBattle: @ 0x082C06DC
	.string "シングルバトルを かいさいする{EOS}"
	.if (. - sJPText_SingleBattle) > 0x10
	.error "sJPText_SingleBattle may not grow beyond its original slot"
	.endif
	.if (. - sJPText_SingleBattle) < 0x10
	.space 0x10 - (. - sJPText_SingleBattle)
	.endif

	@ src/data/union_room.h:10 sJPText_DoubleBattle
	.globl sJPText_DoubleBattle
sJPText_DoubleBattle: @ 0x082C06EC
	.string "ダブルバトルを かいさいする{EOS}"
	.if (. - sJPText_DoubleBattle) > 0xf
	.error "sJPText_DoubleBattle may not grow beyond its original slot"
	.endif
	.if (. - sJPText_DoubleBattle) < 0xf
	.space 0xf - (. - sJPText_DoubleBattle)
	.endif
	.space 0x1, 0x00

	@ src/data/union_room.h:11 sJPText_MultiBattle
	.globl sJPText_MultiBattle
sJPText_MultiBattle: @ 0x082C06FC
	.string "マルチバトルを かいさいする{EOS}"
	.if (. - sJPText_MultiBattle) > 0xf
	.error "sJPText_MultiBattle may not grow beyond its original slot"
	.endif
	.if (. - sJPText_MultiBattle) < 0xf
	.space 0xf - (. - sJPText_MultiBattle)
	.endif
	.space 0x1, 0x00

	@ src/data/union_room.h:12 sJPText_TradePokemon
	.globl sJPText_TradePokemon
sJPText_TradePokemon: @ 0x082C070C
	.string "ポケモンこうかんを かいさいする{EOS}"
	.if (. - sJPText_TradePokemon) > 0x11
	.error "sJPText_TradePokemon may not grow beyond its original slot"
	.endif
	.if (. - sJPText_TradePokemon) < 0x11
	.space 0x11 - (. - sJPText_TradePokemon)
	.endif
	.space 0x3, 0x00

	@ src/data/union_room.h:13 sJPText_Chat
	.globl sJPText_Chat
sJPText_Chat: @ 0x082C0720
	.string "チャットを かいさいする{EOS}"
	.if (. - sJPText_Chat) > 0xd
	.error "sJPText_Chat may not grow beyond its original slot"
	.endif
	.if (. - sJPText_Chat) < 0xd
	.space 0xd - (. - sJPText_Chat)
	.endif
	.space 0x3, 0x00

	@ src/data/union_room.h:14 sJPText_DistWonderCard
	.globl sJPText_DistWonderCard
sJPText_DistWonderCard: @ 0x082C0730
	.string "ふしぎなカードをくばる{EOS}"
	.if (. - sJPText_DistWonderCard) > 0xc
	.error "sJPText_DistWonderCard may not grow beyond its original slot"
	.endif
	.if (. - sJPText_DistWonderCard) < 0xc
	.space 0xc - (. - sJPText_DistWonderCard)
	.endif

	@ src/data/union_room.h:15 sJPText_DistWonderNews
	.globl sJPText_DistWonderNews
sJPText_DistWonderNews: @ 0x082C073C
	.string "ふしぎなニュースをくばる{EOS}"
	.if (. - sJPText_DistWonderNews) > 0xd
	.error "sJPText_DistWonderNews may not grow beyond its original slot"
	.endif
	.if (. - sJPText_DistWonderNews) < 0xd
	.space 0xd - (. - sJPText_DistWonderNews)
	.endif
	.space 0x3, 0x00

	@ src/data/union_room.h:16 sJPText_DistMysteryEvent
	.globl sJPText_DistMysteryEvent
sJPText_DistMysteryEvent: @ 0x082C074C
	.string "ふしぎなできごとを かいさいする{EOS}"
	.if (. - sJPText_DistMysteryEvent) > 0x11
	.error "sJPText_DistMysteryEvent may not grow beyond its original slot"
	.endif
	.if (. - sJPText_DistMysteryEvent) < 0x11
	.space 0x11 - (. - sJPText_DistMysteryEvent)
	.endif
	.space 0x3, 0x00

	@ src/data/union_room.h:17 sJPText_HoldPokemonJump
	.globl sJPText_HoldPokemonJump
sJPText_HoldPokemonJump: @ 0x082C0760
	.string "なわとびを かいさいする{EOS}"
	.if (. - sJPText_HoldPokemonJump) > 0xd
	.error "sJPText_HoldPokemonJump may not grow beyond its original slot"
	.endif
	.if (. - sJPText_HoldPokemonJump) < 0xd
	.space 0xd - (. - sJPText_HoldPokemonJump)
	.endif
	.space 0x3, 0x00

	@ src/data/union_room.h:18 sJPText_HoldBerryCrush
	.globl sJPText_HoldBerryCrush
sJPText_HoldBerryCrush: @ 0x082C0770
	.string "きのみマッシャーを かいさいする{EOS}"
	.if (. - sJPText_HoldBerryCrush) > 0x11
	.error "sJPText_HoldBerryCrush may not grow beyond its original slot"
	.endif
	.if (. - sJPText_HoldBerryCrush) < 0x11
	.space 0x11 - (. - sJPText_HoldBerryCrush)
	.endif
	.space 0x3, 0x00

	@ src/data/union_room.h:19 sJPText_HoldBerryPicking
	.globl sJPText_HoldBerryPicking
sJPText_HoldBerryPicking: @ 0x082C0784
	.string "きのみどりを かいさいする{EOS}"
	.if (. - sJPText_HoldBerryPicking) > 0xe
	.error "sJPText_HoldBerryPicking may not grow beyond its original slot"
	.endif
	.if (. - sJPText_HoldBerryPicking) < 0xe
	.space 0xe - (. - sJPText_HoldBerryPicking)
	.endif
	.space 0x2, 0x00

	@ src/data/union_room.h:20 sJPText_HoldSpinTrade
	.globl sJPText_HoldSpinTrade
sJPText_HoldSpinTrade: @ 0x082C0794
	.string "ぐるぐるこうかんを かいさいする{EOS}"
	.if (. - sJPText_HoldSpinTrade) > 0x11
	.error "sJPText_HoldSpinTrade may not grow beyond its original slot"
	.endif
	.if (. - sJPText_HoldSpinTrade) < 0x11
	.space 0x11 - (. - sJPText_HoldSpinTrade)
	.endif
	.space 0x3, 0x00

	@ src/data/union_room.h:21 sJPText_HoldSpinShop
sJPText_HoldSpinShop:
	.string "ぐるぐるショップを かいさいする{EOS}"
	.if (. - sJPText_HoldSpinShop) > 0x11
	.error "sJPText_HoldSpinShop may not grow beyond its original slot"
	.endif
	.if (. - sJPText_HoldSpinShop) < 0x11
	.space 0x11 - (. - sJPText_HoldSpinShop)
	.endif

	.space 3, 0 @ align sJPLinkGroupActionTexts to 4 bytes

sJPLinkGroupActionTexts: @ 0x082C07BC, unused
	.4byte sJPText_SingleBattle @ sJPText_SingleBattle
	.4byte sJPText_DoubleBattle @ sJPText_DoubleBattle
	.4byte sJPText_MultiBattle @ sJPText_MultiBattle
	.4byte sJPText_TradePokemon @ sJPText_TradePokemon
	.4byte sJPText_Chat @ sJPText_Chat
	.4byte sJPText_DistWonderCard @ sJPText_DistWonderCard
	.4byte sJPText_DistWonderNews @ sJPText_DistWonderNews
	.4byte sJPText_DistWonderCard @ sJPText_DistWonderCard
	.4byte sJPText_HoldPokemonJump @ sJPText_HoldPokemonJump
	.4byte sJPText_HoldBerryCrush @ sJPText_HoldBerryCrush
	.4byte sJPText_HoldBerryPicking @ sJPText_HoldBerryPicking
	.4byte sJPText_HoldBerryPicking @ sJPText_HoldBerryPicking
	.4byte sJPText_HoldSpinTrade @ sJPText_HoldSpinTrade
	.4byte sJPText_HoldSpinShop @ sJPText_HoldSpinShop

sText_1PlayerNeeded: @ 0x082C07F4
	.string "あと1にん\nひつよう{EOS}"
sText_2PlayersNeeded: @ 0x082C07FF
	.string "あと2にん\nひつよう{EOS}"
sText_3PlayersNeeded: @ 0x082C080A
	.string "あと3にん\nひつよう{EOS}"
sText_4PlayersNeeded: @ 0x082C0815
	.string "あと4にん\nひつよう{EOS}"
sText_2PlayerMode: @ 0x082C0820
	.string "2にん\nプレイ{EOS}"
sText_3PlayerMode: @ 0x082C0828
	.string "3にん\nプレイ{EOS}"
sText_4PlayerMode: @ 0x082C0830
	.string "4にん\nプレイ{EOS}"
sText_5PlayerMode: @ 0x082C0838
	.string "5にん\nプレイ{EOS}"
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
sText_BButtonCancel:
	.string "{B_BUTTON}やめる{EOS}"
	.if (. - sText_BButtonCancel) != 0x6
	.error "sText_BButtonCancel must retain its original byte length"
	.endif
	.globl gText_Rom_2C08A6
	.set gText_Rom_2C08A6, sText_BButtonCancel + 0x2

	.space 2, 0 @ align sJPText_SearchingForParticipants
sJPText_SearchingForParticipants: @ 0x082C08AC, unused
	.string "ため\nさんかしゃ ぼしゅうちゅう です！{EOS}"
	.space 3, 0 @ alignment
	.globl sText_PlayerContactedYouForXAccept

sText_PlayerContactedYouForXAccept: @ 0x082C08C4
	.string "{STR_VAR_2}から れんらくあり！\n{STR_VAR_1}を しますか？{EOS}"
	.space 1, 0 @ alignment
	.globl sText_PlayerContactedYouShareX

sText_PlayerContactedYouShareX: @ 0x082C08DC
	.string "{STR_VAR_2}から れんらくあり！\n{STR_VAR_1}を くばりますか？{EOS}"
	.space 3, 0 @ alignment

	@ asm/union_room.s:1352 sub_08012AC4
sText_PlayerContactedYouAddToMembers:
	.string "{STR_VAR_2}から　れんらくあり！\nメンバーに　しますか？{EOS}"
	.if (. - sText_PlayerContactedYouAddToMembers) > 0x19
	.error "sText_PlayerContactedYouAddToMembers may not grow beyond its original slot"
	.endif
	.if (. - sText_PlayerContactedYouAddToMembers) < 0x19
	.space 0x19 - (. - sText_PlayerContactedYouAddToMembers)
	.endif
	.space 0x3, 0x00
	.globl sText_AreTheseMembersOK

sText_AreTheseMembersOK: @ 0x082C0914
	.string "{STR_VAR_1}！\nこの メンバーで よろしいですか？{EOS}"
	.space 2, 0 @ alignment
	.globl sText_CancelModeWithTheseMembers

sText_CancelModeWithTheseMembers: @ 0x082C092C
	.string "この メンバーで {STR_VAR_1}を\nするのは やめますか？{EOS}"
	.space 3, 0 @ alignment

	@ asm/union_room.s:931 sub_08012288
sText_AnOKWasSentToPlayer:
	.string "{STR_VAR_1}に　OKの\nへんじを　だしました{EOS}"
	.if (. - sText_AnOKWasSentToPlayer) > 0x13
	.error "sText_AnOKWasSentToPlayer may not grow beyond its original slot"
	.endif
	.if (. - sText_AnOKWasSentToPlayer) < 0x13
	.space 0x13 - (. - sText_AnOKWasSentToPlayer)
	.endif

	.space 1, 0 @ align sText_OtherTrainerUnavailableNow
sText_OtherTrainerUnavailableNow: @ 0x082C095C
	.string "あいての\nつごうが わるいみたい…\p{EOS}"
	.space 1, 0 @ align sText_CantTransmitTrainerTooFar
sText_CantTransmitTrainerTooFar: @ 0x082C0970
	.string "まだ とおくの かたとは\nつうしんは できません\p{EOS}"
	.space 2, 0 @ align sText_TrainersNotReadyYet
sText_TrainersNotReadyYet: @ 0x082C098C
	.string "あいての じゅんびが\nできていません\p{EOS}"
	.globl sCantTransmitToTrainerTexts

sCantTransmitToTrainerTexts: @ 0x082C09A0
	.4byte sText_CantTransmitTrainerTooFar
	.4byte sText_TrainersNotReadyYet
	.globl sText_ModeWithTheseMembersWillBeCanceled

sText_ModeWithTheseMembersWillBeCanceled: @ 0x082C09A8
	.string "この メンバーで {STR_VAR_1}を\nするのは やめます{PAUSE 60}{EOS}"
	.space 2, 0 @ align sText_MemberNoLongerAvailable
sText_MemberNoLongerAvailable: @ 0x082C09C4
	.string "つごうが わるくなってしまった\nメンバーが います\p{EOS}"
	.space 1, 0 @ alignment
	.globl sPlayerUnavailableTexts

sPlayerUnavailableTexts: @ 0x082C09E0
	.4byte sText_OtherTrainerUnavailableNow
	.4byte sText_MemberNoLongerAvailable
sText_TrainerAppearsUnavailable: @ 0x082C09E8
	.string "つごうが わるいみたい…\p{EOS}"
	.space 2, 0 @ alignment

	@ asm/union_room.s:1506 sub_08012C60
sText_PlayerSentBackOK:
	.string "{STR_VAR_1}から　OKとの\nへんじが　ありました！{EOS}"
	.if (. - sText_PlayerSentBackOK) > 0x16
	.error "sText_PlayerSentBackOK may not grow beyond its original slot"
	.endif
	.if (. - sText_PlayerSentBackOK) < 0x16
	.space 0x16 - (. - sText_PlayerSentBackOK)
	.endif
	.space 0x2, 0x00

	@ asm/union_room.s:1513 sub_08012C60
sText_PlayerOKdRegistration:
	.string "{STR_VAR_1}から　メンバー　とうろく\nOKとの　れんらくが　きました！{EOS}"
	.if (. - sText_PlayerOKdRegistration) > 0x20
	.error "sText_PlayerOKdRegistration may not grow beyond its original slot"
	.endif
	.if (. - sText_PlayerOKdRegistration) < 0x20
	.space 0x20 - (. - sText_PlayerOKdRegistration)
	.endif

sText_PlayerRepliedNo: @ 0x082C0A30
	.string "{STR_VAR_1}から NGとの\nへんじが きてしまいました…\p{EOS}"
	.space 2, 0 @ alignment

	@ asm/union_room.s:2354 sub_08012FEC
sText_AwaitingOtherMembers:
	.string "{STR_VAR_1}！\nほかの　メンバーを　まっています！{EOS}"
	.if (. - sText_AwaitingOtherMembers) > 0x16
	.error "sText_AwaitingOtherMembers may not grow beyond its original slot"
	.endif
	.if (. - sText_AwaitingOtherMembers) < 0x16
	.space 0x16 - (. - sText_AwaitingOtherMembers)
	.endif
	.space 0x2, 0x00
	.globl sText_QuitBeingMember

sText_QuitBeingMember: @ 0x082C0A64
	.string "メンバーから ぬけますか？{EOS}"
	.space 2, 0 @ align sText_StoppedBeingMember
sText_StoppedBeingMember: @ 0x082C0A74
	.string "メンバーから ぬけました\p{EOS}"
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
sText_WirelessLinkEstablished:
	.string "ジョイスポットとの　せつぞくに\nせいこう　しました！{EOS}"
	.if (. - sText_WirelessLinkEstablished) > 0x1b
	.error "sText_WirelessLinkEstablished may not grow beyond its original slot"
	.endif
	.if (. - sText_WirelessLinkEstablished) < 0x1b
	.space 0x1b - (. - sText_WirelessLinkEstablished)
	.endif
	.space 0x1, 0x00

	.globl sText_WirelessLinkDropped
sText_WirelessLinkDropped:
	.string "ジョイスポットから　せつぞくを\nせつだん　されました…{EOS}"
	.globl sText_LinkWithFriendDropped
sText_LinkWithFriendDropped:
	.string "おともだちとの　つうしんが\nせつだん　されました…{EOS}"
	.space 2, 0 @ align sText_PlayerRepliedNo2

sText_PlayerRepliedNo2:
	.string "{STR_VAR_1}から　NGとの\nへんじが　きてしまいました…{EOS}"
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
	.string "{STR_VAR_2}を　したいのかい？{EOS}"

sText_DoYouWantXMode2:
	.string "{STR_VAR_2}で　いいかしら？{EOS}"
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
	.string "しょうしょう おまちください{EOS}"
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
	.string "{STR_VAR_1}からの　こうかんの\nへんじを　まっています…{EOS}"
	.space 3, 0 @ align sText_Communicating

sText_Communicating:
	.string "はなしかけています{PAUSE 15}・{PAUSE 15}・{PAUSE 15}・{PAUSE 15}・{PAUSE 15}・\n{PAUSE 15}・{PAUSE 15}・{PAUSE 15}・{PAUSE 15}・{PAUSE 15}・{PAUSE 15}・{PAUSE 15}・{PAUSE 15}・{PAUSE 15}・{PAUSE 15}・{PAUSE 15}・{PAUSE 15}・{PAUSE 15}・{PAUSE 15}・{PAUSE 15}・{PAUSE 15}・{PAUSE 15}・{PAUSE 15}・{EOS}"
	.byte 0 @ alignment

sText_CommunicatingWithPlayer:
	.string "{STR_VAR_1}に　はなしかけています{PAUSE 15}・{PAUSE 15}・{PAUSE 15}・\n{PAUSE 15}・{PAUSE 15}・{PAUSE 15}・{PAUSE 15}・{PAUSE 15}・{PAUSE 15}・{PAUSE 15}・{PAUSE 15}・{PAUSE 15}・{PAUSE 15}・{PAUSE 15}・{PAUSE 15}・{PAUSE 15}・{PAUSE 15}・{PAUSE 15}・{PAUSE 15}・{PAUSE 15}・{PAUSE 15}・{EOS}"
	.byte 0 @ alignment

sText_PleaseWaitAWhile:
	.string "しょうしょうおまちください{PAUSE 15}・{PAUSE 15}・{PAUSE 15}・{PAUSE 15}・{PAUSE 15}・{PAUSE 15}・\n{PAUSE 15}・{PAUSE 15}・{PAUSE 15}・{PAUSE 15}・{PAUSE 15}・{PAUSE 15}・{PAUSE 15}・{PAUSE 15}・{PAUSE 15}・{PAUSE 15}・{PAUSE 15}・{PAUSE 15}・{PAUSE 15}・{PAUSE 15}・{PAUSE 15}・{PAUSE 15}・{PAUSE 15}・{PAUSE 15}・{EOS}"
	.byte 0 @ alignment
	.globl sCommunicatingWaitTexts
sCommunicatingWaitTexts:
	.4byte sText_Communicating
	.4byte sText_CommunicatingWithPlayer
	.4byte sText_PleaseWaitAWhile

sText_HiDoSomethingMale:
	.string "やあ！\nなにか　するかい？{EOS}"
	.space 2, 0 @ align sText_HiDoSomethingFemale

sText_HiDoSomethingFemale:
	.string "こんにちは！\nなにか　する？{EOS}"
	.byte 0 @ alignment

sText_HiDoSomethingAgainMale:
	.string "{STR_VAR_1}「やあ　また　あったね！\nこんどは　なにをする？{EOS}"
	.byte 0 @ alignment

sText_HiDoSomethingAgainFemale:
	.string "{STR_VAR_1}「あ！　{PLAYER}\nこんにちは！　また　なにかする？{EOS}"
	.space 2, 0 @ alignment
	.globl sHiDoSomethingTexts
sHiDoSomethingTexts:
	.4byte sText_HiDoSomethingMale
	.4byte sText_HiDoSomethingFemale
	.4byte sText_HiDoSomethingAgainMale
	.4byte sText_HiDoSomethingAgainFemale

sText_DoSomethingMale:
	.string "なにか　するかい？{EOS}"
	.space 2, 0 @ align sText_DoSomethingFemale

sText_DoSomethingFemale:
	.string "なにか　する？{EOS}"

sText_DoSomethingAgainMale:
	.string "{STR_VAR_1}「こんどは　なにをする？{EOS}"
	.byte 0 @ alignment

sText_DoSomethingAgainFemale:
	@ Unused in the corresponding decomp source.
	.string "{STR_VAR_1}「また　なにかする？{EOS}"
	.space 3, 0 @ alignment

sDoSomethingTexts:
	.4byte sText_DoSomethingMale
	.4byte sText_DoSomethingFemale
	.4byte sText_DoSomethingAgainMale
	.4byte sText_DoSomethingAgainMale
	@ The final entry intentionally repeats the male string.

sText_SomebodyHasContactedYou:
	.string "だれかが\nはなしかけて　きました{PAUSE 60}{EOS}"

sText_PlayerHasContactedYou:
	.string "{STR_VAR_1}が\nはなしかけて　きました{PAUSE 60}{EOS}"
	.byte 0 @ alignment
	.globl sPlayerContactedYouTexts
sPlayerContactedYouTexts:
	.4byte sText_SomebodyHasContactedYou
	.4byte sText_PlayerHasContactedYou

sText_AwaitingResponseFromTrainer:
	.string "あいての　へんじを\nまっています{EOS}"
	.space 3, 0 @ align sText_AwaitingResponseFromPlayer

sText_AwaitingResponseFromPlayer:
	.string "{STR_VAR_1}の　へんじを\nまっています{EOS}"
	.globl sAwaitingResponseTexts
sAwaitingResponseTexts:
	.4byte sText_AwaitingResponseFromTrainer
	.4byte sText_AwaitingResponseFromPlayer
	.globl sText_ShowTrainerCard
sText_ShowTrainerCard:
	.string "あいてが　トレーナーカードを\nみせて　きました\pこちらも　トレーナーカードを\nみせますか？{EOS}"
	.space 2, 0 @ alignment
	.globl sText_BattleChallenge
sText_BattleChallenge:
	.string "あいてが　たいせんを\nもうしこんで　きました\pたいせん　しますか？{EOS}"
	.space 2, 0 @ alignment
	.globl sText_ChatInvitation
sText_ChatInvitation:
	.string "あいてが　チャット　に\nさそって　きました\pいっしょに　チャット\nしますか？{EOS}"
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
	.string "{DYNAMIC 2}の　{DYNAMIC 3}　の\nこうかん　もうしこみが　きています\pこうかん　しますか？{EOS}"
	.space 3, 0 @ alignment
	@ Boundary of the next generated union-room data region.
