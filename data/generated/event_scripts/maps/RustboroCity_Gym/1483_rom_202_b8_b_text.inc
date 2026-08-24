	@ data/maps/RustboroCity_Gym/scripts.inc:106 RustboroCity_Gym_Text_GymGuideAdvice
	.globl RustboroCity_Gym_Text_GymGuideAdvice
RustboroCity_Gym_Text_GymGuideAdvice: @ 0x08202432
	.string "げんき しとぉや!!\pいきなり だが きみぃ!\nチャンピオンを めざして みないか!\pぼくは トレーナー じゃないけど\nかつ ために ばっちり\lアドバイス できる!\pよし きまった! いっしょに\nポケモン チャンピオン めざそう!\pトレーナーの もくてき といえば\nジムバッジを あつめること だろう\lだが ジムリーダーは てごわい!\pそこで ぼくの でばん というわけだ!\nきみに ばっちり アドバイス するよ!\pここの ジムリーダー ツツジは\nいわタイプの ポケモンの つかいて!\pいわタイプは がんじょう だけど\nみずタイプや くさタイプの\lこうげきは にがて なんだよ!\pジムリーダーに かてたら\nまた ぼくに はなしかけて くれよ!\pじゃ きばってこォー!!{EOS}"
	.if (. - RustboroCity_Gym_Text_GymGuideAdvice) > 0x14f
	.error "RustboroCity_Gym_Text_GymGuideAdvice may not grow beyond its original slot"
	.endif
	.if (. - RustboroCity_Gym_Text_GymGuideAdvice) < 0x14f
	.space 0x14f - (. - RustboroCity_Gym_Text_GymGuideAdvice)
	.endif
	@ data/maps/RustboroCity_Gym/scripts.inc:129 RustboroCity_Gym_Text_GymGuidePostVictory
	.globl RustboroCity_Gym_Text_GymGuidePostVictory
RustboroCity_Gym_Text_GymGuidePostVictory: @ 0x08202581
	.string "うおォ! みごとな しょうり!!\nぼくの おうえんが よかったのか!?\pよし! きみの\nトレーナーカードを みたまえ!\pさっき てにいれた ストーンバッジが\nきちんと きろく されている だろう\pつまり……\pきみは チャンピオンへの かいだんを\nいっぽ のぼったんだ!\pごったましィー!!{EOS}"
	.if (. - RustboroCity_Gym_Text_GymGuidePostVictory) > 0x91
	.error "RustboroCity_Gym_Text_GymGuidePostVictory may not grow beyond its original slot"
	.endif
	.if (. - RustboroCity_Gym_Text_GymGuidePostVictory) < 0x91
	.space 0x91 - (. - RustboroCity_Gym_Text_GymGuidePostVictory)
	.endif
	@ data/maps/RustboroCity_Gym/scripts.inc:141 RustboroCity_Gym_Text_JoshIntro (+1 aliases)
	.globl RustboroCity_Gym_Text_JoshIntro
RustboroCity_Gym_Text_JoshIntro: @ 0x08202612
	.string "ジム トレーナーを なめるなよ!\nじつりょくの ちがいを みせてやる!{EOS}"
	.if (. - RustboroCity_Gym_Text_JoshIntro) > 0x24
	.error "RustboroCity_Gym_Text_JoshIntro may not grow beyond its original slot"
	.endif
	.if (. - RustboroCity_Gym_Text_JoshIntro) < 0x24
	.space 0x24 - (. - RustboroCity_Gym_Text_JoshIntro)
	.endif
	@ data/maps/RustboroCity_Gym/scripts.inc:145 RustboroCity_Gym_Text_JoshDefeat (+1 aliases)
	.globl RustboroCity_Gym_Text_JoshDefeat
RustboroCity_Gym_Text_JoshDefeat: @ 0x08202636
	.string "じつりょくが ちがいすぎた……!{EOS}"
	.if (. - RustboroCity_Gym_Text_JoshDefeat) > 0x11
	.error "RustboroCity_Gym_Text_JoshDefeat may not grow beyond its original slot"
	.endif
	.if (. - RustboroCity_Gym_Text_JoshDefeat) < 0x11
	.space 0x11 - (. - RustboroCity_Gym_Text_JoshDefeat)
	.endif
	@ data/maps/RustboroCity_Gym/scripts.inc:148 RustboroCity_Gym_Text_JoshPostBattle
	.globl RustboroCity_Gym_Text_JoshPostBattle
RustboroCity_Gym_Text_JoshPostBattle: @ 0x08202647
	.string "いわタイプの おそろしさ\nまだまだ こんな ものじゃない!{EOS}"
	.if (. - RustboroCity_Gym_Text_JoshPostBattle) > 0x1e
	.error "RustboroCity_Gym_Text_JoshPostBattle may not grow beyond its original slot"
	.endif
	.if (. - RustboroCity_Gym_Text_JoshPostBattle) < 0x1e
	.space 0x1e - (. - RustboroCity_Gym_Text_JoshPostBattle)
	.endif
	@ data/maps/RustboroCity_Gym/scripts.inc:152 RustboroCity_Gym_Text_TommyIntro (+1 aliases)
	.globl RustboroCity_Gym_Text_TommyIntro
RustboroCity_Gym_Text_TommyIntro: @ 0x08202665
	.string "ボクに かてる じつりょくが ないと\nツツジさん には ぜったい かなわないよ!{EOS}"
	.if (. - RustboroCity_Gym_Text_TommyIntro) > 0x29
	.error "RustboroCity_Gym_Text_TommyIntro may not grow beyond its original slot"
	.endif
	.if (. - RustboroCity_Gym_Text_TommyIntro) < 0x29
	.space 0x29 - (. - RustboroCity_Gym_Text_TommyIntro)
	.endif
	@ data/maps/RustboroCity_Gym/scripts.inc:156 RustboroCity_Gym_Text_TommyDefeat (+1 aliases)
	.globl RustboroCity_Gym_Text_TommyDefeat
RustboroCity_Gym_Text_TommyDefeat: @ 0x0820268E
	.string "すごい じつりょくだ!{EOS}"
	.if (. - RustboroCity_Gym_Text_TommyDefeat) > 0xc
	.error "RustboroCity_Gym_Text_TommyDefeat may not grow beyond its original slot"
	.endif
	.if (. - RustboroCity_Gym_Text_TommyDefeat) < 0xc
	.space 0xc - (. - RustboroCity_Gym_Text_TommyDefeat)
	.endif
	@ data/maps/RustboroCity_Gym/scripts.inc:159 RustboroCity_Gym_Text_TommyPostBattle
	.globl RustboroCity_Gym_Text_TommyPostBattle
RustboroCity_Gym_Text_TommyPostBattle: @ 0x0820269A
	.string "ツツジさんは ボクの すうばい つよい!\nゆだん しない ほうが いいよ!{EOS}"
	.if (. - RustboroCity_Gym_Text_TommyPostBattle) > 0x26
	.error "RustboroCity_Gym_Text_TommyPostBattle may not grow beyond its original slot"
	.endif
	.if (. - RustboroCity_Gym_Text_TommyPostBattle) < 0x26
	.space 0x26 - (. - RustboroCity_Gym_Text_TommyPostBattle)
	.endif
	@ data/maps/RustboroCity_Gym/scripts.inc:163 RustboroCity_Gym_Text_MarcIntro (+1 aliases)
	.globl RustboroCity_Gym_Text_MarcIntro
RustboroCity_Gym_Text_MarcIntro: @ 0x082026C0
	.string "こんな まちなか でも\nいわタイプで おおあばれだ!{EOS}"
	.if (. - RustboroCity_Gym_Text_MarcIntro) > 0x1b
	.error "RustboroCity_Gym_Text_MarcIntro may not grow beyond its original slot"
	.endif
	.if (. - RustboroCity_Gym_Text_MarcIntro) < 0x1b
	.space 0x1b - (. - RustboroCity_Gym_Text_MarcIntro)
	.endif
	@ data/maps/RustboroCity_Gym/scripts.inc:167 RustboroCity_Gym_Text_MarcDefeat (+1 aliases)
	.globl RustboroCity_Gym_Text_MarcDefeat
RustboroCity_Gym_Text_MarcDefeat: @ 0x082026DB
	.string "おおーっ!\nいきの いい ちょうせんしゃ だな!{EOS}"
	.if (. - RustboroCity_Gym_Text_MarcDefeat) > 0x19
	.error "RustboroCity_Gym_Text_MarcDefeat may not grow beyond its original slot"
	.endif
	.if (. - RustboroCity_Gym_Text_MarcDefeat) < 0x19
	.space 0x19 - (. - RustboroCity_Gym_Text_MarcDefeat)
	.endif
	@ data/maps/RustboroCity_Gym/scripts.inc:171 RustboroCity_Gym_Text_MarcPostBattle
	.globl RustboroCity_Gym_Text_MarcPostBattle
RustboroCity_Gym_Text_MarcPostBattle: @ 0x082026F4
	.string "わかくして いわタイプに\nめを つける なんて\lうちの ジムリーダーは センスが いいぜ!{EOS}"
	.if (. - RustboroCity_Gym_Text_MarcPostBattle) > 0x2e
	.error "RustboroCity_Gym_Text_MarcPostBattle may not grow beyond its original slot"
	.endif
	.if (. - RustboroCity_Gym_Text_MarcPostBattle) < 0x2e
	.space 0x2e - (. - RustboroCity_Gym_Text_MarcPostBattle)
	.endif
	@ data/maps/RustboroCity_Gym/scripts.inc:176 RustboroCity_Gym_Text_RoxanneIntro (+1 aliases)
	.globl RustboroCity_Gym_Text_RoxanneIntro
RustboroCity_Gym_Text_RoxanneIntro: @ 0x08202722
	.string "わたくし カナズミ ポケモンジム\nリーダーの ツツジ といいます\pトレーナーズ スクールで\nまなんだこと しょうぶに いかしたくて\lジムリーダーに なったの\pあなた どのような ポケモンで\nどんなふうに たたかうのか\lわたくしに おしえて くださるかしら?{EOS}"
	.if (. - RustboroCity_Gym_Text_RoxanneIntro) > 0x81
	.error "RustboroCity_Gym_Text_RoxanneIntro may not grow beyond its original slot"
	.endif
	.if (. - RustboroCity_Gym_Text_RoxanneIntro) < 0x81
	.space 0x81 - (. - RustboroCity_Gym_Text_RoxanneIntro)
	.endif
	@ data/maps/RustboroCity_Gym/scripts.inc:186 RustboroCity_Gym_Text_RoxanneDefeat (+1 aliases)
	.globl RustboroCity_Gym_Text_RoxanneDefeat
RustboroCity_Gym_Text_RoxanneDefeat: @ 0x082027A3
	.string "わたくし まけたのね……\pもっと おおくの ことを\nまなぶ ひつようが あるみたい……\pわかりましたわ\pポケモンリーグの きまりでは\nジムリーダーに かった トレーナーに\lこれを わたすことに なっています\pどうぞ ポケモンリーグ こうにんの\nストーンバッジ うけとって ください{EOS}"
	.if (. - RustboroCity_Gym_Text_RoxanneDefeat) > 0x8d
	.error "RustboroCity_Gym_Text_RoxanneDefeat may not grow beyond its original slot"
	.endif
	.if (. - RustboroCity_Gym_Text_RoxanneDefeat) < 0x8d
	.space 0x8d - (. - RustboroCity_Gym_Text_RoxanneDefeat)
	.endif
	@ data/maps/RustboroCity_Gym/scripts.inc:197 RustboroCity_Gym_Text_ReceivedStoneBadge
	.globl RustboroCity_Gym_Text_ReceivedStoneBadge
RustboroCity_Gym_Text_ReceivedStoneBadge: @ 0x08202830
	.string "{PLAYER}は ツツジから\nストーンバッジを もらった!{EOS}"
	.if (. - RustboroCity_Gym_Text_ReceivedStoneBadge) > 0x19
	.error "RustboroCity_Gym_Text_ReceivedStoneBadge may not grow beyond its original slot"
	.endif
	.if (. - RustboroCity_Gym_Text_ReceivedStoneBadge) < 0x19
	.space 0x19 - (. - RustboroCity_Gym_Text_ReceivedStoneBadge)
	.endif
	@ data/maps/RustboroCity_Gym/scripts.inc:201 RustboroCity_Gym_Text_StoneBadgeInfoTakeThis
	.globl RustboroCity_Gym_Text_StoneBadgeInfoTakeThis
RustboroCity_Gym_Text_StoneBadgeInfoTakeThis: @ 0x08202849
	.string "ストーンバッジ には あなたの\nポケモンの こうげきりょくを\lたかめる こうかが あるの\pあと たたかっていない ときでも\nひでんわざの いあいぎり が\lつかえるようにも なるわ\pそれから……\nこれも もっていって ください{EOS}"
	.if (. - RustboroCity_Gym_Text_StoneBadgeInfoTakeThis) > 0x71
	.error "RustboroCity_Gym_Text_StoneBadgeInfoTakeThis may not grow beyond its original slot"
	.endif
	.if (. - RustboroCity_Gym_Text_StoneBadgeInfoTakeThis) < 0x71
	.space 0x71 - (. - RustboroCity_Gym_Text_StoneBadgeInfoTakeThis)
	.endif
	@ data/maps/RustboroCity_Gym/scripts.inc:211 RustboroCity_Gym_Text_ExplainRockTomb
	.globl RustboroCity_Gym_Text_ExplainRockTomb
RustboroCity_Gym_Text_ExplainRockTomb: @ 0x082028BA
	.string "その わざマシン39の なかには\nがんせきふうじが はいっているわ\pいわを あいてに むかって おとして\nダメージを あたえる だけでなくて\lすばやさも さげる わざ なの\pちなみに\nわざマシンを つかえば ポケモンに\lいっしゅんで わざを おしえられるの\pただし つかいすて だから\nつかうときは よく かんがえてね{EOS}"
	.if (. - RustboroCity_Gym_Text_ExplainRockTomb) > 0xa0
	.error "RustboroCity_Gym_Text_ExplainRockTomb may not grow beyond its original slot"
	.endif
	.if (. - RustboroCity_Gym_Text_ExplainRockTomb) < 0xa0
	.space 0xa0 - (. - RustboroCity_Gym_Text_ExplainRockTomb)
	.endif
	@ data/maps/RustboroCity_Gym/scripts.inc:223 RustboroCity_Gym_Text_RoxannePostBattle
	.globl RustboroCity_Gym_Text_RoxannePostBattle
RustboroCity_Gym_Text_RoxannePostBattle: @ 0x0820295A
	.string "それだけ つよいなら\nほかの ポケモンジムにも\lちょうせん したら どうかしら?\pおおくの トレーナーと\nしょうぶを することで\lさまざまなこと まなべるはずよ{EOS}"
	.if (. - RustboroCity_Gym_Text_RoxannePostBattle) > 0x51
	.error "RustboroCity_Gym_Text_RoxannePostBattle may not grow beyond its original slot"
	.endif
	.if (. - RustboroCity_Gym_Text_RoxannePostBattle) < 0x51
	.space 0x51 - (. - RustboroCity_Gym_Text_RoxannePostBattle)
	.endif
	@ data/maps/RustboroCity_Gym/scripts.inc:231 RustboroCity_Gym_Text_GymStatue
	.globl RustboroCity_Gym_Text_GymStatue
RustboroCity_Gym_Text_GymStatue: @ 0x082029AB
	.string "カナズミシティ ポケモンジム{EOS}"
	.if (. - RustboroCity_Gym_Text_GymStatue) > 0xf
	.error "RustboroCity_Gym_Text_GymStatue may not grow beyond its original slot"
	.endif
	.if (. - RustboroCity_Gym_Text_GymStatue) < 0xf
	.space 0xf - (. - RustboroCity_Gym_Text_GymStatue)
	.endif
	@ data/maps/RustboroCity_Gym/scripts.inc:234 RustboroCity_Gym_Text_GymStatueCertified
	.globl RustboroCity_Gym_Text_GymStatueCertified
RustboroCity_Gym_Text_GymStatueCertified: @ 0x082029BA
	.string "カナズミシティ ポケモンジム\pツツジ にんてい トレーナー!\n{PLAYER}{EOS}"
	.if (. - RustboroCity_Gym_Text_GymStatueCertified) > 0x22
	.error "RustboroCity_Gym_Text_GymStatueCertified may not grow beyond its original slot"
	.endif
	.if (. - RustboroCity_Gym_Text_GymStatueCertified) < 0x22
	.space 0x22 - (. - RustboroCity_Gym_Text_GymStatueCertified)
	.endif
	@ data/maps/RustboroCity_Gym/scripts.inc:239 RustboroCity_Gym_Text_RoxanneRegisterCall
	.globl RustboroCity_Gym_Text_RoxanneRegisterCall
RustboroCity_Gym_Text_RoxanneRegisterCall: @ 0x082029DC
	.string "…… …… ……\n…… …… …… ピッ!\pツツジ『あっ {PLAYER}さん ですか?\nわたくし カナズミの ツツジです!\pトウキさんから ききましたよぉ\nあなた すごい いきおいで\lかちすすんで いるらしい ですね!\pこちらも まけっぱなしでは いられません\nもういちど ジムを きたえなおして\lいつかまた ちょうせんを うけますよ!\pそのひが くるのを\nどうぞ まっていて くださいね!\p…… …… ……\n…… …… …… ツー{EOS}"
	.if (. - RustboroCity_Gym_Text_RoxanneRegisterCall) > 0xd4
	.error "RustboroCity_Gym_Text_RoxanneRegisterCall may not grow beyond its original slot"
	.endif
	.if (. - RustboroCity_Gym_Text_RoxanneRegisterCall) < 0xd4
	.space 0xd4 - (. - RustboroCity_Gym_Text_RoxanneRegisterCall)
	.endif
	@ data/maps/RustboroCity_Gym/scripts.inc:255 RustboroCity_Gym_Text_RegisteredRoxanne
	.globl RustboroCity_Gym_Text_RegisteredRoxanne
RustboroCity_Gym_Text_RegisteredRoxanne: @ 0x08202AB0
	.string "ジムリーダー ツツジを\nポケナビに とうろく した!{EOS}"
	.if (. - RustboroCity_Gym_Text_RegisteredRoxanne) > 0x1b
	.error "RustboroCity_Gym_Text_RegisteredRoxanne may not grow beyond its original slot"
	.endif
	.if (. - RustboroCity_Gym_Text_RegisteredRoxanne) < 0x1b
	.space 0x1b - (. - RustboroCity_Gym_Text_RegisteredRoxanne)
	.endif
	@ data/maps/RustboroCity_Gym/scripts.inc:259 RustboroCity_Gym_Text_RoxannePreRematch (+1 aliases)
	.globl RustboroCity_Gym_Text_RoxannePreRematch
RustboroCity_Gym_Text_RoxannePreRematch: @ 0x08202ACB
	.string "ツツジ『また おめにかかれましたね\nジムリーダーの ツツジ です\pあれから おたがいに\nいくつもの しょうぶを けいけんし\lどれほど つよく なれたのか……\pさあ おてあわせ ねがいます!{EOS}"
	.if (. - RustboroCity_Gym_Text_RoxannePreRematch) > 0x5f
	.error "RustboroCity_Gym_Text_RoxannePreRematch may not grow beyond its original slot"
	.endif
	.if (. - RustboroCity_Gym_Text_RoxannePreRematch) < 0x5f
	.space 0x5f - (. - RustboroCity_Gym_Text_RoxannePreRematch)
	.endif
	@ data/maps/RustboroCity_Gym/scripts.inc:267 RustboroCity_Gym_Text_RoxanneRematchDefeat (+1 aliases)
	.globl RustboroCity_Gym_Text_RoxanneRematchDefeat
RustboroCity_Gym_Text_RoxanneRematchDefeat: @ 0x08202B2A
	.string "くうぅ……\nまたしても わたくしの まけ……{EOS}"
	.if (. - RustboroCity_Gym_Text_RoxanneRematchDefeat) > 0x17
	.error "RustboroCity_Gym_Text_RoxanneRematchDefeat may not grow beyond its original slot"
	.endif
	.if (. - RustboroCity_Gym_Text_RoxanneRematchDefeat) < 0x17
	.space 0x17 - (. - RustboroCity_Gym_Text_RoxanneRematchDefeat)
	.endif
	@ data/maps/RustboroCity_Gym/scripts.inc:271 RustboroCity_Gym_Text_RoxannePostRematch
	.globl RustboroCity_Gym_Text_RoxannePostRematch
RustboroCity_Gym_Text_RoxannePostRematch: @ 0x08202B41
	.string "ツツジ『まだまだ ポケモン しょうぶは\nまなぶことが たくさん あるのですね\pわたくし…… ポケモン しょうぶが\nますます すきに なりましたよ!{EOS}"
	.if (. - RustboroCity_Gym_Text_RoxannePostRematch) > 0x4a
	.error "RustboroCity_Gym_Text_RoxannePostRematch may not grow beyond its original slot"
	.endif
	.if (. - RustboroCity_Gym_Text_RoxannePostRematch) < 0x4a
	.space 0x4a - (. - RustboroCity_Gym_Text_RoxannePostRematch)
	.endif
	@ data/maps/RustboroCity_Gym/scripts.inc:277 RustboroCity_Gym_Text_RoxanneRematchNeedTwoMons (+1 aliases)
	.globl RustboroCity_Gym_Text_RoxanneRematchNeedTwoMons
RustboroCity_Gym_Text_RoxanneRematchNeedTwoMons: @ 0x08202B8B
	.string "ツツジ『また おめにかかれましたね\nジムリーダーの ツツジ です\pあれから おたがいに\nいくつもの しょうぶを けいけんし\lどれほど つよく なれたのか……\p……あら? たたかえる ポケモンを\n1ひきしか もっていませんね\pどうぞ 2ひき いじょうの\nポケモンを もって きてください{EOS}"
	.if (. - RustboroCity_Gym_Text_RoxanneRematchNeedTwoMons) > 0x8f
	.error "RustboroCity_Gym_Text_RoxanneRematchNeedTwoMons may not grow beyond its original slot"
	.endif
	.if (. - RustboroCity_Gym_Text_RoxanneRematchNeedTwoMons) < 0x8f
	.space 0x8f - (. - RustboroCity_Gym_Text_RoxanneRematchNeedTwoMons)
	.endif
	@ analyzed canonical ROM range 0x08202C1A-0x08202E23
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_08202C1A: @ 0x08202C1A
	.byte 0x00
.globl EventScript_JP_08202C1B
EventScript_JP_08202C1B: @ 0x08202C1B
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lockall
	loadword 0x00, RustboroCity_PokemonSchool_Text_BlackboardListsStatusChanges
	callstd 0x04
	goto EventScript_JP_08202C2A
	.byte 0x02
EventScript_08202C2A: @ 0x08202C2A
EventScript_JP_08202C2A: @ 0x08202C2A
	message RustboroCity_PokemonSchool_Text_ReadWhichTopic
	waitmessage
	multichoicegrid 0x08, 0x01, 0x0D, 0x03, 0x00
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, EventScript_JP_08202C89
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_08202C97
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, EventScript_JP_08202CA5
	compare_var_to_value 0x8000, 0x0003
	goto_if 0x01, EventScript_JP_08202CB3
	compare_var_to_value 0x8000, 0x0004
	goto_if 0x01, EventScript_JP_08202CC1
	compare_var_to_value 0x8000, 0x0005
	goto_if 0x01, EventScript_JP_08202CCF
	compare_var_to_value 0x8000, 0x007F
	goto_if 0x01, EventScript_JP_08202CCF
	end
EventScript_08202C89: @ 0x08202C89
EventScript_JP_08202C89: @ 0x08202C89
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, RustboroCity_PokemonSchool_Text_ExplainPoison
	callstd 0x04
	goto EventScript_JP_08202C2A
	.byte 0x02
EventScript_08202C97: @ 0x08202C97
EventScript_JP_08202C97: @ 0x08202C97
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, RustboroCity_PokemonSchool_Text_ExplainParalysis
	callstd 0x04
	goto EventScript_JP_08202C2A
	.byte 0x02
EventScript_08202CA5: @ 0x08202CA5
EventScript_JP_08202CA5: @ 0x08202CA5
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, RustboroCity_PokemonSchool_Text_ExplainSleep
	callstd 0x04
	goto EventScript_JP_08202C2A
	.byte 0x02
EventScript_08202CB3: @ 0x08202CB3
EventScript_JP_08202CB3: @ 0x08202CB3
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, RustboroCity_PokemonSchool_Text_ExplainBurn
	callstd 0x04
	goto EventScript_JP_08202C2A
	.byte 0x02
EventScript_08202CC1: @ 0x08202CC1
EventScript_JP_08202CC1: @ 0x08202CC1
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, RustboroCity_PokemonSchool_Text_ExplainFreeze
	callstd 0x04
	goto EventScript_JP_08202C2A
	.byte 0x02
EventScript_08202CCF: @ 0x08202CCF
EventScript_JP_08202CCF: @ 0x08202CCF
	releaseall
	end
.globl EventScript_JP_08202CD1
EventScript_JP_08202CD1: @ 0x08202CD1
	loadword 0x00, RustboroCity_PokemonSchool_Text_TradingRightNow
	callstd 0x02
	end
.globl EventScript_JP_08202CDA
EventScript_JP_08202CDA: @ 0x08202CDA
	loadword 0x00, RustboroCity_PokemonSchool_Text_AlwaysWantedSeedot
	callstd 0x02
	end
.globl EventScript_JP_08202CE3
EventScript_JP_08202CE3: @ 0x08202CE3
	loadword 0x00, RustboroCity_PokemonSchool_Text_PokemontCantUseManMadeItems
	callstd 0x02
	end
.globl EventScript_JP_08202CEC
EventScript_JP_08202CEC: @ 0x08202CEC
	loadword 0x00, RustboroCity_PokemonSchool_Text_ConfusedPokemonAttacksItself
	callstd 0x02
	end
.globl EventScript_JP_08202CF5
EventScript_JP_08202CF5: @ 0x08202CF5
	loadword 0x00, RustboroCity_PokemonSchool_Text_PokemonHealItselfWithBerry
	callstd 0x02
	end
.globl EventScript_JP_08202CFE
EventScript_JP_08202CFE: @ 0x08202CFE
	loadword 0x00, RustboroCity_PokemonSchool_Text_StudentsNotes
	callstd 0x03
	end
.globl EventScript_JP_08202D07
EventScript_JP_08202D07: @ 0x08202D07
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lock
	faceplayer
	checkflag 0x0113
	goto_if 0x01, EventScript_JP_08202D6D
	compare_var_to_value 0x800C, 0x0004
	call_if 0x01, EventScript_JP_08202D57
	compare_var_to_value 0x800C, 0x0003
	call_if 0x01, EventScript_JP_08202D62
	loadword 0x00, RustboroCity_PokemonSchool_Text_StudentsWhoDontStudyGetQuickClaw
	callstd 0x04
	setorcopyvar 0x8000, 0x00B7
	setorcopyvar 0x8001, 0x0001
	callstd 0x00
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, 0x082430E0
	closemessage
	@ event command: applymovement
	applymovement 0x800F, PetalburgCity_Ext_WalkInPlaceFasterDown
	@ event command: waitmovement
	waitmovement 0x0000
	setflag 0x0113
	release
	end
EventScript_JP_08202D57: @ 0x08202D57
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x800F, RustboroCity_Gym_Movement_WalkRightX2_WalkDownX2_WalkLeftX2_WalkInPlaceFastestDown_Then24Actions_WalkRight_WalkUpX2_WalkLeftX2
	@ event command: waitmovement
	waitmovement 0x0000
	return
EventScript_JP_08202D62: @ 0x08202D62
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x800F, RustboroCity_Gym_Movement_WalkLeft_WalkDownX2_WalkRight_WalkInPlaceFastestDown_Then22Actions_WalkLeftX2_WalkUpX2_WalkRight
	@ event command: waitmovement
	waitmovement 0x0000
	return
EventScript_JP_08202D6D: @ 0x08202D6D
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, RustboroCity_PokemonSchool_Text_ExplainQuickClaw
	callstd 0x04
	closemessage
	@ event command: applymovement
	applymovement 0x800F, PetalburgCity_Ext_WalkInPlaceFasterDown
	@ event command: waitmovement
	waitmovement 0x0000
	release
	end
RustboroCity_Gym_Movement_WalkLeft_WalkDownX2_WalkRight_WalkInPlaceFastestDown_Then22Actions_WalkLeftX2_WalkUpX2_WalkRight: @ 0x08202D82
	@ object movement sequence
	walk_left
	walk_down
	walk_down
	walk_right
	walk_in_place_fastest_down
	delay_16
	delay_16
	delay_16
	walk_down
	walk_in_place_fastest_left
	delay_16
	delay_16
	walk_right
	delay_16
	delay_16
	delay_8
	walk_up
	walk_left
	walk_left
	walk_up
	walk_up
	walk_right
	step_end
RustboroCity_Gym_Movement_WalkRightX2_WalkDownX2_WalkLeftX2_WalkInPlaceFastestDown_Then24Actions_WalkRight_WalkUpX2_WalkLeftX2: @ 0x08202D99
	@ object movement sequence
	walk_right
	walk_right
	walk_down
	walk_down
	walk_left
	walk_left
	walk_in_place_fastest_down
	delay_16
	delay_16
	delay_16
	walk_down
	walk_in_place_fastest_left
	delay_16
	delay_16
	walk_right
	delay_16
	delay_16
	delay_8
	walk_up
	walk_right
	walk_up
	walk_up
	walk_left
	walk_left
	step_end
.globl EventScript_JP_08202DB2
EventScript_JP_08202DB2: @ 0x08202DB2
	lock
	faceplayer
	checkflag 0x01CB
	goto_if 0x01, EventScript_JP_08202E1A
	checkflag 0x0136
	goto_if 0x01, EventScript_JP_08202DE1
	checkflag 0x0867
	goto_if 0x01, EventScript_JP_08202DF4
	loadword 0x00, RustboroCity_PokemonSchool_Text_ScottMetAlreadyCut
	callstd 0x04
	addvar 0x40D1, 0x0001
	setflag 0x0136
	release
	end
EventScript_JP_08202DE1: @ 0x08202DE1
	checkflag 0x0867
	goto_if 0x01, EventScript_JP_08202E02
	loadword 0x00, RustboroCity_PokemonSchool_Text_StudentTalentLevelUnknown
	callstd 0x04
	release
	end
EventScript_JP_08202DF4: @ 0x08202DF4
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, RustboroCity_PokemonSchool_Text_ScottMetAlreadyStoneBadge
	callstd 0x04
	goto EventScript_JP_08202E10
	.byte 0x02
EventScript_JP_08202E02: @ 0x08202E02
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, RustboroCity_PokemonSchool_Text_ScottStoneBadge
	callstd 0x04
	goto EventScript_JP_08202E10
	.byte 0x02
EventScript_JP_08202E10: @ 0x08202E10
	addvar 0x40D1, 0x0001
	setflag 0x01CB
	release
	end
EventScript_JP_08202E1A: @ 0x08202E1A
	loadword 0x00, RustboroCity_PokemonSchool_Text_StudentTalentLevelUnknown
	callstd 0x04
	release
	end
