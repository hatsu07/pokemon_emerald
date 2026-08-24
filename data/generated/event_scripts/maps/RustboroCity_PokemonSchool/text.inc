	@ data/maps/RustboroCity_PokemonSchool/scripts.inc:202 RustboroCity_PokemonSchool_Text_BlackboardListsStatusChanges
	.globl RustboroCity_PokemonSchool_Text_BlackboardListsStatusChanges
RustboroCity_PokemonSchool_Text_BlackboardListsStatusChanges: @ 0x08202E24
	.string "こくばんに\nポケモンが たたかってるときに おこる\lたいちょうの へんかに ついて かかれてる{EOS}"
	.if (. - RustboroCity_PokemonSchool_Text_BlackboardListsStatusChanges) > 0x30
	.error "RustboroCity_PokemonSchool_Text_BlackboardListsStatusChanges may not grow beyond its original slot"
	.endif
	.if (. - RustboroCity_PokemonSchool_Text_BlackboardListsStatusChanges) < 0x30
	.space 0x30 - (. - RustboroCity_PokemonSchool_Text_BlackboardListsStatusChanges)
	.endif
	@ data/maps/RustboroCity_PokemonSchool/scripts.inc:205 RustboroCity_PokemonSchool_Text_ReadWhichTopic
	.globl RustboroCity_PokemonSchool_Text_ReadWhichTopic
RustboroCity_PokemonSchool_Text_ReadWhichTopic: @ 0x08202E54
	.string "どの こうもくを みますか?{EOS}"
	.if (. - RustboroCity_PokemonSchool_Text_ReadWhichTopic) > 0xf
	.error "RustboroCity_PokemonSchool_Text_ReadWhichTopic may not grow beyond its original slot"
	.endif
	.if (. - RustboroCity_PokemonSchool_Text_ReadWhichTopic) < 0xf
	.space 0xf - (. - RustboroCity_PokemonSchool_Text_ReadWhichTopic)
	.endif
	@ data/maps/RustboroCity_PokemonSchool/scripts.inc:208 RustboroCity_PokemonSchool_Text_ExplainPoison
	.globl RustboroCity_PokemonSchool_Text_ExplainPoison
RustboroCity_PokemonSchool_Text_ExplainPoison: @ 0x08202E63
	.string "どくを うけると\nたいりょくが へっていきます\pせんとうのあとも どくは のこるので\nあるくたびに たいりょくが へります\lどくけしで なおしましょう{EOS}"
	.if (. - RustboroCity_PokemonSchool_Text_ExplainPoison) > 0x4c
	.error "RustboroCity_PokemonSchool_Text_ExplainPoison may not grow beyond its original slot"
	.endif
	.if (. - RustboroCity_PokemonSchool_Text_ExplainPoison) < 0x4c
	.space 0x4c - (. - RustboroCity_PokemonSchool_Text_ExplainPoison)
	.endif
	@ data/maps/RustboroCity_PokemonSchool/scripts.inc:211 RustboroCity_PokemonSchool_Text_ExplainParalysis
	.globl RustboroCity_PokemonSchool_Text_ExplainParalysis
RustboroCity_PokemonSchool_Text_ExplainParalysis: @ 0x08202EAF
	.string "まひすると すばやさが さがり\nときどき わざが だせなくなります\pたたかい おわっても まひした ままです\nまひなおしで なおしましょう{EOS}"
	.if (. - RustboroCity_PokemonSchool_Text_ExplainParalysis) > 0x46
	.error "RustboroCity_PokemonSchool_Text_ExplainParalysis may not grow beyond its original slot"
	.endif
	.if (. - RustboroCity_PokemonSchool_Text_ExplainParalysis) < 0x46
	.space 0x46 - (. - RustboroCity_PokemonSchool_Text_ExplainParalysis)
	.endif
	@ data/maps/RustboroCity_PokemonSchool/scripts.inc:214 RustboroCity_PokemonSchool_Text_ExplainSleep
	.globl RustboroCity_PokemonSchool_Text_ExplainSleep
RustboroCity_PokemonSchool_Text_ExplainSleep: @ 0x08202EF5
	.string "ねむって しまうと\nその あいだ こうげき できません\pじぶんで めざめることも ありますが\nねむったまま せんとうが おわると\lずっと ねむっています\pねむけざましで おこして あげましょう{EOS}"
	.if (. - RustboroCity_PokemonSchool_Text_ExplainSleep) > 0x61
	.error "RustboroCity_PokemonSchool_Text_ExplainSleep may not grow beyond its original slot"
	.endif
	.if (. - RustboroCity_PokemonSchool_Text_ExplainSleep) < 0x61
	.space 0x61 - (. - RustboroCity_PokemonSchool_Text_ExplainSleep)
	.endif
	@ data/maps/RustboroCity_PokemonSchool/scripts.inc:217 RustboroCity_PokemonSchool_Text_ExplainBurn
	.globl RustboroCity_PokemonSchool_Text_ExplainBurn
RustboroCity_PokemonSchool_Text_ExplainBurn: @ 0x08202F56
	.string "やけどは こうげきりょくが さがるだけでなく\nたいりょくも どんどん へっていきます\pせんとうが おわっても やけどの ままです\nやけどなおしで なおしましょう{EOS}"
	.if (. - RustboroCity_PokemonSchool_Text_ExplainBurn) > 0x51
	.error "RustboroCity_PokemonSchool_Text_ExplainBurn may not grow beyond its original slot"
	.endif
	.if (. - RustboroCity_PokemonSchool_Text_ExplainBurn) < 0x51
	.space 0x51 - (. - RustboroCity_PokemonSchool_Text_ExplainBurn)
	.endif
	@ data/maps/RustboroCity_PokemonSchool/scripts.inc:220 RustboroCity_PokemonSchool_Text_ExplainFreeze
	.globl RustboroCity_PokemonSchool_Text_ExplainFreeze
RustboroCity_PokemonSchool_Text_ExplainFreeze: @ 0x08202FA7
	.string "こおって しまうと なにも できなくなります\pたたかい おわっても こおりついた ままです\nこおりなおしで とかしましょう{EOS}"
	.if (. - RustboroCity_PokemonSchool_Text_ExplainFreeze) > 0x3e
	.error "RustboroCity_PokemonSchool_Text_ExplainFreeze may not grow beyond its original slot"
	.endif
	.if (. - RustboroCity_PokemonSchool_Text_ExplainFreeze) < 0x3e
	.space 0x3e - (. - RustboroCity_PokemonSchool_Text_ExplainFreeze)
	.endif
	@ data/maps/RustboroCity_PokemonSchool/scripts.inc:223 RustboroCity_PokemonSchool_Text_StudentsWhoDontStudyGetQuickClaw
	.globl RustboroCity_PokemonSchool_Text_StudentsWhoDontStudyGetQuickClaw
RustboroCity_PokemonSchool_Text_StudentsWhoDontStudyGetQuickClaw: @ 0x08202FE5
	.string "べんきょうを しない せいとは\nわたくしの ツメの あかを\lせんじて のませるのです!\pきみが べんきょう する しないは\nこの どうぐを つかいこなせるか どうかで\lわかること でしょう!{EOS}"
	.if (. - RustboroCity_PokemonSchool_Text_StudentsWhoDontStudyGetQuickClaw) > 0x60
	.error "RustboroCity_PokemonSchool_Text_StudentsWhoDontStudyGetQuickClaw may not grow beyond its original slot"
	.endif
	.if (. - RustboroCity_PokemonSchool_Text_StudentsWhoDontStudyGetQuickClaw) < 0x60
	.space 0x60 - (. - RustboroCity_PokemonSchool_Text_StudentsWhoDontStudyGetQuickClaw)
	.endif
	@ data/maps/RustboroCity_PokemonSchool/scripts.inc:226 RustboroCity_PokemonSchool_Text_ExplainQuickClaw
	.globl RustboroCity_PokemonSchool_Text_ExplainQuickClaw
RustboroCity_PokemonSchool_Text_ExplainQuickClaw: @ 0x08203045
	.string "ポケモンに せんせいのツメを もたせると\nときどき ですが すばやくなって\lせんせい こうげきを するのです!\pこのように ポケモンに もたせる\nどうぐの こと だけでも\lべんきょう することは いっぱい なのです!{EOS}"
	.if (. - RustboroCity_PokemonSchool_Text_ExplainQuickClaw) > 0x6d
	.error "RustboroCity_PokemonSchool_Text_ExplainQuickClaw may not grow beyond its original slot"
	.endif
	.if (. - RustboroCity_PokemonSchool_Text_ExplainQuickClaw) < 0x6d
	.space 0x6d - (. - RustboroCity_PokemonSchool_Text_ExplainQuickClaw)
	.endif
	@ data/maps/RustboroCity_PokemonSchool/scripts.inc:229 RustboroCity_PokemonSchool_Text_TradingRightNow
	.globl RustboroCity_PokemonSchool_Text_TradingRightNow
RustboroCity_PokemonSchool_Text_TradingRightNow: @ 0x082030B2
	.string "いま ともだちと\nポケモンを こうかん してるんだ!{EOS}"
	.if (. - RustboroCity_PokemonSchool_Text_TradingRightNow) > 0x1b
	.error "RustboroCity_PokemonSchool_Text_TradingRightNow may not grow beyond its original slot"
	.endif
	.if (. - RustboroCity_PokemonSchool_Text_TradingRightNow) < 0x1b
	.space 0x1b - (. - RustboroCity_PokemonSchool_Text_TradingRightNow)
	.endif
	@ data/maps/RustboroCity_PokemonSchool/scripts.inc:232 RustboroCity_PokemonSchool_Text_AlwaysWantedSeedot
	.globl RustboroCity_PokemonSchool_Text_AlwaysWantedSeedot
RustboroCity_PokemonSchool_Text_AlwaysWantedSeedot: @ 0x082030CD
	.string "ほしかった タネボーちゃん が\nやっと てに はいるよ!{EOS}"
	.if (. - RustboroCity_PokemonSchool_Text_AlwaysWantedSeedot) > 0x1d
	.error "RustboroCity_PokemonSchool_Text_AlwaysWantedSeedot may not grow beyond its original slot"
	.endif
	.if (. - RustboroCity_PokemonSchool_Text_AlwaysWantedSeedot) < 0x1d
	.space 0x1d - (. - RustboroCity_PokemonSchool_Text_AlwaysWantedSeedot)
	.endif
	@ data/maps/RustboroCity_PokemonSchool/scripts.inc:235 RustboroCity_PokemonSchool_Text_PokemontCantUseManMadeItems
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl RustboroCity_PokemonSchool_Text_PokemontCantUseManMadeItems
RustboroCity_PokemonSchool_Text_PokemontCantUseManMadeItems: @ 0x082030EA
	.string "ポケモンも どうぐ もてるけど\nキズぐすりとか どくけしとか\lひとが つくった どうぐは\lつかいかたが わからない みたい{EOS}"
	.if (. - RustboroCity_PokemonSchool_Text_PokemontCantUseManMadeItems) != 0x3e
	.error "RustboroCity_PokemonSchool_Text_PokemontCantUseManMadeItems must retain its original byte length"
	.endif
	@ data/maps/RustboroCity_PokemonSchool/scripts.inc:238 RustboroCity_PokemonSchool_Text_ConfusedPokemonAttacksItself
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl RustboroCity_PokemonSchool_Text_ConfusedPokemonAttacksItself
RustboroCity_PokemonSchool_Text_ConfusedPokemonAttacksItself: @ 0x08203128
	.string "ポケモンの わざで\nこんらん することが あるでしょ?\pこんらん すると たまに まちがえて\nじぶんを こうげき しちゃうの……\pでも いちどでも せんとうから はなれると\nもとに もどるわよ!{EOS}"
	.if (. - RustboroCity_PokemonSchool_Text_ConfusedPokemonAttacksItself) != 0x62
	.error "RustboroCity_PokemonSchool_Text_ConfusedPokemonAttacksItself must retain its original byte length"
	.endif
	@ data/maps/RustboroCity_PokemonSchool/scripts.inc:241 RustboroCity_PokemonSchool_Text_PokemonHealItselfWithBerry
	.globl RustboroCity_PokemonSchool_Text_PokemonHealItselfWithBerry
RustboroCity_PokemonSchool_Text_PokemonHealItselfWithBerry: @ 0x0820318A
	.string "……ポケモンに きのみを もたせると\nじぶんで たいりょくを かいふくする\pポケモンが もてる どうぐは\nほかにも たくさん……\pノートを ちゃんと とるのは\nたいへんだなあ……{EOS}"
	.if (. - RustboroCity_PokemonSchool_Text_PokemonHealItselfWithBerry) > 0x5a
	.error "RustboroCity_PokemonSchool_Text_PokemonHealItselfWithBerry may not grow beyond its original slot"
	.endif
	.if (. - RustboroCity_PokemonSchool_Text_PokemonHealItselfWithBerry) < 0x5a
	.space 0x5a - (. - RustboroCity_PokemonSchool_Text_PokemonHealItselfWithBerry)
	.endif
	@ data/maps/RustboroCity_PokemonSchool/scripts.inc:244 RustboroCity_PokemonSchool_Text_StudentsNotes
	.globl RustboroCity_PokemonSchool_Text_StudentsNotes
RustboroCity_PokemonSchool_Text_StudentsNotes: @ 0x082031E4
	.string "このこの ノートだ……\pポケモンは モンスターボールで つかまえて\nどうじに 6ぴき もちあるける\pそうして つかまえた ポケモンを\nそだてて たたかわせる ひとを\lポケモントレーナーと いう\pトレーナーの もくひょうは\nかくちの ポケモンジムに いる\lつよい トレーナーに かつこと!{EOS}"
	.if (. - RustboroCity_PokemonSchool_Text_StudentsNotes) > 0x90
	.error "RustboroCity_PokemonSchool_Text_StudentsNotes may not grow beyond its original slot"
	.endif
	.if (. - RustboroCity_PokemonSchool_Text_StudentsNotes) < 0x90
	.space 0x90 - (. - RustboroCity_PokemonSchool_Text_StudentsNotes)
	.endif
	@ data/maps/RustboroCity_PokemonSchool/scripts.inc:247 RustboroCity_PokemonSchool_Text_ScottMetAlreadyCut
	.globl RustboroCity_PokemonSchool_Text_ScottMetAlreadyCut
RustboroCity_PokemonSchool_Text_ScottMetAlreadyCut: @ 0x08203274
	.string "おや? きみとは たしか\nトウカシティで あった きがするね\pわたしの なまえは エニシダ\pポケモンしょうぶの さいのうを もった\nゆうしゅうな じんざいを もとめて\lかくちを たびして いるのさ\pスクールを のぞきにきた ということは\nきみも トレーナー?\pならば まずは いあいぎりを\nポケモンに おぼえさせると いいね!\pいあいぎりは たしか このまちの\nだれかが もっていた はずだよ{EOS}"
	.if (. - RustboroCity_PokemonSchool_Text_ScottMetAlreadyCut) > 0xc5
	.error "RustboroCity_PokemonSchool_Text_ScottMetAlreadyCut may not grow beyond its original slot"
	.endif
	.if (. - RustboroCity_PokemonSchool_Text_ScottMetAlreadyCut) < 0xc5
	.space 0xc5 - (. - RustboroCity_PokemonSchool_Text_ScottMetAlreadyCut)
	.endif
	@ data/maps/RustboroCity_PokemonSchool/scripts.inc:250 RustboroCity_PokemonSchool_Text_StudentTalentLevelUnknown
	.globl RustboroCity_PokemonSchool_Text_StudentTalentLevelUnknown
RustboroCity_PokemonSchool_Text_StudentTalentLevelUnknown: @ 0x08203339
	.string "エニシダ『うーん ここに いる\nせいとさん たちの さいのうは\lまだまだ みちすう! これから だな!{EOS}"
	.if (. - RustboroCity_PokemonSchool_Text_StudentTalentLevelUnknown) > 0x34
	.error "RustboroCity_PokemonSchool_Text_StudentTalentLevelUnknown may not grow beyond its original slot"
	.endif
	.if (. - RustboroCity_PokemonSchool_Text_StudentTalentLevelUnknown) < 0x34
	.space 0x34 - (. - RustboroCity_PokemonSchool_Text_StudentTalentLevelUnknown)
	.endif
	@ data/maps/RustboroCity_PokemonSchool/scripts.inc:253 RustboroCity_PokemonSchool_Text_ScottStoneBadge
	.globl RustboroCity_PokemonSchool_Text_ScottStoneBadge
RustboroCity_PokemonSchool_Text_ScottStoneBadge: @ 0x0820336D
	.string "エニシダ『ん それは……\nストーンバッジ だね\lなかなか やるじゃ ないか!\pだけど できれば\nたたかっている ところを みたかったな\lリーグバッジ だけでは きみが\lどんな トレーナー なのかは\lよく わからない からね{EOS}"
	.if (. - RustboroCity_PokemonSchool_Text_ScottStoneBadge) > 0x70
	.error "RustboroCity_PokemonSchool_Text_ScottStoneBadge may not grow beyond its original slot"
	.endif
	.if (. - RustboroCity_PokemonSchool_Text_ScottStoneBadge) < 0x70
	.space 0x70 - (. - RustboroCity_PokemonSchool_Text_ScottStoneBadge)
	.endif
	@ data/maps/RustboroCity_PokemonSchool/scripts.inc:256 RustboroCity_PokemonSchool_Text_ScottMetAlreadyStoneBadge
	.globl RustboroCity_PokemonSchool_Text_ScottMetAlreadyStoneBadge
RustboroCity_PokemonSchool_Text_ScottMetAlreadyStoneBadge: @ 0x082033DD
	.string "おや? きみとは たしか\nトウカシティで あった きがするね\pわたしの なまえは エニシダ\pポケモンしょうぶの さいのうを もった\nゆうしゅうな じんざいを もとめて\lかくちを たびして いるのさ\pきみの それは……\nストーンバッジ だね\lトレーナーに なりたてに しては やるね\pだけど できれば\nたたかっている ところを みたかったな\lリーグバッジ だけでは きみが\lどんな トレーナー なのかは\lよく わからない からね{EOS}"
	.if (. - RustboroCity_PokemonSchool_Text_ScottMetAlreadyStoneBadge) > 0xd6
	.error "RustboroCity_PokemonSchool_Text_ScottMetAlreadyStoneBadge may not grow beyond its original slot"
	.endif
	.if (. - RustboroCity_PokemonSchool_Text_ScottMetAlreadyStoneBadge) < 0xd6
	.space 0xd6 - (. - RustboroCity_PokemonSchool_Text_ScottMetAlreadyStoneBadge)
	.endif
	@ analyzed canonical ROM range 0x082034B3-0x082034EF
	@ semantic recovery: script_data; byte-verified against linked ROM
gMapScriptDispatch_RustboroCity_PokemonCenter_1F_OnTransition_OnResume: @ 0x082034B3
	@ map script dispatch table
	.byte 0x03
	.4byte EventScript_JP_082034BE
	.byte 0x05
	.4byte SharedMapScript_0824790F
	.byte 0
EventScript_JP_082034BE: @ 0x082034BE
	setrespawn 0x0006
	call 0x08242978
	end
.globl EventScript_JP_082034C7
EventScript_JP_082034C7: @ 0x082034C7
	setvar 0x800B, 0x0001
	call 0x082429B8
	waitmessage
	waitbuttonpress
	release
	end
.globl EventScript_JP_082034D5
EventScript_JP_082034D5: @ 0x082034D5
	loadword 0x00, RustboroCity_PokemonCenter_1F_Text_PokemonHavePersonalities
	callstd 0x02
	end
.globl EventScript_JP_082034DE
EventScript_JP_082034DE: @ 0x082034DE
	loadword 0x00, RustboroCity_PokemonCenter_1F_Text_MaleAndFemalePokemon
	callstd 0x02
	end
.globl EventScript_JP_082034E7
EventScript_JP_082034E7: @ 0x082034E7
	loadword 0x00, RustboroCity_PokemonCenter_1F_Text_HMCutNextDoor
	callstd 0x02
	end
