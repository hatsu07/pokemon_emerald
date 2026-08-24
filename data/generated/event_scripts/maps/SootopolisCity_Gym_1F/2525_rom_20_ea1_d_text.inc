	@ data/maps/SootopolisCity_Gym_1F/scripts.inc:178 SootopolisCity_Gym_1F_Text_GymGuideAdvice
	.globl SootopolisCity_Gym_1F_Text_GymGuideAdvice
SootopolisCity_Gym_1F_Text_GymGuideAdvice: @ 0x0820E46B
	.string "げんき しとぉや!!\nチャンピオンを めざす {PLAYER}!!\pルネシティの ジムリーダー アダンは\nみずタイプ ポケモンを つかいこなす!\pそして アダンがいる ところ までは\nこおりの ゆかが ゆくてを さえぎる……\pごめんな! きみに おしえて\nあげられるのは ここまで なんだ……!\pあとは じぶんで きばってくれッ!{EOS}"
	.if (. - SootopolisCity_Gym_1F_Text_GymGuideAdvice) > 0xa0
	.error "SootopolisCity_Gym_1F_Text_GymGuideAdvice may not grow beyond its original slot"
	.endif
	.if (. - SootopolisCity_Gym_1F_Text_GymGuideAdvice) < 0xa0
	.space 0xa0 - (. - SootopolisCity_Gym_1F_Text_GymGuideAdvice)
	.endif
	@ data/maps/SootopolisCity_Gym_1F/scripts.inc:181 SootopolisCity_Gym_1F_Text_GymGuidePostVictory
	.globl SootopolisCity_Gym_1F_Text_GymGuidePostVictory
SootopolisCity_Gym_1F_Text_GymGuidePostVictory: @ 0x0820E50B
	.string "ホウエンで いちばん つよいと いわれる\nアダンに かったのかあ!!\pよし! きみの\nトレーナーカードを みたまえ!\pすべての バッジが そろっているなら\nいよいよ ポケモンリーグ ちょうせんだ!{EOS}"
	.if (. - SootopolisCity_Gym_1F_Text_GymGuidePostVictory) > 0x63
	.error "SootopolisCity_Gym_1F_Text_GymGuidePostVictory may not grow beyond its original slot"
	.endif
	.if (. - SootopolisCity_Gym_1F_Text_GymGuidePostVictory) < 0x63
	.space 0x63 - (. - SootopolisCity_Gym_1F_Text_GymGuidePostVictory)
	.endif
	@ data/maps/SootopolisCity_Gym_1F/scripts.inc:184 SootopolisCity_Gym_1F_Text_JuanIntro (+1 aliases)
	.globl SootopolisCity_Gym_1F_Text_JuanIntro
SootopolisCity_Gym_1F_Text_JuanIntro: @ 0x0820E56E
	.string "ユーは しっていますか?\pミクリに ポケモンを おしえたのは\nなにをかくそう このアダン……\lすなわち わたくし だということを\pいちどは ジムリーダーから みをひき\nこのジムも かれに まかせて いましたが\lちょっとした リーズン……\lすなわち りゆうが できましてね\lもういちど カムバック したのです\p……おっと\nおしゃべりは これくらいにして\lそろそろ しょうぶを はじめましょう\pさあ ぞんぶんに ごらんなさい\nわたしと ポケモンが おりなす\lみずの イリュージョンを!{EOS}"
	.if (. - SootopolisCity_Gym_1F_Text_JuanIntro) > 0xf1
	.error "SootopolisCity_Gym_1F_Text_JuanIntro may not grow beyond its original slot"
	.endif
	.if (. - SootopolisCity_Gym_1F_Text_JuanIntro) < 0xf1
	.space 0xf1 - (. - SootopolisCity_Gym_1F_Text_JuanIntro)
	.endif
	@ data/maps/SootopolisCity_Gym_1F/scripts.inc:191 SootopolisCity_Gym_1F_Text_JuanDefeat (+1 aliases)
	.globl SootopolisCity_Gym_1F_Text_JuanDefeat
SootopolisCity_Gym_1F_Text_JuanDefeat: @ 0x0820E65F
	.string "たははは! ユー アー ウィナー!\nすなわち わたくしの まけです\pユーには だれにも まけない\nさいのうの きらめきが かんじられます!\pしかし わたくしや ミクリに くらべると\nちょっと はなやかさが たりませんな!\pわたしの ふくでも\nかして あげましょうか?\p…… …… ……\n…… …… ……\pはっはっは ジョークですよ!\nユーには ふくの かわりに\lこの レインバッジを さしあげましょう!{EOS}"
	.if (. - SootopolisCity_Gym_1F_Text_JuanDefeat) > 0xca
	.error "SootopolisCity_Gym_1F_Text_JuanDefeat may not grow beyond its original slot"
	.endif
	.if (. - SootopolisCity_Gym_1F_Text_JuanDefeat) < 0xca
	.space 0xca - (. - SootopolisCity_Gym_1F_Text_JuanDefeat)
	.endif
	@ data/maps/SootopolisCity_Gym_1F/scripts.inc:194 SootopolisCity_Gym_1F_Text_ReceivedRainBadge
	.globl SootopolisCity_Gym_1F_Text_ReceivedRainBadge
SootopolisCity_Gym_1F_Text_ReceivedRainBadge: @ 0x0820E729
	.string "{PLAYER}は アダンから\nレインバッジを もらった!{EOS}"
	.if (. - SootopolisCity_Gym_1F_Text_ReceivedRainBadge) > 0x18
	.error "SootopolisCity_Gym_1F_Text_ReceivedRainBadge may not grow beyond its original slot"
	.endif
	.if (. - SootopolisCity_Gym_1F_Text_ReceivedRainBadge) < 0x18
	.space 0x18 - (. - SootopolisCity_Gym_1F_Text_ReceivedRainBadge)
	.endif
	@ data/maps/SootopolisCity_Gym_1F/scripts.inc:197 SootopolisCity_Gym_1F_Text_ExplainRainBadgeTakeThis
	.globl SootopolisCity_Gym_1F_Text_ExplainRainBadgeTakeThis
SootopolisCity_Gym_1F_Text_ExplainRainBadgeTakeThis: @ 0x0820E741
	.string "レインバッジを もっていると\nすべての ポケモンが\lユーに たいして すなおに なるでしょう\pはげしく ながれる たきも\nひでんわざ たきのぼりを つかって\lのぼれる ように してくれます\pそれから わたくしとの しょうぶを\nわすれないように これを……{EOS}"
	.if (. - SootopolisCity_Gym_1F_Text_ExplainRainBadgeTakeThis) > 0x80
	.error "SootopolisCity_Gym_1F_Text_ExplainRainBadgeTakeThis may not grow beyond its original slot"
	.endif
	.if (. - SootopolisCity_Gym_1F_Text_ExplainRainBadgeTakeThis) < 0x80
	.space 0x80 - (. - SootopolisCity_Gym_1F_Text_ExplainRainBadgeTakeThis)
	.endif
	@ data/maps/SootopolisCity_Gym_1F/scripts.inc:200 SootopolisCity_Gym_1F_Text_ExplainWaterPulse
	.globl SootopolisCity_Gym_1F_Text_ExplainWaterPulse
SootopolisCity_Gym_1F_Text_ExplainWaterPulse: @ 0x0820E7C1
	.string "ユーに わたした その わざマシン\nなかみは みずのはどう\pつかうと ときおり ちょうおんぱで\nあいてを こんらん させるのです!\p…… …… ……{EOS}"
	.if (. - SootopolisCity_Gym_1F_Text_ExplainWaterPulse) > 0x4b
	.error "SootopolisCity_Gym_1F_Text_ExplainWaterPulse may not grow beyond its original slot"
	.endif
	.if (. - SootopolisCity_Gym_1F_Text_ExplainWaterPulse) < 0x4b
	.space 0x4b - (. - SootopolisCity_Gym_1F_Text_ExplainWaterPulse)
	.endif
	@ data/maps/SootopolisCity_Gym_1F/scripts.inc:203 SootopolisCity_Gym_1F_Text_RegisteredJuan
	.globl SootopolisCity_Gym_1F_Text_RegisteredJuan
SootopolisCity_Gym_1F_Text_RegisteredJuan: @ 0x0820E80C
	.string "ジムリーダー アダンを\nポケナビに とうろく した!{EOS}"
	.if (. - SootopolisCity_Gym_1F_Text_RegisteredJuan) > 0x1b
	.error "SootopolisCity_Gym_1F_Text_RegisteredJuan may not grow beyond its original slot"
	.endif
	.if (. - SootopolisCity_Gym_1F_Text_RegisteredJuan) < 0x1b
	.space 0x1b - (. - SootopolisCity_Gym_1F_Text_RegisteredJuan)
	.endif
	@ data/maps/SootopolisCity_Gym_1F/scripts.inc:206 SootopolisCity_Gym_1F_Text_JuanPostBattle
	.globl SootopolisCity_Gym_1F_Text_JuanPostBattle
SootopolisCity_Gym_1F_Text_JuanPostBattle: @ 0x0820E827
	.string "ホウエンで あつめられる\nすべての ジムバッジを てにいれた\lトレーナーが いくべき ばしょ\pそれが ポケモンリーグ\pポケモンリーグに いくならば\nホウエンちほうの さいはて\lサイユウという しまに むかうのです{EOS}"
	.if (. - SootopolisCity_Gym_1F_Text_JuanPostBattle) > 0x6b
	.error "SootopolisCity_Gym_1F_Text_JuanPostBattle may not grow beyond its original slot"
	.endif
	.if (. - SootopolisCity_Gym_1F_Text_JuanPostBattle) < 0x6b
	.space 0x6b - (. - SootopolisCity_Gym_1F_Text_JuanPostBattle)
	.endif
	@ data/maps/SootopolisCity_Gym_1F/scripts.inc:209 SootopolisCity_Gym_1F_Text_GoGetFortreeBadge
	.globl SootopolisCity_Gym_1F_Text_GoGetFortreeBadge
SootopolisCity_Gym_1F_Text_GoGetFortreeBadge: @ 0x0820E892
	.string "ホウエンで あつめられる\nジムバッジは あと ひとつ\pユーが ポケモンリーグに いどむ つもりなら\nヒワマキの ポケモンジムで\lのこりの バッジを てにいれるのです{EOS}"
	.if (. - SootopolisCity_Gym_1F_Text_GoGetFortreeBadge) > 0x53
	.error "SootopolisCity_Gym_1F_Text_GoGetFortreeBadge may not grow beyond its original slot"
	.endif
	.if (. - SootopolisCity_Gym_1F_Text_GoGetFortreeBadge) < 0x53
	.space 0x53 - (. - SootopolisCity_Gym_1F_Text_GoGetFortreeBadge)
	.endif
	@ data/maps/SootopolisCity_Gym_1F/scripts.inc:212 SootopolisCity_Gym_1F_Text_GymStatue
	.globl SootopolisCity_Gym_1F_Text_GymStatue
SootopolisCity_Gym_1F_Text_GymStatue: @ 0x0820E8E5
	.string "ルネシティ ポケモンジム{EOS}"
	.if (. - SootopolisCity_Gym_1F_Text_GymStatue) > 0xd
	.error "SootopolisCity_Gym_1F_Text_GymStatue may not grow beyond its original slot"
	.endif
	.if (. - SootopolisCity_Gym_1F_Text_GymStatue) < 0xd
	.space 0xd - (. - SootopolisCity_Gym_1F_Text_GymStatue)
	.endif
	@ data/maps/SootopolisCity_Gym_1F/scripts.inc:215 SootopolisCity_Gym_1F_Text_GymStatueCertified
	.globl SootopolisCity_Gym_1F_Text_GymStatueCertified
SootopolisCity_Gym_1F_Text_GymStatueCertified: @ 0x0820E8F2
	.string "ルネシティ ポケモンジム\pアダン にんてい トレーナー!\n{PLAYER}{EOS}"
	.if (. - SootopolisCity_Gym_1F_Text_GymStatueCertified) > 0x20
	.error "SootopolisCity_Gym_1F_Text_GymStatueCertified may not grow beyond its original slot"
	.endif
	.if (. - SootopolisCity_Gym_1F_Text_GymStatueCertified) < 0x20
	.space 0x20 - (. - SootopolisCity_Gym_1F_Text_GymStatueCertified)
	.endif
	@ data/maps/SootopolisCity_Gym_1F/scripts.inc:218 SootopolisCity_Gym_1F_Text_JuanPreRematch (+1 aliases)
	.globl SootopolisCity_Gym_1F_Text_JuanPreRematch
SootopolisCity_Gym_1F_Text_JuanPreRematch: @ 0x0820E912
	.string "アダン『いつもの サイレンス……\nしずけさを とりもどした このジムに\pまたもや わかき タイフーンが\nうでだめしに あらわれましたね!\pいいですとも!\pなんどでも ユーの あいてを\nして さしあげましょう!{EOS}"
	.if (. - SootopolisCity_Gym_1F_Text_JuanPreRematch) > 0x69
	.error "SootopolisCity_Gym_1F_Text_JuanPreRematch may not grow beyond its original slot"
	.endif
	.if (. - SootopolisCity_Gym_1F_Text_JuanPreRematch) < 0x69
	.space 0x69 - (. - SootopolisCity_Gym_1F_Text_JuanPreRematch)
	.endif
	@ data/maps/SootopolisCity_Gym_1F/scripts.inc:221 SootopolisCity_Gym_1F_Text_JuanRematchDefeat (+1 aliases)
	.globl SootopolisCity_Gym_1F_Text_JuanRematchDefeat
SootopolisCity_Gym_1F_Text_JuanRematchDefeat: @ 0x0820E97B
	.string "たははは! ユー アー ウィナー!\nまたしても わたくしの まけです{EOS}"
	.if (. - SootopolisCity_Gym_1F_Text_JuanRematchDefeat) > 0x23
	.error "SootopolisCity_Gym_1F_Text_JuanRematchDefeat may not grow beyond its original slot"
	.endif
	.if (. - SootopolisCity_Gym_1F_Text_JuanRematchDefeat) < 0x23
	.space 0x23 - (. - SootopolisCity_Gym_1F_Text_JuanRematchDefeat)
	.endif
	@ data/maps/SootopolisCity_Gym_1F/scripts.inc:224 SootopolisCity_Gym_1F_Text_JuanPostRematch
	.globl SootopolisCity_Gym_1F_Text_JuanPostRematch
SootopolisCity_Gym_1F_Text_JuanPostRematch: @ 0x0820E99E
	.string "アダン『わたしの でしに なれと いっても\nきっと ユーは ことわる でしょうね\pせめて わたしが きている コートを\nプレゼント したいの ですが……\lおそらく ユーは うけとらない でしょう\pそれが ジェントルマン というものです\nほっほっほっほ!{EOS}"
	.if (. - SootopolisCity_Gym_1F_Text_JuanPostRematch) > 0x7f
	.error "SootopolisCity_Gym_1F_Text_JuanPostRematch may not grow beyond its original slot"
	.endif
	.if (. - SootopolisCity_Gym_1F_Text_JuanPostRematch) < 0x7f
	.space 0x7f - (. - SootopolisCity_Gym_1F_Text_JuanPostRematch)
	.endif
	@ data/maps/SootopolisCity_Gym_1F/scripts.inc:227 SootopolisCity_Gym_1F_Text_JuanRematchNeedTwoMons (+1 aliases)
	.globl SootopolisCity_Gym_1F_Text_JuanRematchNeedTwoMons
SootopolisCity_Gym_1F_Text_JuanRematchNeedTwoMons: @ 0x0820EA1D
	.string "アダン『いつもの サイレンス……\nしずけさを とりもどした このジムに\pまたもや わかき タイフーンが\nうでだめしに あらわれましたね!\pいいですとも!\nなんどでも ユーの あいてを……\p……アハン?\nユーは たたかえる ポケモンを\l1ひきしか もっていない ようですね\pねがわくば 2ひき いじょうの\nポケモンを もってきて プリーズ{EOS}"
	.if (. - SootopolisCity_Gym_1F_Text_JuanRematchNeedTwoMons) > 0xa9
	.error "SootopolisCity_Gym_1F_Text_JuanRematchNeedTwoMons may not grow beyond its original slot"
	.endif
	.if (. - SootopolisCity_Gym_1F_Text_JuanRematchNeedTwoMons) < 0xa9
	.space 0xa9 - (. - SootopolisCity_Gym_1F_Text_JuanRematchNeedTwoMons)
	.endif
	@ analyzed canonical ROM range 0x0820EAC6-0x0820EBAC
	@ semantic recovery: script_data; byte-verified against linked ROM
	.byte 0x00
.globl EventScript_JP_0820EAC7
EventScript_JP_0820EAC7: @ 0x0820EAC7
	@ event command: trainerbattle
	trainerbattle TRAINER_BATTLE_SINGLE, 0x0265, 0x0000, SootopolisCity_Gym_B1F_Text_AndreaIntro, SootopolisCity_Gym_B1F_Text_AndreaDefeat
	loadword 0x00, SootopolisCity_Gym_B1F_Text_AndreaPostBattle
	callstd 0x06
	end
.globl EventScript_JP_0820EADE
EventScript_JP_0820EADE: @ 0x0820EADE
	@ event command: trainerbattle
	trainerbattle TRAINER_BATTLE_SINGLE, 0x0266, 0x0000, SootopolisCity_Gym_B1F_Text_CrissyIntro, SootopolisCity_Gym_B1F_Text_CrissyDefeat
	loadword 0x00, SootopolisCity_Gym_B1F_Text_CrissyPostBattle
	callstd 0x06
	end
.globl EventScript_JP_0820EAF5
EventScript_JP_0820EAF5: @ 0x0820EAF5
	@ event command: trainerbattle
	trainerbattle TRAINER_BATTLE_SINGLE, 0x0076, 0x0000, SootopolisCity_Gym_B1F_Text_BriannaIntro, SootopolisCity_Gym_B1F_Text_BriannaDefeat
	loadword 0x00, SootopolisCity_Gym_B1F_Text_BriannaPostBattle
	callstd 0x06
	end
.globl EventScript_JP_0820EB0C
EventScript_JP_0820EB0C: @ 0x0820EB0C
	@ event command: trainerbattle
	trainerbattle TRAINER_BATTLE_SINGLE, 0x0080, 0x0000, SootopolisCity_Gym_B1F_Text_ConnieIntro, SootopolisCity_Gym_B1F_Text_ConnieDefeat
	loadword 0x00, SootopolisCity_Gym_B1F_Text_ConniePostBattle
	callstd 0x06
	end
.globl EventScript_JP_0820EB23
EventScript_JP_0820EB23: @ 0x0820EB23
	@ event command: trainerbattle
	trainerbattle TRAINER_BATTLE_SINGLE, 0x0081, 0x0000, SootopolisCity_Gym_B1F_Text_BridgetIntro, SootopolisCity_Gym_B1F_Text_BridgetDefeat
	loadword 0x00, SootopolisCity_Gym_B1F_Text_BridgetPostBattle
	callstd 0x06
	end
.globl EventScript_JP_0820EB3A
EventScript_JP_0820EB3A: @ 0x0820EB3A
	@ event command: trainerbattle
	trainerbattle TRAINER_BATTLE_SINGLE, 0x0082, 0x0000, SootopolisCity_Gym_B1F_Text_OliviaIntro, SootopolisCity_Gym_B1F_Text_OliviaDefeat
	loadword 0x00, SootopolisCity_Gym_B1F_Text_OliviaPostBattle
	callstd 0x06
	end
.globl EventScript_JP_0820EB51
EventScript_JP_0820EB51: @ 0x0820EB51
	@ event command: trainerbattle
	trainerbattle TRAINER_BATTLE_SINGLE, 0x0083, 0x0000, SootopolisCity_Gym_B1F_Text_TiffanyIntro, SootopolisCity_Gym_B1F_Text_TiffanyDefeat
	loadword 0x00, SootopolisCity_Gym_B1F_Text_TiffanyPostBattle
	callstd 0x06
	end
.globl EventScript_JP_0820EB68
EventScript_JP_0820EB68: @ 0x0820EB68
	@ event command: trainerbattle
	trainerbattle TRAINER_BATTLE_SINGLE, 0x012D, 0x0000, SootopolisCity_Gym_B1F_Text_BethanyIntro, SootopolisCity_Gym_B1F_Text_BethanyDefeat
	loadword 0x00, SootopolisCity_Gym_B1F_Text_BethanyPostBattle
	callstd 0x06
	end
.globl EventScript_JP_0820EB7F
EventScript_JP_0820EB7F: @ 0x0820EB7F
	@ event command: trainerbattle
	trainerbattle TRAINER_BATTLE_SINGLE, 0x01F6, 0x0000, SootopolisCity_Gym_B1F_Text_AnnikaIntro, SootopolisCity_Gym_B1F_Text_AnnikaDefeat
	loadword 0x00, SootopolisCity_Gym_B1F_Text_AnnikaPostBattle
	callstd 0x06
	end
.globl EventScript_JP_0820EB96
EventScript_JP_0820EB96: @ 0x0820EB96
	@ event command: trainerbattle
	trainerbattle TRAINER_BATTLE_SINGLE, 0x0073, 0x0000, SootopolisCity_Gym_B1F_Text_DaphneIntro, SootopolisCity_Gym_B1F_Text_DaphneDefeat
	loadword 0x00, SootopolisCity_Gym_B1F_Text_DaphnePostBattle
	callstd 0x06
	end
