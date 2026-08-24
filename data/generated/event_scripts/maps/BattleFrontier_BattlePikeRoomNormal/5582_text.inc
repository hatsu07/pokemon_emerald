	@ data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.inc:636 BattleFrontier_BattlePikeRoomNormal_Text_WillRestoreToFullHealth
	.globl BattleFrontier_BattlePikeRoomNormal_Text_WillRestoreToFullHealth
BattleFrontier_BattlePikeRoomNormal_Text_WillRestoreToFullHealth: @ 0x08234C0B
	.string "ようこそ……\nおきゃくさまは ラッキー ですね……\pポケモンを かいふくして さしあげます……"
	.byte EOS
	.if (. - BattleFrontier_BattlePikeRoomNormal_Text_WillRestoreToFullHealth) > 0x30
	.error "BattleFrontier_BattlePikeRoomNormal_Text_WillRestoreToFullHealth may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattlePikeRoomNormal_Text_WillRestoreToFullHealth) < 0x30
	.space 0x30 - (. - BattleFrontier_BattlePikeRoomNormal_Text_WillRestoreToFullHealth)
	.endif
	@ data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.inc:642 BattleFrontier_BattlePikeRoomNormal_Text_EnjoyRestOfChallenge (+2 aliases)
	.globl gText_Rom_234C3B
gText_Rom_234C3B: @ 0x08234C3B
	.string "それでは ひきつづき\nゲームを おたのしみ ください……"
	.byte EOS
	.if (. - gText_Rom_234C3B) > 0x1d
	.error "gText_Rom_234C3B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_234C3B) < 0x1d
	.space 0x1d - (. - gText_Rom_234C3B)
	.endif
	@ data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.inc:646 BattleFrontier_BattlePikeRoomNormal_Text_WillRestoreOneMon
	.globl BattleFrontier_BattlePikeRoomNormal_Text_WillRestoreOneMon
BattleFrontier_BattlePikeRoomNormal_Text_WillRestoreOneMon: @ 0x08234C58
	.string "おお きみは ツイてるな\pいまの わしは ちょっとだけ\nきげんが いいからな\pきみの ポケモンを 1ひき だけ\nかいふくして あげようじゃ ないか!"
	.byte EOS
	.if (. - BattleFrontier_BattlePikeRoomNormal_Text_WillRestoreOneMon) > 0x4b
	.error "BattleFrontier_BattlePikeRoomNormal_Text_WillRestoreOneMon may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattlePikeRoomNormal_Text_WillRestoreOneMon) < 0x4b
	.space 0x4b - (. - BattleFrontier_BattlePikeRoomNormal_Text_WillRestoreOneMon)
	.endif
	@ data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.inc:652 BattleFrontier_BattlePikeRoomNormal_Text_BestOfLuckFarewell (+1 aliases)
	.globl gText_Rom_234CA3
gText_Rom_234CA3: @ 0x08234CA3
	.string "それでは ごきげんよう……"
	.byte EOS
	.if (. - gText_Rom_234CA3) > 0xe
	.error "gText_Rom_234CA3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_234CA3) < 0xe
	.space 0xe - (. - gText_Rom_234CA3)
	.endif
	@ data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.inc:659 BattleFrontier_BattlePikeRoomNormal_Text_CareForBattleWillRestoreMons
	.globl BattleFrontier_BattlePikeRoomNormal_Text_CareForBattleWillRestoreMons
BattleFrontier_BattlePikeRoomNormal_Text_CareForBattleWillRestoreMons: @ 0x08234CB1
	.string "きみ……\pわたしと バトルしないかね?\nかてば ポケモンを かいふくして あげよう"
	.byte EOS
	.if (. - BattleFrontier_BattlePikeRoomNormal_Text_CareForBattleWillRestoreMons) > 0x2a
	.error "BattleFrontier_BattlePikeRoomNormal_Text_CareForBattleWillRestoreMons may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattlePikeRoomNormal_Text_CareForBattleWillRestoreMons) < 0x2a
	.space 0x2a - (. - BattleFrontier_BattlePikeRoomNormal_Text_CareForBattleWillRestoreMons)
	.endif
	@ data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.inc:665 BattleFrontier_BattlePikeRoomNormal_Text_NowShallWe
	.globl BattleFrontier_BattlePikeRoomNormal_Text_NowShallWe
BattleFrontier_BattlePikeRoomNormal_Text_NowShallWe: @ 0x08234CDB
	.string "よろしい……\n……それでは いくぞ!"
	.byte EOS
	.if (. - BattleFrontier_BattlePikeRoomNormal_Text_NowShallWe) > 0x13
	.error "BattleFrontier_BattlePikeRoomNormal_Text_NowShallWe may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattlePikeRoomNormal_Text_NowShallWe) < 0x13
	.space 0x13 - (. - BattleFrontier_BattlePikeRoomNormal_Text_NowShallWe)
	.endif
	@ data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.inc:670 BattleFrontier_BattlePikeRoomNormal_Text_HowUnsportingOfYou
	.globl BattleFrontier_BattlePikeRoomNormal_Text_HowUnsportingOfYou
BattleFrontier_BattlePikeRoomNormal_Text_HowUnsportingOfYou: @ 0x08234CEE
	.string "そうか… ざんねんだな……"
	.byte EOS
	.if (. - BattleFrontier_BattlePikeRoomNormal_Text_HowUnsportingOfYou) > 0xe
	.error "BattleFrontier_BattlePikeRoomNormal_Text_HowUnsportingOfYou may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattlePikeRoomNormal_Text_HowUnsportingOfYou) < 0xe
	.space 0xe - (. - BattleFrontier_BattlePikeRoomNormal_Text_HowUnsportingOfYou)
	.endif
	@ data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.inc:675 BattleFrontier_BattlePikeRoomNormal_Text_WillRestoreMonsAsPromised
	.globl BattleFrontier_BattlePikeRoomNormal_Text_WillRestoreMonsAsPromised
BattleFrontier_BattlePikeRoomNormal_Text_WillRestoreMonsAsPromised: @ 0x08234CFC
	.string "すばらしい……\pやくそくどおり ポケモンを\nかいふくしよう……"
	.byte EOS
	.if (. - BattleFrontier_BattlePikeRoomNormal_Text_WillRestoreMonsAsPromised) > 0x20
	.error "BattleFrontier_BattlePikeRoomNormal_Text_WillRestoreMonsAsPromised may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattlePikeRoomNormal_Text_WillRestoreMonsAsPromised) < 0x20
	.space 0x20 - (. - BattleFrontier_BattlePikeRoomNormal_Text_WillRestoreMonsAsPromised)
	.endif
	@ data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.inc:652 BattleFrontier_BattlePikeRoomNormal_Text_BestOfLuckFarewell (+1 aliases)
	.globl gText_Rom_234D1C
gText_Rom_234D1C: @ 0x08234D1C
	.string "それでは ごきげんよう……"
	.byte EOS
	.if (. - gText_Rom_234D1C) > 0xe
	.error "gText_Rom_234D1C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_234D1C) < 0xe
	.space 0xe - (. - gText_Rom_234D1C)
	.endif
	@ data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.inc:685 BattleFrontier_BattlePikeRoomNormal_Text_WatchOut
	.globl BattleFrontier_BattlePikeRoomNormal_Text_WatchOut
BattleFrontier_BattlePikeRoomNormal_Text_WatchOut: @ 0x08234D2A
	.string "!!\pきみ! あぶないっ!!"
	.byte EOS
	.if (. - BattleFrontier_BattlePikeRoomNormal_Text_WatchOut) > 0xf
	.error "BattleFrontier_BattlePikeRoomNormal_Text_WatchOut may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattlePikeRoomNormal_Text_WatchOut) < 0xf
	.space 0xf - (. - BattleFrontier_BattlePikeRoomNormal_Text_WatchOut)
	.endif
	@ data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.inc:689 BattleFrontier_BattlePikeRoomNormal_Text_KirliaStop
	.globl BattleFrontier_BattlePikeRoomNormal_Text_KirliaStop
BattleFrontier_BattlePikeRoomNormal_Text_KirliaStop: @ 0x08234D39
	.string "おいっ!\nキルリア!! やめなさいっ!"
	.byte EOS
	.if (. - BattleFrontier_BattlePikeRoomNormal_Text_KirliaStop) > 0x14
	.error "BattleFrontier_BattlePikeRoomNormal_Text_KirliaStop may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattlePikeRoomNormal_Text_KirliaStop) < 0x14
	.space 0x14 - (. - BattleFrontier_BattlePikeRoomNormal_Text_KirliaStop)
	.endif
	@ data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.inc:693 BattleFrontier_BattlePikeRoomNormal_Text_DusclopsStop
	.globl BattleFrontier_BattlePikeRoomNormal_Text_DusclopsStop
BattleFrontier_BattlePikeRoomNormal_Text_DusclopsStop: @ 0x08234D4D
	.string "おいっ!\nサマヨール!! やめなさいっ!"
	.byte EOS
	.if (. - BattleFrontier_BattlePikeRoomNormal_Text_DusclopsStop) > 0x15
	.error "BattleFrontier_BattlePikeRoomNormal_Text_DusclopsStop may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattlePikeRoomNormal_Text_DusclopsStop) < 0x15
	.space 0x15 - (. - BattleFrontier_BattlePikeRoomNormal_Text_DusclopsStop)
	.endif
	@ data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.inc:697 BattleFrontier_BattlePikeRoomNormal_Text_KirliaUsedToxic
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl BattleFrontier_BattlePikeRoomNormal_Text_KirliaUsedToxic
BattleFrontier_BattlePikeRoomNormal_Text_KirliaUsedToxic: @ 0x08234D62
	.string "キルリアの どくどく こうげき!"
	.byte EOS
	.if (. - BattleFrontier_BattlePikeRoomNormal_Text_KirliaUsedToxic) != 0x11
	.error "BattleFrontier_BattlePikeRoomNormal_Text_KirliaUsedToxic must retain its original byte length"
	.endif
	@ data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.inc:700 BattleFrontier_BattlePikeRoomNormal_Text_KirliaUsedHypnosis
	.globl BattleFrontier_BattlePikeRoomNormal_Text_KirliaUsedHypnosis
BattleFrontier_BattlePikeRoomNormal_Text_KirliaUsedHypnosis: @ 0x08234D73
	.string "キルリアの さいみんじゅつ!"
	.byte EOS
	.if (. - BattleFrontier_BattlePikeRoomNormal_Text_KirliaUsedHypnosis) > 0xf
	.error "BattleFrontier_BattlePikeRoomNormal_Text_KirliaUsedHypnosis may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattlePikeRoomNormal_Text_KirliaUsedHypnosis) < 0xf
	.space 0xf - (. - BattleFrontier_BattlePikeRoomNormal_Text_KirliaUsedHypnosis)
	.endif
