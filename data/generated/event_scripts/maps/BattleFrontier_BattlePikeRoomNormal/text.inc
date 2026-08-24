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
	@ data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.inc:703 BattleFrontier_BattlePikeRoomNormal_Text_KirliaUsedThunderWave
	.globl BattleFrontier_BattlePikeRoomNormal_Text_KirliaUsedThunderWave
BattleFrontier_BattlePikeRoomNormal_Text_KirliaUsedThunderWave: @ 0x08234D82
	.string "キルリアの でんじは!"
	.byte EOS
	.if (. - BattleFrontier_BattlePikeRoomNormal_Text_KirliaUsedThunderWave) > 0xc
	.error "BattleFrontier_BattlePikeRoomNormal_Text_KirliaUsedThunderWave may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattlePikeRoomNormal_Text_KirliaUsedThunderWave) < 0xc
	.space 0xc - (. - BattleFrontier_BattlePikeRoomNormal_Text_KirliaUsedThunderWave)
	.endif
	@ data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.inc:706 BattleFrontier_BattlePikeRoomNormal_Text_KirliaUsedWillOWisp
	.globl BattleFrontier_BattlePikeRoomNormal_Text_KirliaUsedWillOWisp
BattleFrontier_BattlePikeRoomNormal_Text_KirliaUsedWillOWisp: @ 0x08234D8E
	.string "キルリアの おにび!"
	.byte EOS
	.if (. - BattleFrontier_BattlePikeRoomNormal_Text_KirliaUsedWillOWisp) > 0xb
	.error "BattleFrontier_BattlePikeRoomNormal_Text_KirliaUsedWillOWisp may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattlePikeRoomNormal_Text_KirliaUsedWillOWisp) < 0xb
	.space 0xb - (. - BattleFrontier_BattlePikeRoomNormal_Text_KirliaUsedWillOWisp)
	.endif
	@ data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.inc:709 BattleFrontier_BattlePikeRoomNormal_Text_DusclopsUsedWillOWisp
	.globl BattleFrontier_BattlePikeRoomNormal_Text_DusclopsUsedWillOWisp
BattleFrontier_BattlePikeRoomNormal_Text_DusclopsUsedWillOWisp: @ 0x08234D99
	.string "サマヨールの おにび!"
	.byte EOS
	.if (. - BattleFrontier_BattlePikeRoomNormal_Text_DusclopsUsedWillOWisp) > 0xc
	.error "BattleFrontier_BattlePikeRoomNormal_Text_DusclopsUsedWillOWisp may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattlePikeRoomNormal_Text_DusclopsUsedWillOWisp) < 0xc
	.space 0xc - (. - BattleFrontier_BattlePikeRoomNormal_Text_DusclopsUsedWillOWisp)
	.endif
	@ data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.inc:712 BattleFrontier_BattlePikeRoomNormal_Text_DusclopsUsedIceBeam
	.globl BattleFrontier_BattlePikeRoomNormal_Text_DusclopsUsedIceBeam
BattleFrontier_BattlePikeRoomNormal_Text_DusclopsUsedIceBeam: @ 0x08234DA5
	.string "サマヨールの れいとうビーム!"
	.byte EOS
	.if (. - BattleFrontier_BattlePikeRoomNormal_Text_DusclopsUsedIceBeam) > 0x10
	.error "BattleFrontier_BattlePikeRoomNormal_Text_DusclopsUsedIceBeam may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattlePikeRoomNormal_Text_DusclopsUsedIceBeam) < 0x10
	.space 0x10 - (. - BattleFrontier_BattlePikeRoomNormal_Text_DusclopsUsedIceBeam)
	.endif
	@ data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.inc:715 BattleFrontier_BattlePikeRoomNormal_Text_ThatsEnough
	.globl BattleFrontier_BattlePikeRoomNormal_Text_ThatsEnough
BattleFrontier_BattlePikeRoomNormal_Text_ThatsEnough: @ 0x08234DB5
	.string "ええいっ! いいかげんに しないかっ!!"
	.byte EOS
	.if (. - BattleFrontier_BattlePikeRoomNormal_Text_ThatsEnough) > 0x15
	.error "BattleFrontier_BattlePikeRoomNormal_Text_ThatsEnough may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattlePikeRoomNormal_Text_ThatsEnough) < 0x15
	.space 0x15 - (. - BattleFrontier_BattlePikeRoomNormal_Text_ThatsEnough)
	.endif
	@ data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.inc:719 BattleFrontier_BattlePikeRoomNormal_Text_ApologizeForKirlia
	.globl BattleFrontier_BattlePikeRoomNormal_Text_ApologizeForKirlia
BattleFrontier_BattlePikeRoomNormal_Text_ApologizeForKirlia: @ 0x08234DCA
	.string "もうしわけない……\pわたしの キルリアは おくびょう でな……"
	.byte EOS
	.if (. - BattleFrontier_BattlePikeRoomNormal_Text_ApologizeForKirlia) > 0x20
	.error "BattleFrontier_BattlePikeRoomNormal_Text_ApologizeForKirlia may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattlePikeRoomNormal_Text_ApologizeForKirlia) < 0x20
	.space 0x20 - (. - BattleFrontier_BattlePikeRoomNormal_Text_ApologizeForKirlia)
	.endif
	@ data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.inc:723 BattleFrontier_BattlePikeRoomNormal_Text_ApologizeForDusclops
	.globl BattleFrontier_BattlePikeRoomNormal_Text_ApologizeForDusclops
BattleFrontier_BattlePikeRoomNormal_Text_ApologizeForDusclops: @ 0x08234DEA
	.string "もうしわけない ……\pわたしの サマヨールは おくびょう でな……"
	.byte EOS
	.if (. - BattleFrontier_BattlePikeRoomNormal_Text_ApologizeForDusclops) > 0x22
	.error "BattleFrontier_BattlePikeRoomNormal_Text_ApologizeForDusclops may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattlePikeRoomNormal_Text_ApologizeForDusclops) < 0x22
	.space 0x22 - (. - BattleFrontier_BattlePikeRoomNormal_Text_ApologizeForDusclops)
	.endif
	@ data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.inc:727 BattleFrontier_BattlePikeRoomNormal_Text_AttacksWhenStartled
	.globl BattleFrontier_BattlePikeRoomNormal_Text_AttacksWhenStartled
BattleFrontier_BattlePikeRoomNormal_Text_AttacksWhenStartled: @ 0x08234E0C
	.string "きゅうに ひとを みると おどろいて\nおそいかかって しまうのだ……\pきみも ポケモンも だいじょうぶか?"
	.byte EOS
	.if (. - BattleFrontier_BattlePikeRoomNormal_Text_AttacksWhenStartled) > 0x36
	.error "BattleFrontier_BattlePikeRoomNormal_Text_AttacksWhenStartled may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattlePikeRoomNormal_Text_AttacksWhenStartled) < 0x36
	.space 0x36 - (. - BattleFrontier_BattlePikeRoomNormal_Text_AttacksWhenStartled)
	.endif
	@ data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.inc:732 BattleFrontier_BattlePikeRoomNormal_Text_ApologizeHopeMonsAreFine
	.globl BattleFrontier_BattlePikeRoomNormal_Text_ApologizeHopeMonsAreFine
BattleFrontier_BattlePikeRoomNormal_Text_ApologizeHopeMonsAreFine: @ 0x08234E42
	.string "すまなかったな……\nきみの ポケモンは ぶじか?"
	.byte EOS
	.if (. - BattleFrontier_BattlePikeRoomNormal_Text_ApologizeHopeMonsAreFine) > 0x19
	.error "BattleFrontier_BattlePikeRoomNormal_Text_ApologizeHopeMonsAreFine may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattlePikeRoomNormal_Text_ApologizeHopeMonsAreFine) < 0x19
	.space 0x19 - (. - BattleFrontier_BattlePikeRoomNormal_Text_ApologizeHopeMonsAreFine)
	.endif
	@ data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.inc:736 BattleFrontier_BattlePikeRoomNormal_Text_Silence (+1 aliases)
	.globl gText_Rom_234E5B
gText_Rom_234E5B: @ 0x08234E5B
	.string "…… …… ……\n…… …… ……"
	.byte EOS
	.if (. - gText_Rom_234E5B) > 0x12
	.error "gText_Rom_234E5B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_234E5B) < 0x12
	.space 0x12 - (. - gText_Rom_234E5B)
	.endif
	@ data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.inc:740 BattleFrontier_BattlePikeRoomNormal_Text_BattleSomewhatToughTrainer
	.globl BattleFrontier_BattlePikeRoomNormal_Text_BattleSomewhatToughTrainer
BattleFrontier_BattlePikeRoomNormal_Text_BattleSomewhatToughTrainer: @ 0x08234E6D
	.string "ようこそ……\pこちらでは しょうしょう うでの たつ\nトレーナーと たたかって いただきます……"
	.byte EOS
	.if (. - BattleFrontier_BattlePikeRoomNormal_Text_BattleSomewhatToughTrainer) > 0x31
	.error "BattleFrontier_BattlePikeRoomNormal_Text_BattleSomewhatToughTrainer may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattlePikeRoomNormal_Text_BattleSomewhatToughTrainer) < 0x31
	.space 0x31 - (. - BattleFrontier_BattlePikeRoomNormal_Text_BattleSomewhatToughTrainer)
	.endif
	@ data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.inc:745 BattleFrontier_BattlePikeRoomNormal_Text_RestoreToFullHealth
	.globl BattleFrontier_BattlePikeRoomNormal_Text_RestoreToFullHealth
BattleFrontier_BattlePikeRoomNormal_Text_RestoreToFullHealth: @ 0x08234E9E
	.string "……すばらしい……\pおきゃくさまの しょうりを たたえ\nポケモンを かいふくして さしあげます……"
	.byte EOS
	.if (. - BattleFrontier_BattlePikeRoomNormal_Text_RestoreToFullHealth) > 0x32
	.error "BattleFrontier_BattlePikeRoomNormal_Text_RestoreToFullHealth may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattlePikeRoomNormal_Text_RestoreToFullHealth) < 0x32
	.space 0x32 - (. - BattleFrontier_BattlePikeRoomNormal_Text_RestoreToFullHealth)
	.endif
	@ data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.inc:642 BattleFrontier_BattlePikeRoomNormal_Text_EnjoyRestOfChallenge (+2 aliases)
	.globl gText_Rom_234ED0
gText_Rom_234ED0: @ 0x08234ED0
	.string "それでは ひきつづき\nゲームを おたのしみ ください……"
	.byte EOS
	.if (. - gText_Rom_234ED0) > 0x1d
	.error "gText_Rom_234ED0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_234ED0) < 0x1d
	.space 0x1d - (. - gText_Rom_234ED0)
	.endif
	@ data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.inc:754 BattleFrontier_BattlePikeRoomNormal_Text_ImThePikeQueen
	.globl BattleFrontier_BattlePikeRoomNormal_Text_ImThePikeQueen
BattleFrontier_BattlePikeRoomNormal_Text_ImThePikeQueen: @ 0x08234EED
	.string "あたしは アザミ……\nここの あるじ…… チューブクイーン……\p…… まあ わかると おもうけど\nあたしを たおさなきゃ\lこのさき すすめないよ……\p…… おしゃべりは すきじゃ ないからね\nさっさと かかっといで……"
	.byte EOS
	.if (. - BattleFrontier_BattlePikeRoomNormal_Text_ImThePikeQueen) > 0x6e
	.error "BattleFrontier_BattlePikeRoomNormal_Text_ImThePikeQueen may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattlePikeRoomNormal_Text_ImThePikeQueen) < 0x6e
	.space 0x6e - (. - BattleFrontier_BattlePikeRoomNormal_Text_ImThePikeQueen)
	.endif
	@ data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.inc:763 BattleFrontier_BattlePikeRoomNormal_Text_HopeYouDidntUseUpLuck
	.globl BattleFrontier_BattlePikeRoomNormal_Text_HopeYouDidntUseUpLuck
BattleFrontier_BattlePikeRoomNormal_Text_HopeYouDidntUseUpLuck: @ 0x08234F5B
	.string "あんたの うん……\nここで つきなきゃ いい けどね……"
	.byte EOS
	.if (. - BattleFrontier_BattlePikeRoomNormal_Text_HopeYouDidntUseUpLuck) > 0x1d
	.error "BattleFrontier_BattlePikeRoomNormal_Text_HopeYouDidntUseUpLuck may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattlePikeRoomNormal_Text_HopeYouDidntUseUpLuck) < 0x1d
	.space 0x1d - (. - BattleFrontier_BattlePikeRoomNormal_Text_HopeYouDidntUseUpLuck)
	.endif
	@ data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.inc:767 BattleFrontier_BattlePikeRoomNormal_Text_LucyShowMeFrontierPass
	.globl BattleFrontier_BattlePikeRoomNormal_Text_LucyShowMeFrontierPass
BattleFrontier_BattlePikeRoomNormal_Text_LucyShowMeFrontierPass: @ 0x08234F78
	.string "アザミ『…… …… …… ……\nフロンティアパス よこしな……"
	.byte EOS
	.if (. - BattleFrontier_BattlePikeRoomNormal_Text_LucyShowMeFrontierPass) > 0x20
	.error "BattleFrontier_BattlePikeRoomNormal_Text_LucyShowMeFrontierPass may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattlePikeRoomNormal_Text_LucyShowMeFrontierPass) < 0x20
	.space 0x20 - (. - BattleFrontier_BattlePikeRoomNormal_Text_LucyShowMeFrontierPass)
	.endif
	@ data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.inc:771 BattleFrontier_BattlePikeRoomNormal_Text_ReceivedLuckSymbol
	.globl BattleFrontier_BattlePikeRoomNormal_Text_ReceivedLuckSymbol
BattleFrontier_BattlePikeRoomNormal_Text_ReceivedLuckSymbol: @ 0x08234F98
	.string "フロンティアパスに\nラックシンボルが きざまれた!"
	.byte EOS
	.if (. - BattleFrontier_BattlePikeRoomNormal_Text_ReceivedLuckSymbol) > 0x1a
	.error "BattleFrontier_BattlePikeRoomNormal_Text_ReceivedLuckSymbol may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattlePikeRoomNormal_Text_ReceivedLuckSymbol) < 0x1a
	.space 0x1a - (. - BattleFrontier_BattlePikeRoomNormal_Text_ReceivedLuckSymbol)
	.endif
	@ data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.inc:775 BattleFrontier_BattlePikeRoomNormal_Text_AllThereIsDisappear
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl BattleFrontier_BattlePikeRoomNormal_Text_AllThereIsDisappear
BattleFrontier_BattlePikeRoomNormal_Text_AllThereIsDisappear: @ 0x08234FB2
	.string "…… ほら…… さっさと きえな………"
	.byte EOS
	.if (. - BattleFrontier_BattlePikeRoomNormal_Text_AllThereIsDisappear) != 0x14
	.error "BattleFrontier_BattlePikeRoomNormal_Text_AllThereIsDisappear must retain its original byte length"
	.endif
	@ data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.inc:779 BattleFrontier_BattlePikeRoomNormal_Text_LucyYouAgain
	.globl BattleFrontier_BattlePikeRoomNormal_Text_LucyYouAgain
BattleFrontier_BattlePikeRoomNormal_Text_LucyYouAgain: @ 0x08234FC6
	.string "アザミ『…… また あんたか……\p…… …… …… ……\p…… …… はなも あらしも ふみこえて\nいきてきた この あたし…… ……\pそうそう おなじ あいてに\nまけて やる ひつようも ないね……\l…… …… …… …… いいわ……\lやって やるよ…… …… …… ……"
	.byte EOS
	.if (. - BattleFrontier_BattlePikeRoomNormal_Text_LucyYouAgain) > 0x8a
	.error "BattleFrontier_BattlePikeRoomNormal_Text_LucyYouAgain may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattlePikeRoomNormal_Text_LucyYouAgain) < 0x8a
	.space 0x8a - (. - BattleFrontier_BattlePikeRoomNormal_Text_LucyYouAgain)
	.endif
	@ data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.inc:789 BattleFrontier_BattlePikeRoomNormal_Text_NowComeOn
	.globl BattleFrontier_BattlePikeRoomNormal_Text_NowComeOn
BattleFrontier_BattlePikeRoomNormal_Text_NowComeOn: @ 0x08235050
	.string "おらっ!! かかっといでっ!!"
	.byte EOS
	.if (. - BattleFrontier_BattlePikeRoomNormal_Text_NowComeOn) > 0x10
	.error "BattleFrontier_BattlePikeRoomNormal_Text_NowComeOn may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattlePikeRoomNormal_Text_NowComeOn) < 0x10
	.space 0x10 - (. - BattleFrontier_BattlePikeRoomNormal_Text_NowComeOn)
	.endif
	@ data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.inc:793 BattleFrontier_BattlePikeRoomNormal_Text_LucyFrontierPass
	.globl BattleFrontier_BattlePikeRoomNormal_Text_LucyFrontierPass
BattleFrontier_BattlePikeRoomNormal_Text_LucyFrontierPass: @ 0x08235060
	.string "アザミ『…… …… …… ……\p…… …… フロンティアパス……"
	.byte EOS
	.if (. - BattleFrontier_BattlePikeRoomNormal_Text_LucyFrontierPass) > 0x21
	.error "BattleFrontier_BattlePikeRoomNormal_Text_LucyFrontierPass may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattlePikeRoomNormal_Text_LucyFrontierPass) < 0x21
	.space 0x21 - (. - BattleFrontier_BattlePikeRoomNormal_Text_LucyFrontierPass)
	.endif
	@ data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.inc:797 BattleFrontier_BattlePikeRoomNormal_Text_LuckSymbolTookGoldenShine
	.globl BattleFrontier_BattlePikeRoomNormal_Text_LuckSymbolTookGoldenShine
BattleFrontier_BattlePikeRoomNormal_Text_LuckSymbolTookGoldenShine: @ 0x08235081
	.string "ラックシンボルが\nきんいろに かがやいた!"
	.byte EOS
	.if (. - BattleFrontier_BattlePikeRoomNormal_Text_LuckSymbolTookGoldenShine) > 0x16
	.error "BattleFrontier_BattlePikeRoomNormal_Text_LuckSymbolTookGoldenShine may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattlePikeRoomNormal_Text_LuckSymbolTookGoldenShine) < 0x16
	.space 0x16 - (. - BattleFrontier_BattlePikeRoomNormal_Text_LuckSymbolTookGoldenShine)
	.endif
	@ data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.inc:801 BattleFrontier_BattlePikeRoomNormal_Text_IWontForget
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl BattleFrontier_BattlePikeRoomNormal_Text_IWontForget
BattleFrontier_BattlePikeRoomNormal_Text_IWontForget: @ 0x08235097
	.string "…… …… あんた……\nいっしょう わすれない からね………"
	.byte EOS
	.if (. - BattleFrontier_BattlePikeRoomNormal_Text_IWontForget) != 0x1f
	.error "BattleFrontier_BattlePikeRoomNormal_Text_IWontForget must retain its original byte length"
	.endif
	@ data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.inc:805 BattleFrontier_BattlePikeRoomNormal_Text_ChoseRoomNoHeal
	.globl BattleFrontier_BattlePikeRoomNormal_Text_ChoseRoomNoHeal
BattleFrontier_BattlePikeRoomNormal_Text_ChoseRoomNoHeal: @ 0x082350B6
	.string "ようこそ いらっしゃい ました……\pうふふ……\nなんて うんの ない おかた……\pさいごに えらんだのが\nこのへやで なければ ポケモンたちを\lかいふくして さしあげたのに……"
	.byte EOS
	.if (. - BattleFrontier_BattlePikeRoomNormal_Text_ChoseRoomNoHeal) > 0x59
	.error "BattleFrontier_BattlePikeRoomNormal_Text_ChoseRoomNoHeal may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattlePikeRoomNormal_Text_ChoseRoomNoHeal) < 0x59
	.space 0x59 - (. - BattleFrontier_BattlePikeRoomNormal_Text_ChoseRoomNoHeal)
	.endif
