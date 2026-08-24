	@ data/maps/DewfordTown/scripts.inc:630 DewfordTown_Text_TinyIslandCommunity
	.globl DewfordTown_Text_TinyIslandCommunity
DewfordTown_Text_TinyIslandCommunity: @ 0x081E50F8
	.string "ムロタウンって ちいさな しま だから\nなにかが はやりだすと\lみんな すぐに まねを するのよね{EOS}"
	.if (. - DewfordTown_Text_TinyIslandCommunity) > 0x32
	.error "DewfordTown_Text_TinyIslandCommunity may not grow beyond its original slot"
	.endif
	.if (. - DewfordTown_Text_TinyIslandCommunity) < 0x32
	.space 0x32 - (. - DewfordTown_Text_TinyIslandCommunity)
	.endif
	@ data/maps/DewfordTown/scripts.inc:633 DewfordTown_Text_TownSign
	.globl DewfordTown_Text_TownSign
DewfordTown_Text_TownSign: @ 0x081E512A
	.string "ここは ムロ タウン\nあおい うみに うかぶ ちいさな しま{EOS}"
	.if (. - DewfordTown_Text_TownSign) > 0x1f
	.error "DewfordTown_Text_TownSign may not grow beyond its original slot"
	.endif
	.if (. - DewfordTown_Text_TownSign) < 0x1f
	.space 0x1f - (. - DewfordTown_Text_TownSign)
	.endif
	@ data/maps/DewfordTown/scripts.inc:636 DewfordTown_Text_GymSign
	.globl DewfordTown_Text_GymSign
DewfordTown_Text_GymSign: @ 0x081E5149
	.string "ムロ タウン ポケモンジム\nリーダー トウキ\lかくとう ビッグウェーブ!{EOS}"
	.if (. - DewfordTown_Text_GymSign) > 0x25
	.error "DewfordTown_Text_GymSign may not grow beyond its original slot"
	.endif
	.if (. - DewfordTown_Text_GymSign) < 0x25
	.space 0x25 - (. - DewfordTown_Text_GymSign)
	.endif
	@ data/maps/DewfordTown/scripts.inc:639 DewfordTown_Text_HallSign
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl DewfordTown_Text_HallSign
DewfordTown_Text_HallSign: @ 0x081E516E
	.string "「ムロの しゅうかいじょ」\nみんなの じょうほう こうかんの ばしょ{EOS}"
	.if (. - DewfordTown_Text_HallSign) != 0x23
	.error "DewfordTown_Text_HallSign must retain its original byte length"
	.endif
	.globl gText_Rom_1E518D
	.set gText_Rom_1E518D, DewfordTown_Text_HallSign + 0x1f
	@ data/maps/DewfordTown/scripts.inc:642 Route104_Text_LandedInDewfordDeliverLetter
	.globl Route104_Text_LandedInDewfordDeliverLetter
Route104_Text_LandedInDewfordDeliverLetter: @ 0x081E5191
	.string "ハギ『ほい! ムロに とうちゃく!\pたしか ダイゴとやらに\nてがみを とどけるんだったな!{EOS}"
	.if (. - Route104_Text_LandedInDewfordDeliverLetter) > 0x2e
	.error "Route104_Text_LandedInDewfordDeliverLetter may not grow beyond its original slot"
	.endif
	.if (. - Route104_Text_LandedInDewfordDeliverLetter) < 0x2e
	.space 0x2e - (. - Route104_Text_LandedInDewfordDeliverLetter)
	.endif
	@ data/maps/DewfordTown/scripts.inc:645 DewfordTown_Text_SetSailBackToPetalburg
	.globl DewfordTown_Text_SetSailBackToPetalburg
DewfordTown_Text_SetSailBackToPetalburg: @ 0x081E51BF
	.string "ハギ『てがみは とどけたのかい?\pそれとも トウカに もどるのかね?{EOS}"
	.if (. - DewfordTown_Text_SetSailBackToPetalburg) > 0x23
	.error "DewfordTown_Text_SetSailBackToPetalburg may not grow beyond its original slot"
	.endif
	.if (. - DewfordTown_Text_SetSailBackToPetalburg) < 0x23
	.space 0x23 - (. - DewfordTown_Text_SetSailBackToPetalburg)
	.endif
	@ data/maps/DewfordTown/scripts.inc:648 DewfordTown_Text_PetalburgWereSettingSail2
	.globl DewfordTown_Text_PetalburgWereSettingSail2
DewfordTown_Text_PetalburgWereSettingSail2: @ 0x081E51E2
	.string "ハギ『では トウカに もどると しよう!\pよっしゃ! いくぞ ピーコちゃん!{EOS}"
	.if (. - DewfordTown_Text_PetalburgWereSettingSail2) > 0x27
	.error "DewfordTown_Text_PetalburgWereSettingSail2 may not grow beyond its original slot"
	.endif
	.if (. - DewfordTown_Text_PetalburgWereSettingSail2) < 0x27
	.space 0x27 - (. - DewfordTown_Text_PetalburgWereSettingSail2)
	.endif
	@ data/maps/DewfordTown/scripts.inc:651 DewfordTown_Text_GoDeliverIllBeWaiting
	.globl DewfordTown_Text_GoDeliverIllBeWaiting
DewfordTown_Text_GoDeliverIllBeWaiting: @ 0x081E5209
	.string "ハギ『では てがみを とどけておいで\nわしは ここで まっておるから{EOS}"
	.if (. - DewfordTown_Text_GoDeliverIllBeWaiting) > 0x23
	.error "DewfordTown_Text_GoDeliverIllBeWaiting may not grow beyond its original slot"
	.endif
	.if (. - DewfordTown_Text_GoDeliverIllBeWaiting) < 0x23
	.space 0x23 - (. - DewfordTown_Text_GoDeliverIllBeWaiting)
	.endif
	@ data/maps/DewfordTown/scripts.inc:654 DewfordTown_Text_BrineyLandedInDewford
	.globl DewfordTown_Text_BrineyLandedInDewford
DewfordTown_Text_BrineyLandedInDewford: @ 0x081E522C
	.string "ハギ『ほい! ムロタウンに とうちゃく!\pふねに のりたくなったら\nまた わしに こえを かけておくれ!{EOS}"
	.if (. - DewfordTown_Text_BrineyLandedInDewford) > 0x35
	.error "DewfordTown_Text_BrineyLandedInDewford may not grow beyond its original slot"
	.endif
	.if (. - DewfordTown_Text_BrineyLandedInDewford) < 0x35
	.space 0x35 - (. - DewfordTown_Text_BrineyLandedInDewford)
	.endif
	@ data/maps/DewfordTown/scripts.inc:657 DewfordTown_Text_WhereAreWeBound (+2 aliases)
	.globl gText_Rom_1E5261
gText_Rom_1E5261: @ 0x081E5261
	.string "ハギ『やあ! きみのため なら\nいつでも ふねを だそう!\pきみが いきたいのは どこ かな?{EOS}"
	.if (. - gText_Rom_1E5261) > 0x30
	.error "gText_Rom_1E5261 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E5261) < 0x30
	.space 0x30 - (. - gText_Rom_1E5261)
	.endif
	@ data/maps/DewfordTown/scripts.inc:660 DewfordTown_Text_PetalburgWereSettingSail
	.globl DewfordTown_Text_PetalburgWereSettingSail
DewfordTown_Text_PetalburgWereSettingSail: @ 0x081E5291
	.string "ハギ『トウカシティ か\pよっしゃ! いくぞ ピーコちゃん!{EOS}"
	.if (. - DewfordTown_Text_PetalburgWereSettingSail) > 0x1e
	.error "DewfordTown_Text_PetalburgWereSettingSail may not grow beyond its original slot"
	.endif
	.if (. - DewfordTown_Text_PetalburgWereSettingSail) < 0x1e
	.space 0x1e - (. - DewfordTown_Text_PetalburgWereSettingSail)
	.endif
	@ data/maps/DewfordTown/scripts.inc:663 DewfordTown_Text_SlateportWereSettingSail
	.globl DewfordTown_Text_SlateportWereSettingSail
DewfordTown_Text_SlateportWereSettingSail: @ 0x081E52AF
	.string "ハギ『カイナシティ か\pよっしゃ! いくぞ ピーコちゃん!{EOS}"
	.if (. - DewfordTown_Text_SlateportWereSettingSail) > 0x1e
	.error "DewfordTown_Text_SlateportWereSettingSail may not grow beyond its original slot"
	.endif
	.if (. - DewfordTown_Text_SlateportWereSettingSail) < 0x1e
	.space 0x1e - (. - DewfordTown_Text_SlateportWereSettingSail)
	.endif
	@ data/maps/DewfordTown/scripts.inc:666 DewfordTown_Text_JustTellMeWhenYouNeedToSetSail (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_1E52CD
gText_Rom_1E52CD: @ 0x081E52CD
	.string "ハギ『ふねに のる ひつようが あるときは\nいつでも こえを かけておくれ{EOS}"
	.if (. - gText_Rom_1E52CD) != 0x26
	.error "gText_Rom_1E52CD must retain its original byte length"
	.endif
	.globl gText_Rom_1E52EF
	.set gText_Rom_1E52EF, gText_Rom_1E52CD + 0x22
	@ data/maps/DewfordTown/scripts.inc:669 DewfordTown_Text_GettingItchToFish
	.globl DewfordTown_Text_GettingItchToFish
DewfordTown_Text_GettingItchToFish: @ 0x081E52F3
	.string "このへんは つりの めいしょ なんだ\nきみも つりが したくなった?{EOS}"
	.if (. - DewfordTown_Text_GettingItchToFish) > 0x23
	.error "DewfordTown_Text_GettingItchToFish may not grow beyond its original slot"
	.endif
	.if (. - DewfordTown_Text_GettingItchToFish) < 0x23
	.space 0x23 - (. - DewfordTown_Text_GettingItchToFish)
	.endif
	@ data/maps/DewfordTown/scripts.inc:672 DewfordTown_Text_GiveYouOneOfMyRods
	.globl DewfordTown_Text_GiveYouOneOfMyRods
DewfordTown_Text_GiveYouOneOfMyRods: @ 0x081E5316
	.string "うんうん うれしいな\nわたしの つりざお わけてあげよう!{EOS}"
	.if (. - DewfordTown_Text_GiveYouOneOfMyRods) > 0x1e
	.error "DewfordTown_Text_GiveYouOneOfMyRods may not grow beyond its original slot"
	.endif
	.if (. - DewfordTown_Text_GiveYouOneOfMyRods) < 0x1e
	.space 0x1e - (. - DewfordTown_Text_GiveYouOneOfMyRods)
	.endif
	@ data/maps/DewfordTown/scripts.inc:675 DewfordTown_Text_ThrowInFishingAdvice
	.globl DewfordTown_Text_ThrowInFishingAdvice
DewfordTown_Text_ThrowInFishingAdvice: @ 0x081E5334
	.string "よーしっ だいサービス!\nつりの コツも せつめい しておくよ!\pまずは すいめんに むかって\nつりざおを つかう!\pそして きもちを しゅうちゅう させ……\nひいてる ひいてる!! となったら\lすばやく つりざおを ひくんだ!\pすぐに ひきあげられる ときも あるけど\nおおものは なんども タイミングを\lあわせる ひつようが あるんだよ!{EOS}"
	.if (. - DewfordTown_Text_ThrowInFishingAdvice) > 0xac
	.error "DewfordTown_Text_ThrowInFishingAdvice may not grow beyond its original slot"
	.endif
	.if (. - DewfordTown_Text_ThrowInFishingAdvice) < 0xac
	.space 0xac - (. - DewfordTown_Text_ThrowInFishingAdvice)
	.endif
	@ data/maps/DewfordTown/scripts.inc:678 DewfordTown_Text_ThatsTooBadThen
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl DewfordTown_Text_ThatsTooBadThen
DewfordTown_Text_ThatsTooBadThen: @ 0x081E53E0
	.string "あらら……\nそれは ざんねん{EOS}"
	.if (. - DewfordTown_Text_ThatsTooBadThen) != 0xf
	.error "DewfordTown_Text_ThatsTooBadThen must retain its original byte length"
	.endif
	.globl gText_Rom_1E53EA
	.set gText_Rom_1E53EA, DewfordTown_Text_ThatsTooBadThen + 0xa
	@ data/maps/DewfordTown/scripts.inc:681 DewfordTown_Text_HowsYourFishing
	.globl DewfordTown_Text_HowsYourFishing
DewfordTown_Text_HowsYourFishing: @ 0x081E53EF
	.string "よっ!\nつりの ちょうしは どう?{EOS}"
	.if (. - DewfordTown_Text_HowsYourFishing) > 0x12
	.error "DewfordTown_Text_HowsYourFishing may not grow beyond its original slot"
	.endif
	.if (. - DewfordTown_Text_HowsYourFishing) < 0x12
	.space 0x12 - (. - DewfordTown_Text_HowsYourFishing)
	.endif
	@ data/maps/DewfordTown/scripts.inc:684 DewfordTown_Text_GreatHaulInSomeBigOnes
	.globl DewfordTown_Text_GreatHaulInSomeBigOnes
DewfordTown_Text_GreatHaulInSomeBigOnes: @ 0x081E5401
	.string "そうか! そりゃ すごい!\nおおものを つりあげて くれよ!{EOS}"
	.if (. - DewfordTown_Text_GreatHaulInSomeBigOnes) > 0x1f
	.error "DewfordTown_Text_GreatHaulInSomeBigOnes may not grow beyond its original slot"
	.endif
	.if (. - DewfordTown_Text_GreatHaulInSomeBigOnes) < 0x1f
	.space 0x1f - (. - DewfordTown_Text_GreatHaulInSomeBigOnes)
	.endif
	@ data/maps/DewfordTown/scripts.inc:687 DewfordTown_Text_FishingAdvice
	.globl DewfordTown_Text_FishingAdvice
DewfordTown_Text_FishingAdvice: @ 0x081E5420
	.string "なんだよ ガッカリ しないでよ!\nつりの コツを おしえて あげるから!\pまずは すいめんに むかって\nつりざおを つかう!\pそして きもちを しゅうちゅう させ……\nひいてる ひいてる!! となったら\lすばやく つりざおを ひくんだ!\pすぐに ひきあげられる ときも あるけど\nおおものは なんども タイミングを\lあわせる ひつようが あるんだよ!{EOS}"
	.if (. - DewfordTown_Text_FishingAdvice) > 0xb0
	.error "DewfordTown_Text_FishingAdvice may not grow beyond its original slot"
	.endif
	.if (. - DewfordTown_Text_FishingAdvice) < 0xb0
	.space 0xb0 - (. - DewfordTown_Text_FishingAdvice)
	.endif
	@ data/maps/DewfordTown/scripts.inc:690 DewfordTown_Text_XIsTheBiggestHappeningThingRight
	.globl DewfordTown_Text_XIsTheBiggestHappeningThingRight
DewfordTown_Text_XIsTheBiggestHappeningThingRight: @ 0x081E54D0
	.string "ぼく はやってる ものが すきで\nいつも チェック してるんだ\pねぇ 『{STR_VAR_1}』って\nしってるかい?\pもちろん しってるよね!\pだって いま\n『{STR_VAR_1}』が\lだいりゅうこう してるからね!\pきみの まわりでも\n『{STR_VAR_1}』が\lはやってる だろ?{EOS}"
	.if (. - DewfordTown_Text_XIsTheBiggestHappeningThingRight) > 0x76
	.error "DewfordTown_Text_XIsTheBiggestHappeningThingRight may not grow beyond its original slot"
	.endif
	.if (. - DewfordTown_Text_XIsTheBiggestHappeningThingRight) < 0x76
	.space 0x76 - (. - DewfordTown_Text_XIsTheBiggestHappeningThingRight)
	.endif
	@ data/maps/DewfordTown/scripts.inc:693 DewfordTown_Text_TellMeWhatsNewAndIn
	.globl DewfordTown_Text_TellMeWhatsNewAndIn
DewfordTown_Text_TellMeWhatsNewAndIn: @ 0x081E5546
	.string "え?\nはやって ないの!?\pじゃあ いま なにが はやってるか\nきかせてよ!{EOS}"
	.if (. - DewfordTown_Text_TellMeWhatsNewAndIn) > 0x27
	.error "DewfordTown_Text_TellMeWhatsNewAndIn may not grow beyond its original slot"
	.endif
	.if (. - DewfordTown_Text_TellMeWhatsNewAndIn) < 0x27
	.space 0x27 - (. - DewfordTown_Text_TellMeWhatsNewAndIn)
	.endif
	@ data/maps/DewfordTown/scripts.inc:696 DewfordTown_Text_OfCourseIKnowAboutThat
	.globl DewfordTown_Text_OfCourseIKnowAboutThat
DewfordTown_Text_OfCourseIKnowAboutThat: @ 0x081E556D
	.string "え? 『{STR_VAR_2}』?\p……\p…あ! あぁ!\nしってる しってるよ!\pもっ もちろん しってるさ!\n『{STR_VAR_2}』 だろ?\pいいよね!\n『{STR_VAR_2}』 って!\pいま すごく はやってる よね\nぼくが しらないはず ないじゃ ないか!\p『{STR_VAR_1}』 なんて\nもう じだいおくれ\pいまは 『{STR_VAR_2}』の\nじだい だね!{EOS}"
	.if (. - DewfordTown_Text_OfCourseIKnowAboutThat) > 0x91
	.error "DewfordTown_Text_OfCourseIKnowAboutThat may not grow beyond its original slot"
	.endif
	.if (. - DewfordTown_Text_OfCourseIKnowAboutThat) < 0x91
	.space 0x91 - (. - DewfordTown_Text_OfCourseIKnowAboutThat)
	.endif
	@ data/maps/DewfordTown/scripts.inc:699 DewfordTown_Text_XHuhIThinkYIsCool
	.globl DewfordTown_Text_XHuhIThinkYIsCool
DewfordTown_Text_XHuhIThinkYIsCool: @ 0x081E55FE
	.string "ふーん\n『{STR_VAR_2}』 か…\pでも ぼくは\n『{STR_VAR_1}』 のほうが\lいいと おもうけどね{EOS}"
	.if (. - DewfordTown_Text_XHuhIThinkYIsCool) > 0x28
	.error "DewfordTown_Text_XHuhIThinkYIsCool may not grow beyond its original slot"
	.endif
	.if (. - DewfordTown_Text_XHuhIThinkYIsCool) < 0x28
	.space 0x28 - (. - DewfordTown_Text_XHuhIThinkYIsCool)
	.endif
	@ data/maps/DewfordTown/scripts.inc:702 DewfordTown_Text_HearOfAnyTrendsComeShareWithMe
	.globl DewfordTown_Text_HearOfAnyTrendsComeShareWithMe
DewfordTown_Text_HearOfAnyTrendsComeShareWithMe: @ 0x081E5626
	.string "じゃあ あたらしい りゅうこうが あったら\nまた きかせて くれよ!{EOS}"
	.if (. - DewfordTown_Text_HearOfAnyTrendsComeShareWithMe) > 0x23
	.error "DewfordTown_Text_HearOfAnyTrendsComeShareWithMe may not grow beyond its original slot"
	.endif
	.if (. - DewfordTown_Text_HearOfAnyTrendsComeShareWithMe) < 0x23
	.space 0x23 - (. - DewfordTown_Text_HearOfAnyTrendsComeShareWithMe)
	.endif
	@ data/maps/DewfordTown/scripts.inc:705 DewfordTown_Text_YeahDefinitionOfInRightNow
	.globl DewfordTown_Text_YeahDefinitionOfInRightNow
DewfordTown_Text_YeahDefinitionOfInRightNow: @ 0x081E5649
	.string "そうだろ!\pやっぱり いまは\n『{STR_VAR_1}』 だよね!{EOS}"
	.if (. - DewfordTown_Text_YeahDefinitionOfInRightNow) > 0x19
	.error "DewfordTown_Text_YeahDefinitionOfInRightNow may not grow beyond its original slot"
	.endif
	.if (. - DewfordTown_Text_YeahDefinitionOfInRightNow) < 0x19
	.space 0x19 - (. - DewfordTown_Text_YeahDefinitionOfInRightNow)
	.endif
	@ Embedded ROM bytes: file offset 0x1E5662, size 0x2ED
	@ semanticized-mass: resolved embedded ROM pointers
	.byte 0x03, 0x6D, 0x56, 0x1E, 0x08, 0x02, 0xD6, 0x56, 0x1E, 0x08, 0x00, 0x29, 0x72, 0x08, 0x2B, 0x6C
	.byte 0x00, 0x07, 0x01, 0xA3, 0x56, 0x1E, 0x08, 0x2B, 0x8B, 0x00, 0x07, 0x01, 0xCE, 0x56, 0x1E, 0x08
	.byte 0x04, 0x63, 0x2F, 0x24, 0x08, 0x04, 0x87, 0x2F, 0x24, 0x08, 0x21, 0x53, 0x40, 0x01, 0x00, 0x07
	.byte 0x01, 0xA7, 0x56, 0x1E, 0x08, 0x21, 0x53, 0x40, 0x01, 0x00, 0x07, 0x01, 0xD2, 0x56, 0x1E, 0x08
	.byte 0x02, 0x2A, 0x6C, 0x00, 0x03, 0x42, 0x04, 0x80, 0x05, 0x80, 0x21, 0x04, 0x80, 0x09, 0x00, 0x06
	.byte 0x01, 0xB8, 0x56, 0x1E, 0x08, 0x03, 0x63, 0x08, 0x00, 0x0B, 0x00, 0x09, 0x00, 0x63, 0x07, 0x00
	.byte 0x09, 0x00, 0x08, 0x00, 0x65, 0x07, 0x00, 0x07, 0x2A, 0xA1, 0x03, 0x03, 0x2A, 0x6D, 0x03, 0x03
	.byte 0x29, 0x00, 0x40, 0x03, 0x53, 0x40, 0x01, 0x00, 0xE0, 0x56, 0x1E, 0x08, 0x00, 0x00, 0x69, 0x42
	.byte 0x08, 0x80, 0x09, 0x80, 0x21, 0x08, 0x80, 0x09, 0x00, 0x07, 0x01, 0xC9, 0x57, 0x1E, 0x08, 0x21
	.byte 0x08, 0x80, 0x09, 0x00, 0x07, 0x05, 0xEB, 0x57, 0x1E, 0x08, 0x28, 0x14, 0x00, 0xA0, 0x21, 0x0D
	.byte 0x80, 0x00, 0x00, 0x07, 0x01, 0xBF, 0x57, 0x1E, 0x08, 0x21, 0x0D, 0x80, 0x01, 0x00, 0x07, 0x01
	.byte 0xC4, 0x57, 0x1E, 0x08, 0x21, 0x08, 0x80, 0x09, 0x00, 0x07, 0x01, 0x30, 0x58, 0x1E, 0x08, 0x21
	.byte 0x08, 0x80, 0x09, 0x00, 0x07, 0x05, 0x3B, 0x58, 0x1E, 0x08, 0xA0, 0x21, 0x0D, 0x80, 0x00, 0x00
	.byte 0x06, 0x01, 0x44, 0x57, 0x1E, 0x08, 0x21, 0x0D, 0x80, 0x01, 0x00, 0x06, 0x01, 0x69, 0x57, 0x1E
	.byte 0x08, 0x02, 0x0F, 0x00
	.4byte LavaridgeTown_Text_MayNiceBadgesTakeThis
	.byte 0x09, 0x04, 0x1A, 0x00, 0x80, 0x17, 0x01, 0x1A
	.byte 0x01, 0x80, 0x01, 0x00, 0x09, 0x00, 0x29, 0xDD, 0x00, 0x0F, 0x00, 0xCC, 0x59, 0x1E, 0x08, 0x09
	.byte 0x04, 0x05, 0x8E, 0x57, 0x1E, 0x08, 0x02, 0x0F, 0x00
	.4byte LavaridgeTown_Text_BrendanNiceBadgesTakeThis
	.byte 0x09, 0x04, 0x1A
	.byte 0x00, 0x80, 0x17, 0x01, 0x1A, 0x01, 0x80, 0x01, 0x00, 0x09, 0x00, 0x29, 0xDD, 0x00, 0x0F, 0x00
	.4byte LavaridgeTown_Text_BrendanExplainGoGogglesChallengeDad
	.byte 0x09, 0x04, 0x05, 0x8E, 0x57, 0x1E, 0x08, 0x02, 0x68, 0x53, 0x08, 0x00
	.byte 0x55, 0x07, 0x00, 0x28, 0x1E, 0x00, 0x21, 0x08, 0x80, 0x09, 0x00, 0x07, 0x01, 0x46, 0x58, 0x1E
	.byte 0x08, 0x21, 0x08, 0x80, 0x09, 0x00, 0x07, 0x05, 0x58, 0x58, 0x1E, 0x08, 0x53, 0x07, 0x00, 0x16
	.byte 0x53, 0x40, 0x02, 0x00, 0x2A, 0x00, 0x40, 0x34, 0x00, 0x00, 0x35, 0x6B, 0x02, 0x33, 0x9F, 0x01
	.byte 0x01, 0x03, 0x33, 0xA5, 0x01, 0x01, 0x03, 0x4F, 0x08, 0x00, 0x29, 0x36, 0x24, 0x08, 0x51, 0x00
	.byte 0x00, 0x2F, 0x15, 0x00, 0x4F, 0x08, 0x00, 0x1B, 0x36, 0x24, 0x08, 0x51, 0x00, 0x00, 0x4F, 0x08
	.byte 0x00, 0x1D, 0x36, 0x24, 0x08, 0x51, 0x00, 0x00, 0x03, 0xAC, 0x0C, 0x00, 0x0F, 0x00, 0xAE, 0x55
	.byte 0x08, 0x00, 0x4F, 0x08, 0x00, 0x87, 0x58, 0x1E, 0x08, 0x51, 0x00, 0x00, 0xAD, 0x0C, 0x00, 0x0F
	.byte 0x00, 0xAE, 0x4F, 0x08, 0x00, 0x27, 0x36, 0x24, 0x08, 0x51, 0x00, 0x00, 0x2F, 0x15, 0x00, 0x4F
	.byte 0x08, 0x00, 0x1B, 0x36, 0x24, 0x08, 0x51, 0x00, 0x00, 0x4F, 0x08, 0x00, 0x1D, 0x36, 0x24, 0x08
	.byte 0x51, 0x00, 0x00, 0x4F, 0xFF, 0x00, 0x2B, 0x36, 0x24, 0x08, 0x51, 0x00, 0x00, 0x03, 0x4F, 0x08
	.byte 0x00, 0x83, 0x58, 0x1E, 0x08, 0x51, 0x00, 0x00, 0x03, 0x4F, 0x08, 0x00, 0x7C, 0x58, 0x1E, 0x08
	.byte 0x51, 0x00, 0x00, 0x03, 0x4F, 0xFF, 0x00, 0x6E, 0x58, 0x1E, 0x08, 0x4F, 0x07, 0x00, 0x72, 0x58
	.byte 0x1E, 0x08, 0x51, 0x00, 0x00, 0x03, 0x4F, 0x07, 0x00, 0x63, 0x58, 0x1E, 0x08, 0x51, 0x00, 0x00
	.byte 0x03, 0x18, 0x18, 0x18, 0x16, 0x16, 0x16, 0x16, 0x16, 0x16, 0x16, 0xFE, 0x14, 0x13, 0x28, 0xFE
	.byte 0x15, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0xFE, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A
	.byte 0xFE, 0x0A, 0x0A, 0x09, 0xFE, 0x08, 0xFE, 0x26, 0x0D, 0x80, 0x1E, 0x01, 0x21, 0x0D, 0x80, 0x01
	.byte 0x00, 0x06, 0x01, 0x9A, 0x58, 0x1E, 0x08, 0x02, 0xC3, 0x31, 0x02, 0x0F, 0x00, 0x87, 0x5C, 0x1E
	.byte 0x08, 0x09, 0x02, 0x02, 0x0F, 0x00
	.4byte LavaridgeTown_Text_PokemonNippedBackside @ ROM pointer 0x081E5CE8
	.byte 0x09, 0x03, 0x02, 0x0F, 0x00, 0x53, 0x5D, 0x1E, 0x08, 0x09, 0x02, 0x02, 0x0F, 0x00, 0x8B, 0x5D
	.byte 0x1E, 0x08, 0x09, 0x02, 0x02, 0x0F, 0x00
	.4byte LavaridgeTown_Text_HotSpringsClaims
	.byte 0x09, 0x02, 0x02, 0x0F, 0x00
	.4byte LavaridgeTown_Text_OhYouLikeHotSprings @ ROM pointer 0x081E5D2A
	.byte 0x09, 0x02, 0x02, 0x6A, 0x5A, 0x2B, 0x0A, 0x01, 0x06, 0x01, 0x16, 0x59, 0x1E, 0x08, 0x0F, 0x00
	.4byte LavaridgeTown_Text_HaveEggWillYouTakeIt @ ROM pointer 0x081E5B4B
	.byte 0x09, 0x05, 0x21, 0x0D, 0x80, 0x00, 0x00, 0x06, 0x01, 0x2A, 0x59, 0x1E, 0x08, 0x43, 0x21, 0x0D
	.byte 0x80, 0x06, 0x00, 0x06, 0x01, 0x20, 0x59, 0x1E, 0x08, 0x0F, 0x00
	.4byte LavaridgeTown_Text_HopeYoullWalkPlentyWithEgg
	.byte 0x09
	.byte 0x04, 0x29, 0x0A, 0x01, 0x31, 0x72, 0x01, 0x67
	.4byte LavaridgeTown_Text_ReceivedTheEgg @ ROM pointer 0x081E5C01
	.byte 0x32, 0x7A, 0x68, 0x01, 0x6C, 0x02, 0x0F, 0x00
	.4byte LavaridgeTown_Text_EverySoOftenEggFoundAtDayCare @ ROM pointer 0x081E5C5A
	.byte 0x09, 0x04, 0x6C, 0x02, 0x0F, 0x00
	.4byte LavaridgeTown_Text_NoRoomForThisEgg
	.byte 0x09, 0x04, 0x6C, 0x02, 0x0F, 0x00
	.4byte LavaridgeTown_Text_AsYouWishThen @ ROM pointer 0x081E5C31
	.byte 0x09, 0x04, 0x6C, 0x02, 0x0F, 0x00
	.4byte LavaridgeTown_Text_TownSign
	.byte 0x09, 0x03, 0x02, 0x0F, 0x00, 0x1B
	.byte 0x5E, 0x1E, 0x08, 0x09, 0x03, 0x02, 0x0F, 0x00
	.4byte LavaridgeTown_Text_HerbShopSign @ ROM pointer 0x081E5E46
	.byte 0x09, 0x03, 0x02
