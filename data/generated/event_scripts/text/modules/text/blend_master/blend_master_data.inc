	@ data/text/blend_master.inc:1 BerryBlender_Text_BlendWithTheBlendMaster
	.globl BerryBlender_Text_BlendWithTheBlendMaster
BerryBlender_Text_BlendWithTheBlendMaster: @ 0x08274705
	.string "めいじん『いかにも!\nわしが ブレンドめいじん じゃ!\pいっしょに まわして\nわしの すごい わざを みるがよい{EOS}"
	.if (. - BerryBlender_Text_BlendWithTheBlendMaster) > 0x39
	.error "BerryBlender_Text_BlendWithTheBlendMaster may not grow beyond its original slot"
	.endif
	.if (. - BerryBlender_Text_BlendWithTheBlendMaster) < 0x39
	.space 0x39 - (. - BerryBlender_Text_BlendWithTheBlendMaster)
	.endif

	@ data/text/blend_master.inc:7 BerryBlender_Text_SeeMyMasteryInAction
	.globl BerryBlender_Text_SeeMyMasteryInAction
BerryBlender_Text_SeeMyMasteryInAction: @ 0x0827473E
	.string "めいじん『ふむむむっ! おぬし\nわしの すごい わざを みたいのじゃな?{EOS}"
	.if (. - BerryBlender_Text_SeeMyMasteryInAction) > 0x25
	.error "BerryBlender_Text_SeeMyMasteryInAction may not grow beyond its original slot"
	.endif
	.if (. - BerryBlender_Text_SeeMyMasteryInAction) < 0x25
	.space 0x25 - (. - BerryBlender_Text_SeeMyMasteryInAction)
	.endif

	@ data/text/blend_master.inc:11 BerryBlender_Text_TooBusyNowIsee
	.globl BerryBlender_Text_TooBusyNowIsee
BerryBlender_Text_TooBusyNowIsee: @ 0x08274763
	.string "ふむむむっ!\pいまは いそがしいのじゃな!\pあんしん するのじゃ!\nわしは きょう ずっと ここに おる\lようが すんだら すぐに くるのじゃぞ!{EOS}"
	.if (. - BerryBlender_Text_TooBusyNowIsee) > 0x4a
	.error "BerryBlender_Text_TooBusyNowIsee may not grow beyond its original slot"
	.endif
	.if (. - BerryBlender_Text_TooBusyNowIsee) < 0x4a
	.space 0x4a - (. - BerryBlender_Text_TooBusyNowIsee)
	.endif

	@ data/text/blend_master.inc:18 BerryBlender_Text_BlendMasterNoBerries
	.globl BerryBlender_Text_BlendMasterNoBerries
BerryBlender_Text_BlendMasterNoBerries: @ 0x082747AD
	.string "ふむむむっ!\pおぬし きのみを もっておらんぞ!\pわしは きょう ずっと ここに おるから\nはやく きのみを みつけて くるのじゃぞ!{EOS}"
	.if (. - BerryBlender_Text_BlendMasterNoBerries) > 0x44
	.error "BerryBlender_Text_BlendMasterNoBerries may not grow beyond its original slot"
	.endif
	.if (. - BerryBlender_Text_BlendMasterNoBerries) < 0x44
	.space 0x44 - (. - BerryBlender_Text_BlendMasterNoBerries)
	.endif

	@ data/text/blend_master.inc:24 BerryBlender_Text_BlendMasterKnowHowToMakePokeblocks
	.globl BerryBlender_Text_BlendMasterKnowHowToMakePokeblocks
BerryBlender_Text_BlendMasterKnowHowToMakePokeblocks: @ 0x082747F1
	.string "そうじゃろう!\nそうじゃろう!\pとろころで おぬし……\nむろん ポロックの つくりかたは\lしっておる じゃろうな?{EOS}"
	.if (. - BerryBlender_Text_BlendMasterKnowHowToMakePokeblocks) > 0x3a
	.error "BerryBlender_Text_BlendMasterKnowHowToMakePokeblocks may not grow beyond its original slot"
	.endif
	.if (. - BerryBlender_Text_BlendMasterKnowHowToMakePokeblocks) < 0x3a
	.space 0x3a - (. - BerryBlender_Text_BlendMasterKnowHowToMakePokeblocks)
	.endif

	@ data/text/blend_master.inc:31 BerryBlender_Text_BlendMasterExplainBerryBlending
	.globl BerryBlender_Text_BlendMasterExplainBerryBlending
BerryBlender_Text_BlendMasterExplainBerryBlending: @ 0x0827482B
	.string "ふむむむっ!\pまあ かんたんな ことじゃ!\pきのみ ブレンダーの マークが\nじぶんの ところに きたら\lボタンを おせば いいだけじゃ!\pわしの かんぺきな おしかたを みれば\nすぐに わかるはずじゃ!{EOS}"
	.if (. - BerryBlender_Text_BlendMasterExplainBerryBlending) > 0x66
	.error "BerryBlender_Text_BlendMasterExplainBerryBlending may not grow beyond its original slot"
	.endif
	.if (. - BerryBlender_Text_BlendMasterExplainBerryBlending) < 0x66
	.space 0x66 - (. - BerryBlender_Text_BlendMasterExplainBerryBlending)
	.endif

	@ data/text/blend_master.inc:40 BerryBlender_Text_BlendMasterLetsBerryBlender
	.globl BerryBlender_Text_BlendMasterLetsBerryBlender
BerryBlender_Text_BlendMasterLetsBerryBlender: @ 0x08274891
	.string "よしっ!\pでは はじめるぞ!\pめいじんと いっしょに\nレッツ きのみブレンダー!{EOS}"
	.if (. - BerryBlender_Text_BlendMasterLetsBerryBlender) > 0x29
	.error "BerryBlender_Text_BlendMasterLetsBerryBlender may not grow beyond its original slot"
	.endif
	.if (. - BerryBlender_Text_BlendMasterLetsBerryBlender) < 0x29
	.space 0x29 - (. - BerryBlender_Text_BlendMasterLetsBerryBlender)
	.endif

	@ data/text/blend_master.inc:46 BerryBlender_Text_BlendMasterNoPokeblockCase
	.globl BerryBlender_Text_BlendMasterNoPokeblockCase
BerryBlender_Text_BlendMasterNoPokeblockCase: @ 0x082748BA
	.string "ふむむむっ!\pおぬし ポロックケースを\nまだ もっておらん ようじゃぞ!\pわしは きょう ずっと ここに おるから\nポロックケースを もらってから\lまた くるのじゃ!{EOS}"
	.if (. - BerryBlender_Text_BlendMasterNoPokeblockCase) > 0x54
	.error "BerryBlender_Text_BlendMasterNoPokeblockCase may not grow beyond its original slot"
	.endif
	.if (. - BerryBlender_Text_BlendMasterNoPokeblockCase) < 0x54
	.space 0x54 - (. - BerryBlender_Text_BlendMasterNoPokeblockCase)
	.endif

	@ data/text/blend_master.inc:54 BerryBlender_Text_BlendMasterPokeblockCaseFull
	.globl BerryBlender_Text_BlendMasterPokeblockCaseFull
BerryBlender_Text_BlendMasterPokeblockCaseFull: @ 0x0827490E
	.string "ふむむむっ!\pおぬし ポロックケースが\nいっぱいの ようじゃぞ!\pわしは きょう ずっと ここに おるから\nポロックを へらしてから\lまた くるのじゃ!{EOS}"
	.if (. - BerryBlender_Text_BlendMasterPokeblockCaseFull) > 0x4d
	.error "BerryBlender_Text_BlendMasterPokeblockCaseFull may not grow beyond its original slot"
	.endif
	.if (. - BerryBlender_Text_BlendMasterPokeblockCaseFull) < 0x4d
	.space 0x4d - (. - BerryBlender_Text_BlendMasterPokeblockCaseFull)
	.endif

	@ data/text/blend_master.inc:62 BerryBlender_Text_WhoaAwesome
	.globl BerryBlender_Text_WhoaAwesome
BerryBlender_Text_WhoaAwesome: @ 0x0827495B
	.string "すげぇー!{EOS}"
	.if (. - BerryBlender_Text_WhoaAwesome) > 0x6
	.error "BerryBlender_Text_WhoaAwesome may not grow beyond its original slot"
	.endif
	.if (. - BerryBlender_Text_WhoaAwesome) < 0x6
	.space 0x6 - (. - BerryBlender_Text_WhoaAwesome)
	.endif

	@ data/text/blend_master.inc:65 BerryBlender_Text_WickedlyFast
	.globl BerryBlender_Text_WickedlyFast
BerryBlender_Text_WickedlyFast: @ 0x08274961
	.string "はぇー!{EOS}"
	.if (. - BerryBlender_Text_WickedlyFast) > 0x5
	.error "BerryBlender_Text_WickedlyFast may not grow beyond its original slot"
	.endif
	.if (. - BerryBlender_Text_WickedlyFast) < 0x5
	.space 0x5 - (. - BerryBlender_Text_WickedlyFast)
	.endif

	@ data/text/blend_master.inc:68 BerryBlender_Text_WhatAnExpert
	.globl BerryBlender_Text_WhatAnExpert
BerryBlender_Text_WhatAnExpert: @ 0x08274966
	.string "うめぇー!{EOS}"
	.if (. - BerryBlender_Text_WhatAnExpert) > 0x6
	.error "BerryBlender_Text_WhatAnExpert may not grow beyond its original slot"
	.endif
	.if (. - BerryBlender_Text_WhatAnExpert) < 0x6
	.space 0x6 - (. - BerryBlender_Text_WhatAnExpert)
	.endif

	@ data/text/blend_master.inc:71 BerryBlender_Text_MadeAmazingPokeblocksWithMaster
	.globl BerryBlender_Text_MadeAmazingPokeblocksWithMaster
BerryBlender_Text_MadeAmazingPokeblocksWithMaster: @ 0x0827496C
	.string "めいじんと いっしょに やったら\nとっても すごい ポロック できたの{EOS}"
	.if (. - BerryBlender_Text_MadeAmazingPokeblocksWithMaster) > 0x24
	.error "BerryBlender_Text_MadeAmazingPokeblocksWithMaster may not grow beyond its original slot"
	.endif
	.if (. - BerryBlender_Text_MadeAmazingPokeblocksWithMaster) < 0x24
	.space 0x24 - (. - BerryBlender_Text_MadeAmazingPokeblocksWithMaster)
	.endif

	@ data/text/blend_master.inc:75 BerryBlender_Text_QualitiesOfBlendMaster
	.globl BerryBlender_Text_QualitiesOfBlendMaster
BerryBlender_Text_QualitiesOfBlendMaster: @ 0x08274990
	.string "やじるしを おっていく\nスキのない めの うごき!\pボタンを おすときの\nせいかくな ての うごき!\pこの ふたつを あわせもつ\nめいじんは ホント すごいね!{EOS}"
	.if (. - BerryBlender_Text_QualitiesOfBlendMaster) > 0x51
	.error "BerryBlender_Text_QualitiesOfBlendMaster may not grow beyond its original slot"
	.endif
	.if (. - BerryBlender_Text_QualitiesOfBlendMaster) < 0x51
	.space 0x51 - (. - BerryBlender_Text_QualitiesOfBlendMaster)
	.endif

	@ data/text/blend_master.inc:83 BerryBlender_Text_MasterWorksOnSkillsInMountains
	.globl BerryBlender_Text_MasterWorksOnSkillsInMountains
BerryBlender_Text_MasterWorksOnSkillsInMountains: @ 0x082749E1
	.string "めいじんは どこかの やまおくで\nしゅぎょう しているらしいの\pそして ときどき\nミナモシティに やってきて\lきのみブレンダーを 1にちじゅう\lするらしいわ{EOS}"
	.if (. - BerryBlender_Text_MasterWorksOnSkillsInMountains) > 0x4f
	.error "BerryBlender_Text_MasterWorksOnSkillsInMountains may not grow beyond its original slot"
	.endif
	.if (. - BerryBlender_Text_MasterWorksOnSkillsInMountains) < 0x4f
	.space 0x4f - (. - BerryBlender_Text_MasterWorksOnSkillsInMountains)
	.endif
