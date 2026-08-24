	@ data/maps/SootopolisCity_Gym_1F/scripts.inc:178 SootopolisCity_Gym_1F_Text_GymGuideAdvice
	.globl gText_Rom_20E46B
gText_Rom_20E46B: @ 0x0820E46B
	.string "げんき しとぉや!!\nチャンピオンを めざす {PLAYER}!!\pルネシティの ジムリーダー アダンは\nみずタイプ ポケモンを つかいこなす!\pそして アダンがいる ところ までは\nこおりの ゆかが ゆくてを さえぎる……\pごめんな! きみに おしえて\nあげられるのは ここまで なんだ……!\pあとは じぶんで きばってくれッ!{EOS}"
	.if (. - gText_Rom_20E46B) > 0xa0
	.error "gText_Rom_20E46B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20E46B) < 0xa0
	.space 0xa0 - (. - gText_Rom_20E46B)
	.endif
	@ data/maps/SootopolisCity_Gym_1F/scripts.inc:181 SootopolisCity_Gym_1F_Text_GymGuidePostVictory
	.globl gText_Rom_20E50B
gText_Rom_20E50B: @ 0x0820E50B
	.string "ホウエンで いちばん つよいと いわれる\nアダンに かったのかあ!!\pよし! きみの\nトレーナーカードを みたまえ!\pすべての バッジが そろっているなら\nいよいよ ポケモンリーグ ちょうせんだ!{EOS}"
	.if (. - gText_Rom_20E50B) > 0x63
	.error "gText_Rom_20E50B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20E50B) < 0x63
	.space 0x63 - (. - gText_Rom_20E50B)
	.endif
	@ data/maps/SootopolisCity_Gym_1F/scripts.inc:184 SootopolisCity_Gym_1F_Text_JuanIntro (+1 aliases)
	.globl gText_Rom_20E56E
gText_Rom_20E56E: @ 0x0820E56E
	.string "ユーは しっていますか?\pミクリに ポケモンを おしえたのは\nなにをかくそう このアダン……\lすなわち わたくし だということを\pいちどは ジムリーダーから みをひき\nこのジムも かれに まかせて いましたが\lちょっとした リーズン……\lすなわち りゆうが できましてね\lもういちど カムバック したのです\p……おっと\nおしゃべりは これくらいにして\lそろそろ しょうぶを はじめましょう\pさあ ぞんぶんに ごらんなさい\nわたしと ポケモンが おりなす\lみずの イリュージョンを!{EOS}"
	.if (. - gText_Rom_20E56E) > 0xf1
	.error "gText_Rom_20E56E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20E56E) < 0xf1
	.space 0xf1 - (. - gText_Rom_20E56E)
	.endif
	@ data/maps/SootopolisCity_Gym_1F/scripts.inc:191 SootopolisCity_Gym_1F_Text_JuanDefeat (+1 aliases)
	.globl gText_Rom_20E65F
gText_Rom_20E65F: @ 0x0820E65F
	.string "たははは! ユー アー ウィナー!\nすなわち わたくしの まけです\pユーには だれにも まけない\nさいのうの きらめきが かんじられます!\pしかし わたくしや ミクリに くらべると\nちょっと はなやかさが たりませんな!\pわたしの ふくでも\nかして あげましょうか?\p…… …… ……\n…… …… ……\pはっはっは ジョークですよ!\nユーには ふくの かわりに\lこの レインバッジを さしあげましょう!{EOS}"
	.if (. - gText_Rom_20E65F) > 0xca
	.error "gText_Rom_20E65F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20E65F) < 0xca
	.space 0xca - (. - gText_Rom_20E65F)
	.endif
	@ data/maps/SootopolisCity_Gym_1F/scripts.inc:194 SootopolisCity_Gym_1F_Text_ReceivedRainBadge
	.globl gText_Rom_20E729
gText_Rom_20E729: @ 0x0820E729
	.string "{PLAYER}は アダンから\nレインバッジを もらった!{EOS}"
	.if (. - gText_Rom_20E729) > 0x18
	.error "gText_Rom_20E729 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20E729) < 0x18
	.space 0x18 - (. - gText_Rom_20E729)
	.endif
	@ data/maps/SootopolisCity_Gym_1F/scripts.inc:197 SootopolisCity_Gym_1F_Text_ExplainRainBadgeTakeThis
	.globl gText_Rom_20E741
gText_Rom_20E741: @ 0x0820E741
	.string "レインバッジを もっていると\nすべての ポケモンが\lユーに たいして すなおに なるでしょう\pはげしく ながれる たきも\nひでんわざ たきのぼりを つかって\lのぼれる ように してくれます\pそれから わたくしとの しょうぶを\nわすれないように これを……{EOS}"
	.if (. - gText_Rom_20E741) > 0x80
	.error "gText_Rom_20E741 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20E741) < 0x80
	.space 0x80 - (. - gText_Rom_20E741)
	.endif
	@ data/maps/SootopolisCity_Gym_1F/scripts.inc:200 SootopolisCity_Gym_1F_Text_ExplainWaterPulse
	.globl gText_Rom_20E7C1
gText_Rom_20E7C1: @ 0x0820E7C1
	.string "ユーに わたした その わざマシン\nなかみは みずのはどう\pつかうと ときおり ちょうおんぱで\nあいてを こんらん させるのです!\p…… …… ……{EOS}"
	.if (. - gText_Rom_20E7C1) > 0x4b
	.error "gText_Rom_20E7C1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20E7C1) < 0x4b
	.space 0x4b - (. - gText_Rom_20E7C1)
	.endif
	@ data/maps/SootopolisCity_Gym_1F/scripts.inc:203 SootopolisCity_Gym_1F_Text_RegisteredJuan
	.globl gText_Rom_20E80C
gText_Rom_20E80C: @ 0x0820E80C
	.string "ジムリーダー アダンを\nポケナビに とうろく した!{EOS}"
	.if (. - gText_Rom_20E80C) > 0x1b
	.error "gText_Rom_20E80C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20E80C) < 0x1b
	.space 0x1b - (. - gText_Rom_20E80C)
	.endif
	@ data/maps/SootopolisCity_Gym_1F/scripts.inc:206 SootopolisCity_Gym_1F_Text_JuanPostBattle
	.globl gText_Rom_20E827
gText_Rom_20E827: @ 0x0820E827
	.string "ホウエンで あつめられる\nすべての ジムバッジを てにいれた\lトレーナーが いくべき ばしょ\pそれが ポケモンリーグ\pポケモンリーグに いくならば\nホウエンちほうの さいはて\lサイユウという しまに むかうのです{EOS}"
	.if (. - gText_Rom_20E827) > 0x6b
	.error "gText_Rom_20E827 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20E827) < 0x6b
	.space 0x6b - (. - gText_Rom_20E827)
	.endif
	@ data/maps/SootopolisCity_Gym_1F/scripts.inc:209 SootopolisCity_Gym_1F_Text_GoGetFortreeBadge
	.globl gText_Rom_20E892
gText_Rom_20E892: @ 0x0820E892
	.string "ホウエンで あつめられる\nジムバッジは あと ひとつ\pユーが ポケモンリーグに いどむ つもりなら\nヒワマキの ポケモンジムで\lのこりの バッジを てにいれるのです{EOS}"
	.if (. - gText_Rom_20E892) > 0x53
	.error "gText_Rom_20E892 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20E892) < 0x53
	.space 0x53 - (. - gText_Rom_20E892)
	.endif
	@ data/maps/SootopolisCity_Gym_1F/scripts.inc:212 SootopolisCity_Gym_1F_Text_GymStatue
	.globl gText_Rom_20E8E5
gText_Rom_20E8E5: @ 0x0820E8E5
	.string "ルネシティ ポケモンジム{EOS}"
	.if (. - gText_Rom_20E8E5) > 0xd
	.error "gText_Rom_20E8E5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20E8E5) < 0xd
	.space 0xd - (. - gText_Rom_20E8E5)
	.endif
	@ data/maps/SootopolisCity_Gym_1F/scripts.inc:215 SootopolisCity_Gym_1F_Text_GymStatueCertified
	.globl gText_Rom_20E8F2
gText_Rom_20E8F2: @ 0x0820E8F2
	.string "ルネシティ ポケモンジム\pアダン にんてい トレーナー!\n{PLAYER}{EOS}"
	.if (. - gText_Rom_20E8F2) > 0x20
	.error "gText_Rom_20E8F2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20E8F2) < 0x20
	.space 0x20 - (. - gText_Rom_20E8F2)
	.endif
	@ data/maps/SootopolisCity_Gym_1F/scripts.inc:218 SootopolisCity_Gym_1F_Text_JuanPreRematch (+1 aliases)
	.globl gText_Rom_20E912
gText_Rom_20E912: @ 0x0820E912
	.string "アダン『いつもの サイレンス……\nしずけさを とりもどした このジムに\pまたもや わかき タイフーンが\nうでだめしに あらわれましたね!\pいいですとも!\pなんどでも ユーの あいてを\nして さしあげましょう!{EOS}"
	.if (. - gText_Rom_20E912) > 0x69
	.error "gText_Rom_20E912 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20E912) < 0x69
	.space 0x69 - (. - gText_Rom_20E912)
	.endif
	@ data/maps/SootopolisCity_Gym_1F/scripts.inc:221 SootopolisCity_Gym_1F_Text_JuanRematchDefeat (+1 aliases)
	.globl gText_Rom_20E97B
gText_Rom_20E97B: @ 0x0820E97B
	.string "たははは! ユー アー ウィナー!\nまたしても わたくしの まけです{EOS}"
	.if (. - gText_Rom_20E97B) > 0x23
	.error "gText_Rom_20E97B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20E97B) < 0x23
	.space 0x23 - (. - gText_Rom_20E97B)
	.endif
	@ data/maps/SootopolisCity_Gym_1F/scripts.inc:224 SootopolisCity_Gym_1F_Text_JuanPostRematch
	.globl gText_Rom_20E99E
gText_Rom_20E99E: @ 0x0820E99E
	.string "アダン『わたしの でしに なれと いっても\nきっと ユーは ことわる でしょうね\pせめて わたしが きている コートを\nプレゼント したいの ですが……\lおそらく ユーは うけとらない でしょう\pそれが ジェントルマン というものです\nほっほっほっほ!{EOS}"
	.if (. - gText_Rom_20E99E) > 0x7f
	.error "gText_Rom_20E99E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20E99E) < 0x7f
	.space 0x7f - (. - gText_Rom_20E99E)
	.endif
	@ data/maps/SootopolisCity_Gym_1F/scripts.inc:227 SootopolisCity_Gym_1F_Text_JuanRematchNeedTwoMons (+1 aliases)
	.globl gText_Rom_20EA1D
gText_Rom_20EA1D: @ 0x0820EA1D
	.string "アダン『いつもの サイレンス……\nしずけさを とりもどした このジムに\pまたもや わかき タイフーンが\nうでだめしに あらわれましたね!\pいいですとも!\nなんどでも ユーの あいてを……\p……アハン?\nユーは たたかえる ポケモンを\l1ひきしか もっていない ようですね\pねがわくば 2ひき いじょうの\nポケモンを もってきて プリーズ{EOS}"
	.if (. - gText_Rom_20EA1D) > 0xa9
	.error "gText_Rom_20EA1D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20EA1D) < 0xa9
	.space 0xa9 - (. - gText_Rom_20EA1D)
	.endif
	@ analyzed canonical ROM range 0x0820EAC6-0x0820EBAC
	@ semantic recovery: script_data; byte-verified against linked ROM
	.byte 0x00
.globl EventScript_JP_0820EAC7
EventScript_JP_0820EAC7: @ 0x0820EAC7
	@ event command: trainerbattle
	trainerbattle TRAINER_BATTLE_SINGLE, 0x0265, 0x0000, gText_Rom_20EBAD, gText_Rom_20EBD7
	loadword 0x00, gText_Rom_20EBE4
	callstd 0x06
	end
.globl EventScript_JP_0820EADE
EventScript_JP_0820EADE: @ 0x0820EADE
	@ event command: trainerbattle
	trainerbattle TRAINER_BATTLE_SINGLE, 0x0266, 0x0000, gText_Rom_20EC01, gText_Rom_20EC2B
	loadword 0x00, gText_Rom_20EC47
	callstd 0x06
	end
.globl EventScript_JP_0820EAF5
EventScript_JP_0820EAF5: @ 0x0820EAF5
	@ event command: trainerbattle
	trainerbattle TRAINER_BATTLE_SINGLE, 0x0076, 0x0000, gText_Rom_20EF83, gText_Rom_20EF9B
	loadword 0x00, gText_Rom_20EFB2
	callstd 0x06
	end
.globl EventScript_JP_0820EB0C
EventScript_JP_0820EB0C: @ 0x0820EB0C
	@ event command: trainerbattle
	trainerbattle TRAINER_BATTLE_SINGLE, 0x0080, 0x0000, gText_Rom_20ECF5, gText_Rom_20ED1B
	loadword 0x00, gText_Rom_20ED25
	callstd 0x06
	end
.globl EventScript_JP_0820EB23
EventScript_JP_0820EB23: @ 0x0820EB23
	@ event command: trainerbattle
	trainerbattle TRAINER_BATTLE_SINGLE, 0x0081, 0x0000, gText_Rom_20ED5F, gText_Rom_20ED8D
	loadword 0x00, gText_Rom_20ED9C
	callstd 0x06
	end
.globl EventScript_JP_0820EB3A
EventScript_JP_0820EB3A: @ 0x0820EB3A
	@ event command: trainerbattle
	trainerbattle TRAINER_BATTLE_SINGLE, 0x0082, 0x0000, gText_Rom_20EDE1, gText_Rom_20EE11
	loadword 0x00, gText_Rom_20EE1C
	callstd 0x06
	end
.globl EventScript_JP_0820EB51
EventScript_JP_0820EB51: @ 0x0820EB51
	@ event command: trainerbattle
	trainerbattle TRAINER_BATTLE_SINGLE, 0x0083, 0x0000, gText_Rom_20EE44, gText_Rom_20EE74
	loadword 0x00, gText_Rom_20EE7C
	callstd 0x06
	end
.globl EventScript_JP_0820EB68
EventScript_JP_0820EB68: @ 0x0820EB68
	@ event command: trainerbattle
	trainerbattle TRAINER_BATTLE_SINGLE, 0x012D, 0x0000, gText_Rom_20EEA4, gText_Rom_20EEC9
	loadword 0x00, gText_Rom_20EECD
	callstd 0x06
	end
.globl EventScript_JP_0820EB7F
EventScript_JP_0820EB7F: @ 0x0820EB7F
	@ event command: trainerbattle
	trainerbattle TRAINER_BATTLE_SINGLE, 0x01F6, 0x0000, gText_Rom_20EEE8, gText_Rom_20EF0E
	loadword 0x00, gText_Rom_20EF29
	callstd 0x06
	end
.globl EventScript_JP_0820EB96
EventScript_JP_0820EB96: @ 0x0820EB96
	@ event command: trainerbattle
	trainerbattle TRAINER_BATTLE_SINGLE, 0x0073, 0x0000, gText_Rom_20EC6E, gText_Rom_20ECA7
	loadword 0x00, gText_Rom_20ECC1
	callstd 0x06
	end
