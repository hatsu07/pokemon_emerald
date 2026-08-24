	@ data/maps/LilycoveCity_ContestLobby/scripts.inc:974 LilycoveCity_ContestLobby_Text_LadyGaveMePokeblockCase
	.globl LilycoveCity_ContestLobby_Text_LadyGaveMePokeblockCase
LilycoveCity_ContestLobby_Text_LadyGaveMePokeblockCase: @ 0x082073D0
	.string "うわーい!\pうけつけの おねえちゃんから\nポロック いれる ケース もらった!{EOS}"
	.if (. - LilycoveCity_ContestLobby_Text_LadyGaveMePokeblockCase) > 0x28
	.error "LilycoveCity_ContestLobby_Text_LadyGaveMePokeblockCase may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_ContestLobby_Text_LadyGaveMePokeblockCase) < 0x28
	.space 0x28 - (. - LilycoveCity_ContestLobby_Text_LadyGaveMePokeblockCase)
	.endif
	@ data/maps/LilycoveCity_ContestLobby/scripts.inc:977 LilycoveCity_ContestLobby_Text_MakePokeblocksDifferentBerries
	.globl LilycoveCity_ContestLobby_Text_MakePokeblocksDifferentBerries
LilycoveCity_ContestLobby_Text_MakePokeblocksDifferentBerries: @ 0x082073F8
	.string "ポロック つくって いれて!\pでね ポロック つくる ときは\nみんなが ちがう きのみで\lつくらないと ダメ なんだよ!{EOS}"
	.if (. - LilycoveCity_ContestLobby_Text_MakePokeblocksDifferentBerries) > 0x3d
	.error "LilycoveCity_ContestLobby_Text_MakePokeblocksDifferentBerries may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_ContestLobby_Text_MakePokeblocksDifferentBerries) < 0x3d
	.space 0x3d - (. - LilycoveCity_ContestLobby_Text_MakePokeblocksDifferentBerries)
	.endif
	@ data/maps/LilycoveCity_ContestLobby/scripts.inc:980 LilycoveCity_ContestLobby_Text_YourPokemonSpurredMeToPaint
	.globl LilycoveCity_ContestLobby_Text_YourPokemonSpurredMeToPaint
LilycoveCity_ContestLobby_Text_YourPokemonSpurredMeToPaint: @ 0x08207435
	.string "ゆうしょう おめでとう!\pさっそく きねんに\nきみの ポケモンの えを\lかきあげたんだけど……\pなんだか きみの ポケモンの アピールが\nあまり にも すばらしくて\lいつもより うまく かけたんだ!\lほらっ これ!{EOS}"
	.if (. - LilycoveCity_ContestLobby_Text_YourPokemonSpurredMeToPaint) > 0x6c
	.error "LilycoveCity_ContestLobby_Text_YourPokemonSpurredMeToPaint may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_ContestLobby_Text_YourPokemonSpurredMeToPaint) < 0x6c
	.space 0x6c - (. - LilycoveCity_ContestLobby_Text_YourPokemonSpurredMeToPaint)
	.endif
	@ data/maps/LilycoveCity_ContestLobby/scripts.inc:983 LilycoveCity_ContestLobby_Text_ShouldITakePaintingToMuseum
	.globl LilycoveCity_ContestLobby_Text_ShouldITakePaintingToMuseum
LilycoveCity_ContestLobby_Text_ShouldITakePaintingToMuseum: @ 0x082074A1
	.string "どうかな? じしんさく なんだけど\nきにいったろ?\pこれくらいの でき なら\nびじゅつかんに かざられて いても\lふしぎじゃ ないね!\p……え ほんとに びじゅつかんで\nえを さがして いるって?\lじゃあ これ もっていって みようかな?{EOS}"
	.if (. - LilycoveCity_ContestLobby_Text_ShouldITakePaintingToMuseum) > 0x78
	.error "LilycoveCity_ContestLobby_Text_ShouldITakePaintingToMuseum may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_ContestLobby_Text_ShouldITakePaintingToMuseum) < 0x78
	.space 0x78 - (. - LilycoveCity_ContestLobby_Text_ShouldITakePaintingToMuseum)
	.endif
	@ data/maps/LilycoveCity_ContestLobby/scripts.inc:986 LilycoveCity_ContestLobby_Text_IllTakePaintingToMuseum
	.globl LilycoveCity_ContestLobby_Text_IllTakePaintingToMuseum
LilycoveCity_ContestLobby_Text_IllTakePaintingToMuseum: @ 0x08207519
	.string "そ そうか!\nじゃ いますぐ もっていって みるよ\lタイトルも つけて おくからね!\pこれが きにいられて\nかざって もらえて いるか どうか\lきみも こんど みに いってね!\lじゃ ありがとう!{EOS}"
	.if (. - LilycoveCity_ContestLobby_Text_IllTakePaintingToMuseum) > 0x63
	.error "LilycoveCity_ContestLobby_Text_IllTakePaintingToMuseum may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_ContestLobby_Text_IllTakePaintingToMuseum) < 0x63
	.space 0x63 - (. - LilycoveCity_ContestLobby_Text_IllTakePaintingToMuseum)
	.endif
	@ data/maps/LilycoveCity_ContestLobby/scripts.inc:989 LilycoveCity_ContestLobby_Text_TakeMementoOfPainting
	.globl LilycoveCity_ContestLobby_Text_TakeMementoOfPainting
LilycoveCity_ContestLobby_Text_TakeMementoOfPainting: @ 0x0820757C
	.string "……あ そうだ\pポケモンを かかせて もらった きねんに\nこれを うけとってよ!{EOS}"
	.if (. - LilycoveCity_ContestLobby_Text_TakeMementoOfPainting) > 0x29
	.error "LilycoveCity_ContestLobby_Text_TakeMementoOfPainting may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_ContestLobby_Text_TakeMementoOfPainting) < 0x29
	.space 0x29 - (. - LilycoveCity_ContestLobby_Text_TakeMementoOfPainting)
	.endif
	@ data/maps/LilycoveCity_ContestLobby/scripts.inc:992 LilycoveCity_ContestLobby_Text_ReceivedARibbon
	.globl gText_Rom_2075A5
gText_Rom_2075A5: @ 0x082075A5
	.string "{PLAYER}は リボンを もらった!{EOS}"
	.if (. - gText_Rom_2075A5) > 0xf
	.error "gText_Rom_2075A5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2075A5) < 0xf
	.space 0xf - (. - gText_Rom_2075A5)
	.endif
	@ data/maps/LilycoveCity_ContestLobby/scripts.inc:995 LilycoveCity_ContestLobby_Text_PutTheRibbonOnMon
	.globl gText_Rom_2075B4
gText_Rom_2075B4: @ 0x082075B4
	.string "{PLAYER}は リボンを\n{STR_VAR_1}に つけて あげた!{EOS}"
	.if (. - gText_Rom_2075B4) > 0x16
	.error "gText_Rom_2075B4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2075B4) < 0x16
	.space 0x16 - (. - gText_Rom_2075B4)
	.endif
	@ data/maps/LilycoveCity_ContestLobby/scripts.inc:998 LilycoveCity_ContestLobby_Text_OkaySeeYou
	.globl LilycoveCity_ContestLobby_Text_OkaySeeYou
LilycoveCity_ContestLobby_Text_OkaySeeYou: @ 0x082075CA
	.string "それじゃね!{EOS}"
	.if (. - LilycoveCity_ContestLobby_Text_OkaySeeYou) > 0x7
	.error "LilycoveCity_ContestLobby_Text_OkaySeeYou may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_ContestLobby_Text_OkaySeeYou) < 0x7
	.space 0x7 - (. - LilycoveCity_ContestLobby_Text_OkaySeeYou)
	.endif
	@ data/maps/LilycoveCity_ContestLobby/scripts.inc:1001 LilycoveCity_ContestLobby_Text_TakeHomeButIdLikeToTakeToMuseum
	.globl LilycoveCity_ContestLobby_Text_TakeHomeButIdLikeToTakeToMuseum
LilycoveCity_ContestLobby_Text_TakeHomeButIdLikeToTakeToMuseum: @ 0x082075D1
	.string "うーん…… じゃあ これは\nぼくが もってかえると するか……\pでも やっぱり もっていきたいな……\nいいだろ?{EOS}"
	.if (. - LilycoveCity_ContestLobby_Text_TakeHomeButIdLikeToTakeToMuseum) > 0x39
	.error "LilycoveCity_ContestLobby_Text_TakeHomeButIdLikeToTakeToMuseum may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_ContestLobby_Text_TakeHomeButIdLikeToTakeToMuseum) < 0x39
	.space 0x39 - (. - LilycoveCity_ContestLobby_Text_TakeHomeButIdLikeToTakeToMuseum)
	.endif
	@ data/maps/LilycoveCity_ContestLobby/scripts.inc:1004 LilycoveCity_ContestLobby_Text_FineThatsTheWayItIs
	.globl LilycoveCity_ContestLobby_Text_FineThatsTheWayItIs
LilycoveCity_ContestLobby_Text_FineThatsTheWayItIs: @ 0x0820760A
	.string "そっか しかたないね\nそれじゃ これは ぼくの\lいえに かざります\pつぎ がんばると するか……\nじゃあな{EOS}"
	.if (. - LilycoveCity_ContestLobby_Text_FineThatsTheWayItIs) > 0x36
	.error "LilycoveCity_ContestLobby_Text_FineThatsTheWayItIs may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_ContestLobby_Text_FineThatsTheWayItIs) < 0x36
	.space 0x36 - (. - LilycoveCity_ContestLobby_Text_FineThatsTheWayItIs)
	.endif
	@ data/maps/LilycoveCity_ContestLobby/scripts.inc:1007 LilycoveCity_ContestLobby_Text_MasterRankHereICome
	.globl LilycoveCity_ContestLobby_Text_MasterRankHereICome
LilycoveCity_ContestLobby_Text_MasterRankHereICome: @ 0x08207640
	.string "いっ いよいよ\nマスターランクに でるぞ……\pおれの ポケモンちゃんが\nこのよで いちばん\lかわいいって ことを\lしょうめいする ときが きたんだ……\lうへへへへ{EOS}"
	.if (. - LilycoveCity_ContestLobby_Text_MasterRankHereICome) > 0x52
	.error "LilycoveCity_ContestLobby_Text_MasterRankHereICome may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_ContestLobby_Text_MasterRankHereICome) < 0x52
	.space 0x52 - (. - LilycoveCity_ContestLobby_Text_MasterRankHereICome)
	.endif
	@ data/maps/LilycoveCity_ContestLobby/scripts.inc:1010 LilycoveCity_ContestLobby_Text_WholeVarietyOfPokemonHere
	.globl LilycoveCity_ContestLobby_Text_WholeVarietyOfPokemonHere
LilycoveCity_ContestLobby_Text_WholeVarietyOfPokemonHere: @ 0x08207692
	.string "ここに くれば\nポケモンを たくさん みられるから\lさんぽコースに してるの!{EOS}"
	.if (. - LilycoveCity_ContestLobby_Text_WholeVarietyOfPokemonHere) > 0x28
	.error "LilycoveCity_ContestLobby_Text_WholeVarietyOfPokemonHere may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_ContestLobby_Text_WholeVarietyOfPokemonHere) < 0x28
	.space 0x28 - (. - LilycoveCity_ContestLobby_Text_WholeVarietyOfPokemonHere)
	.endif
	@ data/maps/LilycoveCity_ContestLobby/scripts.inc:1013 LilycoveCity_ContestLobby_Text_ContestFeastForEyes
	.globl LilycoveCity_ContestLobby_Text_ContestFeastForEyes
LilycoveCity_ContestLobby_Text_ContestFeastForEyes: @ 0x082076BA
	.string "いやあ コンテストかいじょうに くると\nかきがいの ある ポケモンが\lいっぱい だね!{EOS}"
	.if (. - LilycoveCity_ContestLobby_Text_ContestFeastForEyes) > 0x2c
	.error "LilycoveCity_ContestLobby_Text_ContestFeastForEyes may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_ContestLobby_Text_ContestFeastForEyes) < 0x2c
	.space 0x2c - (. - LilycoveCity_ContestLobby_Text_ContestFeastForEyes)
	.endif
	@ data/maps/LilycoveCity_ContestLobby/scripts.inc:1016 LilycoveCity_ContestLobby_Text_ToughContestIsExtreme
	.globl LilycoveCity_ContestLobby_Text_ToughContestIsExtreme
LilycoveCity_ContestLobby_Text_ToughContestIsExtreme: @ 0x082076E6
	.string "たくましさコンテストって\nさいこう だよな!\pちからづよい アピール……\nほとばしる あせ…… たまらん!{EOS}"
	.if (. - LilycoveCity_ContestLobby_Text_ToughContestIsExtreme) > 0x36
	.error "LilycoveCity_ContestLobby_Text_ToughContestIsExtreme may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_ContestLobby_Text_ToughContestIsExtreme) < 0x36
	.space 0x36 - (. - LilycoveCity_ContestLobby_Text_ToughContestIsExtreme)
	.endif
	@ data/maps/LilycoveCity_ContestLobby/scripts.inc:1019 LilycoveCity_ContestLobby_Text_LavishedCareOnMon
	.globl LilycoveCity_ContestLobby_Text_LavishedCareOnMon
LilycoveCity_ContestLobby_Text_LavishedCareOnMon: @ 0x0820771C
	.string "まいにち だいじに だいじに\nそだてあげた わしの ポケモン\lコンディションは カンペキ!\lきょうは かつぞおおおおおうう!{EOS}"
	.if (. - LilycoveCity_ContestLobby_Text_LavishedCareOnMon) > 0x3f
	.error "LilycoveCity_ContestLobby_Text_LavishedCareOnMon may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_ContestLobby_Text_LavishedCareOnMon) < 0x3f
	.space 0x3f - (. - LilycoveCity_ContestLobby_Text_LavishedCareOnMon)
	.endif
	@ data/maps/LilycoveCity_ContestLobby/scripts.inc:1022 LilycoveCity_ContestLobby_Text_MadePokeblocksWithFamily
	.globl LilycoveCity_ContestLobby_Text_MadePokeblocksWithFamily
LilycoveCity_ContestLobby_Text_MadePokeblocksWithFamily: @ 0x0820775B
	.string "ママと パパと おねえちゃんと\n4にんで ポロックを つくったら\lすごく いいやつが できたんだ!\pきっと おおぜいで つくれば つくるほど\nなめらかで いい ポロックが できるんだよ!{EOS}"
	.if (. - LilycoveCity_ContestLobby_Text_MadePokeblocksWithFamily) > 0x5e
	.error "LilycoveCity_ContestLobby_Text_MadePokeblocksWithFamily may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_ContestLobby_Text_MadePokeblocksWithFamily) < 0x5e
	.space 0x5e - (. - LilycoveCity_ContestLobby_Text_MadePokeblocksWithFamily)
	.endif
	@ analyzed canonical ROM range 0x082077B9-0x08207A82
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_082077B9: @ 0x082077B9
	.byte 0x00
.globl EventScript_JP_082077BA
EventScript_JP_082077BA: @ 0x082077BA
	loadword 0x00, LilycoveCity_ContestHall_Text_TodayWonSmartnessContest
	callstd 0x02
	end
.globl EventScript_JP_082077C3
EventScript_JP_082077C3: @ 0x082077C3
	loadword 0x00, LilycoveCity_ContestHall_Text_EnteredBunchOfContests
	callstd 0x02
	end
.globl EventScript_JP_082077CC
EventScript_JP_082077CC: @ 0x082077CC
	loadword 0x00, LilycoveCity_ContestHall_Text_ManWhoWonEarlierHadPokeblocks
	callstd 0x02
	end
.globl EventScript_JP_082077D5
EventScript_JP_082077D5: @ 0x082077D5
	loadword 0x00, LilycoveCity_ContestHall_Text_IsntThisPlaceHumongous
	callstd 0x02
	end
.globl EventScript_JP_082077DE
EventScript_JP_082077DE: @ 0x082077DE
	lock
	faceplayer
	loadword 0x00, LilycoveCity_ContestHall_Text_GiveItBestSmartAppeal
	callstd 0x04
	closemessage
	@ event command: applymovement
	applymovement 0x0004, PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	waitmovement 0x0000
	release
	end
.globl EventScript_JP_082077F5
EventScript_JP_082077F5: @ 0x082077F5
	lock
	faceplayer
	loadword 0x00, LilycoveCity_ContestHall_Text_AreYouEnjoyingThisContest
	callstd 0x04
	closemessage
	@ event command: applymovement
	applymovement 0x0005, PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	waitmovement 0x0000
	release
	end
.globl EventScript_JP_0820780C
EventScript_JP_0820780C: @ 0x0820780C
	lock
	faceplayer
	loadword 0x00, LilycoveCity_ContestHall_Text_EnteredWrongContest
	callstd 0x04
	closemessage
	@ event command: applymovement
	applymovement 0x0006, PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	waitmovement 0x0000
	release
	end
.globl EventScript_JP_08207823
EventScript_JP_08207823: @ 0x08207823
	lock
	faceplayer
	loadword 0x00, LilycoveCity_ContestHall_Text_RaisedMonToBeSmart
	callstd 0x04
	closemessage
	@ event command: applymovement
	applymovement 0x0007, PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	waitmovement 0x0000
	release
	end
.globl EventScript_JP_0820783A
EventScript_JP_0820783A: @ 0x0820783A
	lock
	faceplayer
	loadword 0x00, LilycoveCity_ContestHall_Text_IfMonPullsSmartMoveNext
	callstd 0x04
	closemessage
	@ event command: applymovement
	applymovement 0x0008, PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	waitmovement 0x0000
	release
	end
.globl EventScript_JP_08207851
EventScript_JP_08207851: @ 0x08207851
	lock
	faceplayer
	loadword 0x00, LilycoveCity_ContestHall_Text_DontAppreciateCuteLeechLife
	callstd 0x04
	closemessage
	@ event command: applymovement
	applymovement 0x0009, PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	waitmovement 0x0000
	release
	end
.globl EventScript_JP_08207868
EventScript_JP_08207868: @ 0x08207868
	loadword 0x00, LilycoveCity_ContestHall_Text_YoureBeautifulGrandpa
	callstd 0x03
	end
.globl EventScript_JP_08207871
EventScript_JP_08207871: @ 0x08207871
	lock
	faceplayer
	loadword 0x00, LilycoveCity_ContestHall_Text_AllSeemToUseDifferentMoves
	callstd 0x04
	closemessage
	@ event command: applymovement
	applymovement 0x000C, PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	waitmovement 0x0000
	release
	end
.globl EventScript_JP_08207888
EventScript_JP_08207888: @ 0x08207888
	lock
	faceplayer
	loadword 0x00, LilycoveCity_ContestHall_Text_PokemonSmarterThanTrainers
	callstd 0x04
	closemessage
	@ event command: applymovement
	applymovement 0x0016, PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	waitmovement 0x0000
	release
	end
.globl EventScript_JP_0820789F
EventScript_JP_0820789F: @ 0x0820789F
	lock
	faceplayer
	loadword 0x00, LilycoveCity_ContestHall_Text_StillLoveSmartnessContests
	callstd 0x04
	closemessage
	@ event command: applymovement
	applymovement 0x000B, PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	waitmovement 0x0000
	release
	end
.globl EventScript_JP_082078B6
EventScript_JP_082078B6: @ 0x082078B6
	lock
	faceplayer
	loadword 0x00, LilycoveCity_ContestHall_Text_AreYouEnteringBeautyContest
	callstd 0x04
	closemessage
	@ event command: applymovement
	applymovement 0x000D, PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	waitmovement 0x0000
	release
	end
.globl EventScript_JP_082078CD
EventScript_JP_082078CD: @ 0x082078CD
	lock
	faceplayer
	loadword 0x00, LilycoveCity_ContestHall_Text_EveryPokemonPristineBeauty
	callstd 0x04
	closemessage
	@ event command: applymovement
	applymovement 0x000E, PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	waitmovement 0x0000
	release
	end
.globl EventScript_JP_082078E4
EventScript_JP_082078E4: @ 0x082078E4
	lock
	faceplayer
	loadword 0x00, LilycoveCity_ContestHall_Text_EyesWillBeGluedToMyBeauty
	callstd 0x04
	closemessage
	@ event command: applymovement
	applymovement 0x000F, PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	waitmovement 0x0000
	release
	end
.globl EventScript_JP_082078FB
EventScript_JP_082078FB: @ 0x082078FB
	lock
	faceplayer
	loadword 0x00, LilycoveCity_ContestHall_Text_OverdidGrooming
	callstd 0x04
	closemessage
	@ event command: applymovement
	applymovement 0x0010, PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	waitmovement 0x0000
	release
	end
.globl EventScript_JP_08207912
EventScript_JP_08207912: @ 0x08207912
	lock
	faceplayer
	loadword 0x00, LilycoveCity_ContestHall_Text_JudgeWontSeeAuroraBeam
	callstd 0x04
	closemessage
	@ event command: applymovement
	applymovement 0x0011, PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	waitmovement 0x0000
	release
	end
.globl EventScript_JP_08207929
EventScript_JP_08207929: @ 0x08207929
	lock
	faceplayer
	loadword 0x00, LilycoveCity_ContestHall_Text_PokemonLooksLikeYoungerMe
	callstd 0x04
	closemessage
	@ event command: applymovement
	applymovement 0x0012, PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	waitmovement 0x0000
	release
	end
.globl EventScript_JP_08207940
EventScript_JP_08207940: @ 0x08207940
	lock
	faceplayer
	loadword 0x00, LilycoveCity_ContestHall_Text_WinBeautyContestMakesMeHappy
	callstd 0x04
	closemessage
	@ event command: applymovement
	applymovement 0x0013, PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	waitmovement 0x0000
	release
	end
.globl EventScript_JP_08207957
EventScript_JP_08207957: @ 0x08207957
	lock
	faceplayer
	loadword 0x00, LilycoveCity_ContestHall_Text_GanderAtAllThosePrettyPokemon
	callstd 0x04
	closemessage
	@ event command: applymovement
	applymovement 0x0015, PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	waitmovement 0x0000
	release
	end
.globl EventScript_JP_0820796E
EventScript_JP_0820796E: @ 0x0820796E
	lock
	faceplayer
	loadword 0x00, LilycoveCity_ContestHall_Text_CantWinOnBeautyAlone
	callstd 0x04
	closemessage
	@ event command: applymovement
	applymovement 0x0014, PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	waitmovement 0x0000
	release
	end
.globl EventScript_JP_08207985
EventScript_JP_08207985: @ 0x08207985
	lock
	faceplayer
	loadword 0x00, LilycoveCity_ContestHall_Text_InTheMiddleOfContest
	callstd 0x04
	closemessage
	@ event command: applymovement
	applymovement 0x0017, PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	waitmovement 0x0000
	release
	end
.globl EventScript_JP_0820799C
EventScript_JP_0820799C: @ 0x0820799C
	lock
	faceplayer
	loadword 0x00, LilycoveCity_ContestHall_Text_SuchCharmingCuteAppeals
	callstd 0x04
	closemessage
	@ event command: applymovement
	applymovement 0x0018, PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	waitmovement 0x0000
	release
	end
.globl EventScript_JP_082079B3
EventScript_JP_082079B3: @ 0x082079B3
	lock
	faceplayer
	loadword 0x00, LilycoveCity_ContestHall_Text_MyAzurillWasDistracted
	callstd 0x04
	closemessage
	@ event command: applymovement
	applymovement 0x0019, PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	waitmovement 0x0000
	release
	end
.globl EventScript_JP_082079CA
EventScript_JP_082079CA: @ 0x082079CA
	lock
	faceplayer
	loadword 0x00, LilycoveCity_ContestHall_Text_NeverWonBattleButContest
	callstd 0x04
	closemessage
	@ event command: applymovement
	applymovement 0x001A, PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	waitmovement 0x0000
	release
	end
.globl EventScript_JP_082079E1
EventScript_JP_082079E1: @ 0x082079E1
	lock
	faceplayer
	loadword 0x00, LilycoveCity_ContestHall_Text_PetalDanceIsMarvel
	callstd 0x04
	closemessage
	@ event command: applymovement
	applymovement 0x001B, PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	waitmovement 0x0000
	release
	end
.globl EventScript_JP_082079F8
EventScript_JP_082079F8: @ 0x082079F8
	lock
	faceplayer
	loadword 0x00, LilycoveCity_ContestHall_Text_MyMonAppealSoMuchCuter
	callstd 0x04
	closemessage
	@ event command: applymovement
	applymovement 0x001C, PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	waitmovement 0x0000
	release
	end
.globl EventScript_JP_08207A0F
EventScript_JP_08207A0F: @ 0x08207A0F
	lockall
	@ event command: applymovement
	applymovement 0x001D, PetalburgCity_Ext_FacePlayer
	@ event command: waitmovement
	waitmovement 0x0000
	loadword 0x00, LilycoveCity_ContestHall_Text_MyChildIsInContest
	callstd 0x04
	closemessage
	@ event command: applymovement
	applymovement 0x001D, PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	waitmovement 0x0000
	delay 0x0019
	loadword 0x00, LilycoveCity_ContestHall_Text_ComeOnDear
	callstd 0x04
	releaseall
	end
.globl EventScript_JP_08207A3A
EventScript_JP_08207A3A: @ 0x08207A3A
	lock
	faceplayer
	loadword 0x00, LilycoveCity_ContestHall_Text_WantCuteMonOfMyOwn
	callstd 0x04
	closemessage
	@ event command: applymovement
	applymovement 0x001F, PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	waitmovement 0x0000
	release
	end
.globl EventScript_JP_08207A51
EventScript_JP_08207A51: @ 0x08207A51
	lock
	faceplayer
	loadword 0x00, LilycoveCity_ContestHall_Text_ThatGirlThereIsCutest
	callstd 0x04
	closemessage
	@ event command: applymovement
	applymovement 0x001E, PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	waitmovement 0x0000
	release
	end
.globl EventScript_JP_08207A68
EventScript_JP_08207A68: @ 0x08207A68
	loadword 0x00, LilycoveCity_ContestHall_Text_BeautyContestStage
	callstd 0x03
	end
.globl EventScript_JP_08207A71
EventScript_JP_08207A71: @ 0x08207A71
	loadword 0x00, LilycoveCity_ContestHall_Text_CuteContestStage
	callstd 0x03
	end
.globl EventScript_JP_08207A7A
EventScript_JP_08207A7A: @ 0x08207A7A
	loadword 0x00, LilycoveCity_ContestHall_Text_SmartContestStage
	callstd 0x03
	end
