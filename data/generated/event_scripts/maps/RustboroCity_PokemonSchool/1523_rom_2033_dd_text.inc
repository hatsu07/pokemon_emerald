	@ data/maps/RustboroCity_PokemonSchool/scripts.inc:202 RustboroCity_PokemonSchool_Text_BlackboardListsStatusChanges
	.globl gText_Rom_202E24
gText_Rom_202E24: @ 0x08202E24
	.string "こくばんに\nポケモンが たたかってるときに おこる\lたいちょうの へんかに ついて かかれてる{EOS}"
	.if (. - gText_Rom_202E24) > 0x30
	.error "gText_Rom_202E24 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_202E24) < 0x30
	.space 0x30 - (. - gText_Rom_202E24)
	.endif
	@ data/maps/RustboroCity_PokemonSchool/scripts.inc:205 RustboroCity_PokemonSchool_Text_ReadWhichTopic
	.globl gText_Rom_202E54
gText_Rom_202E54: @ 0x08202E54
	.string "どの こうもくを みますか?{EOS}"
	.if (. - gText_Rom_202E54) > 0xf
	.error "gText_Rom_202E54 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_202E54) < 0xf
	.space 0xf - (. - gText_Rom_202E54)
	.endif
	@ data/maps/RustboroCity_PokemonSchool/scripts.inc:208 RustboroCity_PokemonSchool_Text_ExplainPoison
	.globl gText_Rom_202E63
gText_Rom_202E63: @ 0x08202E63
	.string "どくを うけると\nたいりょくが へっていきます\pせんとうのあとも どくは のこるので\nあるくたびに たいりょくが へります\lどくけしで なおしましょう{EOS}"
	.if (. - gText_Rom_202E63) > 0x4c
	.error "gText_Rom_202E63 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_202E63) < 0x4c
	.space 0x4c - (. - gText_Rom_202E63)
	.endif
	@ data/maps/RustboroCity_PokemonSchool/scripts.inc:211 RustboroCity_PokemonSchool_Text_ExplainParalysis
	.globl gText_Rom_202EAF
gText_Rom_202EAF: @ 0x08202EAF
	.string "まひすると すばやさが さがり\nときどき わざが だせなくなります\pたたかい おわっても まひした ままです\nまひなおしで なおしましょう{EOS}"
	.if (. - gText_Rom_202EAF) > 0x46
	.error "gText_Rom_202EAF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_202EAF) < 0x46
	.space 0x46 - (. - gText_Rom_202EAF)
	.endif
	@ data/maps/RustboroCity_PokemonSchool/scripts.inc:214 RustboroCity_PokemonSchool_Text_ExplainSleep
	.globl gText_Rom_202EF5
gText_Rom_202EF5: @ 0x08202EF5
	.string "ねむって しまうと\nその あいだ こうげき できません\pじぶんで めざめることも ありますが\nねむったまま せんとうが おわると\lずっと ねむっています\pねむけざましで おこして あげましょう{EOS}"
	.if (. - gText_Rom_202EF5) > 0x61
	.error "gText_Rom_202EF5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_202EF5) < 0x61
	.space 0x61 - (. - gText_Rom_202EF5)
	.endif
	@ data/maps/RustboroCity_PokemonSchool/scripts.inc:217 RustboroCity_PokemonSchool_Text_ExplainBurn
	.globl gText_Rom_202F56
gText_Rom_202F56: @ 0x08202F56
	.string "やけどは こうげきりょくが さがるだけでなく\nたいりょくも どんどん へっていきます\pせんとうが おわっても やけどの ままです\nやけどなおしで なおしましょう{EOS}"
	.if (. - gText_Rom_202F56) > 0x51
	.error "gText_Rom_202F56 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_202F56) < 0x51
	.space 0x51 - (. - gText_Rom_202F56)
	.endif
	@ data/maps/RustboroCity_PokemonSchool/scripts.inc:220 RustboroCity_PokemonSchool_Text_ExplainFreeze
	.globl gText_Rom_202FA7
gText_Rom_202FA7: @ 0x08202FA7
	.string "こおって しまうと なにも できなくなります\pたたかい おわっても こおりついた ままです\nこおりなおしで とかしましょう{EOS}"
	.if (. - gText_Rom_202FA7) > 0x3e
	.error "gText_Rom_202FA7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_202FA7) < 0x3e
	.space 0x3e - (. - gText_Rom_202FA7)
	.endif
	@ data/maps/RustboroCity_PokemonSchool/scripts.inc:223 RustboroCity_PokemonSchool_Text_StudentsWhoDontStudyGetQuickClaw
	.globl gText_Rom_202FE5
gText_Rom_202FE5: @ 0x08202FE5
	.string "べんきょうを しない せいとは\nわたくしの ツメの あかを\lせんじて のませるのです!\pきみが べんきょう する しないは\nこの どうぐを つかいこなせるか どうかで\lわかること でしょう!{EOS}"
	.if (. - gText_Rom_202FE5) > 0x60
	.error "gText_Rom_202FE5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_202FE5) < 0x60
	.space 0x60 - (. - gText_Rom_202FE5)
	.endif
	@ data/maps/RustboroCity_PokemonSchool/scripts.inc:226 RustboroCity_PokemonSchool_Text_ExplainQuickClaw
	.globl gText_Rom_203045
gText_Rom_203045: @ 0x08203045
	.string "ポケモンに せんせいのツメを もたせると\nときどき ですが すばやくなって\lせんせい こうげきを するのです!\pこのように ポケモンに もたせる\nどうぐの こと だけでも\lべんきょう することは いっぱい なのです!{EOS}"
	.if (. - gText_Rom_203045) > 0x6d
	.error "gText_Rom_203045 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_203045) < 0x6d
	.space 0x6d - (. - gText_Rom_203045)
	.endif
	@ data/maps/RustboroCity_PokemonSchool/scripts.inc:229 RustboroCity_PokemonSchool_Text_TradingRightNow
	.globl gText_Rom_2030B2
gText_Rom_2030B2: @ 0x082030B2
	.string "いま ともだちと\nポケモンを こうかん してるんだ!{EOS}"
	.if (. - gText_Rom_2030B2) > 0x1b
	.error "gText_Rom_2030B2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2030B2) < 0x1b
	.space 0x1b - (. - gText_Rom_2030B2)
	.endif
	@ data/maps/RustboroCity_PokemonSchool/scripts.inc:232 RustboroCity_PokemonSchool_Text_AlwaysWantedSeedot
	.globl gText_Rom_2030CD
gText_Rom_2030CD: @ 0x082030CD
	.string "ほしかった タネボーちゃん が\nやっと てに はいるよ!{EOS}"
	.if (. - gText_Rom_2030CD) > 0x1d
	.error "gText_Rom_2030CD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2030CD) < 0x1d
	.space 0x1d - (. - gText_Rom_2030CD)
	.endif
	@ data/maps/RustboroCity_PokemonSchool/scripts.inc:235 RustboroCity_PokemonSchool_Text_PokemontCantUseManMadeItems
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2030EA
gText_Rom_2030EA: @ 0x082030EA
	.string "ポケモンも どうぐ もてるけど\nキズぐすりとか どくけしとか\lひとが つくった どうぐは\lつかいかたが わからない みたい{EOS}"
	.if (. - gText_Rom_2030EA) != 0x3e
	.error "gText_Rom_2030EA must retain its original byte length"
	.endif
	.globl gText_Rom_203124
	.set gText_Rom_203124, gText_Rom_2030EA + 0x3a
	@ data/maps/RustboroCity_PokemonSchool/scripts.inc:238 RustboroCity_PokemonSchool_Text_ConfusedPokemonAttacksItself
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_203128
gText_Rom_203128: @ 0x08203128
	.string "ポケモンの わざで\nこんらん することが あるでしょ?\pこんらん すると たまに まちがえて\nじぶんを こうげき しちゃうの……\pでも いちどでも せんとうから はなれると\nもとに もどるわよ!{EOS}"
	.if (. - gText_Rom_203128) != 0x62
	.error "gText_Rom_203128 must retain its original byte length"
	.endif
	.globl gText_Rom_203186
	.set gText_Rom_203186, gText_Rom_203128 + 0x5e
	@ data/maps/RustboroCity_PokemonSchool/scripts.inc:241 RustboroCity_PokemonSchool_Text_PokemonHealItselfWithBerry
	.globl gText_Rom_20318A
gText_Rom_20318A: @ 0x0820318A
	.string "……ポケモンに きのみを もたせると\nじぶんで たいりょくを かいふくする\pポケモンが もてる どうぐは\nほかにも たくさん……\pノートを ちゃんと とるのは\nたいへんだなあ……{EOS}"
	.if (. - gText_Rom_20318A) > 0x5a
	.error "gText_Rom_20318A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20318A) < 0x5a
	.space 0x5a - (. - gText_Rom_20318A)
	.endif
	@ data/maps/RustboroCity_PokemonSchool/scripts.inc:244 RustboroCity_PokemonSchool_Text_StudentsNotes
	.globl gText_Rom_2031E4
gText_Rom_2031E4: @ 0x082031E4
	.string "このこの ノートだ……\pポケモンは モンスターボールで つかまえて\nどうじに 6ぴき もちあるける\pそうして つかまえた ポケモンを\nそだてて たたかわせる ひとを\lポケモントレーナーと いう\pトレーナーの もくひょうは\nかくちの ポケモンジムに いる\lつよい トレーナーに かつこと!{EOS}"
	.if (. - gText_Rom_2031E4) > 0x90
	.error "gText_Rom_2031E4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2031E4) < 0x90
	.space 0x90 - (. - gText_Rom_2031E4)
	.endif
	@ data/maps/RustboroCity_PokemonSchool/scripts.inc:247 RustboroCity_PokemonSchool_Text_ScottMetAlreadyCut
	.globl gText_Rom_203274
gText_Rom_203274: @ 0x08203274
	.string "おや? きみとは たしか\nトウカシティで あった きがするね\pわたしの なまえは エニシダ\pポケモンしょうぶの さいのうを もった\nゆうしゅうな じんざいを もとめて\lかくちを たびして いるのさ\pスクールを のぞきにきた ということは\nきみも トレーナー?\pならば まずは いあいぎりを\nポケモンに おぼえさせると いいね!\pいあいぎりは たしか このまちの\nだれかが もっていた はずだよ{EOS}"
	.if (. - gText_Rom_203274) > 0xc5
	.error "gText_Rom_203274 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_203274) < 0xc5
	.space 0xc5 - (. - gText_Rom_203274)
	.endif
	@ data/maps/RustboroCity_PokemonSchool/scripts.inc:250 RustboroCity_PokemonSchool_Text_StudentTalentLevelUnknown
	.globl gText_Rom_203339
gText_Rom_203339: @ 0x08203339
	.string "エニシダ『うーん ここに いる\nせいとさん たちの さいのうは\lまだまだ みちすう! これから だな!{EOS}"
	.if (. - gText_Rom_203339) > 0x34
	.error "gText_Rom_203339 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_203339) < 0x34
	.space 0x34 - (. - gText_Rom_203339)
	.endif
	@ data/maps/RustboroCity_PokemonSchool/scripts.inc:253 RustboroCity_PokemonSchool_Text_ScottStoneBadge
	.globl gText_Rom_20336D
gText_Rom_20336D: @ 0x0820336D
	.string "エニシダ『ん それは……\nストーンバッジ だね\lなかなか やるじゃ ないか!\pだけど できれば\nたたかっている ところを みたかったな\lリーグバッジ だけでは きみが\lどんな トレーナー なのかは\lよく わからない からね{EOS}"
	.if (. - gText_Rom_20336D) > 0x70
	.error "gText_Rom_20336D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20336D) < 0x70
	.space 0x70 - (. - gText_Rom_20336D)
	.endif
	@ data/maps/RustboroCity_PokemonSchool/scripts.inc:256 RustboroCity_PokemonSchool_Text_ScottMetAlreadyStoneBadge
	.globl gText_Rom_2033DD
gText_Rom_2033DD: @ 0x082033DD
	.string "おや? きみとは たしか\nトウカシティで あった きがするね\pわたしの なまえは エニシダ\pポケモンしょうぶの さいのうを もった\nゆうしゅうな じんざいを もとめて\lかくちを たびして いるのさ\pきみの それは……\nストーンバッジ だね\lトレーナーに なりたてに しては やるね\pだけど できれば\nたたかっている ところを みたかったな\lリーグバッジ だけでは きみが\lどんな トレーナー なのかは\lよく わからない からね{EOS}"
	.if (. - gText_Rom_2033DD) > 0xd6
	.error "gText_Rom_2033DD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2033DD) < 0xd6
	.space 0xd6 - (. - gText_Rom_2033DD)
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
	loadword 0x00, gText_Rom_2034F0
	callstd 0x02
	end
.globl EventScript_JP_082034DE
EventScript_JP_082034DE: @ 0x082034DE
	loadword 0x00, gText_Rom_20353E
	callstd 0x02
	end
.globl EventScript_JP_082034E7
EventScript_JP_082034E7: @ 0x082034E7
	loadword 0x00, gText_Rom_203580
	callstd 0x02
	end
