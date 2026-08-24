	@ data/maps/PetalburgWoods/scripts.inc:318 PetalburgWoods_Text_NotAOneToBeFound
	.globl PetalburgWoods_Text_NotAOneToBeFound
PetalburgWoods_Text_NotAOneToBeFound: @ 0x082145D4
	.string "うーん\nいないなあ……{EOS}"
	.if (. - PetalburgWoods_Text_NotAOneToBeFound) > 0xc
	.error "PetalburgWoods_Text_NotAOneToBeFound may not grow beyond its original slot"
	.endif
	.if (. - PetalburgWoods_Text_NotAOneToBeFound) < 0xc
	.space 0xc - (. - PetalburgWoods_Text_NotAOneToBeFound)
	.endif
	@ data/maps/PetalburgWoods/scripts.inc:321 PetalburgWoods_Text_HaveYouSeenShroomish
	.globl PetalburgWoods_Text_HaveYouSeenShroomish
PetalburgWoods_Text_HaveYouSeenShroomish: @ 0x082145E0
	.string "ねえ きみきみ このあたりで\nキノココって ポケモン みなかった?\pおじさん あの ポケモン すき なのよね{EOS}"
	.if (. - PetalburgWoods_Text_HaveYouSeenShroomish) > 0x37
	.error "PetalburgWoods_Text_HaveYouSeenShroomish may not grow beyond its original slot"
	.endif
	.if (. - PetalburgWoods_Text_HaveYouSeenShroomish) < 0x37
	.space 0x37 - (. - PetalburgWoods_Text_HaveYouSeenShroomish)
	.endif
	@ data/maps/PetalburgWoods/scripts.inc:326 PetalburgWoods_Text_IWasGoingToAmbushYou
	.globl PetalburgWoods_Text_IWasGoingToAmbushYou
PetalburgWoods_Text_IWasGoingToAmbushYou: @ 0x08214617
	.string "まちぶせ していたのに\nいつまでも トウカのもりで うろうろと……\pまちくたびれたから きてやったぞ!{EOS}"
	.if (. - PetalburgWoods_Text_IWasGoingToAmbushYou) > 0x34
	.error "PetalburgWoods_Text_IWasGoingToAmbushYou may not grow beyond its original slot"
	.endif
	.if (. - PetalburgWoods_Text_IWasGoingToAmbushYou) < 0x34
	.space 0x34 - (. - PetalburgWoods_Text_IWasGoingToAmbushYou)
	.endif
	@ data/maps/PetalburgWoods/scripts.inc:331 PetalburgWoods_Text_HandOverThosePapers
	.globl PetalburgWoods_Text_HandOverThosePapers
PetalburgWoods_Text_HandOverThosePapers: @ 0x0821464B
	.string "やい! デボンの けんきゅういん!\pその しょるいを こっちに よこしやがれ!{EOS}"
	.if (. - PetalburgWoods_Text_HandOverThosePapers) > 0x28
	.error "PetalburgWoods_Text_HandOverThosePapers may not grow beyond its original slot"
	.endif
	.if (. - PetalburgWoods_Text_HandOverThosePapers) < 0x28
	.space 0x28 - (. - PetalburgWoods_Text_HandOverThosePapers)
	.endif
	@ data/maps/PetalburgWoods/scripts.inc:335 PetalburgWoods_Text_YouHaveToHelpMe
	.globl PetalburgWoods_Text_YouHaveToHelpMe
PetalburgWoods_Text_YouHaveToHelpMe: @ 0x08214673
	.string "ひやー!\pきみ ポケモントレーナー だよね\nおじさんを たすけてよぉ{EOS}"
	.if (. - PetalburgWoods_Text_YouHaveToHelpMe) > 0x23
	.error "PetalburgWoods_Text_YouHaveToHelpMe may not grow beyond its original slot"
	.endif
	.if (. - PetalburgWoods_Text_YouHaveToHelpMe) < 0x23
	.space 0x23 - (. - PetalburgWoods_Text_YouHaveToHelpMe)
	.endif
	@ data/maps/PetalburgWoods/scripts.inc:340 PetalburgWoods_Text_NoOneCrossesTeamAqua
	.globl PetalburgWoods_Text_NoOneCrossesTeamAqua
PetalburgWoods_Text_NoOneCrossesTeamAqua: @ 0x08214696
	.string "……ん? なんだ おまえ?\nそいつを かばおう ってのか?\pアクアだんの じゃまを する やつは\nこどもでも ようしゃ しねえ!\lしょうぶ しやがれ!{EOS}"
	.if (. - PetalburgWoods_Text_NoOneCrossesTeamAqua) > 0x4c
	.error "PetalburgWoods_Text_NoOneCrossesTeamAqua may not grow beyond its original slot"
	.endif
	.if (. - PetalburgWoods_Text_NoOneCrossesTeamAqua) < 0x4c
	.space 0x4c - (. - PetalburgWoods_Text_NoOneCrossesTeamAqua)
	.endif
	@ data/maps/PetalburgWoods/scripts.inc:347 PetalburgWoods_Text_YoureKiddingMe (+1 aliases)
	.globl PetalburgWoods_Text_YoureKiddingMe
PetalburgWoods_Text_YoureKiddingMe: @ 0x082146E2
	.string "……つ つよい じゃねーか!{EOS}"
	.if (. - PetalburgWoods_Text_YoureKiddingMe) > 0xf
	.error "PetalburgWoods_Text_YoureKiddingMe may not grow beyond its original slot"
	.endif
	.if (. - PetalburgWoods_Text_YoureKiddingMe) < 0xf
	.space 0xf - (. - PetalburgWoods_Text_YoureKiddingMe)
	.endif
	@ data/maps/PetalburgWoods/scripts.inc:350 PetalburgWoods_Text_YouveGotSomeNerve
	.globl PetalburgWoods_Text_YouveGotSomeNerve
PetalburgWoods_Text_YouveGotSomeNerve: @ 0x082146F1
	.string "むむむ…… アクアだんの\nじゃまを するとは なんて やつ!\lもう いっかい しょうぶ しろ!\p……と いいたい ところ だが\nもう てもちの ポケモンは いない\pそれに カナズミ シティにも アクアだんが\nねらっている ものが あるからな!\pきょうは これぐらいに しといてやらぁ!{EOS}"
	.if (. - PetalburgWoods_Text_YouveGotSomeNerve) > 0x8f
	.error "PetalburgWoods_Text_YouveGotSomeNerve may not grow beyond its original slot"
	.endif
	.if (. - PetalburgWoods_Text_YouveGotSomeNerve) < 0x8f
	.space 0x8f - (. - PetalburgWoods_Text_YouveGotSomeNerve)
	.endif
	@ data/maps/PetalburgWoods/scripts.inc:360 PetalburgWoods_Text_ThatWasAwfullyClose
	.globl PetalburgWoods_Text_ThatWasAwfullyClose
PetalburgWoods_Text_ThatWasAwfullyClose: @ 0x08214780
	.string "……ふぅ\nあぶない ところ だった!\pきみの おかげで だいじな しょるいを\nうばわれないで すんだよ!\p……そうだ! おれいに\nスーパーボールを あげちゃおう!{EOS}"
	.if (. - PetalburgWoods_Text_ThatWasAwfullyClose) > 0x52
	.error "PetalburgWoods_Text_ThatWasAwfullyClose may not grow beyond its original slot"
	.endif
	.if (. - PetalburgWoods_Text_ThatWasAwfullyClose) < 0x52
	.space 0x52 - (. - PetalburgWoods_Text_ThatWasAwfullyClose)
	.endif
	@ data/maps/PetalburgWoods/scripts.inc:368 PetalburgWoods_Text_TeamAquaAfterSomethingInRustboro
	.globl PetalburgWoods_Text_TeamAquaAfterSomethingInRustboro
PetalburgWoods_Text_TeamAquaAfterSomethingInRustboro: @ 0x082147D2
	.string "……そういえば さっき アクアだんは\n「カナズミにも ねらっている ものがある」\lとか いってたよね……?{EOS}"
	.if (. - PetalburgWoods_Text_TeamAquaAfterSomethingInRustboro) > 0x36
	.error "PetalburgWoods_Text_TeamAquaAfterSomethingInRustboro may not grow beyond its original slot"
	.endif
	.if (. - PetalburgWoods_Text_TeamAquaAfterSomethingInRustboro) < 0x36
	.space 0x36 - (. - PetalburgWoods_Text_TeamAquaAfterSomethingInRustboro)
	.endif
	@ data/maps/PetalburgWoods/scripts.inc:373 PetalburgWoods_Text_ICantBeWastingTime
	.globl PetalburgWoods_Text_ICantBeWastingTime
PetalburgWoods_Text_ICantBeWastingTime: @ 0x08214808
	.string "たいへんだ!!\nこうしちゃ いられない!{EOS}"
	.if (. - PetalburgWoods_Text_ICantBeWastingTime) > 0x15
	.error "PetalburgWoods_Text_ICantBeWastingTime may not grow beyond its original slot"
	.endif
	.if (. - PetalburgWoods_Text_ICantBeWastingTime) < 0x15
	.space 0x15 - (. - PetalburgWoods_Text_ICantBeWastingTime)
	.endif
	@ data/maps/PetalburgWoods/scripts.inc:377 PetalburgWoods_Text_YoureLoadedWithItems (+1 aliases)
	.globl PetalburgWoods_Text_YoureLoadedWithItems
PetalburgWoods_Text_YoureLoadedWithItems: @ 0x0821481D
	.string "どうぐ いっぱいで\nスーパーボール あげられないね{EOS}"
	.if (. - PetalburgWoods_Text_YoureLoadedWithItems) > 0x1a
	.error "PetalburgWoods_Text_YoureLoadedWithItems may not grow beyond its original slot"
	.endif
	.if (. - PetalburgWoods_Text_YoureLoadedWithItems) < 0x1a
	.space 0x1a - (. - PetalburgWoods_Text_YoureLoadedWithItems)
	.endif
	@ data/maps/PetalburgWoods/scripts.inc:381 PetalburgWoods_Text_GoBugPokemonTeam (+1 aliases)
	.globl PetalburgWoods_Text_GoBugPokemonTeam
PetalburgWoods_Text_GoBugPokemonTeam: @ 0x08214837
	.string "ポケモン いっぱい つかまえた!\pそら いけ!\nぼくの むしポケモン チーム!{EOS}"
	.if (. - PetalburgWoods_Text_GoBugPokemonTeam) > 0x28
	.error "PetalburgWoods_Text_GoBugPokemonTeam may not grow beyond its original slot"
	.endif
	.if (. - PetalburgWoods_Text_GoBugPokemonTeam) < 0x28
	.space 0x28 - (. - PetalburgWoods_Text_GoBugPokemonTeam)
	.endif
	@ data/maps/PetalburgWoods/scripts.inc:386 PetalburgWoods_Text_ICouldntWin (+1 aliases)
	.globl PetalburgWoods_Text_ICouldntWin
PetalburgWoods_Text_ICouldntWin: @ 0x0821485F
	.string "こんなに ポケモン いるのに\nかてなかったのか……{EOS}"
	.if (. - PetalburgWoods_Text_ICouldntWin) > 0x1a
	.error "PetalburgWoods_Text_ICouldntWin may not grow beyond its original slot"
	.endif
	.if (. - PetalburgWoods_Text_ICouldntWin) < 0x1a
	.space 0x1a - (. - PetalburgWoods_Text_ICouldntWin)
	.endif
	@ data/maps/PetalburgWoods/scripts.inc:390 PetalburgWoods_Text_ImOutOfPokeBalls
	.globl PetalburgWoods_Text_ImOutOfPokeBalls
PetalburgWoods_Text_ImOutOfPokeBalls: @ 0x08214879
	.string "たくさん ポケモン つかまえたら\nモンスターボール なくなっちゃったよ{EOS}"
	.if (. - PetalburgWoods_Text_ImOutOfPokeBalls) > 0x24
	.error "PetalburgWoods_Text_ImOutOfPokeBalls may not grow beyond its original slot"
	.endif
	.if (. - PetalburgWoods_Text_ImOutOfPokeBalls) < 0x24
	.space 0x24 - (. - PetalburgWoods_Text_ImOutOfPokeBalls)
	.endif
	@ data/maps/PetalburgWoods/scripts.inc:394 PetalburgWoods_Text_InstantlyPopularWithBugPokemon (+1 aliases)
	.globl PetalburgWoods_Text_InstantlyPopularWithBugPokemon
PetalburgWoods_Text_InstantlyPopularWithBugPokemon: @ 0x0821489D
	.string "むしポケモンを がっこうに もっていくと\nそれだけで にんきもの だろ!?{EOS}"
	.if (. - PetalburgWoods_Text_InstantlyPopularWithBugPokemon) > 0x26
	.error "PetalburgWoods_Text_InstantlyPopularWithBugPokemon may not grow beyond its original slot"
	.endif
	.if (. - PetalburgWoods_Text_InstantlyPopularWithBugPokemon) < 0x26
	.space 0x26 - (. - PetalburgWoods_Text_InstantlyPopularWithBugPokemon)
	.endif
	@ data/maps/PetalburgWoods/scripts.inc:398 PetalburgWoods_Text_CantBePopularIfILose (+2 aliases)
	.globl gText_Rom_2148C3
gText_Rom_2148C3: @ 0x082148C3
	.string "まけると にんきものに なれないや{EOS}"
	.if (. - gText_Rom_2148C3) > 0x12
	.error "gText_Rom_2148C3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2148C3) < 0x12
	.space 0x12 - (. - gText_Rom_2148C3)
	.endif
	@ data/maps/PetalburgWoods/scripts.inc:401 PetalburgWoods_Text_PeopleRespectYou
	.globl PetalburgWoods_Text_PeopleRespectYou
PetalburgWoods_Text_PeopleRespectYou: @ 0x082148D5
	.string "でかい むしポケモン もってると\nそれだけで そんけー されるだろ!?{EOS}"
	.if (. - PetalburgWoods_Text_PeopleRespectYou) > 0x24
	.error "PetalburgWoods_Text_PeopleRespectYou may not grow beyond its original slot"
	.endif
	.if (. - PetalburgWoods_Text_PeopleRespectYou) < 0x24
	.space 0x24 - (. - PetalburgWoods_Text_PeopleRespectYou)
	.endif
	@ data/maps/PetalburgWoods/scripts.inc:405 PetalburgWoods_Text_IWantRematch1 (+1 aliases)
	.globl gText_Rom_2148F9
gText_Rom_2148F9: @ 0x082148F9
	.string "むしポケモン そだったら また しょうぶだ!\nポケナビに とうろく するぞ{EOS}"
	.if (. - gText_Rom_2148F9) > 0x26
	.error "gText_Rom_2148F9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2148F9) < 0x26
	.space 0x26 - (. - gText_Rom_2148F9)
	.endif
	@ data/maps/PetalburgWoods/scripts.inc:405 PetalburgWoods_Text_IWantRematch1 (+1 aliases)
	.globl gText_Rom_21491F
gText_Rom_21491F: @ 0x0821491F
	.string "むしポケモン そだったら また しょうぶだ!\nポケナビに とうろく するぞ{EOS}"
	.if (. - gText_Rom_21491F) > 0x26
	.error "gText_Rom_21491F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21491F) < 0x26
	.space 0x26 - (. - gText_Rom_21491F)
	.endif
	@ data/maps/PetalburgWoods/scripts.inc:413 PetalburgWoods_Text_MyPokemonHaveGrown (+1 aliases)
	.globl PetalburgWoods_Text_MyPokemonHaveGrown
PetalburgWoods_Text_MyPokemonHaveGrown: @ 0x08214945
	.string "ぼくの むしポケモン そだったぞ!\nこれで また にんきもの だぜ!{EOS}"
	.if (. - PetalburgWoods_Text_MyPokemonHaveGrown) > 0x23
	.error "PetalburgWoods_Text_MyPokemonHaveGrown may not grow beyond its original slot"
	.endif
	.if (. - PetalburgWoods_Text_MyPokemonHaveGrown) < 0x23
	.space 0x23 - (. - PetalburgWoods_Text_MyPokemonHaveGrown)
	.endif
	@ data/maps/PetalburgWoods/scripts.inc:398 PetalburgWoods_Text_CantBePopularIfILose (+2 aliases)
	.globl gText_Rom_214968
gText_Rom_214968: @ 0x08214968
	.string "まけると にんきものに なれないや{EOS}"
	.if (. - gText_Rom_214968) > 0x12
	.error "gText_Rom_214968 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_214968) < 0x12
	.space 0x12 - (. - gText_Rom_214968)
	.endif
	@ data/maps/PetalburgWoods/scripts.inc:420 PetalburgWoods_Text_IveBeenTrainingHard
	.globl PetalburgWoods_Text_IveBeenTrainingHard
PetalburgWoods_Text_IveBeenTrainingHard: @ 0x0821497A
	.string "つよい ポケモン もってると\nにんきものに なれるだろ?\lだから がんばって そだててるのさ!{EOS}"
	.if (. - PetalburgWoods_Text_IveBeenTrainingHard) > 0x30
	.error "PetalburgWoods_Text_IveBeenTrainingHard may not grow beyond its original slot"
	.endif
	.if (. - PetalburgWoods_Text_IveBeenTrainingHard) < 0x30
	.space 0x30 - (. - PetalburgWoods_Text_IveBeenTrainingHard)
	.endif
	@ data/maps/PetalburgWoods/scripts.inc:425 PetalburgWoods_Text_StayOutOfTallGrass
	.globl PetalburgWoods_Text_StayOutOfTallGrass
PetalburgWoods_Text_StayOutOfTallGrass: @ 0x082149AA
	.string "よお! おまえの ポケモン げんき?\pてもちの ポケモンが よわっていて\nたたかわせたく ないときは なるべく\lくさむらを よけて あるくと いいよ!{EOS}"
	.if (. - PetalburgWoods_Text_StayOutOfTallGrass) > 0x4c
	.error "PetalburgWoods_Text_StayOutOfTallGrass may not grow beyond its original slot"
	.endif
	.if (. - PetalburgWoods_Text_StayOutOfTallGrass) < 0x4c
	.space 0x4c - (. - PetalburgWoods_Text_StayOutOfTallGrass)
	.endif
	@ data/maps/PetalburgWoods/scripts.inc:431 PetalburgWoods_Text_HiddenItemsExplanation
	.globl PetalburgWoods_Text_HiddenItemsExplanation
PetalburgWoods_Text_HiddenItemsExplanation: @ 0x082149F6
	.string "みえて いなくても\nどうぐが おちてることが あるから\lあしもとを しらべて いるんだ!{EOS}"
	.if (. - PetalburgWoods_Text_HiddenItemsExplanation) > 0x2d
	.error "PetalburgWoods_Text_HiddenItemsExplanation may not grow beyond its original slot"
	.endif
	.if (. - PetalburgWoods_Text_HiddenItemsExplanation) < 0x2d
	.space 0x2d - (. - PetalburgWoods_Text_HiddenItemsExplanation)
	.endif
	@ data/maps/PetalburgWoods/scripts.inc:436 PetalburgWoods_Text_TryUsingThisItem
	.globl PetalburgWoods_Text_TryUsingThisItem
PetalburgWoods_Text_TryUsingThisItem: @ 0x08214A23
	.string "それって カナズミの ジムバッジ!\pあなた トレーナーなのね\nこの どうぐ つかってみたら どうかしら?{EOS}"
	.if (. - PetalburgWoods_Text_TryUsingThisItem) > 0x35
	.error "PetalburgWoods_Text_TryUsingThisItem may not grow beyond its original slot"
	.endif
	.if (. - PetalburgWoods_Text_TryUsingThisItem) < 0x35
	.space 0x35 - (. - PetalburgWoods_Text_TryUsingThisItem)
	.endif
	@ data/maps/PetalburgWoods/scripts.inc:441 PetalburgWoods_Text_MiracleSeedExplanation
	.globl PetalburgWoods_Text_MiracleSeedExplanation
PetalburgWoods_Text_MiracleSeedExplanation: @ 0x08214A58
	.string "きせきのタネを\nポケモンに もたせてあげると くさタイプの\lわざの いりょくが あがるのよ\pきせきのタネの ほかにも\nポケモンに もたせると べんりな\lどうぐが あるらしいわね{EOS}"
	.if (. - PetalburgWoods_Text_MiracleSeedExplanation) > 0x59
	.error "PetalburgWoods_Text_MiracleSeedExplanation may not grow beyond its original slot"
	.endif
	.if (. - PetalburgWoods_Text_MiracleSeedExplanation) < 0x59
	.space 0x59 - (. - PetalburgWoods_Text_MiracleSeedExplanation)
	.endif
	@ data/maps/PetalburgWoods/scripts.inc:449 PetalburgWoods_Text_TrainerTipsExperience
	.globl PetalburgWoods_Text_TrainerTipsExperience
PetalburgWoods_Text_TrainerTipsExperience: @ 0x08214AB1
	.string "おとくな けいじばん!!\pしょうぶの とき\nいちど でも かおをだした ポケモンは\lけいけんちが もらえます!\pよわい ポケモンを リストの ひだりにして\nしょうぶのとき すぐに こうたい!\lこれで よわい ポケモンも そだちます!{EOS}"
	.if (. - PetalburgWoods_Text_TrainerTipsExperience) > 0x75
	.error "PetalburgWoods_Text_TrainerTipsExperience may not grow beyond its original slot"
	.endif
	.if (. - PetalburgWoods_Text_TrainerTipsExperience) < 0x75
	.space 0x75 - (. - PetalburgWoods_Text_TrainerTipsExperience)
	.endif
	@ data/maps/PetalburgWoods/scripts.inc:458 PetalburgWoods_Text_TrainerTipsPP
	.globl PetalburgWoods_Text_TrainerTipsPP
PetalburgWoods_Text_TrainerTipsPP: @ 0x08214B26
	.string "おとくな けいじばん!!\pポケモンには ヒットポイントの ほかに\nわざを くりだす ちからの もと\lパワーポイント というものが あります\pわざの パワーポイントが なくなったときも\nポケモンセンターに いきましょう!{EOS}"
	.if (. - PetalburgWoods_Text_TrainerTipsPP) > 0x6e
	.error "PetalburgWoods_Text_TrainerTipsPP may not grow beyond its original slot"
	.endif
	.if (. - PetalburgWoods_Text_TrainerTipsPP) < 0x6e
	.space 0x6e - (. - PetalburgWoods_Text_TrainerTipsPP)
	.endif
	@ Embedded ROM bytes: file offset 0x214B94, size 0x4A9
	@ semanticized-mass: resolved embedded ROM pointers
	.byte 0x05, 0xA5, 0x4B, 0x21, 0x08, 0x03, 0x9F, 0x4B, 0x21, 0x08, 0x00, 0x16, 0xBD, 0x40, 0x01, 0x00
	.byte 0x02, 0xA6, 0x01, 0x02, 0x6A, 0x5A, 0x2B, 0xDB, 0x00, 0x07, 0x00, 0xCC, 0x4B, 0x21, 0x08, 0x2B
	.byte 0xDB, 0x00, 0x07, 0x01, 0xD5, 0x4B, 0x21, 0x08, 0x68, 0x4F, 0x01, 0x00, 0x25, 0x36, 0x24, 0x08
	.byte 0x51, 0x00, 0x00, 0x29, 0xDB, 0x00, 0x6C, 0x02, 0x0F, 0x00
	.4byte MtChimney_Text_ArchieGoStopTeamMagma @ ROM pointer 0x08215500
	.byte 0x09, 0x04, 0x03, 0x0F, 0x00
	.4byte MtChimney_Text_ArchieIHaveMyHandsFull
	.byte 0x09, 0x04, 0x03, 0x69, 0x33, 0xB9, 0x01
	.byte 0x00, 0x0F, 0x00
	.4byte MtChimney_Text_MeteoriteWillActivateVolcano
	.byte 0x09, 0x04, 0x4F, 0x02, 0x00, 0x21, 0x36, 0x24, 0x08
	.byte 0x51, 0x00, 0x00, 0x2F, 0x15, 0x00, 0x4F, 0x02, 0x00, 0x1B, 0x36, 0x24, 0x08, 0x51, 0x00, 0x00
	.byte 0x4F, 0x02, 0x00, 0x1D, 0x36, 0x24, 0x08, 0x51, 0x00, 0x00, 0x0F, 0x00
	.4byte MtChimney_Text_MaxieIntro @ ROM pointer 0x082150AB
	.byte 0x09, 0x04, 0x5C, 0x03, 0x5A, 0x02, 0x00, 0x00
	.4byte MtChimney_Text_MaxieDefeat @ ROM pointer 0x08215207
	.byte 0x0F, 0x00, 0x28, 0x52, 0x21, 0x08, 0x09, 0x04, 0x68, 0x28, 0x1E, 0x00, 0x97, 0x01, 0x53, 0x02
	.byte 0x00, 0x53, 0x1D, 0x00, 0x53, 0x03, 0x00, 0x53, 0x16, 0x00, 0x29, 0x9F, 0x03, 0x97, 0x00, 0x63
	.byte 0x01, 0x00, 0x0A, 0x00, 0x0C, 0x00, 0x55, 0x01, 0x00, 0x21, 0x0C, 0x80, 0x04, 0x00, 0x07, 0x01
	.byte 0x9A, 0x4C, 0x21, 0x08, 0x21, 0x0C, 0x80, 0x02, 0x00, 0x07, 0x01, 0xA5, 0x4C, 0x21, 0x08, 0x4F
	.byte 0xFF, 0x00, 0x27, 0x36, 0x24, 0x08, 0x51, 0x00, 0x00, 0x0F, 0x00
	.4byte MtChimney_Text_ArchieThankYou
	.byte 0x09
	.byte 0x04, 0x68, 0x21, 0x0C, 0x80, 0x04, 0x00, 0x07, 0x01, 0xB0, 0x4C, 0x21, 0x08, 0x21, 0x0C, 0x80
	.byte 0x02, 0x00, 0x07, 0x01, 0xBB, 0x4C, 0x21, 0x08, 0x53, 0x01, 0x00, 0x29, 0x9E, 0x03, 0x29, 0x8B
	.byte 0x00, 0x2A, 0xA0, 0x03, 0x29, 0xAE, 0x03, 0x2A, 0xE2, 0x03, 0x6B, 0x02, 0x4F, 0x01, 0x00, 0x56
	.byte 0x4D, 0x21, 0x08, 0x51, 0x00, 0x00, 0x03, 0x4F, 0x01, 0x00, 0x67, 0x4D, 0x21, 0x08, 0x51, 0x00
	.byte 0x00, 0x03, 0x4F, 0x01, 0x00, 0x5E, 0x4D, 0x21, 0x08, 0x51, 0x00, 0x00, 0x03, 0x4F, 0x01, 0x00
	.byte 0x6F, 0x4D, 0x21, 0x08, 0x51, 0x00, 0x00, 0x03, 0x6A, 0x5A, 0x93, 0x00, 0x00, 0x00, 0x0F, 0x00
	.4byte MtChimney_Text_LavaCookiesJust200 @ ROM pointer 0x082156F6
	.byte 0x09, 0x05, 0x21, 0x0D, 0x80, 0x00, 0x00, 0x06, 0x01, 0x3C, 0x4D, 0x21, 0x08, 0x92, 0xC8, 0x00
	.byte 0x00, 0x00, 0x00, 0x21, 0x0D, 0x80, 0x00, 0x00, 0x06, 0x01, 0x49, 0x4D, 0x21, 0x08, 0x0F, 0x00
	.4byte MtChimney_Text_ThankYouDear @ ROM pointer 0x0821571E
	.byte 0x09, 0x04, 0x46, 0x26, 0x00, 0x01, 0x00, 0x21, 0x0D, 0x80, 0x01, 0x00, 0x07, 0x01, 0x31, 0x4D
	.byte 0x21, 0x08, 0x1A, 0x00, 0x80, 0x26, 0x00, 0x1A, 0x01, 0x80, 0x01, 0x00, 0x09, 0x00, 0x21, 0x0D
	.byte 0x80, 0x00, 0x00, 0x06, 0x01, 0x24, 0x4D, 0x21, 0x08, 0x94, 0x00, 0x00, 0x6C, 0x02, 0x0F, 0x00
	.4byte gText_TooBadBagIsFull @ ROM pointer 0x08243977
	.byte 0x09, 0x04, 0x94, 0x00, 0x00, 0x6C, 0x02, 0x91, 0xC8, 0x00, 0x00, 0x00, 0x00, 0x95, 0x00, 0x00
	.byte 0x00, 0x03, 0x0F, 0x00
	.4byte MtChimney_Text_OhFineThen @ ROM pointer 0x08215741
	.byte 0x09, 0x04, 0x94, 0x00, 0x00, 0x6C, 0x02, 0x0F, 0x00
	.4byte MtChimney_Text_YouveNotGotTheMoney
	.byte 0x09, 0x04, 0x94
	.byte 0x00, 0x00, 0x6C, 0x02, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x0B, 0xFE, 0x0A, 0x08, 0x08, 0x08
	.byte 0x08, 0x08, 0x08, 0x08, 0xFE, 0x09, 0x09, 0x09, 0x09, 0x09, 0x0B, 0x0B, 0xFE, 0x0A, 0x0A, 0x08
	.byte 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0xFE, 0x08, 0x08, 0x08, 0x08, 0x08, 0x0A, 0x0A, 0x08, 0x08
	.byte 0x08, 0x08, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x08, 0xFE, 0x08, 0x08, 0x08, 0x08, 0x0A, 0x0A, 0x0A
	.byte 0x08, 0xFE, 0x0B, 0x08, 0x08, 0x08, 0x08, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x08, 0x08, 0x08, 0x08
	.byte 0xFE, 0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 0x0A, 0x0A, 0x08, 0x08, 0x08, 0x0A
	.byte 0x0A, 0x08, 0x08, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x08, 0xFE, 0x14, 0x14, 0x14, 0x08, 0x08, 0x08
	.byte 0x0A, 0x0A, 0x0A, 0x08, 0xFE, 0x14, 0x0A, 0x08, 0x08, 0x08, 0x08, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A
	.byte 0x08, 0x08, 0x08, 0x08, 0xFE, 0x14, 0x0A, 0x0A, 0x08, 0x08, 0x08, 0x0A, 0x0A, 0x08, 0x08, 0x0A
	.byte 0x0A, 0x0A, 0x0A, 0x0A, 0x08, 0xFE, 0x14, 0x08, 0x0A, 0x0A, 0x0A, 0x0A, 0x25, 0xFE, 0x08, 0x08
	.byte 0x08, 0x08, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x08, 0x08, 0x08, 0x08, 0xFE, 0x08, 0xFE, 0x08, 0x08
	.byte 0x08, 0x08, 0x08, 0x08, 0x08, 0xFE, 0x14, 0x14, 0x27, 0x14, 0x08, 0x08, 0x08, 0x08, 0x08, 0xFE
	.byte 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x27, 0x14, 0x08, 0x08, 0xFE, 0x40, 0x17, 0x41, 0x03, 0xFE
	.byte 0x0A, 0x28, 0x14, 0xFE, 0x0F, 0x00, 0x6C, 0x56, 0x21, 0x08, 0x09, 0x03, 0x02, 0x0F, 0x00
	.4byte MtChimney_Text_LessHabitatForWaterPokemon
	.byte 0x09, 0x03, 0x02, 0x0F, 0x00
	.4byte MtChimney_Text_MagmasNameSimilar @ ROM pointer 0x082156B5
	@ semanticized-mass: resolved embedded ROM pointers
	.byte 0x09, 0x03, 0x02, 0x5C, 0x00, 0x55, 0x02, 0x00, 0x00
	.4byte MtChimney_Text_TabithaIntro @ ROM pointer 0x08215292
	.4byte MtChimney_Text_TabithaDefeat @ ROM pointer 0x082152D7
	.byte 0x0F, 0x00
	.4byte MtChimney_Text_TabithaPostBattle
	.byte 0x09, 0x06, 0x02, 0x5C, 0x00, 0x43, 0x02, 0x00, 0x00
	.4byte MtChimney_Text_Grunt2Intro @ ROM pointer 0x08215326
	.4byte MtChimney_Text_Grunt2Defeat @ ROM pointer 0x08215374
	.byte 0x0F, 0x00, 0x84, 0x53, 0x21, 0x08, 0x09, 0x06, 0x02, 0x0F, 0x00
	.4byte MtChimney_Text_TeamAquaAlwaysMessingWithPlans
	.byte 0x09
	.byte 0x03, 0x02, 0x0F, 0x00
	.4byte MtChimney_Text_MeteoritesPackAmazingPower @ ROM pointer 0x0821544D
	.byte 0x09, 0x03, 0x02, 0x0F, 0x00
	.4byte MtChimney_Text_YouBetterNotMessWithUs
	.byte 0x09, 0x03, 0x02, 0x0F, 0x00, 0x98, 0x54
	.byte 0x21, 0x08, 0x09, 0x03, 0x02, 0x0F, 0x00
	.4byte MtChimney_Text_DouseThemInFire
	.byte 0x09, 0x03, 0x02, 0x0F, 0x00
	.4byte MtChimney_Text_KeepMakingMoreLand @ ROM pointer 0x082154E5
	.byte 0x09, 0x03, 0x02, 0x0F, 0x00
	.4byte MtChimney_Text_Bufoh
	.byte 0x09, 0x03, 0x02, 0x0F, 0x00, 0xEF, 0x56
	.byte 0x21, 0x08, 0x09, 0x03, 0x02, 0x69, 0x2B, 0x8B, 0x00, 0x06, 0x00, 0x0A, 0x4F, 0x21, 0x08, 0x2B
	.byte 0x73, 0x00, 0x06, 0x01, 0x00, 0x4F, 0x21, 0x08, 0x0F, 0x00, 0x7F, 0x57, 0x21, 0x08, 0x09, 0x05
	.byte 0x21, 0x0D, 0x80, 0x00, 0x00, 0x06, 0x01, 0xF6, 0x4E, 0x21, 0x08, 0x0F, 0x00
	.4byte MtChimney_Text_PlayerRemovedMeteorite
	.byte 0x09, 0x04, 0x1A, 0x00, 0x80, 0x18, 0x01, 0x1A, 0x01, 0x80, 0x01, 0x00, 0x09, 0x00, 0x29
	.byte 0x73, 0x00, 0x6B, 0x02, 0x0F, 0x00, 0xBD, 0x57, 0x21, 0x08, 0x09, 0x04, 0x6B, 0x02, 0x0F, 0x00
	.4byte MtChimney_Text_MachineMakesNoResponse @ ROM pointer 0x082157D3
	.byte 0x09, 0x04, 0x6B, 0x02, 0x0F, 0x00, 0x49, 0x57, 0x21, 0x08, 0x09, 0x04, 0x6B, 0x02, 0x0F, 0x00
	.4byte FieldScriptText_2157ED @ ROM pointer 0x082157ED
	.byte 0x09, 0x03, 0x02, 0x5C, 0x02, 0x39, 0x01, 0x00, 0x00
	.4byte MtChimney_Text_ShelbyIntro
	.byte 0x34, 0x58, 0x21
	.byte 0x08, 0x49, 0x4F, 0x21, 0x08, 0x26, 0x0D, 0x80, 0x39, 0x00, 0x21, 0x0D, 0x80, 0x01, 0x00, 0x06
	.byte 0x01, 0x68, 0x4F, 0x21, 0x08, 0x0F, 0x00
	.4byte MtChimney_Text_ShelbyPostBattle
	.byte 0x09, 0x04, 0x6C, 0x02, 0x25
	.byte 0x04, 0x02, 0x51, 0x00, 0x00, 0x0F, 0x00
	.4byte MtChimney_Text_ShelbyRegister
	.byte 0x09, 0x04, 0x16, 0x04, 0x80
	.byte 0x39, 0x01, 0x25, 0xE6, 0x01, 0x1A, 0x00, 0x80, 0x39, 0x01, 0x09, 0x08, 0x6C, 0x02, 0x5C, 0x05
	.byte 0x39, 0x01, 0x00, 0x00
	.4byte MtChimney_Text_ShelbyRematchIntro @ ROM pointer 0x08215889
	.4byte gText_Rom_2158AF @ ROM pointer 0x082158AF
	@ semanticized-mass: resolved embedded ROM pointers
	.byte 0x0F, 0x00
	.4byte MtChimney_Text_ShelbyPostRematch @ ROM pointer 0x082158C0
	.byte 0x09, 0x06, 0x02, 0x5C, 0x00, 0x7C, 0x00, 0x00, 0x00
	.4byte MtChimney_Text_MelissaIntro
	.4byte MtChimney_Text_MelissaDefeat
	.byte 0x0F, 0x00
	.4byte MtChimney_Text_MelissaPostBattle
	.byte 0x09, 0x06, 0x02, 0x5C, 0x00, 0x7D, 0x00, 0x00, 0x00
	.4byte MtChimney_Text_SheilaIntro @ ROM pointer 0x08215929
	.4byte MtChimney_Text_SheilaDefeat @ ROM pointer 0x08215952
	.byte 0x0F, 0x00
	.4byte MtChimney_Text_SheilaPostBattle @ ROM pointer 0x0821596E
	@ semanticized-mass: resolved embedded ROM pointers
	.byte 0x09, 0x06, 0x02, 0x5C, 0x00, 0x7E, 0x00, 0x00, 0x00
	.4byte MtChimney_Text_ShirleyIntro @ ROM pointer 0x082159B4
	.4byte MtChimney_Text_ShirleyDefeat @ ROM pointer 0x082159DB
	.byte 0x0F, 0x00
	.4byte MtChimney_Text_ShirleyPostBattle
	.byte 0x09, 0x06, 0x02, 0x5C, 0x00, 0x92, 0x00, 0x00, 0x00
	.4byte MtChimney_Text_Grunt1Intro @ ROM pointer 0x082153BE
	.4byte MtChimney_Text_Grunt1Defeat @ ROM pointer 0x082153F6
	@ semanticized-mass: resolved embedded ROM pointers
	.byte 0x0F, 0x00
	.4byte MtChimney_Text_Grunt1PostBattle @ ROM pointer 0x08215408
	.byte 0x09, 0x06, 0x02, 0x5C, 0x02, 0x01, 0x00, 0x00, 0x00
	.4byte MtChimney_Text_SawyerIntro
	.4byte MtChimney_Text_SawyerDefeat
	.byte 0x07, 0x50, 0x21, 0x08, 0x26, 0x0D, 0x80, 0x39, 0x00, 0x21, 0x0D, 0x80, 0x01, 0x00, 0x06
	.byte 0x01, 0x26, 0x50, 0x21, 0x08, 0x0F, 0x00
	.4byte MtChimney_Text_SawyerPostBattle
	.byte 0x09, 0x04, 0x6C, 0x02, 0x25
	.byte 0x04, 0x02, 0x51, 0x00, 0x00, 0x0F, 0x00
	.4byte MtChimney_Text_SawyerRegister
	.byte 0x09, 0x04, 0x16, 0x04, 0x80
	.byte 0x01, 0x00, 0x25, 0xE6, 0x01, 0x1A, 0x00, 0x80
	.4byte MovementType_FaceDownAndRight @ ROM pointer 0x08090001
	.byte 0x6C, 0x02, 0x5C, 0x05, 0x01, 0x00, 0x00, 0x00
	.4byte MtChimney_Text_SawyerRematchIntro @ ROM pointer 0x08215A91
	.4byte MtChimney_Text_SawyerRematchDefeat @ ROM pointer 0x08215AB6
	.byte 0x0F, 0x00
	.4byte MtChimney_Text_SawyerPostRematch @ ROM pointer 0x08215ACF
	.byte 0x09, 0x06, 0x02
