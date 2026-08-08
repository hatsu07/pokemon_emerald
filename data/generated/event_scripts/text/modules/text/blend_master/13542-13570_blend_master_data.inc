	@ data/text/blend_master.inc:1 BerryBlender_Text_BlendWithTheBlendMaster
	.globl gText_Rom_274705
gText_Rom_274705: @ 0x08274705
	.string "めいじん『いかにも!\nわしが ブレンドめいじん じゃ!\pいっしょに まわして\nわしの すごい わざを みるがよい$"
	.if (. - gText_Rom_274705) > 0x39
	.error "gText_Rom_274705 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_274705) < 0x39
	.space 0x39 - (. - gText_Rom_274705)
	.endif

	@ data/text/blend_master.inc:7 BerryBlender_Text_SeeMyMasteryInAction
	.globl gText_Rom_27473E
gText_Rom_27473E: @ 0x0827473E
	.string "めいじん『ふむむむっ! おぬし\nわしの すごい わざを みたいのじゃな?$"
	.if (. - gText_Rom_27473E) > 0x25
	.error "gText_Rom_27473E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_27473E) < 0x25
	.space 0x25 - (. - gText_Rom_27473E)
	.endif

	@ data/text/blend_master.inc:11 BerryBlender_Text_TooBusyNowIsee
	.globl gText_Rom_274763
gText_Rom_274763: @ 0x08274763
	.string "ふむむむっ!\pいまは いそがしいのじゃな!\pあんしん するのじゃ!\nわしは きょう ずっと ここに おる\lようが すんだら すぐに くるのじゃぞ!$"
	.if (. - gText_Rom_274763) > 0x4a
	.error "gText_Rom_274763 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_274763) < 0x4a
	.space 0x4a - (. - gText_Rom_274763)
	.endif

	@ data/text/blend_master.inc:18 BerryBlender_Text_BlendMasterNoBerries
	.globl gText_Rom_2747AD
gText_Rom_2747AD: @ 0x082747AD
	.string "ふむむむっ!\pおぬし きのみを もっておらんぞ!\pわしは きょう ずっと ここに おるから\nはやく きのみを みつけて くるのじゃぞ!$"
	.if (. - gText_Rom_2747AD) > 0x44
	.error "gText_Rom_2747AD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2747AD) < 0x44
	.space 0x44 - (. - gText_Rom_2747AD)
	.endif

	@ data/text/blend_master.inc:24 BerryBlender_Text_BlendMasterKnowHowToMakePokeblocks
	.globl gText_Rom_2747F1
gText_Rom_2747F1: @ 0x082747F1
	.string "そうじゃろう!\nそうじゃろう!\pとろころで おぬし……\nむろん ポロックの つくりかたは\lしっておる じゃろうな?$"
	.if (. - gText_Rom_2747F1) > 0x3a
	.error "gText_Rom_2747F1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2747F1) < 0x3a
	.space 0x3a - (. - gText_Rom_2747F1)
	.endif

	@ data/text/blend_master.inc:31 BerryBlender_Text_BlendMasterExplainBerryBlending
	.globl gText_Rom_27482B
gText_Rom_27482B: @ 0x0827482B
	.string "ふむむむっ!\pまあ かんたんな ことじゃ!\pきのみ ブレンダーの マークが\nじぶんの ところに きたら\lボタンを おせば いいだけじゃ!\pわしの かんぺきな おしかたを みれば\nすぐに わかるはずじゃ!$"
	.if (. - gText_Rom_27482B) > 0x66
	.error "gText_Rom_27482B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_27482B) < 0x66
	.space 0x66 - (. - gText_Rom_27482B)
	.endif

	@ data/text/blend_master.inc:40 BerryBlender_Text_BlendMasterLetsBerryBlender
	.globl gText_Rom_274891
gText_Rom_274891: @ 0x08274891
	.string "よしっ!\pでは はじめるぞ!\pめいじんと いっしょに\nレッツ きのみブレンダー!$"
	.if (. - gText_Rom_274891) > 0x29
	.error "gText_Rom_274891 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_274891) < 0x29
	.space 0x29 - (. - gText_Rom_274891)
	.endif

	@ data/text/blend_master.inc:46 BerryBlender_Text_BlendMasterNoPokeblockCase
	.globl gText_Rom_2748BA
gText_Rom_2748BA: @ 0x082748BA
	.string "ふむむむっ!\pおぬし ポロックケースを\nまだ もっておらん ようじゃぞ!\pわしは きょう ずっと ここに おるから\nポロックケースを もらってから\lまた くるのじゃ!$"
	.if (. - gText_Rom_2748BA) > 0x54
	.error "gText_Rom_2748BA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2748BA) < 0x54
	.space 0x54 - (. - gText_Rom_2748BA)
	.endif

	@ data/text/blend_master.inc:54 BerryBlender_Text_BlendMasterPokeblockCaseFull
	.globl gText_Rom_27490E
gText_Rom_27490E: @ 0x0827490E
	.string "ふむむむっ!\pおぬし ポロックケースが\nいっぱいの ようじゃぞ!\pわしは きょう ずっと ここに おるから\nポロックを へらしてから\lまた くるのじゃ!$"
	.if (. - gText_Rom_27490E) > 0x4d
	.error "gText_Rom_27490E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_27490E) < 0x4d
	.space 0x4d - (. - gText_Rom_27490E)
	.endif

	@ data/text/blend_master.inc:62 BerryBlender_Text_WhoaAwesome
	.globl gText_Rom_27495B
gText_Rom_27495B: @ 0x0827495B
	.string "すげぇー!$"
	.if (. - gText_Rom_27495B) > 0x6
	.error "gText_Rom_27495B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_27495B) < 0x6
	.space 0x6 - (. - gText_Rom_27495B)
	.endif

	@ data/text/blend_master.inc:65 BerryBlender_Text_WickedlyFast
	.globl gText_Rom_274961
gText_Rom_274961: @ 0x08274961
	.string "はぇー!$"
	.if (. - gText_Rom_274961) > 0x5
	.error "gText_Rom_274961 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_274961) < 0x5
	.space 0x5 - (. - gText_Rom_274961)
	.endif

	@ data/text/blend_master.inc:68 BerryBlender_Text_WhatAnExpert
	.globl gText_Rom_274966
gText_Rom_274966: @ 0x08274966
	.string "うめぇー!$"
	.if (. - gText_Rom_274966) > 0x6
	.error "gText_Rom_274966 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_274966) < 0x6
	.space 0x6 - (. - gText_Rom_274966)
	.endif

	@ data/text/blend_master.inc:71 BerryBlender_Text_MadeAmazingPokeblocksWithMaster
	.globl gText_Rom_27496C
gText_Rom_27496C: @ 0x0827496C
	.string "めいじんと いっしょに やったら\nとっても すごい ポロック できたの$"
	.if (. - gText_Rom_27496C) > 0x24
	.error "gText_Rom_27496C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_27496C) < 0x24
	.space 0x24 - (. - gText_Rom_27496C)
	.endif

	@ data/text/blend_master.inc:75 BerryBlender_Text_QualitiesOfBlendMaster
	.globl gText_Rom_274990
gText_Rom_274990: @ 0x08274990
	.string "やじるしを おっていく\nスキのない めの うごき!\pボタンを おすときの\nせいかくな ての うごき!\pこの ふたつを あわせもつ\nめいじんは ホント すごいね!$"
	.if (. - gText_Rom_274990) > 0x51
	.error "gText_Rom_274990 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_274990) < 0x51
	.space 0x51 - (. - gText_Rom_274990)
	.endif

	@ data/text/blend_master.inc:83 BerryBlender_Text_MasterWorksOnSkillsInMountains
	.globl gText_Rom_2749E1
gText_Rom_2749E1: @ 0x082749E1
	.string "めいじんは どこかの やまおくで\nしゅぎょう しているらしいの\pそして ときどき\nミナモシティに やってきて\lきのみブレンダーを 1にちじゅう\lするらしいわ$"
	.if (. - gText_Rom_2749E1) > 0x4f
	.error "gText_Rom_2749E1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2749E1) < 0x4f
	.space 0x4f - (. - gText_Rom_2749E1)
	.endif
