	@ data/maps/VictoryRoad_1F/scripts.inc:136 VictoryRoad_1F_Text_WallyPostBattle
	.globl gText_Rom_219759
gText_Rom_219759: @ 0x08219759
	.string "ミツル『…… こんかいも\n{PLAYER}さんに かてなかった けど\lいつか きっと おいついて……\pポケモンリーグに ちょうせん するんだ!$"
	.if (. - gText_Rom_219759) > 0x42
	.error "gText_Rom_219759 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_219759) < 0x42
	.space 0x42 - (. - gText_Rom_219759)
	.endif

	@ data/maps/VictoryRoad_1F/scripts.inc:139 VictoryRoad_1F_Text_EdgarIntro (+1 aliases)
	.globl gText_Rom_21979B
gText_Rom_21979B: @ 0x0821979B
	.string "ここまでは なんとか これたが\nあと すこしが とても とおいよ……$"
	.if (. - gText_Rom_21979B) > 0x23
	.error "gText_Rom_21979B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21979B) < 0x23
	.space 0x23 - (. - gText_Rom_21979B)
	.endif

	@ data/maps/VictoryRoad_1F/scripts.inc:142 VictoryRoad_1F_Text_EdgarDefeat (+1 aliases)
	.globl gText_Rom_2197BE
gText_Rom_2197BE: @ 0x082197BE
	.string "ここで おわったか……$"
	.if (. - gText_Rom_2197BE) > 0xc
	.error "gText_Rom_2197BE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2197BE) < 0xc
	.space 0xc - (. - gText_Rom_2197BE)
	.endif

	@ data/maps/VictoryRoad_1F/scripts.inc:145 VictoryRoad_1F_Text_EdgarPostBattle
	.globl gText_Rom_2197CA
gText_Rom_2197CA: @ 0x082197CA
	.string "ここまで きたなら\nいきおいで チャンピオンに なれよ!\lきみなら できるさ!$"
	.if (. - gText_Rom_2197CA) > 0x28
	.error "gText_Rom_2197CA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2197CA) < 0x28
	.space 0x28 - (. - gText_Rom_2197CA)
	.endif

	@ data/maps/VictoryRoad_1F/scripts.inc:148 VictoryRoad_1F_Text_AlbertIntro (+1 aliases)
	.globl gText_Rom_2197F2
gText_Rom_2197F2: @ 0x082197F2
	.string "せっかく ここまで きたんだ\nいまさら まけるなんて ありえないよ!$"
	.if (. - gText_Rom_2197F2) > 0x23
	.error "gText_Rom_2197F2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2197F2) < 0x23
	.space 0x23 - (. - gText_Rom_2197F2)
	.endif

	@ data/maps/VictoryRoad_1F/scripts.inc:151 VictoryRoad_1F_Text_AlbertDefeat (+1 aliases)
	.globl gText_Rom_219815
gText_Rom_219815: @ 0x08219815
	.string "まさか……\nまけたのか……?$"
	.if (. - gText_Rom_219815) > 0xf
	.error "gText_Rom_219815 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_219815) < 0xf
	.space 0xf - (. - gText_Rom_219815)
	.endif

	@ data/maps/VictoryRoad_1F/scripts.inc:154 VictoryRoad_1F_Text_AlbertPostBattle
	.globl gText_Rom_219824
gText_Rom_219824: @ 0x08219824
	.string "ここで まけた……\pということは まだ チャンピオンに なる\nしかくが なかったと いうことか……$"
	.if (. - gText_Rom_219824) > 0x32
	.error "gText_Rom_219824 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_219824) < 0x32
	.space 0x32 - (. - gText_Rom_219824)
	.endif

	@ data/maps/VictoryRoad_1F/scripts.inc:157 VictoryRoad_1F_Text_HopeIntro (+1 aliases)
	.globl gText_Rom_219856
gText_Rom_219856: @ 0x08219856
	.string "この はてしなく けわしい みち こそ\nまさに チャンピオンへの みち なのよ!$"
	.if (. - gText_Rom_219856) > 0x29
	.error "gText_Rom_219856 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_219856) < 0x29
	.space 0x29 - (. - gText_Rom_219856)
	.endif

	@ data/maps/VictoryRoad_1F/scripts.inc:160 VictoryRoad_1F_Text_HopeDefeat (+1 aliases)
	.globl gText_Rom_21987F
gText_Rom_21987F: @ 0x0821987F
	.string "すばらしい たたかいかた ね……$"
	.if (. - gText_Rom_21987F) > 0x11
	.error "gText_Rom_21987F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21987F) < 0x11
	.space 0x11 - (. - gText_Rom_21987F)
	.endif

	@ data/maps/VictoryRoad_1F/scripts.inc:163 VictoryRoad_1F_Text_HopePostBattle
	.globl gText_Rom_219890
gText_Rom_219890: @ 0x08219890
	.string "あなたには チャンピオンに なれる\nかのうせいが あるみたいね$"
	.if (. - gText_Rom_219890) > 0x20
	.error "gText_Rom_219890 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_219890) < 0x20
	.space 0x20 - (. - gText_Rom_219890)
	.endif

	@ data/maps/VictoryRoad_1F/scripts.inc:166 VictoryRoad_1F_Text_QuincyIntro (+1 aliases)
	.globl gText_Rom_2198B0
gText_Rom_2198B0: @ 0x082198B0
	.string "チャンピオンロード とは なにか?\nかてたら おしえてやろう!$"
	.if (. - gText_Rom_2198B0) > 0x20
	.error "gText_Rom_2198B0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2198B0) < 0x20
	.space 0x20 - (. - gText_Rom_2198B0)
	.endif

	@ data/maps/VictoryRoad_1F/scripts.inc:169 VictoryRoad_1F_Text_QuincyDefeat (+1 aliases)
	.globl gText_Rom_2198D0
gText_Rom_2198D0: @ 0x082198D0
	.string "うん いいだろう!$"
	.if (. - gText_Rom_2198D0) > 0xa
	.error "gText_Rom_2198D0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2198D0) < 0xa
	.space 0xa - (. - gText_Rom_2198D0)
	.endif

	@ data/maps/VictoryRoad_1F/scripts.inc:172 VictoryRoad_1F_Text_QuincyPostBattle
	.globl gText_Rom_2198DA
gText_Rom_2198DA: @ 0x082198DA
	.string "ここを ぶじに ぬけきるって ことが\nポケモンチャンピオンを めざす やつの\lさいごの しれん なんだ!\pだから チャンピオンロードと\nよばれて いるのさ$"
	.if (. - gText_Rom_2198DA) > 0x4e
	.error "gText_Rom_2198DA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2198DA) < 0x4e
	.space 0x4e - (. - gText_Rom_2198DA)
	.endif

	@ data/maps/VictoryRoad_1F/scripts.inc:175 VictoryRoad_1F_Text_KatelynnIntro (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_219928
gText_Rom_219928: @ 0x08219928
	.string "ここまで きた ひとに\nなにも いうことは ない…… いくわよ!$"
	.if (. - gText_Rom_219928) != 0x21
	.error "gText_Rom_219928 must retain its original byte length"
	.endif
	.globl gText_Rom_219945
	.set gText_Rom_219945, gText_Rom_219928 + 0x1d

	@ data/maps/VictoryRoad_1F/scripts.inc:178 VictoryRoad_1F_Text_KatelynnDefeat (+1 aliases)
	.globl gText_Rom_219949
gText_Rom_219949: @ 0x08219949
	.string "くやしいわ……!$"
	.if (. - gText_Rom_219949) > 0x9
	.error "gText_Rom_219949 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_219949) < 0x9
	.space 0x9 - (. - gText_Rom_219949)
	.endif

	@ data/maps/VictoryRoad_1F/scripts.inc:181 VictoryRoad_1F_Text_KatelynnPostBattle
	.globl gText_Rom_219952
gText_Rom_219952: @ 0x08219952
	.string "ふん…… いいわよ\nあなた から さきに いきなさいよ$"
	.if (. - gText_Rom_219952) > 0x1c
	.error "gText_Rom_219952 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_219952) < 0x1c
	.space 0x1c - (. - gText_Rom_219952)
	.endif
	.incbin "baserom.gba", 0x21996e, 0x74

	@ data/maps/VictoryRoad_B1F/scripts.inc:29 VictoryRoad_B1F_Text_SamuelIntro (+1 aliases)
	.globl gText_Rom_2199E2
gText_Rom_2199E2: @ 0x082199E2
	.string "ポケモンリーグに ちかづいていると おもうと\nなんだか ドキドキ してきたよ……$"
	.if (. - gText_Rom_2199E2) > 0x29
	.error "gText_Rom_2199E2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2199E2) < 0x29
	.space 0x29 - (. - gText_Rom_2199E2)
	.endif

	@ data/maps/VictoryRoad_B1F/scripts.inc:32 VictoryRoad_B1F_Text_SamuelDefeat (+1 aliases)
	.globl gText_Rom_219A0B
gText_Rom_219A0B: @ 0x08219A0B
	.string "なにも できなかった……$"
	.if (. - gText_Rom_219A0B) > 0xd
	.error "gText_Rom_219A0B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_219A0B) < 0xd
	.space 0xd - (. - gText_Rom_219A0B)
	.endif

	@ data/maps/VictoryRoad_B1F/scripts.inc:35 VictoryRoad_B1F_Text_SamuelPostBattle
	.globl gText_Rom_219A18
gText_Rom_219A18: @ 0x08219A18
	.string "ポケモンリーグが とおのいたよ……\nなんだか がっかり するな……$"
	.if (. - gText_Rom_219A18) > 0x22
	.error "gText_Rom_219A18 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_219A18) < 0x22
	.space 0x22 - (. - gText_Rom_219A18)
	.endif

	@ data/maps/VictoryRoad_B1F/scripts.inc:38 VictoryRoad_B1F_Text_ShannonIntro (+1 aliases)
	.globl gText_Rom_219A3A
gText_Rom_219A3A: @ 0x08219A3A
	.string "ポケモンリーグで かちぬくには\nポケモンへの しんらいが ひつよう なの$"
	.if (. - gText_Rom_219A3A) > 0x25
	.error "gText_Rom_219A3A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_219A3A) < 0x25
	.space 0x25 - (. - gText_Rom_219A3A)
	.endif

	@ data/maps/VictoryRoad_B1F/scripts.inc:41 VictoryRoad_B1F_Text_ShannonDefeat (+1 aliases)
	.globl gText_Rom_219A5F
gText_Rom_219A5F: @ 0x08219A5F
	.string "しんらい かんけい バッチリね!$"
	.if (. - gText_Rom_219A5F) > 0x11
	.error "gText_Rom_219A5F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_219A5F) < 0x11
	.space 0x11 - (. - gText_Rom_219A5F)
	.endif

	@ data/maps/VictoryRoad_B1F/scripts.inc:44 VictoryRoad_B1F_Text_ShannonPostBattle
	.globl gText_Rom_219A70
gText_Rom_219A70: @ 0x08219A70
	.string "いつも いっしょに いることで\nポケモンと トレーナーとの あいだに\lしんらい かんけいが できるの$"
	.if (. - gText_Rom_219A70) > 0x33
	.error "gText_Rom_219A70 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_219A70) < 0x33
	.space 0x33 - (. - gText_Rom_219A70)
	.endif

	@ data/maps/VictoryRoad_B1F/scripts.inc:47 VictoryRoad_B1F_Text_MichelleIntro (+1 aliases)
	.globl gText_Rom_219AA3
gText_Rom_219AA3: @ 0x08219AA3
	.string "ここは ゴール じゃないの\nポケモンリーグへの つうかてん よ!$"
	.if (. - gText_Rom_219AA3) > 0x21
	.error "gText_Rom_219AA3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_219AA3) < 0x21
	.space 0x21 - (. - gText_Rom_219AA3)
	.endif

	@ data/maps/VictoryRoad_B1F/scripts.inc:50 VictoryRoad_B1F_Text_MichelleDefeat (+1 aliases)
	.globl gText_Rom_219AC4
gText_Rom_219AC4: @ 0x08219AC4
	.string "その ちょうし!$"
	.if (. - gText_Rom_219AC4) > 0x9
	.error "gText_Rom_219AC4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_219AC4) < 0x9
	.space 0x9 - (. - gText_Rom_219AC4)
	.endif

	@ data/maps/VictoryRoad_B1F/scripts.inc:53 VictoryRoad_B1F_Text_MichellePostBattle
	.globl gText_Rom_219ACD
gText_Rom_219ACD: @ 0x08219ACD
	.string "あなたなら だいじょうぶよ きっと!\nポケモンも やるき まんまん だしね!$"
	.if (. - gText_Rom_219ACD) > 0x27
	.error "gText_Rom_219ACD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_219ACD) < 0x27
	.space 0x27 - (. - gText_Rom_219ACD)
	.endif

	@ data/maps/VictoryRoad_B1F/scripts.inc:56 VictoryRoad_B1F_Text_MitchellIntro (+1 aliases)
	.globl gText_Rom_219AF4
gText_Rom_219AF4: @ 0x08219AF4
	.string "わたしの ポケモンは すばらしいですよ!$"
	.if (. - gText_Rom_219AF4) > 0x15
	.error "gText_Rom_219AF4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_219AF4) < 0x15
	.space 0x15 - (. - gText_Rom_219AF4)
	.endif

	@ data/maps/VictoryRoad_B1F/scripts.inc:59 VictoryRoad_B1F_Text_MitchellDefeat (+1 aliases)
	.globl gText_Rom_219B09
gText_Rom_219B09: @ 0x08219B09
	.string "あなた みたいな かた\nはじめて です$"
	.if (. - gText_Rom_219B09) > 0x14
	.error "gText_Rom_219B09 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_219B09) < 0x14
	.space 0x14 - (. - gText_Rom_219B09)
	.endif

	@ data/maps/VictoryRoad_B1F/scripts.inc:62 VictoryRoad_B1F_Text_MitchellPostBattle
	.globl gText_Rom_219B1D
gText_Rom_219B1D: @ 0x08219B1D
	.string "あなたと あなたの ポケモンが\nいっしょに いるだけで\lすごい パワーを かんじます$"
	.if (. - gText_Rom_219B1D) > 0x2b
	.error "gText_Rom_219B1D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_219B1D) < 0x2b
	.space 0x2b - (. - gText_Rom_219B1D)
	.endif

	@ data/maps/VictoryRoad_B1F/scripts.inc:65 VictoryRoad_B1F_Text_HalleIntro (+1 aliases)
	.globl gText_Rom_219B48
gText_Rom_219B48: @ 0x08219B48
	.string "オーケイ そんなに かまえないで!\nリラックス して いきましょ!$"
	.if (. - gText_Rom_219B48) > 0x22
	.error "gText_Rom_219B48 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_219B48) < 0x22
	.space 0x22 - (. - gText_Rom_219B48)
	.endif

	@ data/maps/VictoryRoad_B1F/scripts.inc:68 VictoryRoad_B1F_Text_HalleDefeat (+1 aliases)
	.globl gText_Rom_219B6A
gText_Rom_219B6A: @ 0x08219B6A
	.string "ワンダフル!$"
	.if (. - gText_Rom_219B6A) > 0x7
	.error "gText_Rom_219B6A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_219B6A) < 0x7
	.space 0x7 - (. - gText_Rom_219B6A)
	.endif

	@ data/maps/VictoryRoad_B1F/scripts.inc:71 VictoryRoad_B1F_Text_HallePostBattle
	.globl gText_Rom_219B71
gText_Rom_219B71: @ 0x08219B71
	.string "チャンピオンロード だって\nいままでの みちのりと かわらないわ\lのこりも エンジョイしてね$"
	.if (. - gText_Rom_219B71) > 0x2f
	.error "gText_Rom_219B71 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_219B71) < 0x2f
	.space 0x2f - (. - gText_Rom_219B71)
	.endif
	.incbin "baserom.gba", 0x219ba0, 0x8b

	@ data/maps/VictoryRoad_B2F/scripts.inc:34 VictoryRoad_B2F_Text_VitoIntro (+1 aliases)
	.globl gText_Rom_219C2B
gText_Rom_219C2B: @ 0x08219C2B
	.string "かぞく ぜんいんで\nポケモンの しゅぎょうを してたんだ!\lだれにも まけないぜ!$"
	.if (. - gText_Rom_219C2B) > 0x2a
	.error "gText_Rom_219C2B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_219C2B) < 0x2a
	.space 0x2a - (. - gText_Rom_219C2B)
	.endif

	@ data/maps/VictoryRoad_B2F/scripts.inc:37 VictoryRoad_B2F_Text_VitoDefeat (+1 aliases)
	.globl gText_Rom_219C55
gText_Rom_219C55: @ 0x08219C55
	.string "おれの かぞく より つよい!?\nそんなことって あるのか!?$"
	.if (. - gText_Rom_219C55) > 0x20
	.error "gText_Rom_219C55 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_219C55) < 0x20
	.space 0x20 - (. - gText_Rom_219C55)
	.endif

	@ data/maps/VictoryRoad_B2F/scripts.inc:40 VictoryRoad_B2F_Text_VitoPostBattle
	.globl gText_Rom_219C75
gText_Rom_219C75: @ 0x08219C75
	.string "かぞくの だれよりも つよかった おれ……\nいままで だれにも まけなかった おれ……\pだけど じしん なくしちゃったよ\nいえに かえろうかなあ$"
	.if (. - gText_Rom_219C75) > 0x49
	.error "gText_Rom_219C75 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_219C75) < 0x49
	.space 0x49 - (. - gText_Rom_219C75)
	.endif

	@ data/maps/VictoryRoad_B2F/scripts.inc:43 VictoryRoad_B2F_Text_OwenIntro (+1 aliases)
	.globl gText_Rom_219CBE
gText_Rom_219CBE: @ 0x08219CBE
	.string "つよい こどもが いるって ウワサだ!\nそれって きみの ことかい?$"
	.if (. - gText_Rom_219CBE) > 0x23
	.error "gText_Rom_219CBE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_219CBE) < 0x23
	.space 0x23 - (. - gText_Rom_219CBE)
	.endif

	@ data/maps/VictoryRoad_B2F/scripts.inc:46 VictoryRoad_B2F_Text_OwenDefeat (+1 aliases)
	.globl gText_Rom_219CE1
gText_Rom_219CE1: @ 0x08219CE1
	.string "たしかに つよい!$"
	.if (. - gText_Rom_219CE1) > 0xa
	.error "gText_Rom_219CE1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_219CE1) < 0xa
	.space 0xa - (. - gText_Rom_219CE1)
	.endif

	@ data/maps/VictoryRoad_B2F/scripts.inc:49 VictoryRoad_B2F_Text_OwenPostBattle
	.globl gText_Rom_219CEB
gText_Rom_219CEB: @ 0x08219CEB
	.string "おれが きいた ウワサだと\nその つよい こども ってのは\lトウカ しゅっしん らしいな!$"
	.if (. - gText_Rom_219CEB) > 0x2e
	.error "gText_Rom_219CEB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_219CEB) < 0x2e
	.space 0x2e - (. - gText_Rom_219CEB)
	.endif

	@ data/maps/VictoryRoad_B2F/scripts.inc:52 VictoryRoad_B2F_Text_CarolineIntro (+1 aliases)
	.globl gText_Rom_219D19
gText_Rom_219D19: @ 0x08219D19
	.string "そろそろ へばって きたかな?$"
	.if (. - gText_Rom_219D19) > 0x10
	.error "gText_Rom_219D19 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_219D19) < 0x10
	.space 0x10 - (. - gText_Rom_219D19)
	.endif

	@ data/maps/VictoryRoad_B2F/scripts.inc:55 VictoryRoad_B2F_Text_CarolineDefeat (+1 aliases)
	.globl gText_Rom_219D29
gText_Rom_219D29: @ 0x08219D29
	.string "ぜんぜん へばってないわ!$"
	.if (. - gText_Rom_219D29) > 0xe
	.error "gText_Rom_219D29 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_219D29) < 0xe
	.space 0xe - (. - gText_Rom_219D29)
	.endif

	@ data/maps/VictoryRoad_B2F/scripts.inc:58 VictoryRoad_B2F_Text_CarolinePostBattle
	.globl gText_Rom_219D37
gText_Rom_219D37: @ 0x08219D37
	.string "この チャンピオンロードも\nポケモンリーグも ながちょうば!\lたいりょくには ちゅうい してね!$"
	.if (. - gText_Rom_219D37) > 0x31
	.error "gText_Rom_219D37 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_219D37) < 0x31
	.space 0x31 - (. - gText_Rom_219D37)
	.endif

	@ data/maps/VictoryRoad_B2F/scripts.inc:61 VictoryRoad_B2F_Text_JulieIntro (+1 aliases)
	.globl gText_Rom_219D68
gText_Rom_219D68: @ 0x08219D68
	.string "ジムバッジを たくさん もってるからって\nゆだん しないでよ\lうえには うえが いるんだから!$"
	.if (. - gText_Rom_219D68) > 0x30
	.error "gText_Rom_219D68 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_219D68) < 0x30
	.space 0x30 - (. - gText_Rom_219D68)
	.endif

	@ data/maps/VictoryRoad_B2F/scripts.inc:64 VictoryRoad_B2F_Text_JulieDefeat (+1 aliases)
	.globl gText_Rom_219D98
gText_Rom_219D98: @ 0x08219D98
	.string "あなたの ほうが うえね!$"
	.if (. - gText_Rom_219D98) > 0xe
	.error "gText_Rom_219D98 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_219D98) < 0xe
	.space 0xe - (. - gText_Rom_219D98)
	.endif

	@ data/maps/VictoryRoad_B2F/scripts.inc:67 VictoryRoad_B2F_Text_JuliePostBattle
	.globl gText_Rom_219DA6
gText_Rom_219DA6: @ 0x08219DA6
	.string "じぶんの あつめた ジムバッジを みて\nいままでの トレーナーを おもいだすのよ$"
	.if (. - gText_Rom_219DA6) > 0x29
	.error "gText_Rom_219DA6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_219DA6) < 0x29
	.space 0x29 - (. - gText_Rom_219DA6)
	.endif

	@ data/maps/VictoryRoad_B2F/scripts.inc:70 VictoryRoad_B2F_Text_FelixIntro (+1 aliases)
	.globl gText_Rom_219DCF
gText_Rom_219DCF: @ 0x08219DCF
	.string "ここまで きて\nきんちょう して おなかが いたいんです!$"
	.if (. - gText_Rom_219DCF) > 0x1e
	.error "gText_Rom_219DCF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_219DCF) < 0x1e
	.space 0x1e - (. - gText_Rom_219DCF)
	.endif

	@ data/maps/VictoryRoad_B2F/scripts.inc:73 VictoryRoad_B2F_Text_FelixDefeat (+1 aliases)
	.globl gText_Rom_219DED
gText_Rom_219DED: @ 0x08219DED
	.string "ああ\n……いたい$"
	.if (. - gText_Rom_219DED) > 0x9
	.error "gText_Rom_219DED may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_219DED) < 0x9
	.space 0x9 - (. - gText_Rom_219DED)
	.endif

	@ data/maps/VictoryRoad_B2F/scripts.inc:76 VictoryRoad_B2F_Text_FelixPostBattle
	.globl gText_Rom_219DF6
gText_Rom_219DF6: @ 0x08219DF6
	.string "もうすぐ ポケモンリーグと おもうと\nきんちょう して きんちょう して!\lみため ごまかすのが せいいっぱい です$"
	.if (. - gText_Rom_219DF6) > 0x3b
	.error "gText_Rom_219DF6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_219DF6) < 0x3b
	.space 0x3b - (. - gText_Rom_219DF6)
	.endif

	@ data/maps/VictoryRoad_B2F/scripts.inc:79 VictoryRoad_B2F_Text_DianneIntro (+1 aliases)
	.globl gText_Rom_219E31
gText_Rom_219E31: @ 0x08219E31
	.string "エリート ちゅうの エリートが あつまる\nこの どうくつは どうかしら?$"
	.if (. - gText_Rom_219E31) > 0x25
	.error "gText_Rom_219E31 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_219E31) < 0x25
	.space 0x25 - (. - gText_Rom_219E31)
	.endif

	@ data/maps/VictoryRoad_B2F/scripts.inc:82 VictoryRoad_B2F_Text_DianneDefeat (+1 aliases)
	.globl gText_Rom_219E56
gText_Rom_219E56: @ 0x08219E56
	.string "ぜんぜん どうじて いないわ……!$"
	.if (. - gText_Rom_219E56) > 0x12
	.error "gText_Rom_219E56 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_219E56) < 0x12
	.space 0x12 - (. - gText_Rom_219E56)
	.endif

	@ data/maps/VictoryRoad_B2F/scripts.inc:85 VictoryRoad_B2F_Text_DiannePostBattle
	.globl gText_Rom_219E68
gText_Rom_219E68: @ 0x08219E68
	.string "あなた どきょうが あるのね\nきにいったわ がんばって!$"
	.if (. - gText_Rom_219E68) > 0x1d
	.error "gText_Rom_219E68 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_219E68) < 0x1d
	.space 0x1d - (. - gText_Rom_219E68)
	.endif
	.incbin "baserom.gba", 0x219e85, 0x431

	@ field-script:0x21A28A FieldScriptText_21A2B6
	.globl gText_Rom_21A2B6
gText_Rom_21A2B6: @ 0x0821A2B6
	.string "このあたりは　からだが　ひえきって\nしゅぎょう　するのも　ままならぬ……\pだが　きあいが　あれば　だいじょうぶッ！\pおぬしも　この　きあいのハチマキで\nさむさに　たえてみせるのだッ！$"
	.if (. - gText_Rom_21A2B6) > 0x5c
	.error "gText_Rom_21A2B6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21A2B6) < 0x5c
	.space 0x5c - (. - gText_Rom_21A2B6)
	.endif

	@ field-script:0x21A2AE FieldScriptText_21A312
	.globl gText_Rom_21A312
gText_Rom_21A312: @ 0x0821A312
	.string "なにごとも　きあい　なのだーッ！！$"
	.if (. - gText_Rom_21A312) > 0x12
	.error "gText_Rom_21A312 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21A312) < 0x12
	.space 0x12 - (. - gText_Rom_21A312)
	.endif
	.incbin "baserom.gba", 0x21a324, 0xd7

	@ field-script:0x21A385 FieldScriptText_21A3FB
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_21A3FB
gText_Rom_21A3FB: @ 0x0821A3FB
	.string "とびらは　しまっている$"
	.if (. - gText_Rom_21A3FB) != 0xc
	.error "gText_Rom_21A3FB must retain its original byte length"
	.endif
	.globl gText_Rom_21A403
	.set gText_Rom_21A403, gText_Rom_21A3FB + 0x8

	@ field-script:0x21A39D FieldScriptText_21A407
	.globl gText_Rom_21A407
gText_Rom_21A407: @ 0x0821A407
	.string "ちかのカギを　つかいますか？$"
	.if (. - gText_Rom_21A407) > 0xf
	.error "gText_Rom_21A407 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21A407) < 0xf
	.space 0xf - (. - gText_Rom_21A407)
	.endif

	@ field-script:0x21A3B0 FieldScriptText_21A416
	.globl gText_Rom_21A416
gText_Rom_21A416: @ 0x0821A416
	.string "{0xFD}{0x01}は\nちかのカギを　つかった！\pとびらは　ひらいた！$"
	.if (. - gText_Rom_21A416) > 0x1c
	.error "gText_Rom_21A416 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21A416) < 0x1c
	.space 0x1c - (. - gText_Rom_21A416)
	.endif

	.incbin "baserom.gba", 0x21a432, 0x3da

	setwildbattle SPECIES_VOLTORB, 25, ITEM_NONE

	.incbin "baserom.gba", 0x21a812, 0x47

	setwildbattle SPECIES_VOLTORB, 25, ITEM_NONE

	.incbin "baserom.gba", 0x21a85f, 0x47

	setwildbattle SPECIES_VOLTORB, 25, ITEM_NONE

	.incbin "baserom.gba", 0x21a8ac, 0x45

	@ field-script:0x21A7F8 FieldScriptText_21A8F1
	.globl gText_Rom_21A8F1
gText_Rom_21A8F1: @ 0x0821A8F1
	.string "はつでんそうちに　ちかづいた　だけで\nねっきが　つたわってくる！\pはやく　とめたほうが　よさそうだ$"
	.if (. - gText_Rom_21A8F1) > 0x32
	.error "gText_Rom_21A8F1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21A8F1) < 0x32
	.space 0x32 - (. - gText_Rom_21A8F1)
	.endif

	@ field-script:0x21A802 FieldScriptText_21A923
	.globl gText_Rom_21A923
gText_Rom_21A923: @ 0x0821A923
	.string "はつでんそうちは　しずかに　なった$"
	.if (. - gText_Rom_21A923) > 0x12
	.error "gText_Rom_21A923 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21A923) < 0x12
	.space 0x12 - (. - gText_Rom_21A923)
	.endif

	@ field-script:0x21A783 FieldScriptText_21A935
	.globl gText_Rom_21A935
gText_Rom_21A935: @ 0x0821A935
	.string "{0xFD}{0x01}は\nスイッチを　ふんだ！\p……ポチッとな！\p……　……　……\n……　……　……\pはつでんそうち　は\nとまった　ようだ$"
	.if (. - gText_Rom_21A935) > 0x3d
	.error "gText_Rom_21A935 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21A935) < 0x3d
	.space 0x3d - (. - gText_Rom_21A935)
	.endif
	.incbin "baserom.gba", 0x21a972, 0x2b

	@ data/maps/AbandonedShip_Corridors_1F/scripts.inc:13 AbandonedShip_Corridors_1F_Text_CharlieIntro (+1 aliases)
	.globl gText_Rom_21A99D
gText_Rom_21A99D: @ 0x0821A99D
	.string "ふねの なかでも\nうきわ もっていたら おかしい?$"
	.if (. - gText_Rom_21A99D) > 0x1a
	.error "gText_Rom_21A99D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21A99D) < 0x1a
	.space 0x1a - (. - gText_Rom_21A99D)
	.endif

	@ data/maps/AbandonedShip_Corridors_1F/scripts.inc:16 AbandonedShip_Corridors_1F_Text_CharlieDefeat (+1 aliases)
	.globl gText_Rom_21A9B7
gText_Rom_21A9B7: @ 0x0821A9B7
	.string "うわぁ つよーい!$"
	.if (. - gText_Rom_21A9B7) > 0xa
	.error "gText_Rom_21A9B7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21A9B7) < 0xa
	.space 0xa - (. - gText_Rom_21A9B7)
	.endif

	@ data/maps/AbandonedShip_Corridors_1F/scripts.inc:19 AbandonedShip_Corridors_1F_Text_CharliePostBattle
	.globl gText_Rom_21A9C1
gText_Rom_21A9C1: @ 0x0821A9C1
	.string "うきわを もったままだと\nモンスターボール なげにくいよ$"
	.if (. - gText_Rom_21A9C1) > 0x1d
	.error "gText_Rom_21A9C1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21A9C1) < 0x1d
	.space 0x1d - (. - gText_Rom_21A9C1)
	.endif

	@ data/maps/AbandonedShip_Corridors_1F/scripts.inc:22 AbandonedShip_Corridors_1F_Text_IsntItFunHere
	.globl gText_Rom_21A9DE
gText_Rom_21A9DE: @ 0x0821A9DE
	.string "ここって おもしろいね!\nいるだけで ワクワク してくるよ!$"
	.if (. - gText_Rom_21A9DE) > 0x1f
	.error "gText_Rom_21A9DE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21A9DE) < 0x1f
	.space 0x1f - (. - gText_Rom_21A9DE)
	.endif
	.incbin "baserom.gba", 0x21a9fd, 0x83

	@ data/maps/AbandonedShip_Rooms_1F/scripts.inc:34 AbandonedShip_Rooms_1F_Text_TakingALookAround
	.globl gText_Rom_21AA80
gText_Rom_21AA80: @ 0x0821AA80
	.string "こういった ふねは めずらしいので\nけんがく しておるのですよ\pフムフム……\nほかにも へやが ありそうですな$"
	.if (. - gText_Rom_21AA80) > 0x38
	.error "gText_Rom_21AA80 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21AA80) < 0x38
	.space 0x38 - (. - gText_Rom_21AA80)
	.endif

	@ data/maps/AbandonedShip_Rooms_1F/scripts.inc:37 AbandonedShip_Rooms_1F_Text_ThaliaIntro (+1 aliases)
	.globl gText_Rom_21AAB8
gText_Rom_21AAB8: @ 0x0821AAB8
	.string "あら こんな ところまで きて\nキミも ものずきね!$"
	.if (. - gText_Rom_21AAB8) > 0x1b
	.error "gText_Rom_21AAB8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21AAB8) < 0x1b
	.space 0x1b - (. - gText_Rom_21AAB8)
	.endif

	@ data/maps/AbandonedShip_Rooms_1F/scripts.inc:40 AbandonedShip_Rooms_1F_Text_ThaliaDefeat (+1 aliases)
	.globl gText_Rom_21AAD3
gText_Rom_21AAD3: @ 0x0821AAD3
	.string "ものずき だけじゃ なくて\nつよいのか……$"
	.if (. - gText_Rom_21AAD3) > 0x16
	.error "gText_Rom_21AAD3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21AAD3) < 0x16
	.space 0x16 - (. - gText_Rom_21AAD3)
	.endif

	@ data/maps/AbandonedShip_Rooms_1F/scripts.inc:43 AbandonedShip_Rooms_1F_Text_ThaliaPostBattle
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_21AAE9
gText_Rom_21AAE9: @ 0x0821AAE9
	.string "となりのへやの おじさん\nけんがく だなんて あやしいわ\pわたしに きが あるんじゃない かしら$"
	.if (. - gText_Rom_21AAE9) != 0x31
	.error "gText_Rom_21AAE9 must retain its original byte length"
	.endif
	.globl gText_Rom_21AB16
	.set gText_Rom_21AB16, gText_Rom_21AAE9 + 0x2d

	@ data/maps/AbandonedShip_Rooms_1F/scripts.inc:46 AbandonedShip_Rooms_1F_Text_ThaliaRegister
	.globl gText_Rom_21AB1A
gText_Rom_21AB1A: @ 0x0821AB1A
	.string "つよい トレーナーの キミを\nきねんに とうろく させて ちょうだいね!$"
	.if (. - gText_Rom_21AB1A) > 0x25
	.error "gText_Rom_21AB1A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21AB1A) < 0x25
	.space 0x25 - (. - gText_Rom_21AB1A)
	.endif

	@ data/maps/AbandonedShip_Rooms_1F/scripts.inc:49 AbandonedShip_Rooms_1F_Text_ThaliaRematchIntro (+1 aliases)
	.globl gText_Rom_21AB3F
gText_Rom_21AB3F: @ 0x0821AB3F
	.string "こんな ところまで なんども きて\nほんとに ものずきね キミって!$"
	.if (. - gText_Rom_21AB3F) > 0x23
	.error "gText_Rom_21AB3F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21AB3F) < 0x23
	.space 0x23 - (. - gText_Rom_21AB3F)
	.endif

	@ data/maps/AbandonedShip_Rooms_1F/scripts.inc:52 AbandonedShip_Rooms_1F_Text_ThaliaRematchDefeat (+1 aliases)
	.globl gText_Rom_21AB62
gText_Rom_21AB62: @ 0x0821AB62
	.string "ちょっと つよすぎない?$"
	.if (. - gText_Rom_21AB62) > 0xd
	.error "gText_Rom_21AB62 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21AB62) < 0xd
	.space 0xd - (. - gText_Rom_21AB62)
	.endif

	@ data/maps/AbandonedShip_Rooms_1F/scripts.inc:55 AbandonedShip_Rooms_1F_Text_ThaliaPostRematch
	.globl gText_Rom_21AB6F
gText_Rom_21AB6F: @ 0x0821AB6F
	.string "あの おじさん ぜったい\nわたしの ことを みているのよ!\lわざとらしすぎるわ!$"
	.if (. - gText_Rom_21AB6F) > 0x29
	.error "gText_Rom_21AB6F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21AB6F) < 0x29
	.space 0x29 - (. - gText_Rom_21AB6F)
	.endif

	@ data/maps/AbandonedShip_Rooms_1F/scripts.inc:58 AbandonedShip_Rooms_1F_Text_DemetriusIntro (+1 aliases)
	.globl gText_Rom_21AB98
gText_Rom_21AB98: @ 0x0821AB98
	.string "わーっ!\nみつかった…… って あれ?$"
	.if (. - gText_Rom_21AB98) > 0x14
	.error "gText_Rom_21AB98 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21AB98) < 0x14
	.space 0x14 - (. - gText_Rom_21AB98)
	.endif

	@ data/maps/AbandonedShip_Rooms_1F/scripts.inc:61 AbandonedShip_Rooms_1F_Text_DemetriusDefeat (+1 aliases)
	.globl gText_Rom_21ABAC
gText_Rom_21ABAC: @ 0x0821ABAC
	.string "なんだ\nかあちゃん じゃ なかったのか$"
	.if (. - gText_Rom_21ABAC) > 0x14
	.error "gText_Rom_21ABAC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21ABAC) < 0x14
	.space 0x14 - (. - gText_Rom_21ABAC)
	.endif

	@ data/maps/AbandonedShip_Rooms_1F/scripts.inc:64 AbandonedShip_Rooms_1F_Text_DemetriusPostBattle
	.globl gText_Rom_21ABC0
gText_Rom_21ABC0: @ 0x0821ABC0
	.string "かあちゃんに しかられて\nここまで にげて きたんだ\lボクが ここに いるのは ないしょだぞ!$"
	.if (. - gText_Rom_21ABC0) > 0x30
	.error "gText_Rom_21ABC0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21ABC0) < 0x30
	.space 0x30 - (. - gText_Rom_21ABC0)
	.endif
	.incbin "baserom.gba", 0x21abf0, 0xa6

	@ data/maps/AbandonedShip_Corridors_B1F/scripts.inc:56 AbandonedShip_Corridors_B1F_Text_DuncanIntro (+1 aliases)
	.globl gText_Rom_21AC96
gText_Rom_21AC96: @ 0x0821AC96
	.string "ふなのりは ふねに のるとき\nかならず ポケモンを もっている!\lちょいと しょうぶ してくれ!$"
	.if (. - gText_Rom_21AC96) > 0x31
	.error "gText_Rom_21AC96 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21AC96) < 0x31
	.space 0x31 - (. - gText_Rom_21AC96)
	.endif

	@ data/maps/AbandonedShip_Corridors_B1F/scripts.inc:59 AbandonedShip_Corridors_B1F_Text_DuncanDefeat (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_21ACC7
gText_Rom_21ACC7: @ 0x0821ACC7
	.string "こりゃ まいった$"
	.if (. - gText_Rom_21ACC7) != 0x9
	.error "gText_Rom_21ACC7 must retain its original byte length"
	.endif
	.globl gText_Rom_21ACCB
	.set gText_Rom_21ACCB, gText_Rom_21ACC7 + 0x4

	@ data/maps/AbandonedShip_Corridors_B1F/scripts.inc:62 AbandonedShip_Corridors_B1F_Text_DuncanPostBattle
	.globl gText_Rom_21ACD0
gText_Rom_21ACD0: @ 0x0821ACD0
	.string "ふなぞこが みずの なかに\nしずんで いるんだよ\pポケモンが みずに もぐれる わざを\nつかえたら さきに すすめるんだがな……$"
	.if (. - gText_Rom_21ACD0) > 0x41
	.error "gText_Rom_21ACD0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21ACD0) < 0x41
	.space 0x41 - (. - gText_Rom_21ACD0)
	.endif

	@ data/maps/AbandonedShip_Corridors_B1F/scripts.inc:65 AbandonedShip_Corridors_B1F_Text_YayItsAShip
	.globl gText_Rom_21AD11
gText_Rom_21AD11: @ 0x0821AD11
	.string "わーい!\nふね だぞー!$"
	.if (. - gText_Rom_21AD11) > 0xd
	.error "gText_Rom_21AD11 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21AD11) < 0xd
	.space 0xd - (. - gText_Rom_21AD11)
	.endif

	@ data/maps/AbandonedShip_Corridors_B1F/scripts.inc:68 AbandonedShip_Corridors_B1F_Text_DoorIsLocked
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_21AD1E
gText_Rom_21AD1E: @ 0x0821AD1E
	.string "カギが かかっている\pとびらには そうこ と かかれている$"
	.if (. - gText_Rom_21AD1E) != 0x1e
	.error "gText_Rom_21AD1E must retain its original byte length"
	.endif
	.globl gText_Rom_21AD38
	.set gText_Rom_21AD38, gText_Rom_21AD1E + 0x1a

	@ data/maps/AbandonedShip_Corridors_B1F/scripts.inc:71 AbandonedShip_Corridors_B1F_Text_InsertedStorageKey
	.globl gText_Rom_21AD3C
gText_Rom_21AD3C: @ 0x0821AD3C
	.string "{PLAYER}は\nそうこのカギを つかった!\pさしこんだ カギは ぬけなくなったが\nとびらは ひらいた!$"
	.if (. - gText_Rom_21AD3C) > 0x30
	.error "gText_Rom_21AD3C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21AD3C) < 0x30
	.space 0x30 - (. - gText_Rom_21AD3C)
	.endif

	@ data/maps/AbandonedShip_Corridors_B1F/scripts.inc:74 AbandonedShip_Text_TheDoorIsOpen
	.globl gText_Rom_21AD6C
gText_Rom_21AD6C: @ 0x0821AD6C
	.string "とびらは あいている!$"
	.if (. - gText_Rom_21AD6C) > 0xc
	.error "gText_Rom_21AD6C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21AD6C) < 0xc
	.space 0xc - (. - gText_Rom_21AD6C)
	.endif
	.incbin "baserom.gba", 0x21ad78, 0x18

	@ data/maps/AbandonedShip_Rooms_B1F/scripts.inc:13 AbandonedShip_Rooms_B1F_Text_GettingQueasy
	.globl gText_Rom_21AD90
gText_Rom_21AD90: @ 0x0821AD90
	.string "うぅ……\pなんだか ふねの なかに いるだけで\nよってきちゃった……\pふねは ちっとも うごいてないのに……$"
	.if (. - gText_Rom_21AD90) > 0x37
	.error "gText_Rom_21AD90 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21AD90) < 0x37
	.space 0x37 - (. - gText_Rom_21AD90)
	.endif
	.incbin "baserom.gba", 0x21adc7, 0xa

	@ data/maps/AbandonedShip_Rooms2_B1F/scripts.inc:8 AbandonedShip_Rooms2_B1F_Text_PerfectPlaceToGoExploring
	.globl gText_Rom_21ADD1
gText_Rom_21ADD1: @ 0x0821ADD1
	.string "たんけんに ぴったりの ばしょだから\nなんだか わくわく してくるよ!\lきっと すっごい たからものが あるぜ!$"
	.if (. - gText_Rom_21ADD1) > 0x39
	.error "gText_Rom_21ADD1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21ADD1) < 0x39
	.space 0x39 - (. - gText_Rom_21ADD1)
	.endif
	.incbin "baserom.gba", 0x21ae0a, 0x107

	@ data/maps/AbandonedShip_Rooms2_1F/scripts.inc:52 AbandonedShip_Rooms2_1F_Text_DanIntro (+1 aliases)
	.globl gText_Rom_21AF11
gText_Rom_21AF11: @ 0x0821AF11
	.string "フミ『おたから さがしていたら\nトレーナー はっけん!$"
	.if (. - gText_Rom_21AF11) > 0x1c
	.error "gText_Rom_21AF11 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21AF11) < 0x1c
	.space 0x1c - (. - gText_Rom_21AF11)
	.endif

	@ data/maps/AbandonedShip_Rooms2_1F/scripts.inc:55 AbandonedShip_Rooms2_1F_Text_DanDefeat (+1 aliases)
	.globl gText_Rom_21AF2D
gText_Rom_21AF2D: @ 0x0821AF2D
	.string "フミ『ぼくたち ふたりの ちからでも\nかてなかったのか……$"
	.if (. - gText_Rom_21AF2D) > 0x1e
	.error "gText_Rom_21AF2D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21AF2D) < 0x1e
	.space 0x1e - (. - gText_Rom_21AF2D)
	.endif

	@ data/maps/AbandonedShip_Rooms2_1F/scripts.inc:58 AbandonedShip_Rooms2_1F_Text_DanPostBattle
	.globl gText_Rom_21AF4B
gText_Rom_21AF4B: @ 0x0821AF4B
	.string "フミ『おたから みつからないんだよね……\nもう だれかが もっていったのかな?$"
	.if (. - gText_Rom_21AF4B) > 0x28
	.error "gText_Rom_21AF4B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21AF4B) < 0x28
	.space 0x28 - (. - gText_Rom_21AF4B)
	.endif

	@ data/maps/AbandonedShip_Rooms2_1F/scripts.inc:61 AbandonedShip_Rooms2_1F_Text_DanNotEnoughMons (+2 aliases)
	.globl gText_Rom_21AF73
gText_Rom_21AF73: @ 0x0821AF73
	.string "フミ『ポケモン 2ひき いないんだね\nそれだと ぼくたちには かてないよ!$"
	.if (. - gText_Rom_21AF73) > 0x26
	.error "gText_Rom_21AF73 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21AF73) < 0x26
	.space 0x26 - (. - gText_Rom_21AF73)
	.endif

	@ data/maps/AbandonedShip_Rooms2_1F/scripts.inc:64 AbandonedShip_Rooms2_1F_Text_KiraIntro (+1 aliases)
	.globl gText_Rom_21AF99
gText_Rom_21AF99: @ 0x0821AF99
	.string "ナツ『あら? おたから さがしていたのに\nトレーナー はっけん しちゃった!$"
	.if (. - gText_Rom_21AF99) > 0x27
	.error "gText_Rom_21AF99 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21AF99) < 0x27
	.space 0x27 - (. - gText_Rom_21AF99)
	.endif

	@ data/maps/AbandonedShip_Rooms2_1F/scripts.inc:67 AbandonedShip_Rooms2_1F_Text_KiraDefeat (+1 aliases)
	.globl gText_Rom_21AFC0
gText_Rom_21AFC0: @ 0x0821AFC0
	.string "ナツ『つよいんだ!$"
	.if (. - gText_Rom_21AFC0) > 0xa
	.error "gText_Rom_21AFC0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21AFC0) < 0xa
	.space 0xa - (. - gText_Rom_21AFC0)
	.endif

	@ data/maps/AbandonedShip_Rooms2_1F/scripts.inc:70 AbandonedShip_Rooms2_1F_Text_KiraPostBattle
	.globl gText_Rom_21AFCA
gText_Rom_21AFCA: @ 0x0821AFCA
	.string "ナツ『おたから どこかな?\nみつかったら なに かおうか きめてるのよ!$"
	.if (. - gText_Rom_21AFCA) > 0x25
	.error "gText_Rom_21AFCA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21AFCA) < 0x25
	.space 0x25 - (. - gText_Rom_21AFCA)
	.endif

	@ data/maps/AbandonedShip_Rooms2_1F/scripts.inc:73 AbandonedShip_Rooms2_1F_Text_KiraNotEnoughMons (+2 aliases)
	.globl gText_Rom_21AFEF
gText_Rom_21AFEF: @ 0x0821AFEF
	.string "ナツ『あら ポケモン 2ひき いないの?\nじゃあ しょうぶは おあずけね!$"
	.if (. - gText_Rom_21AFEF) > 0x26
	.error "gText_Rom_21AFEF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21AFEF) < 0x26
	.space 0x26 - (. - gText_Rom_21AFEF)
	.endif

	@ data/maps/AbandonedShip_Rooms2_1F/scripts.inc:76 AbandonedShip_Rooms2_1F_Text_KiraRegister
	.globl gText_Rom_21B015
gText_Rom_21B015: @ 0x0821B015
	.string "ナツ『もう くやしいな!\nあなたなんて とうろく しちゃうんだから!$"
	.if (. - gText_Rom_21B015) > 0x23
	.error "gText_Rom_21B015 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21B015) < 0x23
	.space 0x23 - (. - gText_Rom_21B015)
	.endif

	@ data/maps/AbandonedShip_Rooms2_1F/scripts.inc:79 AbandonedShip_Rooms2_1F_Text_DanRematchIntro (+1 aliases)
	.globl gText_Rom_21B038
gText_Rom_21B038: @ 0x0821B038
	.string "フミ『ずっと おたから さがしていて\nポケモンも つよく なったんだよねー!\lちょっと あいて してみてよ$"
	.if (. - gText_Rom_21B038) > 0x36
	.error "gText_Rom_21B038 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21B038) < 0x36
	.space 0x36 - (. - gText_Rom_21B038)
	.endif

	@ data/maps/AbandonedShip_Rooms2_1F/scripts.inc:82 AbandonedShip_Rooms2_1F_Text_DanRematchDefeat (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_21B06E
gText_Rom_21B06E: @ 0x0821B06E
	.string "フミ『あいかわらず つよいな!$"
	.if (. - gText_Rom_21B06E) != 0x10
	.error "gText_Rom_21B06E must retain its original byte length"
	.endif
	.globl gText_Rom_21B071
	.set gText_Rom_21B071, gText_Rom_21B06E + 0x3

	@ data/maps/AbandonedShip_Rooms2_1F/scripts.inc:85 AbandonedShip_Rooms2_1F_Text_DanPostRematch
	.globl gText_Rom_21B07E
gText_Rom_21B07E: @ 0x0821B07E
	.string "フミ『おたからは みつからないし\nポケモンは まけるし いえに かえりたいよ\pでも そんなこと いうと\nかのじょ おこりだすからな……$"
	.if (. - gText_Rom_21B07E) > 0x44
	.error "gText_Rom_21B07E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21B07E) < 0x44
	.space 0x44 - (. - gText_Rom_21B07E)
	.endif

	@ data/maps/AbandonedShip_Rooms2_1F/scripts.inc:61 AbandonedShip_Rooms2_1F_Text_DanNotEnoughMons (+2 aliases)
	.globl gText_Rom_21B0C2
gText_Rom_21B0C2: @ 0x0821B0C2
	.string "フミ『ポケモン 2ひき いないんだね\nそれだと ぼくたちには かてないよ!$"
	.if (. - gText_Rom_21B0C2) > 0x26
	.error "gText_Rom_21B0C2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21B0C2) < 0x26
	.space 0x26 - (. - gText_Rom_21B0C2)
	.endif

	@ data/maps/AbandonedShip_Rooms2_1F/scripts.inc:91 AbandonedShip_Rooms2_1F_Text_KiraRematchIntro (+1 aliases)
	.globl gText_Rom_21B0E8
gText_Rom_21B0E8: @ 0x0821B0E8
	.string "ナツ『あら? また であったわね!\nあたしたちと いっしょで あきらめずに\lおたから さがしているのね!\pしょうぶして まけた ほうは\nあきらめることに しない?$"
	.if (. - gText_Rom_21B0E8) > 0x52
	.error "gText_Rom_21B0E8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21B0E8) < 0x52
	.space 0x52 - (. - gText_Rom_21B0E8)
	.endif

	@ data/maps/AbandonedShip_Rooms2_1F/scripts.inc:94 AbandonedShip_Rooms2_1F_Text_KiraRematchDefeat (+1 aliases)
	.globl gText_Rom_21B13A
gText_Rom_21B13A: @ 0x0821B13A
	.string "ナツ『また まけちゃった……$"
	.if (. - gText_Rom_21B13A) > 0xf
	.error "gText_Rom_21B13A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21B13A) < 0xf
	.space 0xf - (. - gText_Rom_21B13A)
	.endif

	@ data/maps/AbandonedShip_Rooms2_1F/scripts.inc:97 AbandonedShip_Rooms2_1F_Text_KiraPostRematch
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_21B149
gText_Rom_21B149: @ 0x0821B149
	.string "ナツ『もっと ポケモン そだてて\nおたから みつけるまで かえらないわよ!$"
	.if (. - gText_Rom_21B149) != 0x26
	.error "gText_Rom_21B149 must retain its original byte length"
	.endif
	.globl gText_Rom_21B16B
	.set gText_Rom_21B16B, gText_Rom_21B149 + 0x22

	@ data/maps/AbandonedShip_Rooms2_1F/scripts.inc:73 AbandonedShip_Rooms2_1F_Text_KiraNotEnoughMons (+2 aliases)
	.globl gText_Rom_21B16F
gText_Rom_21B16F: @ 0x0821B16F
	.string "ナツ『あら ポケモン 2ひき いないの?\nじゃあ しょうぶは おあずけね!$"
	.if (. - gText_Rom_21B16F) > 0x26
	.error "gText_Rom_21B16F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21B16F) < 0x26
	.space 0x26 - (. - gText_Rom_21B16F)
	.endif

	@ data/maps/AbandonedShip_Rooms2_1F/scripts.inc:103 AbandonedShip_Rooms2_1F_Text_JaniIntro (+1 aliases)
	.globl gText_Rom_21B195
gText_Rom_21B195: @ 0x0821B195
	.string "およぐの ヘタだけど\nしょうぶは つよいもーん$"
	.if (. - gText_Rom_21B195) > 0x18
	.error "gText_Rom_21B195 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21B195) < 0x18
	.space 0x18 - (. - gText_Rom_21B195)
	.endif

	@ data/maps/AbandonedShip_Rooms2_1F/scripts.inc:106 AbandonedShip_Rooms2_1F_Text_JaniDefeat (+1 aliases)
	.globl gText_Rom_21B1AD
gText_Rom_21B1AD: @ 0x0821B1AD
	.string "あれ だめだったかあ$"
	.if (. - gText_Rom_21B1AD) > 0xb
	.error "gText_Rom_21B1AD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21B1AD) < 0xb
	.space 0xb - (. - gText_Rom_21B1AD)
	.endif

	@ data/maps/AbandonedShip_Rooms2_1F/scripts.inc:109 AbandonedShip_Rooms2_1F_Text_JaniPostBattle
	.globl gText_Rom_21B1B8
gText_Rom_21B1B8: @ 0x0821B1B8
	.string "ふねの なかを はだしで あるくと\nちょっと きもちわるいなあ$"
	.if (. - gText_Rom_21B1B8) > 0x20
	.error "gText_Rom_21B1B8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21B1B8) < 0x20
	.space 0x20 - (. - gText_Rom_21B1B8)
	.endif

	@ data/maps/AbandonedShip_Rooms2_1F/scripts.inc:112 AbandonedShip_Rooms2_1F_Text_GarrisonIntro (+1 aliases)
	.globl gText_Rom_21B1D8
gText_Rom_21B1D8: @ 0x0821B1D8
	.string "つよさも やさしさも\nこれ トレーナーの たから!$"
	.if (. - gText_Rom_21B1D8) > 0x1a
	.error "gText_Rom_21B1D8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21B1D8) < 0x1a
	.space 0x1a - (. - gText_Rom_21B1D8)
	.endif

	@ data/maps/AbandonedShip_Rooms2_1F/scripts.inc:115 AbandonedShip_Rooms2_1F_Text_GarrisonDefeat (+1 aliases)
	.globl gText_Rom_21B1F2
gText_Rom_21B1F2: @ 0x0821B1F2
	.string "おお あなたには\nキラリと ひかるものが あるな$"
	.if (. - gText_Rom_21B1F2) > 0x19
	.error "gText_Rom_21B1F2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21B1F2) < 0x19
	.space 0x19 - (. - gText_Rom_21B1F2)
	.endif

	@ data/maps/AbandonedShip_Rooms2_1F/scripts.inc:118 AbandonedShip_Rooms2_1F_Text_GarrisonPostBattle
	.globl gText_Rom_21B20B
gText_Rom_21B20B: @ 0x0821B20B
	.string "ふねの どこかの へやに\nキラリと ひかるものが あったんだが……$"
	.if (. - gText_Rom_21B20B) > 0x22
	.error "gText_Rom_21B20B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21B20B) < 0x22
	.space 0x22 - (. - gText_Rom_21B20B)
	.endif
	.incbin "baserom.gba", 0x21b22d, 0x43

	@ data/maps/AbandonedShip_CaptainsOffice/scripts.inc:25 AbandonedShip_CaptainsOffice_Text_NoSuccessFindingScanner
	.globl gText_Rom_21B270
gText_Rom_21B270: @ 0x0821B270
	.string "クスノキ かんちょうに たのまれてね\nこのふねの ちょうさを しているんだ\pついでに たんちきを さがしてきて\nほしいって いわれたんだけど\lみあたらないなあ……$"
	.if (. - gText_Rom_21B270) > 0x52
	.error "gText_Rom_21B270 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21B270) < 0x52
	.space 0x52 - (. - gText_Rom_21B270)
	.endif

	@ data/maps/AbandonedShip_CaptainsOffice/scripts.inc:28 AbandonedShip_CaptainsOffice_Text_OhCanYouDeliverScanner
	.globl gText_Rom_21B2C2
gText_Rom_21B2C2: @ 0x0821B2C2
	.string "あ! たんちき じゃないか!\p……よかったら それ\nクスノキ かんちょうに\lわたしてきて くれないかなあ\pもうすこし このふね しらべたいんだ$"
	.if (. - gText_Rom_21B2C2) > 0x48
	.error "gText_Rom_21B2C2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21B2C2) < 0x48
	.space 0x48 - (. - gText_Rom_21B2C2)
	.endif

	@ data/maps/AbandonedShip_CaptainsOffice/scripts.inc:31 AbandonedShip_CaptainsOffice_Text_ThisIsSSCactus
	.globl gText_Rom_21B30A
gText_Rom_21B30A: @ 0x0821B30A
	.string "この ふねは カクタスごうと いってね\nちょいと むかしの ふね らしいんだ$"
	.if (. - gText_Rom_21B30A) > 0x27
	.error "gText_Rom_21B30A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21B30A) < 0x27
	.space 0x27 - (. - gText_Rom_21B30A)
	.endif
	.incbin "baserom.gba", 0x21b331, 0x1ca

	@ data/maps/AbandonedShip_HiddenFloorCorridors/scripts.inc:134 AbandonedShip_HiddenFloorCorridors_Text_Rm1DoorIsLocked
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_21B4FB
gText_Rom_21B4FB: @ 0x0821B4FB
	.string "カギが かかっている\pとびらには 1ごうしつと かかれている$"
	.if (. - gText_Rom_21B4FB) != 0x1f
	.error "gText_Rom_21B4FB must retain its original byte length"
	.endif
	.globl gText_Rom_21B516
	.set gText_Rom_21B516, gText_Rom_21B4FB + 0x1b

	@ data/maps/AbandonedShip_HiddenFloorCorridors/scripts.inc:137 AbandonedShip_HiddenFloorCorridors_Text_Rm2DoorIsLocked
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_21B51A
gText_Rom_21B51A: @ 0x0821B51A
	.string "カギが かかっている\pとびらには 2ごうしつと かかれている$"
	.if (. - gText_Rom_21B51A) != 0x1f
	.error "gText_Rom_21B51A must retain its original byte length"
	.endif
	.globl gText_Rom_21B535
	.set gText_Rom_21B535, gText_Rom_21B51A + 0x1b

	@ data/maps/AbandonedShip_HiddenFloorCorridors/scripts.inc:140 AbandonedShip_HiddenFloorCorridors_Text_Rm4DoorIsLocked
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_21B539
gText_Rom_21B539: @ 0x0821B539
	.string "カギが かかっている\pとびらには 4ごうしつと かかれている$"
	.if (. - gText_Rom_21B539) != 0x1f
	.error "gText_Rom_21B539 must retain its original byte length"
	.endif
	.globl gText_Rom_21B554
	.set gText_Rom_21B554, gText_Rom_21B539 + 0x1b

	@ data/maps/AbandonedShip_HiddenFloorCorridors/scripts.inc:143 AbandonedShip_HiddenFloorCorridors_Text_Rm6DoorIsLocked
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_21B558
gText_Rom_21B558: @ 0x0821B558
	.string "カギが かかっている\pとびらには 6ごうしつと かかれている$"
	.if (. - gText_Rom_21B558) != 0x1f
	.error "gText_Rom_21B558 must retain its original byte length"
	.endif
	.globl gText_Rom_21B573
	.set gText_Rom_21B573, gText_Rom_21B558 + 0x1b

	@ data/maps/AbandonedShip_HiddenFloorCorridors/scripts.inc:146 AbandonedShip_HiddenFloorCorridors_Text_InsertedKey
	.globl gText_Rom_21B577
gText_Rom_21B577: @ 0x0821B577
	.string "{PLAYER}は\nカギを つかった!\pさしこんだ カギは ぬけなくなったが\nとびらは ひらいた!$"
	.if (. - gText_Rom_21B577) > 0x2c
	.error "gText_Rom_21B577 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21B577) < 0x2c
	.space 0x2c - (. - gText_Rom_21B577)
	.endif
	.incbin "baserom.gba", 0x21b5a3, 0x1b5

	@ data/maps/AbandonedShip_HiddenFloorRooms/scripts.inc:114 AbandonedShip_HiddenFloorRooms_Text_BrightShinyTrash
	.globl gText_Rom_21B758
gText_Rom_21B758: @ 0x0821B758
	.string "ひかっているだけの\nただの ゴミ だった……$"
	.if (. - gText_Rom_21B758) > 0x17
	.error "gText_Rom_21B758 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21B758) < 0x17
	.space 0x17 - (. - gText_Rom_21B758)
	.endif
	.incbin "baserom.gba", 0x21b76f, 0x85

	.globl gUnknown_821B7F4
gUnknown_821B7F4: @ 0x0821B7F4
	.incbin "baserom.gba", 0x21b7f4, 0xb5

	setwildbattle SPECIES_REGICE, 40, ITEM_NONE

	.incbin "baserom.gba", 0x21b8af, 0xfc

	setwildbattle SPECIES_REGISTEEL, 40, ITEM_NONE

	.incbin "baserom.gba", 0x21b9b1, 0x38d

	.globl gUnknown_821BD3E
gUnknown_821BD3E: @ 0x0821BD3E
	.incbin "baserom.gba", 0x21bd3e, 0x9

	@ data/maps/SkyPillar_Outside/scripts.inc:139 SkyPillar_Outside_Text_DoorIsClosed (+1 aliases)
	.globl gText_Rom_21BD47
gText_Rom_21BD47: @ 0x0821BD47
	.string "とびらは とざされて いる!$"
	.if (. - gText_Rom_21BD47) > 0xf
	.error "gText_Rom_21BD47 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21BD47) < 0xf
	.space 0xf - (. - gText_Rom_21BD47)
	.endif

	@ data/maps/SkyPillar_Outside/scripts.inc:142 SkyPillar_Outside_Text_OpenedDoorToSkyPillar
	.globl gText_Rom_21BD56
gText_Rom_21BD56: @ 0x0821BD56
	.string "ミクリ『やっ ごめん ごめん!\pあんまり あわてた ものだから\nきみを おいてきて しまったよ!\pしまっていた そらのはしらの とびらは\nわたしが あけて おいた\p{PLAYER}{KUN} さあ いこう!$"
	.if (. - gText_Rom_21BD56) > 0x5f
	.error "gText_Rom_21BD56 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21BD56) < 0x5f
	.space 0x5f - (. - gText_Rom_21BD56)
	.endif

	@ data/maps/SkyPillar_Outside/scripts.inc:145 SkyPillar_Outside_Text_EarthquakeNotMomentToWaste
	.globl gText_Rom_21BDB5
gText_Rom_21BDB5: @ 0x0821BDB5
	.string "ミクリ『じしんだ!\pこうしては いられない\nさきを いそごう!$"
	.if (. - gText_Rom_21BDB5) > 0x20
	.error "gText_Rom_21BDB5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21BDB5) < 0x20
	.space 0x20 - (. - gText_Rom_21BDB5)
	.endif

	@ data/maps/SkyPillar_Outside/scripts.inc:148 SkyPillar_Outside_Text_SituationGettingWorse
	.globl gText_Rom_21BDD5
gText_Rom_21BDD5: @ 0x0821BDD5
	.string "ミクリ『うーむ じょうきょうは\nだんだん わるくなって きている……$"
	.if (. - gText_Rom_21BDD5) > 0x23
	.error "gText_Rom_21BDD5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21BDD5) < 0x23
	.space 0x23 - (. - gText_Rom_21BDD5)
	.endif

	@ data/maps/SkyPillar_Outside/scripts.inc:151 SkyPillar_Outside_Text_GotToGoBackForSootopolis
	.globl gText_Rom_21BDF8
gText_Rom_21BDF8: @ 0x0821BDF8
	.string "ミクリ『まずいな……\pてんこうの みだれが このあたりまで\nひろがり はじめている……\p{PLAYER}{KUN}\pここを のぼって いけば\nレックウザが いるはずだ\pわたしは まちのことが しんぱい だから\nさきに ルネまで もどっていよう!\pここは きみに まかせるから\nしっかり たのんだよ!$"
	.if (. - gText_Rom_21BDF8) > 0x8d
	.error "gText_Rom_21BDF8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21BDF8) < 0x8d
	.space 0x8d - (. - gText_Rom_21BDF8)
	.endif

	.incbin "baserom.gba", 0x21be85, 0x118

gRayquazaStaticEncounter::
	setwildbattle SPECIES_RAYQUAZA, 70, ITEM_NONE

	.incbin "baserom.gba", 0x21bfa3, 0x12d

	@ field-script:0x21C07D FieldScriptText_21C0D0
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_21C0D0
gText_Rom_21C0D0: @ 0x0821C0D0
	.string "めを　さました　レックウザは\nどこかへ　とんで　いって　しまった……$"
	.if (. - gText_Rom_21C0D0) != 0x23
	.error "gText_Rom_21C0D0 must retain its original byte length"
	.endif
	.globl gText_Rom_21C0D8
	.set gText_Rom_21C0D8, gText_Rom_21C0D0 + 0x8
	.incbin "baserom.gba", 0x21c0f3, 0x3a

	@ data/maps/MagmaHideout_1F/scripts.inc:19 MagmaHideout_1F_Text_Grunt1Intro (+1 aliases)
	.globl gText_Rom_21C12D
gText_Rom_21C12D: @ 0x0821C12D
	.string "マグマだんは ごうれいが かかったとき\nはやく せいれつした じゅんばんで\lじゅうような ばしょの\lけいびを まかせて もらえるんだぜ!\pオレが こんな すみっこに いるのは\nちこく ばっかり してるからさ!$"
	.if (. - gText_Rom_21C12D) > 0x69
	.error "gText_Rom_21C12D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21C12D) < 0x69
	.space 0x69 - (. - gText_Rom_21C12D)
	.endif

	@ data/maps/MagmaHideout_1F/scripts.inc:26 MagmaHideout_1F_Text_Grunt1Defeat (+1 aliases)
	.globl gText_Rom_21C196
gText_Rom_21C196: @ 0x0821C196
	.string "トレーニングにも ちこくする オレだ!\nわれながら よわいぜ……$"
	.if (. - gText_Rom_21C196) > 0x21
	.error "gText_Rom_21C196 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21C196) < 0x21
	.space 0x21 - (. - gText_Rom_21C196)
	.endif

	@ data/maps/MagmaHideout_1F/scripts.inc:31 MagmaHideout_1F_Text_Grunt1PostBattle
	.globl gText_Rom_21C1B7
gText_Rom_21C1B7: @ 0x0821C1B7
	.string "わかったよ こんどから もうすこし\nがんばって みるよ……$"
	.if (. - gText_Rom_21C1B7) > 0x1e
	.error "gText_Rom_21C1B7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21C1B7) < 0x1e
	.space 0x1e - (. - gText_Rom_21C1B7)
	.endif

	@ data/maps/MagmaHideout_1F/scripts.inc:35 MagmaHideout_1F_Text_Grunt2Intro (+1 aliases)
	.globl gText_Rom_21C1D5
gText_Rom_21C1D5: @ 0x0821C1D5
	.string "リーダーに いわれた とおり\nえんとつやまを どんどん ほっていたら\lとんでもねえモンが でちまった!\pなにが でたかって?\pふははは!\nオレを たおせたら おしえて やるよ!$"
	.if (. - gText_Rom_21C1D5) > 0x59
	.error "gText_Rom_21C1D5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21C1D5) < 0x59
	.space 0x59 - (. - gText_Rom_21C1D5)
	.endif

	@ data/maps/MagmaHideout_1F/scripts.inc:44 MagmaHideout_1F_Text_Grunt2Defeat (+1 aliases)
	.globl gText_Rom_21C22E
gText_Rom_21C22E: @ 0x0821C22E
	.string "むぐぅ…… たおされちまった!$"
	.if (. - gText_Rom_21C22E) > 0x10
	.error "gText_Rom_21C22E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21C22E) < 0x10
	.space 0x10 - (. - gText_Rom_21C22E)
	.endif

	@ data/maps/MagmaHideout_1F/scripts.inc:48 MagmaHideout_1F_Text_Grunt2PostBattle
	.globl gText_Rom_21C23E
gText_Rom_21C23E: @ 0x0821C23E
	.string "やっぱり おしえるの やーめた!\nどうせ おくまで いけば わかることさ!\pおまえも あとに おたのしみを\nのこして おいたほうが いいだろ?$"
	.if (. - gText_Rom_21C23E) > 0x48
	.error "gText_Rom_21C23E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21C23E) < 0x48
	.space 0x48 - (. - gText_Rom_21C23E)
	.endif
	.incbin "baserom.gba", 0x21c286, 0x5d

	@ data/maps/MagmaHideout_2F_1R/scripts.inc:24 MagmaHideout_2F_1R_Text_Grunt14Intro (+1 aliases)
	.globl gText_Rom_21C2E3
gText_Rom_21C2E3: @ 0x0821C2E3
	.string "むむむ!\pここに はいって これるのは\nマグマだんの メンバー だけのはず!\pなのに あなたは\nマグマだんの ふくを きていない……\pえーい あやしい やつめ!\nわたしと しょうぶ しなさい!$"
	.if (. - gText_Rom_21C2E3) > 0x61
	.error "gText_Rom_21C2E3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21C2E3) < 0x61
	.space 0x61 - (. - gText_Rom_21C2E3)
	.endif

	@ data/maps/MagmaHideout_2F_1R/scripts.inc:33 MagmaHideout_2F_1R_Text_Grunt14Defeat (+1 aliases)
	.globl gText_Rom_21C344
gText_Rom_21C344: @ 0x0821C344
	.string "あわわわ……\nマグマだんの プライドが……$"
	.if (. - gText_Rom_21C344) > 0x16
	.error "gText_Rom_21C344 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21C344) < 0x16
	.space 0x16 - (. - gText_Rom_21C344)
	.endif

	@ data/maps/MagmaHideout_2F_1R/scripts.inc:37 MagmaHideout_2F_1R_Text_Grunt14PostBattle
	.globl gText_Rom_21C35A
gText_Rom_21C35A: @ 0x0821C35A
	.string "さむがりの ひとは\nマグマだんに はいると いいわよ$"
	.if (. - gText_Rom_21C35A) > 0x1b
	.error "gText_Rom_21C35A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21C35A) < 0x1b
	.space 0x1b - (. - gText_Rom_21C35A)
	.endif

	@ data/maps/MagmaHideout_2F_1R/scripts.inc:41 MagmaHideout_2F_1R_Text_Grunt3Intro (+1 aliases)
	.globl gText_Rom_21C375
gText_Rom_21C375: @ 0x0821C375
	.string "こらこら!\pオレの めのまえを だまって\nすどおり させる わけには いかねーぞ!$"
	.if (. - gText_Rom_21C375) > 0x2a
	.error "gText_Rom_21C375 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21C375) < 0x2a
	.space 0x2a - (. - gText_Rom_21C375)
	.endif

	@ data/maps/MagmaHideout_2F_1R/scripts.inc:46 MagmaHideout_2F_1R_Text_Grunt3Defeat (+1 aliases)
	.globl gText_Rom_21C39F
gText_Rom_21C39F: @ 0x0821C39F
	.string "うはっ! まけましたっ!$"
	.if (. - gText_Rom_21C39F) > 0xd
	.error "gText_Rom_21C39F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21C39F) < 0xd
	.space 0xd - (. - gText_Rom_21C39F)
	.endif

	@ data/maps/MagmaHideout_2F_1R/scripts.inc:50 MagmaHideout_2F_1R_Text_Grunt3PostBattle
	.globl gText_Rom_21C3AC
gText_Rom_21C3AC: @ 0x0821C3AC
	.string "こんなことなら すどおり していって\nもらうほうが よかったかも……$"
	.if (. - gText_Rom_21C3AC) > 0x23
	.error "gText_Rom_21C3AC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21C3AC) < 0x23
	.space 0x23 - (. - gText_Rom_21C3AC)
	.endif

	@ data/maps/MagmaHideout_2F_1R/scripts.inc:54 MagmaHideout_2F_1R_Text_Grunt4Intro (+1 aliases)
	.globl gText_Rom_21C3CF
gText_Rom_21C3CF: @ 0x0821C3CF
	.string "やや! あやしい やつめ!$"
	.if (. - gText_Rom_21C3CF) > 0xe
	.error "gText_Rom_21C3CF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21C3CF) < 0xe
	.space 0xe - (. - gText_Rom_21C3CF)
	.endif

	@ data/maps/MagmaHideout_2F_1R/scripts.inc:58 MagmaHideout_2F_1R_Text_Grunt4Defeat (+1 aliases)
	.globl gText_Rom_21C3DD
gText_Rom_21C3DD: @ 0x0821C3DD
	.string "ぬおお……$"
	.if (. - gText_Rom_21C3DD) > 0x6
	.error "gText_Rom_21C3DD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21C3DD) < 0x6
	.space 0x6 - (. - gText_Rom_21C3DD)
	.endif

	@ data/maps/MagmaHideout_2F_1R/scripts.inc:61 MagmaHideout_2F_1R_Text_Grunt4PostBattle
	.globl gText_Rom_21C3E3
gText_Rom_21C3E3: @ 0x0821C3E3
	.string "しょうぶに まけたのに\nまだ ここを ぐるぐる まわる\lひつようが あるんだろうか?$"
	.if (. - gText_Rom_21C3E3) > 0x2b
	.error "gText_Rom_21C3E3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21C3E3) < 0x2b
	.space 0x2b - (. - gText_Rom_21C3E3)
	.endif

	@ data/maps/MagmaHideout_2F_1R/scripts.inc:66 MagmaHideout_2F_1R_Text_Grunt5Intro (+1 aliases)
	.globl gText_Rom_21C40E
gText_Rom_21C40E: @ 0x0821C40E
	.string "むむ! あやしい やつめ!$"
	.if (. - gText_Rom_21C40E) > 0xe
	.error "gText_Rom_21C40E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21C40E) < 0xe
	.space 0xe - (. - gText_Rom_21C40E)
	.endif

	@ data/maps/MagmaHideout_2F_1R/scripts.inc:70 MagmaHideout_2F_1R_Text_Grunt5Defeat (+1 aliases)
	.globl gText_Rom_21C41C
gText_Rom_21C41C: @ 0x0821C41C
	.string "うぬぬ……$"
	.if (. - gText_Rom_21C41C) > 0x6
	.error "gText_Rom_21C41C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21C41C) < 0x6
	.space 0x6 - (. - gText_Rom_21C41C)
	.endif

	@ data/maps/MagmaHideout_2F_1R/scripts.inc:73 MagmaHideout_2F_1R_Text_Grunt5PostBattle
	.globl gText_Rom_21C422
gText_Rom_21C422: @ 0x0821C422
	.string "オレ ほんとは ポケモンしょうぶ\nあんまり とくいじゃ ないんだよね$"
	.if (. - gText_Rom_21C422) > 0x23
	.error "gText_Rom_21C422 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21C422) < 0x23
	.space 0x23 - (. - gText_Rom_21C422)
	.endif
	.incbin "baserom.gba", 0x21c445, 0x5d

	@ data/maps/MagmaHideout_2F_2R/scripts.inc:24 MagmaHideout_2F_2R_Text_Grunt15Intro (+1 aliases)
	.globl gText_Rom_21C4A2
gText_Rom_21C4A2: @ 0x0821C4A2
	.string "あなたに うらみは ないけど\nこれも めいれい だからね!$"
	.if (. - gText_Rom_21C4A2) > 0x1e
	.error "gText_Rom_21C4A2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21C4A2) < 0x1e
	.space 0x1e - (. - gText_Rom_21C4A2)
	.endif

	@ data/maps/MagmaHideout_2F_2R/scripts.inc:28 MagmaHideout_2F_2R_Text_Grunt15Defeat (+1 aliases)
	.globl gText_Rom_21C4C0
gText_Rom_21C4C0: @ 0x0821C4C0
	.string "わたしは まけたけど……$"
	.if (. - gText_Rom_21C4C0) > 0xd
	.error "gText_Rom_21C4C0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21C4C0) < 0xd
	.space 0xd - (. - gText_Rom_21C4C0)
	.endif

	@ data/maps/MagmaHideout_2F_2R/scripts.inc:31 MagmaHideout_2F_2R_Text_Grunt15PostBattle
	.globl gText_Rom_21C4CD
gText_Rom_21C4CD: @ 0x0821C4CD
	.string "とんでもないものを ほりだした!\nあいいろのたまも てにいれた!\pあとは リーダーが……\nふふふ…… ふはははは!$"
	.if (. - gText_Rom_21C4CD) > 0x3a
	.error "gText_Rom_21C4CD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21C4CD) < 0x3a
	.space 0x3a - (. - gText_Rom_21C4CD)
	.endif

	@ data/maps/MagmaHideout_2F_2R/scripts.inc:37 MagmaHideout_2F_2R_Text_Grunt6Intro (+1 aliases)
	.globl gText_Rom_21C507
gText_Rom_21C507: @ 0x0821C507
	.string "オレって あつがり なんだよ\nもしかして アクアだんに はいったほうが\lよかったのかな?$"
	.if (. - gText_Rom_21C507) > 0x2d
	.error "gText_Rom_21C507 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21C507) < 0x2d
	.space 0x2d - (. - gText_Rom_21C507)
	.endif

	@ data/maps/MagmaHideout_2F_2R/scripts.inc:41 MagmaHideout_2F_2R_Text_Grunt6Defeat (+1 aliases)
	.globl gText_Rom_21C534
gText_Rom_21C534: @ 0x0821C534
	.string "やっぱり オレ\nマグマだんには むいてないかも……$"
	.if (. - gText_Rom_21C534) > 0x1a
	.error "gText_Rom_21C534 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21C534) < 0x1a
	.space 0x1a - (. - gText_Rom_21C534)
	.endif

	@ data/maps/MagmaHideout_2F_2R/scripts.inc:45 MagmaHideout_2F_2R_Text_Grunt6PostBattle
	.globl gText_Rom_21C54E
gText_Rom_21C54E: @ 0x0821C54E
	.string "こんなところに いると\nうみが こいしく なったり しないか?$"
	.if (. - gText_Rom_21C54E) > 0x20
	.error "gText_Rom_21C54E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21C54E) < 0x20
	.space 0x20 - (. - gText_Rom_21C54E)
	.endif

	@ data/maps/MagmaHideout_2F_2R/scripts.inc:49 MagmaHideout_2F_2R_Text_Grunt7Intro (+1 aliases)
	.globl gText_Rom_21C56E
gText_Rom_21C56E: @ 0x0821C56E
	.string "ときどき じひびきが きこえるんだよ\pそれって かざんの しんどう かな?\nそれとも グラ……\pおっとっと なんでもないよ!$"
	.if (. - gText_Rom_21C56E) > 0x3f
	.error "gText_Rom_21C56E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21C56E) < 0x3f
	.space 0x3f - (. - gText_Rom_21C56E)
	.endif

	@ data/maps/MagmaHideout_2F_2R/scripts.inc:56 MagmaHideout_2F_2R_Text_Grunt7Defeat (+1 aliases)
	.globl gText_Rom_21C5AD
gText_Rom_21C5AD: @ 0x0821C5AD
	.string "うーむ\nかざんのように あついな きみは!$"
	.if (. - gText_Rom_21C5AD) > 0x16
	.error "gText_Rom_21C5AD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21C5AD) < 0x16
	.space 0x16 - (. - gText_Rom_21C5AD)
	.endif

	@ data/maps/MagmaHideout_2F_2R/scripts.inc:60 MagmaHideout_2F_2R_Text_Grunt7PostBattle
	.globl gText_Rom_21C5C3
gText_Rom_21C5C3: @ 0x0821C5C3
	.string "オレは たまたま おまえに まけたが\nマグマだんの もくてきは\lまもなく たっせい されるのさ!$"
	.if (. - gText_Rom_21C5C3) > 0x31
	.error "gText_Rom_21C5C3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21C5C3) < 0x31
	.space 0x31 - (. - gText_Rom_21C5C3)
	.endif

	@ data/maps/MagmaHideout_2F_2R/scripts.inc:66 MagmaHideout_2F_2R_Text_Grunt8Intro (+1 aliases)
	.globl gText_Rom_21C5F4
gText_Rom_21C5F4: @ 0x0821C5F4
	.string "マグマのしるしを どこかに おとした\nって おおさわぎ してるやつが いたけど\p……あ! もしかして\nそれ ひろったの おまえ?$"
	.if (. - gText_Rom_21C5F4) > 0x41
	.error "gText_Rom_21C5F4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21C5F4) < 0x41
	.space 0x41 - (. - gText_Rom_21C5F4)
	.endif

	@ data/maps/MagmaHideout_2F_2R/scripts.inc:72 MagmaHideout_2F_2R_Text_Grunt8Defeat (+1 aliases)
	.globl gText_Rom_21C635
gText_Rom_21C635: @ 0x0821C635
	.string "うーん なんて やつだ……$"
	.if (. - gText_Rom_21C635) > 0xe
	.error "gText_Rom_21C635 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21C635) < 0xe
	.space 0xe - (. - gText_Rom_21C635)
	.endif

	@ data/maps/MagmaHideout_2F_2R/scripts.inc:75 MagmaHideout_2F_2R_Text_Grunt8PostBattle
	.globl gText_Rom_21C643
gText_Rom_21C643: @ 0x0821C643
	.string "なんか…… オレたちの けいかく\nしっぱい するような きが してきたよ$"
	.if (. - gText_Rom_21C643) > 0x25
	.error "gText_Rom_21C643 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21C643) < 0x25
	.space 0x25 - (. - gText_Rom_21C643)
	.endif
	.incbin "baserom.gba", 0x21c668, 0x2f

	@ data/maps/MagmaHideout_3F_1R/scripts.inc:14 MagmaHideout_3F_1R_Text_Grunt9Intro (+1 aliases)
	.globl gText_Rom_21C697
gText_Rom_21C697: @ 0x0821C697
	.string "なんで オレは こんなところの\nたんとう なんだよ!\pひだりのみみ が あつい じゃねーか!$"
	.if (. - gText_Rom_21C697) > 0x2f
	.error "gText_Rom_21C697 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21C697) < 0x2f
	.space 0x2f - (. - gText_Rom_21C697)
	.endif

	@ data/maps/MagmaHideout_3F_1R/scripts.inc:19 MagmaHideout_3F_1R_Text_Grunt9Defeat (+1 aliases)
	.globl gText_Rom_21C6C6
gText_Rom_21C6C6: @ 0x0821C6C6
	.string "あつくて ヘロヘロ……$"
	.if (. - gText_Rom_21C6C6) > 0xc
	.error "gText_Rom_21C6C6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21C6C6) < 0xc
	.space 0xc - (. - gText_Rom_21C6C6)
	.endif

	@ data/maps/MagmaHideout_3F_1R/scripts.inc:22 MagmaHideout_3F_1R_Text_Grunt9PostBattle
	.globl gText_Rom_21C6D2
gText_Rom_21C6D2: @ 0x0821C6D2
	.string "こんな マグマだらけの かざんの なかで\nフードを かぶってる オレたち へん?$"
	.if (. - gText_Rom_21C6D2) > 0x29
	.error "gText_Rom_21C6D2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21C6D2) < 0x29
	.space 0x29 - (. - gText_Rom_21C6D2)
	.endif

	@ data/maps/MagmaHideout_3F_1R/scripts.inc:26 MagmaHideout_3F_1R_Text_Grunt16Intro (+1 aliases)
	.globl gText_Rom_21C6FB
gText_Rom_21C6FB: @ 0x0821C6FB
	.string "アタシたちは リーダーが めざしている\nすばらしい もくてきを\lじつげん するために あつまったの!\pアクアだん だろうが\nとおりすがりの おこさま だろうが\lじゃまを するなら ゆるさないわ!$"
	.if (. - gText_Rom_21C6FB) > 0x62
	.error "gText_Rom_21C6FB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21C6FB) < 0x62
	.space 0x62 - (. - gText_Rom_21C6FB)
	.endif

	@ data/maps/MagmaHideout_3F_1R/scripts.inc:34 MagmaHideout_3F_1R_Text_Grunt16Defeat (+1 aliases)
	.globl gText_Rom_21C75D
gText_Rom_21C75D: @ 0x0821C75D
	.string "ひえー あなどれない ひと!$"
	.if (. - gText_Rom_21C75D) > 0xf
	.error "gText_Rom_21C75D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21C75D) < 0xf
	.space 0xf - (. - gText_Rom_21C75D)
	.endif

	@ data/maps/MagmaHideout_3F_1R/scripts.inc:38 MagmaHideout_3F_1R_Text_Grunt16PostBattle
	.globl gText_Rom_21C76C
gText_Rom_21C76C: @ 0x0821C76C
	.string "いい? ただしいのは マグマだんよ!\nアクアだんの いうことなんか\lうそ ばっかりだから しんじちゃ ダメよ!$"
	.if (. - gText_Rom_21C76C) > 0x38
	.error "gText_Rom_21C76C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21C76C) < 0x38
	.space 0x38 - (. - gText_Rom_21C76C)
	.endif
	.incbin "baserom.gba", 0x21c7a4, 0x18

	@ data/maps/MagmaHideout_3F_2R/scripts.inc:9 MagmaHideout_3F_2R_Text_Grunt10Intro (+1 aliases)
	.globl gText_Rom_21C7BC
gText_Rom_21C7BC: @ 0x0821C7BC
	.string "あのな リーダーの いうことは\nオレにも よく わかるんだけど な\pちょうこだいポケモンを ほりだしたり\nひとの いんせきを よこどりしたり\lなんか それって ちょっと やりすぎ\lのような きもするんだよ な\pおまえ どう おもう?$"
	.if (. - gText_Rom_21C7BC) > 0x75
	.error "gText_Rom_21C7BC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21C7BC) < 0x75
	.space 0x75 - (. - gText_Rom_21C7BC)
	.endif

	@ data/maps/MagmaHideout_3F_2R/scripts.inc:18 MagmaHideout_3F_2R_Text_Grunt10Defeat (+1 aliases)
	.globl gText_Rom_21C831
gText_Rom_21C831: @ 0x0821C831
	.string "やっぱり なんか まちがってる よなあ?$"
	.if (. - gText_Rom_21C831) > 0x15
	.error "gText_Rom_21C831 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21C831) < 0x15
	.space 0x15 - (. - gText_Rom_21C831)
	.endif

	@ data/maps/MagmaHideout_3F_2R/scripts.inc:22 MagmaHideout_3F_2R_Text_Grunt10PostBattle
	.globl gText_Rom_21C846
gText_Rom_21C846: @ 0x0821C846
	.string "しょうぶに まけて スッキリしたよ!\pオレも こんど リーダーに あったら\nじっさい どうなのか きいて みるよ!$"
	.if (. - gText_Rom_21C846) > 0x3a
	.error "gText_Rom_21C846 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21C846) < 0x3a
	.space 0x3a - (. - gText_Rom_21C846)
	.endif
	.incbin "baserom.gba", 0x21c880, 0x189

	@ data/maps/MagmaHideout_4F/scripts.inc:127 MagmaHideout_4F_Text_Grunt11Intro (+1 aliases)
	.globl gText_Rom_21CA09
gText_Rom_21CA09: @ 0x0821CA09
	.string "オレも グラードンを みたいのに\nまだ シッポすら みせて もらえなくて\pイライラ してるんだ……\pあっ!\nグラードンのこと いっちゃった!$"
	.if (. - gText_Rom_21CA09) > 0x47
	.error "gText_Rom_21CA09 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21CA09) < 0x47
	.space 0x47 - (. - gText_Rom_21CA09)
	.endif

	@ data/maps/MagmaHideout_4F/scripts.inc:134 MagmaHideout_4F_Text_Grunt11Defeat (+1 aliases)
	.globl gText_Rom_21CA50
gText_Rom_21CA50: @ 0x0821CA50
	.string "やっぱり れいせいな きもちを\nうしなって いたら かてないな……$"
	.if (. - gText_Rom_21CA50) > 0x22
	.error "gText_Rom_21CA50 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21CA50) < 0x22
	.space 0x22 - (. - gText_Rom_21CA50)
	.endif

	@ data/maps/MagmaHideout_4F/scripts.inc:138 MagmaHideout_4F_Text_Grunt11PostBattle
	.globl gText_Rom_21CA72
gText_Rom_21CA72: @ 0x0821CA72
	.string "そういえば グラードンには\nシッポなんて あるんだろうか……?$"
	.if (. - gText_Rom_21CA72) > 0x20
	.error "gText_Rom_21CA72 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21CA72) < 0x20
	.space 0x20 - (. - gText_Rom_21CA72)
	.endif

	@ data/maps/MagmaHideout_4F/scripts.inc:141 MagmaHideout_4F_Text_Grunt12Intro (+1 aliases)
	.globl gText_Rom_21CA92
gText_Rom_21CA92: @ 0x0821CA92
	.string "ふはは もうすぐ! もうすぐだ!\nオレたちの もくてきが じつげん する!$"
	.if (. - gText_Rom_21CA92) > 0x26
	.error "gText_Rom_21CA92 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21CA92) < 0x26
	.space 0x26 - (. - gText_Rom_21CA92)
	.endif

	@ data/maps/MagmaHideout_4F/scripts.inc:146 MagmaHideout_4F_Text_Grunt12Defeat (+1 aliases)
	.globl gText_Rom_21CAB8
gText_Rom_21CAB8: @ 0x0821CAB8
	.string "ぐうう ここまで きていながら!$"
	.if (. - gText_Rom_21CAB8) > 0x11
	.error "gText_Rom_21CAB8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21CAB8) < 0x11
	.space 0x11 - (. - gText_Rom_21CAB8)
	.endif

	@ data/maps/MagmaHideout_4F/scripts.inc:150 MagmaHideout_4F_Text_Grunt12PostBattle
	.globl gText_Rom_21CAC9
gText_Rom_21CAC9: @ 0x0821CAC9
	.string "マツブサさまー!\nしんにゅうしゃが そっちにー!$"
	.if (. - gText_Rom_21CAC9) > 0x19
	.error "gText_Rom_21CAC9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21CAC9) < 0x19
	.space 0x19 - (. - gText_Rom_21CAC9)
	.endif

	@ data/maps/MagmaHideout_4F/scripts.inc:154 MagmaHideout_4F_Text_Grunt13Intro (+1 aliases)
	.globl gText_Rom_21CAE2
gText_Rom_21CAE2: @ 0x0821CAE2
	.string "まだまだー!\nかんたんには おくへ いかせない!$"
	.if (. - gText_Rom_21CAE2) > 0x19
	.error "gText_Rom_21CAE2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21CAE2) < 0x19
	.space 0x19 - (. - gText_Rom_21CAE2)
	.endif

	@ data/maps/MagmaHideout_4F/scripts.inc:158 MagmaHideout_4F_Text_Grunt13Defeat (+1 aliases)
	.globl gText_Rom_21CAFB
gText_Rom_21CAFB: @ 0x0821CAFB
	.string "オレって たおすの かんたん だった?$"
	.if (. - gText_Rom_21CAFB) > 0x14
	.error "gText_Rom_21CAFB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21CAFB) < 0x14
	.space 0x14 - (. - gText_Rom_21CAFB)
	.endif

	@ data/maps/MagmaHideout_4F/scripts.inc:161 MagmaHideout_4F_Text_Grunt13PostBattle
	.globl gText_Rom_21CB0F
gText_Rom_21CB0F: @ 0x0821CB0F
	.string "も もう ひとしょうぶ…… がくっ$"
	.if (. - gText_Rom_21CB0F) > 0x12
	.error "gText_Rom_21CB0F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21CB0F) < 0x12
	.space 0x12 - (. - gText_Rom_21CB0F)
	.endif

	@ data/maps/MagmaHideout_4F/scripts.inc:164 MagmaHideout_4F_Text_TabithaIntro (+1 aliases)
	.globl gText_Rom_21CB21
gText_Rom_21CB21: @ 0x0821CB21
	.string "ウヒョ!\nここまで きたんだから おしえて やろう\pそうさ このさきには\nグラードンが ねむって いるのさ!\pマツブサさまは たったいま\nグラードンの ところへ いった!\pもうすぐ ねむりから めをさますぞ!\nウヒョ! ウヒョヒョ!$"
	.if (. - gText_Rom_21CB21) > 0x75
	.error "gText_Rom_21CB21 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21CB21) < 0x75
	.space 0x75 - (. - gText_Rom_21CB21)
	.endif

	@ data/maps/MagmaHideout_4F/scripts.inc:174 MagmaHideout_4F_Text_TabithaDefeat (+1 aliases)
	.globl gText_Rom_21CB96
gText_Rom_21CB96: @ 0x0821CB96
	.string "やられちまったい…… ウヒョ$"
	.if (. - gText_Rom_21CB96) > 0xf
	.error "gText_Rom_21CB96 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21CB96) < 0xf
	.space 0xf - (. - gText_Rom_21CB96)
	.endif

	@ data/maps/MagmaHideout_4F/scripts.inc:178 MagmaHideout_4F_Text_TabithaPostBattle
	.globl gText_Rom_21CBA5
gText_Rom_21CBA5: @ 0x0821CBA5
	.string "……と こんな ぐあいに おまえと\nあそんで やっている あいだに\lマツブサさまが グラードンを…… ウヒョ$"
	.if (. - gText_Rom_21CBA5) > 0x37
	.error "gText_Rom_21CBA5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21CBA5) < 0x37
	.space 0x37 - (. - gText_Rom_21CBA5)
	.endif

	@ data/maps/MagmaHideout_4F/scripts.inc:182 MagmaHideout_4F_Text_MaxieAwakenGroudon
	.globl gText_Rom_21CBDC
gText_Rom_21CBDC: @ 0x0821CBDC
	.string "マツブサ『マグマに ねむる グラードンよ\nなにをしても めざめなかった おまえが\lもとめて いたのは あいいろのたま……\pそうなんだろう?\pさあ ここに もってきて やったぞ\nこの かがやきで めを さませ!\pそして ほんとうの ちからを\nわたしに みせて おくれ!$"
	.if (. - gText_Rom_21CBDC) > 0x86
	.error "gText_Rom_21CBDC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21CBDC) < 0x86
	.space 0x86 - (. - gText_Rom_21CBDC)
	.endif

	@ data/maps/MagmaHideout_4F/scripts.inc:193 MagmaHideout_4F_Text_MaxieGroudonWhatsWrong
	.globl gText_Rom_21CC62
gText_Rom_21CC62: @ 0x0821CC62
	.string "マツブサ『……グラードン!\nいったい どうしたと いうんだ!?\pあいいろのたまでは だめだと いうのか?\pグラードンよ!\nどこへ きえて しまったんだ……$"
	.if (. - gText_Rom_21CC62) > 0x4e
	.error "gText_Rom_21CC62 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21CC62) < 0x4e
	.space 0x4e - (. - gText_Rom_21CC62)
	.endif

	@ data/maps/MagmaHideout_4F/scripts.inc:200 MagmaHideout_4F_Text_MaxieOhItWasYou
	.globl gText_Rom_21CCB0
gText_Rom_21CCB0: @ 0x0821CCB0
	.string "マツブサ『おまえか!\pあっちでも こっちでも ちょこちょこと\nうろつき まわって いたようだが\pなるほど おまえが なにか\nこざいくを していたんだな……!$"
	.if (. - gText_Rom_21CCB0) > 0x4f
	.error "gText_Rom_21CCB0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21CCB0) < 0x4f
	.space 0x4f - (. - gText_Rom_21CCB0)
	.endif

	@ data/maps/MagmaHideout_4F/scripts.inc:207 MagmaHideout_4F_Text_MaxieDefeat (+1 aliases)
	.globl gText_Rom_21CCFF
gText_Rom_21CCFF: @ 0x0821CCFF
	.string "おまえは なぜ そんなに\nポケモンを うまく あつかえるのだ……$"
	.if (. - gText_Rom_21CCFF) > 0x21
	.error "gText_Rom_21CCFF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21CCFF) < 0x21
	.space 0x21 - (. - gText_Rom_21CCFF)
	.endif

	@ data/maps/MagmaHideout_4F/scripts.inc:211 MagmaHideout_4F_Text_MaxieImGoingAfterGroudon
	.globl gText_Rom_21CD20
gText_Rom_21CD20: @ 0x0821CD20
	.string "マツブサ『グラードンが にげだしたの には\nなにか わけがある……\lそう いいたいの だろう?\p…… …… ……\n…… …… ……\pふん……\nそれぐらい わたしも わかっていたさ\pグラードンが いなくなって しまえば\nもう こんな やまに ようはない\pわたしは グラードンを おいかけるから\nおまえとも ここで おわかれだな!$"
	.if (. - gText_Rom_21CD20) > 0xa4
	.error "gText_Rom_21CD20 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21CD20) < 0xa4
	.space 0xa4 - (. - gText_Rom_21CD20)
	.endif
	.incbin "baserom.gba", 0x21cdc4, 0xfa

	@ data/maps/MirageTower_4F/scripts.inc:61 MirageTower_4F_Text_TakeRootFossil
	.globl gText_Rom_21CEBE
gText_Rom_21CEBE: @ 0x0821CEBE
	.string "ねっこのカセキを みつけた!\pこの カセキを とると\nあしもとが くずれて しまいそうだ……\pねっこのカセキを とりますか?$"
	.if (. - gText_Rom_21CEBE) > 0x3f
	.error "gText_Rom_21CEBE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21CEBE) < 0x3f
	.space 0x3f - (. - gText_Rom_21CEBE)
	.endif

	@ data/maps/MirageTower_4F/scripts.inc:64 MirageTower_4F_Text_LeftRootFossilAlone
	.globl gText_Rom_21CEFD
gText_Rom_21CEFD: @ 0x0821CEFD
	.string "{PLAYER}は ねっこのカセキを\nそのままに しておいた$"
	.if (. - gText_Rom_21CEFD) > 0x19
	.error "gText_Rom_21CEFD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21CEFD) < 0x19
	.space 0x19 - (. - gText_Rom_21CEFD)
	.endif

	@ data/maps/MirageTower_4F/scripts.inc:67 MirageTower_4F_Text_TakeClawFossil
	.globl gText_Rom_21CF16
gText_Rom_21CF16: @ 0x0821CF16
	.string "ツメのカセキを みつけた!\pこの カセキを とると\nあしもとが くずれて しまいそうだ……\pツメのカセキを とりますか?$"
	.if (. - gText_Rom_21CF16) > 0x3d
	.error "gText_Rom_21CF16 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21CF16) < 0x3d
	.space 0x3d - (. - gText_Rom_21CF16)
	.endif

	@ data/maps/MirageTower_4F/scripts.inc:70 MirageTower_4F_Text_LeaveClawFossilAlone
	.globl gText_Rom_21CF53
gText_Rom_21CF53: @ 0x0821CF53
	.string "{PLAYER}は ツメのカセキを\nそのままに しておいた$"
	.if (. - gText_Rom_21CF53) > 0x18
	.error "gText_Rom_21CF53 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21CF53) < 0x18
	.space 0x18 - (. - gText_Rom_21CF53)
	.endif
	.incbin "baserom.gba", 0x21cf6b, 0x42

	@ data/maps/DesertUnderpass/scripts.inc:32 DesertUnderpass_Text_FoundRootFossil
	.globl gText_Rom_21CFAD
gText_Rom_21CFAD: @ 0x0821CFAD
	.string "{PLAYER}は\nねっこのカセキを みつけた!$"
	.if (. - gText_Rom_21CFAD) > 0x13
	.error "gText_Rom_21CFAD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21CFAD) < 0x13
	.space 0x13 - (. - gText_Rom_21CFAD)
	.endif

	@ data/maps/DesertUnderpass/scripts.inc:36 DesertUnderpass_Text_FoundClawFossil
	.globl gText_Rom_21CFC0
gText_Rom_21CFC0: @ 0x0821CFC0
	.string "{PLAYER}は\nツメのカセキを みつけた!$"
	.if (. - gText_Rom_21CFC0) > 0x12
	.error "gText_Rom_21CFC0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21CFC0) < 0x12
	.space 0x12 - (. - gText_Rom_21CFC0)
	.endif

	.incbin "baserom.gba", 0x21cfd2, 0x92

	setwildbattle SPECIES_KYOGRE, 70, ITEM_NONE

	.incbin "baserom.gba", 0x21d06a, 0xcb

	setwildbattle SPECIES_GROUDON, 70, ITEM_NONE

	.incbin "baserom.gba", 0x21d13b, 0xcb

	@ data/maps/MeteorFalls_StevensCave/scripts.inc:29 MeteorFalls_StevensCave_Text_ShouldKnowHowGoodIAmExpectWorst
	.globl gText_Rom_21D206
gText_Rom_21D206: @ 0x0821D206
	.string "ダイゴ『へぇ {PLAYER}{KUN}\nボクが ここにいるって よく わかったね\pもしかして きみ…… ボクを\nただの いしマニアだと おもってる?\p……いや トクサネの うちゅうセンターで\nいっしょに たたかったから\pボクが どれくらい つよいのか\nきみだって しってるはず だよね\pよし {PLAYER}{KUN}\pほんきで しょうぶ するなら\nかくごして くれよな!$"
	.if (. - gText_Rom_21D206) > 0xaa
	.error "gText_Rom_21D206 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21D206) < 0xaa
	.space 0xaa - (. - gText_Rom_21D206)
	.endif

	@ data/maps/MeteorFalls_StevensCave/scripts.inc:42 MeteorFalls_StevensCave_Text_StevenDefeat (+1 aliases)
	.globl gText_Rom_21D2B0
gText_Rom_21D2B0: @ 0x0821D2B0
	.string "きみは……\nこれほどまでに つよくなって いたのか$"
	.if (. - gText_Rom_21D2B0) > 0x1a
	.error "gText_Rom_21D2B0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21D2B0) < 0x1a
	.space 0x1a - (. - gText_Rom_21D2B0)
	.endif

	@ data/maps/MeteorFalls_StevensCave/scripts.inc:46 MeteorFalls_StevensCave_Text_MyPredictionCameTrue
	.globl gText_Rom_21D2CA
gText_Rom_21D2CA: @ 0x0821D2CA
	.string "ダイゴ『そういえば……\nムロ タウンの いしのどうくつで\lはじめて あった ときから\pいずれ きみは チャンピオンに\nなるような きが していた\pボクの よそうは\nだいたい いつも あたるんだよ\pじゃあ……\nつぎに きみが むかうのは……\p…… …… ……\n…… …… ……\pふふふ さすがの ボクも\nそんなこと までは わからないな$"
	.if (. - gText_Rom_21D2CA) > 0xa8
	.error "gText_Rom_21D2CA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21D2CA) < 0xa8
	.space 0xa8 - (. - gText_Rom_21D2CA)
	.endif
	.incbin "baserom.gba", 0x21d372, 0x38
	.globl gUnknown_821D3AA
gUnknown_821D3AA: @ 0x0821D3AA
	.incbin "baserom.gba", 0x21d3aa, 0x2d
	.globl gUnknown_821D3D7
gUnknown_821D3D7: @ 0x0821D3D7
	.incbin "baserom.gba", 0x21d3d7, 0xa1
	.globl gUnknown_821D478
gUnknown_821D478: @ 0x0821D478
	.incbin "baserom.gba", 0x21d478, 0x60
	.globl gUnknown_821D4D8
gUnknown_821D4D8: @ 0x0821D4D8
	.incbin "baserom.gba", 0x21d4d8, 0x9b
	.globl gUnknown_821D573
gUnknown_821D573: @ 0x0821D573
	.incbin "baserom.gba", 0x21d573, 0x8
	.globl gUnknown_821D57B
gUnknown_821D57B: @ 0x0821D57B
	.incbin "baserom.gba", 0x21d57b, 0x54

	@ field-script:0x245B42 FieldScriptText_21D5CF
	.globl gText_Rom_21D5CF
gText_Rom_21D5CF: @ 0x0821D5CF
	.string "かべに　ちいさな　くぼみが　ある$"
	.if (. - gText_Rom_21D5CF) > 0x11
	.error "gText_Rom_21D5CF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21D5CF) < 0x11
	.space 0x11 - (. - gText_Rom_21D5CF)
	.endif

	@ field-script:0x245B11 FieldScriptText_21D5E0
	.globl gText_Rom_21D5E0
gText_Rom_21D5E0: @ 0x0821D5E0
	.string "かべに　ちいさな　くぼみが　ある\pひみつのちからを　つかいますか？$"
	.if (. - gText_Rom_21D5E0) > 0x22
	.error "gText_Rom_21D5E0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21D5E0) < 0x22
	.space 0x22 - (. - gText_Rom_21D5E0)
	.endif

	@ field-script:0x245B4C FieldScriptText_21D602
	.globl gText_Rom_21D602
gText_Rom_21D602: @ 0x0821D602
	.string "ちいさな　どうくつを　はっけん！$"
	.if (. - gText_Rom_21D602) > 0x11
	.error "gText_Rom_21D602 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21D602) < 0x11
	.space 0x11 - (. - gText_Rom_21D602)
	.endif

	@ field-script:0x245C41 FieldScriptText_21D613
	.globl gText_Rom_21D613
gText_Rom_21D613: @ 0x0821D613
	.string "ここに　ひみつきちを　つくりますか？$"
	.if (. - gText_Rom_21D613) > 0x13
	.error "gText_Rom_21D613 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21D613) < 0x13
	.space 0x13 - (. - gText_Rom_21D613)
	.endif
	.incbin "baserom.gba", 0x21d626, 0x7f8

	@ data/maps/InsideOfTruck/scripts.inc:54 InsideOfTruck_Text_BoxPrintedWithMonLogo
	.globl gText_Rom_21DE1E
gText_Rom_21DE1E: @ 0x0821DE1E
	.string "はこには ポケモンの えが かいてある\pポケモンマークの ひっこしやさん だ!$"
	.if (. - gText_Rom_21DE1E) > 0x28
	.error "gText_Rom_21DE1E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21DE1E) < 0x28
	.space 0x28 - (. - gText_Rom_21DE1E)
	.endif
	.incbin "baserom.gba", 0x21de46, 0x81
	.globl gUnknown_821DEC7
gUnknown_821DEC7: @ 0x0821DEC7
	.incbin "baserom.gba", 0x21dec7, 0x23f

	@ field-script:0x21E0A7 FieldScriptText_21E106
	.globl gText_Rom_21E106
gText_Rom_21E106: @ 0x0821E106
	.string "エニシダ『やあ　やあ　やあ\n{0xFD}{0x01}{0xFD}{0x05}　{0xFD}{0x01}{0xFD}{0x05}！\pわたしは　ようじが　あって\nもう　ふねを　おりるんだけど\lあえて　よかったよ！\pリーグチャンピオン　おめでとう！\nそんな　きみを　しょうたい　したい\lところが　ある！\pそれは……　バトルフロンティア　だ！\pどんな　ところかって？\nとにかく　きてみれば　わかるよ\pこのふねの　せんちょうには\nはなしを　しておいた　から……\lつぎから　ふねに　のるときは\lバトルフロンティアに　いける　はずだよ！\pじゃあね　{0xFD}{0x01}{0xFD}{0x05}\nバトルフロンティアで　まっているよ！$"
	.if (. - gText_Rom_21E106) > 0xfb
	.error "gText_Rom_21E106 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21E106) < 0xfb
	.space 0xfb - (. - gText_Rom_21E106)
	.endif

	@ field-script:0x21DE84 FieldScriptText_21E201
	.globl gText_Rom_21E201
gText_Rom_21E201: @ 0x0821E201
	.string "かいりゅうを　ものともせず　すすむ\nれんらくせんを　どうぞ　ごらんください$"
	.if (. - gText_Rom_21E201) > 0x26
	.error "gText_Rom_21E201 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21E201) < 0x26
	.space 0x26 - (. - gText_Rom_21E201)
	.endif

	@ field-script:0x21DE97 FieldScriptText_21E227
	.globl gText_Rom_21E227
gText_Rom_21E227: @ 0x0821E227
	.string "それでは　れんらくせんに　よる\nふなたびを　おたのしみ　ください$"
	.if (. - gText_Rom_21E227) > 0x21
	.error "gText_Rom_21E227 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21E227) < 0x21
	.space 0x21 - (. - gText_Rom_21E227)
	.endif

	@ field-script:0x21DF02 FieldScriptText_21E248
	.globl gText_Rom_21E248
gText_Rom_21E248: @ 0x0821E248
	.string "おつかれさまです　ただいま\nカイナシティに　とうちゃく　しました$"
	.if (. - gText_Rom_21E248) > 0x21
	.error "gText_Rom_21E248 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21E248) < 0x21
	.space 0x21 - (. - gText_Rom_21E248)
	.endif

	@ field-script:0x21DEC0 FieldScriptText_21E269
	.globl gText_Rom_21E269
gText_Rom_21E269: @ 0x0821E269
	.string "おつかれさまです　ただいま\nミナモシティに　とうちゃく　しました$"
	.if (. - gText_Rom_21E269) > 0x21
	.error "gText_Rom_21E269 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21E269) < 0x21
	.space 0x21 - (. - gText_Rom_21E269)
	.endif

	@ field-script:0x21DFAA FieldScriptText_21E28A
	.globl gText_Rom_21E28A
gText_Rom_21E28A: @ 0x0821E28A
	.string "とうちゃくまで　まだまだ　だな\pじぶんの　へやに　もどって　やすんでいなよ\nたしか　きみの　へやは\l2ごうしつ　だったな\pあの　へやの　ベッドは\nふかふか　していて　きもちいいぞ！$"
	.if (. - gText_Rom_21E28A) > 0x5b
	.error "gText_Rom_21E28A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21E28A) < 0x5b
	.space 0x5b - (. - gText_Rom_21E28A)
	.endif

	@ field-script:0x21DFB7 FieldScriptText_21E2E5
	.globl gText_Rom_21E2E5
gText_Rom_21E2E5: @ 0x0821E2E5
	.string "とうちゃく　したぞ！$"
	.if (. - gText_Rom_21E2E5) > 0xb
	.error "gText_Rom_21E2E5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21E2E5) < 0xb
	.space 0xb - (. - gText_Rom_21E2E5)
	.endif

	@ field-script:0x21E02C FieldScriptText_21E2F0
	.globl gText_Rom_21E2F0
gText_Rom_21E2F0: @ 0x0821E2F0
	.string "ふなたびに　あきちゃって\nきゃくしつで　ポケモンで　しょうぶを\lしたがっている　トレーナーも　いるぞ！$"
	.if (. - gText_Rom_21E2F0) > 0x34
	.error "gText_Rom_21E2F0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21E2F0) < 0x34
	.space 0x34 - (. - gText_Rom_21E2F0)
	.endif

	@ field-script:0x21E036 FieldScriptText_21E324
	.globl gText_Rom_21E324
gText_Rom_21E324: @ 0x0821E324
	.string "まっ　ふなたびを　たのしんでくれよ$"
	.if (. - gText_Rom_21E324) > 0x12
	.error "gText_Rom_21E324 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21E324) < 0x12
	.space 0x12 - (. - gText_Rom_21E324)
	.endif

	@ field-script:0x21E00D FieldScriptText_21E336
	.globl gText_Rom_21E336
gText_Rom_21E336: @ 0x0821E336
	.string "まどの　むこうに\nすいへいせんが　ひろがっている！$"
	.if (. - gText_Rom_21E336) > 0x1a
	.error "gText_Rom_21E336 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21E336) < 0x1a
	.space 0x1a - (. - gText_Rom_21E336)
	.endif

	@ field-script:0x21DF52 FieldScriptText_21E350
	.globl gText_Rom_21E350
gText_Rom_21E350: @ 0x0821E350
	.string "ハギ『ようこそ！　{0xFD}{0x01}{0xFD}{0x05}！\pわしが　この　タイドリップごうの\nめいよ　せんちょう　ハギ　じゃよ！\pいやぁ　いちどは　いんたい　したが\nこんな　すごい　ふねを　みてしまうと\lふなのりの　ちが　さわぐのう！！$"
	.if (. - gText_Rom_21E350) > 0x68
	.error "gText_Rom_21E350 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21E350) < 0x68
	.space 0x68 - (. - gText_Rom_21E350)
	.endif

	@ field-script:0x21DF63 FieldScriptText_21E3B8
	.globl gText_Rom_21E3B8
gText_Rom_21E3B8: @ 0x0821E3B8
	.string "ピーコ『ピひょ　ピひょひょ……！$"
	.if (. - gText_Rom_21E3B8) > 0x11
	.error "gText_Rom_21E3B8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21E3B8) < 0x11
	.space 0x11 - (. - gText_Rom_21E3B8)
	.endif

	@ field-script:0x21DF6E FieldScriptText_21E3C9
	.globl gText_Rom_21E3C9
gText_Rom_21E3C9: @ 0x0821E3C9
	.string "1ごうしつ$"
	.if (. - gText_Rom_21E3C9) > 0x6
	.error "gText_Rom_21E3C9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21E3C9) < 0x6
	.space 0x6 - (. - gText_Rom_21E3C9)
	.endif

	@ field-script:0x21DF77 FieldScriptText_21E3CF
	.globl gText_Rom_21E3CF
gText_Rom_21E3CF: @ 0x0821E3CF
	.string "2ごうしつ$"
	.if (. - gText_Rom_21E3CF) > 0x6
	.error "gText_Rom_21E3CF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21E3CF) < 0x6
	.space 0x6 - (. - gText_Rom_21E3CF)
	.endif

	@ field-script:0x21DF80 FieldScriptText_21E3D5
	.globl gText_Rom_21E3D5
gText_Rom_21E3D5: @ 0x0821E3D5
	.string "3ごうしつ$"
	.if (. - gText_Rom_21E3D5) > 0x6
	.error "gText_Rom_21E3D5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21E3D5) < 0x6
	.space 0x6 - (. - gText_Rom_21E3D5)
	.endif

	@ field-script:0x21DF89 FieldScriptText_21E3DB
	.globl gText_Rom_21E3DB
gText_Rom_21E3DB: @ 0x0821E3DB
	.string "4ごうしつ$"
	.if (. - gText_Rom_21E3DB) > 0x6
	.error "gText_Rom_21E3DB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21E3DB) < 0x6
	.space 0x6 - (. - gText_Rom_21E3DB)
	.endif
	.incbin "baserom.gba", 0x21e3e1, 0x2f

	@ trainerbattle-cfg:0x21E3E2 TrainerBattleText_21E410
	.globl gText_Rom_21E410
gText_Rom_21E410: @ 0x0821E410
	.string "こんなに　でっかい　ところ\nそうじ　してるのも　あきたぞ！\lちょいと　しょうぶ　しようや！$"
	.if (. - gText_Rom_21E410) > 0x2e
	.error "gText_Rom_21E410 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21E410) < 0x2e
	.space 0x2e - (. - gText_Rom_21E410)
	.endif

	@ trainerbattle-cfg:0x21E3E2 TrainerBattleText_21E43E
	.globl gText_Rom_21E43E
gText_Rom_21E43E: @ 0x0821E43E
	.string "おとうと　まけちまったよ！$"
	.if (. - gText_Rom_21E43E) > 0xe
	.error "gText_Rom_21E43E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21E43E) < 0xe
	.space 0xe - (. - gText_Rom_21E43E)
	.endif

	@ field-script:0x21E3F2 FieldScriptText_21E44C
	.globl gText_Rom_21E44C
gText_Rom_21E44C: @ 0x0821E44C
	.string "おれたち　おそうじ　ブラザーズ！\pあにきが　せんざい　ぶちまけてー\nおとうと　せっせと　みがくのさー$"
	.if (. - gText_Rom_21E44C) > 0x33
	.error "gText_Rom_21E44C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21E44C) < 0x33
	.space 0x33 - (. - gText_Rom_21E44C)
	.endif

	@ trainerbattle-cfg:0x21E3F9 TrainerBattleText_21E47F
	.globl gText_Rom_21E47F
gText_Rom_21E47F: @ 0x0821E47F
	.string "こんなに　ひろいから\nふなぞこで　ポケモンしょうぶ　しても\lだいじょうぶ　だろ？$"
	.if (. - gText_Rom_21E47F) > 0x29
	.error "gText_Rom_21E47F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21E47F) < 0x29
	.space 0x29 - (. - gText_Rom_21E47F)
	.endif

	@ trainerbattle-cfg:0x21E3F9 TrainerBattleText_21E4A8
	.globl gText_Rom_21E4A8
gText_Rom_21E4A8: @ 0x0821E4A8
	.string "あにき　まけちまったよ！$"
	.if (. - gText_Rom_21E4A8) > 0xd
	.error "gText_Rom_21E4A8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21E4A8) < 0xd
	.space 0xd - (. - gText_Rom_21E4A8)
	.endif

	@ field-script:0x21E409 FieldScriptText_21E4B5
	.globl gText_Rom_21E4B5
gText_Rom_21E4B5: @ 0x0821E4B5
	.string "おれたち　おそうじ　ブラザーズ！\pあにきが　せんざい　ぶちまけてー\nおとうと　せっせと　みがくのさー$"
	.if (. - gText_Rom_21E4B5) > 0x33
	.error "gText_Rom_21E4B5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21E4B5) < 0x33
	.space 0x33 - (. - gText_Rom_21E4B5)
	.endif
	.incbin "baserom.gba", 0x21e4e8, 0x101

	@ data/maps/Route119_WeatherInstitute_1F/scripts.inc:130 Route119_WeatherInstitute_1F_Text_TakeRestInBed
	.globl gText_Rom_21E5E9
gText_Rom_21E5E9: @ 0x0821E5E9
	.string "ベッドが ある……\nやすんでいこう$"
	.if (. - gText_Rom_21E5E9) > 0x12
	.error "gText_Rom_21E5E9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21E5E9) < 0x12
	.space 0x12 - (. - gText_Rom_21E5E9)
	.endif

	@ trainerbattle-cfg:0x21E540 TrainerBattleText_21E5FB
	.globl gText_Rom_21E5FB
gText_Rom_21E5FB: @ 0x0821E5FB
	.string "ミナモシティには　よく　いくんだ\pコンテストの　けんがくが\nわたしの　たのしみ　なんだよ$"
	.if (. - gText_Rom_21E5FB) > 0x2d
	.error "gText_Rom_21E5FB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21E5FB) < 0x2d
	.space 0x2d - (. - gText_Rom_21E5FB)
	.endif

	@ trainerbattle-cfg:0x21E540 TrainerBattleText_21E628
	.globl gText_Rom_21E628
gText_Rom_21E628: @ 0x0821E628
	.string "たのしい　しょうぶ　だったよ$"
	.if (. - gText_Rom_21E628) > 0xf
	.error "gText_Rom_21E628 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21E628) < 0xf
	.space 0xf - (. - gText_Rom_21E628)
	.endif

	@ field-script:0x21E550 FieldScriptText_21E637
	.globl gText_Rom_21E637
gText_Rom_21E637: @ 0x0821E637
	.string "つぎの　コンテストには\nどんな　ポケモンが　でるのか\lたのしみで　たまらないよ$"
	.if (. - gText_Rom_21E637) > 0x28
	.error "gText_Rom_21E637 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21E637) < 0x28
	.space 0x28 - (. - gText_Rom_21E637)
	.endif

	@ trainerbattle-cfg:0x21E557 TrainerBattleText_21E65F
	.globl gText_Rom_21E65F
gText_Rom_21E65F: @ 0x0821E65F
	.string "きみの　ともだちは　つよいのかね？$"
	.if (. - gText_Rom_21E65F) > 0x12
	.error "gText_Rom_21E65F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21E65F) < 0x12
	.space 0x12 - (. - gText_Rom_21E65F)
	.endif

	@ trainerbattle-cfg:0x21E557 TrainerBattleText_21E671
	.globl gText_Rom_21E671
gText_Rom_21E671: @ 0x0821E671
	.string "つよい　ともだち　だね！$"
	.if (. - gText_Rom_21E671) > 0xd
	.error "gText_Rom_21E671 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21E671) < 0xd
	.space 0xd - (. - gText_Rom_21E671)
	.endif

	@ field-script:0x21E567 FieldScriptText_21E67E
	.globl gText_Rom_21E67E
gText_Rom_21E67E: @ 0x0821E67E
	.string "にんげん　だけが　ともだち　じゃない\nわたしに　とっては　ポケモンが\lたいせつな　ともだち　なんだよ！$"
	.if (. - gText_Rom_21E67E) > 0x34
	.error "gText_Rom_21E67E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21E67E) < 0x34
	.space 0x34 - (. - gText_Rom_21E67E)
	.endif

	@ trainerbattle-cfg:0x21E56E TrainerBattleText_21E6B2
	.globl gText_Rom_21E6B2
gText_Rom_21E6B2: @ 0x0821E6B2
	.string "おきゃくさん\nノックは　したかね？$"
	.if (. - gText_Rom_21E6B2) > 0x12
	.error "gText_Rom_21E6B2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21E6B2) < 0x12
	.space 0x12 - (. - gText_Rom_21E6B2)
	.endif

	@ trainerbattle-cfg:0x21E56E TrainerBattleText_21E6C4
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_21E6C4
gText_Rom_21E6C4: @ 0x0821E6C4
	.string "まけても\nあわてず　さわがず$"
	.if (. - gText_Rom_21E6C4) != 0xf
	.error "gText_Rom_21E6C4 must retain its original byte length"
	.endif
	.globl gText_Rom_21E6C9
	.set gText_Rom_21E6C9, gText_Rom_21E6C4 + 0x5

	@ field-script:0x21E57E FieldScriptText_21E6D3
	.globl gText_Rom_21E6D3
gText_Rom_21E6D3: @ 0x0821E6D3
	.string "どんな　ときでも　とりみださないのが\nしんしの　みだしなみ　だよ$"
	.if (. - gText_Rom_21E6D3) > 0x21
	.error "gText_Rom_21E6D3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21E6D3) < 0x21
	.space 0x21 - (. - gText_Rom_21E6D3)
	.endif

	@ trainerbattle-cfg:0x21E585 TrainerBattleText_21E6F4
	.globl gText_Rom_21E6F4
gText_Rom_21E6F4: @ 0x0821E6F4
	.string "ジン『ちょっと　はずかしいけど\nぼくたちの　ラブラブ　パワー　みせようかな$"
	.if (. - gText_Rom_21E6F4) > 0x26
	.error "gText_Rom_21E6F4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21E6F4) < 0x26
	.space 0x26 - (. - gText_Rom_21E6F4)
	.endif

	@ trainerbattle-cfg:0x21E585 TrainerBattleText_21E71A
	.globl gText_Rom_21E71A
gText_Rom_21E71A: @ 0x0821E71A
	.string "ジン『はぁ……$"
	.if (. - gText_Rom_21E71A) > 0x8
	.error "gText_Rom_21E71A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21E71A) < 0x8
	.space 0x8 - (. - gText_Rom_21E71A)
	.endif

	@ field-script:0x21E599 FieldScriptText_21E722
	.globl gText_Rom_21E722
gText_Rom_21E722: @ 0x0821E722
	.string "ジン『ぼくたちの　ラブラブ　パワーでも\nかてないのは　はじめて　だよ！\lきみは　すごい　トレーナー　なんだね！$"
	.if (. - gText_Rom_21E722) > 0x38
	.error "gText_Rom_21E722 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21E722) < 0x38
	.space 0x38 - (. - gText_Rom_21E722)
	.endif

	@ trainerbattle-cfg:0x21E585 TrainerBattleText_21E75A
	.globl gText_Rom_21E75A
gText_Rom_21E75A: @ 0x0821E75A
	.string "ジン『ポケモン　いっぴき？\nそれだと　さみしくないか？$"
	.if (. - gText_Rom_21E75A) > 0x1c
	.error "gText_Rom_21E75A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21E75A) < 0x1c
	.space 0x1c - (. - gText_Rom_21E75A)
	.endif

	@ trainerbattle-cfg:0x21E5A0 TrainerBattleText_21E776
	.globl gText_Rom_21E776
gText_Rom_21E776: @ 0x0821E776
	.string "カホ『ちょっと　はずかしいけど\nふたりの　ラブラブ　パワー　みせてあげる！$"
	.if (. - gText_Rom_21E776) > 0x26
	.error "gText_Rom_21E776 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21E776) < 0x26
	.space 0x26 - (. - gText_Rom_21E776)
	.endif

	@ trainerbattle-cfg:0x21E5A0 TrainerBattleText_21E79C
	.globl gText_Rom_21E79C
gText_Rom_21E79C: @ 0x0821E79C
	.string "カホ『やん！$"
	.if (. - gText_Rom_21E79C) > 0x7
	.error "gText_Rom_21E79C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21E79C) < 0x7
	.space 0x7 - (. - gText_Rom_21E79C)
	.endif

	@ field-script:0x21E5B4 FieldScriptText_21E7A3
	.globl gText_Rom_21E7A3
gText_Rom_21E7A3: @ 0x0821E7A3
	.string "カホ『ふたりの　ラブラブ　パワーでも\nかてない　だなんて\lあなた　すごい　トレーナー　なのね！$"
	.if (. - gText_Rom_21E7A3) > 0x30
	.error "gText_Rom_21E7A3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21E7A3) < 0x30
	.space 0x30 - (. - gText_Rom_21E7A3)
	.endif

	@ trainerbattle-cfg:0x21E5A0 TrainerBattleText_21E7D3
	.globl gText_Rom_21E7D3
gText_Rom_21E7D3: @ 0x0821E7D3
	.string "カホ『しょうぶ　したかったのに……\nポケモン　2ひき　いないのね……$"
	.if (. - gText_Rom_21E7D3) > 0x23
	.error "gText_Rom_21E7D3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21E7D3) < 0x23
	.space 0x23 - (. - gText_Rom_21E7D3)
	.endif

	@ trainerbattle-cfg:0x21E5BB TrainerBattleText_21E7F6
	.globl gText_Rom_21E7F6
gText_Rom_21E7F6: @ 0x0821E7F6
	.string "キミ　ちょうど　いいところに　きたね！\pボク　たいくつで　たまらないんだ\nちょっと　たのしませて　くれよ$"
	.if (. - gText_Rom_21E7F6) > 0x35
	.error "gText_Rom_21E7F6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21E7F6) < 0x35
	.space 0x35 - (. - gText_Rom_21E7F6)
	.endif

	@ trainerbattle-cfg:0x21E5BB TrainerBattleText_21E82B
	.globl gText_Rom_21E82B
gText_Rom_21E82B: @ 0x0821E82B
	.string "……もう　いいよ$"
	.if (. - gText_Rom_21E82B) > 0x9
	.error "gText_Rom_21E82B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21E82B) < 0x9
	.space 0x9 - (. - gText_Rom_21E82B)
	.endif

	@ field-script:0x21E5CB FieldScriptText_21E834
	.globl gText_Rom_21E834
gText_Rom_21E834: @ 0x0821E834
	.string "パパに　たのんで　ボク　せんようの\nヨットを　かってもらおうかな？\lポケモンと　いっしょに　のれる　ヨット！$"
	.if (. - gText_Rom_21E834) > 0x37
	.error "gText_Rom_21E834 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21E834) < 0x37
	.space 0x37 - (. - gText_Rom_21E834)
	.endif

	@ trainerbattle-cfg:0x21E5D2 TrainerBattleText_21E86B
	.globl gText_Rom_21E86B
gText_Rom_21E86B: @ 0x0821E86B
	.string "あら　かわいい　トレーナーさん\nおちゃに　なさる？\lそれとも　しょうぶ　かしら？$"
	.if (. - gText_Rom_21E86B) > 0x29
	.error "gText_Rom_21E86B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21E86B) < 0x29
	.space 0x29 - (. - gText_Rom_21E86B)
	.endif

	@ trainerbattle-cfg:0x21E5D2 TrainerBattleText_21E894
	.globl gText_Rom_21E894
gText_Rom_21E894: @ 0x0821E894
	.string "かっぱつで　いらっしゃるのね$"
	.if (. - gText_Rom_21E894) > 0xf
	.error "gText_Rom_21E894 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21E894) < 0xf
	.space 0xf - (. - gText_Rom_21E894)
	.endif

	@ field-script:0x21E5E2 FieldScriptText_21E8A3
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_21E8A3
gText_Rom_21E8A3: @ 0x0821E8A3
	.string "ゆうがな　きゃくせんで\nせかい　いっしゅうも　よろしいけど……\pれんらくせんで　のんびり\nホウエンを　みるのも　すてき　ですわ$"
	.if (. - gText_Rom_21E8A3) != 0x40
	.error "gText_Rom_21E8A3 must retain its original byte length"
	.endif
	.globl gText_Rom_21E8DF
	.set gText_Rom_21E8DF, gText_Rom_21E8A3 + 0x3c

	@ field-script:0x21E4F6 FieldScriptText_21E8E3
	.globl gText_Rom_21E8E3
gText_Rom_21E8E3: @ 0x0821E8E3
	.string "わたし　あやしく　ないです！\nだから　これを　あなたに　あげます！\pべつに　だれか　から\nよこどりした　モノじゃ　ないです！\lあんしん　して　つかって　ください！$"
	.if (. - gText_Rom_21E8E3) > 0x52
	.error "gText_Rom_21E8E3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21E8E3) < 0x52
	.space 0x52 - (. - gText_Rom_21E8E3)
	.endif

	@ field-script:0x21E518 FieldScriptText_21E935
	.globl gText_Rom_21E935
gText_Rom_21E935: @ 0x0821E935
	.string "よこどり　という　わざは\nあいてが　つかおうとする　わざを\lじぶんで　つかって　しまうのです！$"
	.if (. - gText_Rom_21E935) > 0x30
	.error "gText_Rom_21E935 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21E935) < 0x30
	.space 0x30 - (. - gText_Rom_21E935)
	.endif
	.incbin "baserom.gba", 0x21e965, 0x552

	@ field-script:0x21ECA4 FieldScriptText_21EEB7
	.globl gText_Rom_21EEB7
gText_Rom_21EEB7: @ 0x0821EEB7
	.string "ここは　バトルドーム！\nめざせ！　むてきの　スーパースター！$"
	.if (. - gText_Rom_21EEB7) > 0x1f
	.error "gText_Rom_21EEB7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21EEB7) < 0x1f
	.space 0x1f - (. - gText_Rom_21EEB7)
	.endif

	@ field-script:0x21ECAD FieldScriptText_21EED6
	.globl gText_Rom_21EED6
gText_Rom_21EED6: @ 0x0821EED6
	.string "ここは　バトルファクトリー！\nさがせ！　さいきょう　ポケモン！$"
	.if (. - gText_Rom_21EED6) > 0x20
	.error "gText_Rom_21EED6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21EED6) < 0x20
	.space 0x20 - (. - gText_Rom_21EED6)
	.endif

	@ field-script:0x21ECB6 FieldScriptText_21EEF6
	.globl gText_Rom_21EEF6
gText_Rom_21EEF6: @ 0x0821EEF6
	.string "ここは　バトルチューブ！\nえらべ！　3つの　みち！$"
	.if (. - gText_Rom_21EEF6) > 0x1a
	.error "gText_Rom_21EEF6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21EEF6) < 0x1a
	.space 0x1a - (. - gText_Rom_21EEF6)
	.endif

	@ field-script:0x21ECBF FieldScriptText_21EF10
	.globl gText_Rom_21EF10
gText_Rom_21EF10: @ 0x0821EF10
	.string "ここは　バトルタワー　さ！\pトレーナーは　きたえあげた　ポケモンで\nひたすら　かちぬいて　いくのさ！$"
	.if (. - gText_Rom_21EF10) > 0x33
	.error "gText_Rom_21EF10 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21EF10) < 0x33
	.space 0x33 - (. - gText_Rom_21EF10)
	.endif

	@ data/maps/BattleFrontier_OutsideWest/scripts.inc:318 BattleFrontier_OutsideWest_Text_MayISeeYourTicket (+1 aliases)
	.globl gText_Rom_21EF43
gText_Rom_21EF43: @ 0x0821EF43
	.string "れんらくせんを ごりよう ですね!\nチケットは おもち でしょうか?$"
	.if (. - gText_Rom_21EF43) > 0x23
	.error "gText_Rom_21EF43 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21EF43) < 0x23
	.space 0x23 - (. - gText_Rom_21EF43)
	.endif

	@ data/maps/BattleFrontier_OutsideWest/scripts.inc:321 BattleFrontier_OutsideWest_Text_MustHaveTicketToBoard (+1 aliases)
	.globl gText_Rom_21EF66
gText_Rom_21EF66: @ 0x0821EF66
	.string "{PLAYER}は\nチケットを もっていない!\p……もうしわけ ありません!\pふねに のれるのは\nチケットの ある かた だけです$"
	.if (. - gText_Rom_21EF66) > 0x3c
	.error "gText_Rom_21EF66 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21EF66) < 0x3c
	.space 0x3c - (. - gText_Rom_21EF66)
	.endif

	@ data/maps/BattleFrontier_OutsideWest/scripts.inc:324 BattleFrontier_OutsideWest_Text_WhereWouldYouLikeToGo (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_21EFA2
gText_Rom_21EFA2: @ 0x0821EFA2
	.string "{PLAYER}は\nふねのチケットを みせた!\pはい! けっこう です!\pいきさきは どちら でしょう?$"
	.if (. - gText_Rom_21EFA2) != 0x2f
	.error "gText_Rom_21EFA2 must retain its original byte length"
	.endif
	.globl gText_Rom_21EFC1
	.set gText_Rom_21EFC1, gText_Rom_21EFA2 + 0x1f

	@ data/maps/BattleFrontier_OutsideWest/scripts.inc:327 BattleFrontier_OutsideWest_Text_SlateportItIs
	.globl gText_Rom_21EFD1
gText_Rom_21EFD1: @ 0x0821EFD1
	.string "カイナシティ ですね!$"
	.if (. - gText_Rom_21EFD1) > 0xc
	.error "gText_Rom_21EFD1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21EFD1) < 0xc
	.space 0xc - (. - gText_Rom_21EFD1)
	.endif

	@ data/maps/BattleFrontier_OutsideWest/scripts.inc:330 BattleFrontier_OutsideWest_Text_LilycoveItIs (+1 aliases)
	.globl gText_Rom_21EFDD
gText_Rom_21EFDD: @ 0x0821EFDD
	.string "ミナモシティ ですね!$"
	.if (. - gText_Rom_21EFDD) > 0xc
	.error "gText_Rom_21EFDD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21EFDD) < 0xc
	.space 0xc - (. - gText_Rom_21EFDD)
	.endif

	@ data/maps/BattleFrontier_OutsideWest/scripts.inc:333 BattleFrontier_OutsideWest_Text_SailWithUsAnotherTime (+1 aliases)
	.globl gText_Rom_21EFE9
gText_Rom_21EFE9: @ 0x0821EFE9
	.string "また ごりよう ください!$"
	.if (. - gText_Rom_21EFE9) > 0xe
	.error "gText_Rom_21EFE9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21EFE9) < 0xe
	.space 0xe - (. - gText_Rom_21EFE9)
	.endif

	@ data/maps/BattleFrontier_OutsideWest/scripts.inc:336 BattleFrontier_OutsideWest_Text_PleaseBoardFerry (+1 aliases)
	.globl gText_Rom_21EFF7
gText_Rom_21EFF7: @ 0x0821EFF7
	.string "れんらくせんに のって おまちください$"
	.if (. - gText_Rom_21EFF7) > 0x14
	.error "gText_Rom_21EFF7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21EFF7) < 0x14
	.space 0x14 - (. - gText_Rom_21EFF7)
	.endif

	@ data/maps/BattleFrontier_OutsideWest/scripts.inc:339 BattleFrontier_OutsideWest_Text_ThenWhereWouldYouLikeToGo (+1 aliases)
	.globl gText_Rom_21F00B
gText_Rom_21F00B: @ 0x0821F00B
	.string "いきさきは どちら でしょう?$"
	.if (. - gText_Rom_21F00B) > 0x10
	.error "gText_Rom_21F00B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21F00B) < 0x10
	.space 0x10 - (. - gText_Rom_21F00B)
	.endif

	@ data/maps/BattleFrontier_OutsideWest/scripts.inc:342 BattleFrontier_OutsideWest_Text_BestOutOfAllMyFriends
	.globl gText_Rom_21F01B
gText_Rom_21F01B: @ 0x0821F01B
	.string "ぼく ともだちの なかでは\nいちばん つよいのに\lここに きてみたら てんで ダメ!$"
	.if (. - gText_Rom_21F01B) > 0x2b
	.error "gText_Rom_21F01B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21F01B) < 0x2b
	.space 0x2b - (. - gText_Rom_21F01B)
	.endif

	@ data/maps/BattleFrontier_OutsideWest/scripts.inc:345 BattleFrontier_OutsideWest_Text_CantFindBattleTower
	.globl gText_Rom_21F046
gText_Rom_21F046: @ 0x0821F046
	.string "バトルタワーに いきたいのに\nフロンティアパスの マップを みても\lなにが なんだか…… ひろすぎる……$"
	.if (. - gText_Rom_21F046) > 0x35
	.error "gText_Rom_21F046 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21F046) < 0x35
	.space 0x35 - (. - gText_Rom_21F046)
	.endif

	@ data/maps/BattleFrontier_OutsideWest/scripts.inc:348 BattleFrontier_OutsideWest_Text_GotSeasickOnWayHere
	.globl gText_Rom_21F07B
gText_Rom_21F07B: @ 0x0821F07B
	.string "すぐに チャレンジ したいのに\nくる とちゅうで ふなよい して しまった\pうっぷ……$"
	.if (. - gText_Rom_21F07B) > 0x2c
	.error "gText_Rom_21F07B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21F07B) < 0x2c
	.space 0x2c - (. - gText_Rom_21F07B)
	.endif

	@ data/maps/BattleFrontier_OutsideWest/scripts.inc:351 BattleFrontier_OutsideWest_Text_OnlyToughTrainersBroughtHere
	.globl gText_Rom_21F0A7
gText_Rom_21F0A7: @ 0x0821F0A7
	.string "ここには だれでも\nこられるって わけじゃ ないんだぜ\pつよさを みとめられた トレーナーが\nつれてきて もらえる ところなんだ!\pだから…… バトルフロンティアの ことを\nしらない トレーナーも おおいんだ$"
	.if (. - gText_Rom_21F0A7) > 0x69
	.error "gText_Rom_21F0A7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21F0A7) < 0x69
	.space 0x69 - (. - gText_Rom_21F0A7)
	.endif

	@ data/maps/BattleFrontier_OutsideWest/scripts.inc:354 BattleFrontier_OutsideWest_Text_SureWeCanChallengeWithNoMons
	.globl gText_Rom_21F110
gText_Rom_21F110: @ 0x0821F110
	.string "なぁなぁ にいちゃん……\pほんとに じぶんの ポケモン いなくても\nちょうせん できるの? だいじょうぶ?$"
	.if (. - gText_Rom_21F110) > 0x36
	.error "gText_Rom_21F110 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21F110) < 0x36
	.space 0x36 - (. - gText_Rom_21F110)
	.endif

	@ data/maps/BattleFrontier_OutsideWest/scripts.inc:357 BattleFrontier_OutsideWest_Text_BigGuySaidIllLendYouMons
	.globl gText_Rom_21F146
gText_Rom_21F146: @ 0x0821F146
	.string "だ だいじょうぶ だよ!\pきっと……\pなんだか おっかない おっさん だったけど\n「ポケモン かして やるぜ!」 って\lいってた じゃん か……$"
	.if (. - gText_Rom_21F146) > 0x49
	.error "gText_Rom_21F146 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21F146) < 0x49
	.space 0x49 - (. - gText_Rom_21F146)
	.endif

	@ data/maps/BattleFrontier_OutsideWest/scripts.inc:360 BattleFrontier_OutsideWest_Text_WhosRaisingThoseRentalMons
	.globl gText_Rom_21F18F
gText_Rom_21F18F: @ 0x0821F18F
	.string "あそこに あるのが バトルファクトリー\nつよいポケモンを レンタル できるんだ!\pでもさ レンタル ポケモンって\nいったい だれが そだてて いるんだろう?$"
	.if (. - gText_Rom_21F18F) > 0x4f
	.error "gText_Rom_21F18F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21F18F) < 0x4f
	.space 0x4f - (. - gText_Rom_21F18F)
	.endif

	@ data/maps/BattleFrontier_OutsideWest/scripts.inc:363 BattleFrontier_OutsideWest_Text_ScaredOfPikeBecauseSeviper
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_21F1DE
gText_Rom_21F1DE: @ 0x0821F1DE
	.string "ハブネークが こわくて\nバトルチューブに はいれないの……\pで でも せっかく きたんだから\nがんばって せいは するわ……! ブルブル$"
	.if (. - gText_Rom_21F1DE) != 0x45
	.error "gText_Rom_21F1DE must retain its original byte length"
	.endif
	.globl gText_Rom_21F21E
	.set gText_Rom_21F21E, gText_Rom_21F1DE + 0x40

	@ data/maps/BattleFrontier_OutsideWest/scripts.inc:366 BattleFrontier_OutsideWest_Text_LetsPlayRockPaperScissors
	.globl gText_Rom_21F223
gText_Rom_21F223: @ 0x0821F223
	.string "ね! わたしと ジャンケンしよ!\nじゃーん けーん ぽん!\p…… …… ……$"
	.if (. - gText_Rom_21F223) > 0x27
	.error "gText_Rom_21F223 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21F223) < 0x27
	.space 0x27 - (. - gText_Rom_21F223)
	.endif

	@ data/maps/BattleFrontier_OutsideWest/scripts.inc:369 BattleFrontier_OutsideWest_Text_WonIllTakePikeChallenge
	.globl gText_Rom_21F24A
gText_Rom_21F24A: @ 0x0821F24A
	.string "わーい かっちゃった!\nよし バトルチューブに ちょうせん しよ!$"
	.if (. - gText_Rom_21F24A) > 0x22
	.error "gText_Rom_21F24A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21F24A) < 0x22
	.space 0x22 - (. - gText_Rom_21F24A)
	.endif

	@ data/maps/BattleFrontier_OutsideWest/scripts.inc:372 BattleFrontier_OutsideWest_Text_LostIllPutOffPikeChallenge
	.globl gText_Rom_21F26C
gText_Rom_21F26C: @ 0x0821F26C
	.string "あーあ まけちゃったあ……\pいまは うんが わるいみたい\nバトルチューブは また あしたにしよ$"
	.if (. - gText_Rom_21F26C) > 0x30
	.error "gText_Rom_21F26C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21F26C) < 0x30
	.space 0x30 - (. - gText_Rom_21F26C)
	.endif

	@ data/maps/BattleFrontier_OutsideWest/scripts.inc:375 BattleFrontier_OutsideWest_Text_ChooseFishingOverBattling
	.globl gText_Rom_21F29C
gText_Rom_21F29C: @ 0x0821F29C
	.string "この かいわいで なぜか つりを\nたのしもうと して いるのは\lおれ くらいの ものだろうな!\p…… え なんにも つれないの?\nがっ かり$"
	.if (. - gText_Rom_21F29C) > 0x47
	.error "gText_Rom_21F29C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21F29C) < 0x47
	.space 0x47 - (. - gText_Rom_21F29C)
	.endif

	@ data/maps/BattleFrontier_OutsideWest/scripts.inc:378 BattleFrontier_OutsideWest_Text_KeepBattlingUntilIGetSymbol
	.globl gText_Rom_21F2E3
gText_Rom_21F2E3: @ 0x0821F2E3
	.string "きょうは シンボルを もらえる までは\nぜったいに あきらめないで がんばろっと!$"
	.if (. - gText_Rom_21F2E3) > 0x2a
	.error "gText_Rom_21F2E3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21F2E3) < 0x2a
	.space 0x2a - (. - gText_Rom_21F2E3)
	.endif

	@ data/maps/BattleFrontier_OutsideWest/scripts.inc:381 BattleFrontier_OutsideWest_Text_YoureOffToChallengeDome
	.globl gText_Rom_21F30D
gText_Rom_21F30D: @ 0x0821F30D
	.string "おや…… バトルドームに\nちょうせん されますか?\pでは おたがい かちあがって\nおあい できるように がんばりましょう$"
	.if (. - gText_Rom_21F30D) > 0x3d
	.error "gText_Rom_21F30D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21F30D) < 0x3d
	.space 0x3d - (. - gText_Rom_21F30D)
	.endif

	@ data/maps/BattleFrontier_OutsideWest/scripts.inc:384 BattleFrontier_OutsideWest_Text_DomeIsHereGrandpa
	.globl gText_Rom_21F34A
gText_Rom_21F34A: @ 0x0821F34A
	.string "ほら じいちゃん こっち こっち!\nここが バトルドームよっ! がんばって!$"
	.if (. - gText_Rom_21F34A) > 0x27
	.error "gText_Rom_21F34A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21F34A) < 0x27
	.space 0x27 - (. - gText_Rom_21F34A)
	.endif

	@ data/maps/BattleFrontier_OutsideWest/scripts.inc:387 BattleFrontier_OutsideWest_Text_WontLetGentlemenBeatMe
	.globl gText_Rom_21F371
gText_Rom_21F371: @ 0x0821F371
	.string "ほほおぉ ここが バトルドームか……\nよし ジェントルマンには まけんぞ!\p……で いりぐちは どこ なんじゃろ?$"
	.if (. - gText_Rom_21F371) > 0x3a
	.error "gText_Rom_21F371 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21F371) < 0x3a
	.space 0x3a - (. - gText_Rom_21F371)
	.endif

	@ data/maps/BattleFrontier_OutsideWest/scripts.inc:390 BattleFrontier_OutsideWest_Text_NothingHereNotLongAgo
	.globl gText_Rom_21F3AB
gText_Rom_21F3AB: @ 0x0821F3AB
	.string "ちょっと まえ までは\nなんも なかった とち なのに……\pすっげー ところに なっちゃったなあ!\nこんど かーちゃんも つれて きてやるか$"
	.if (. - gText_Rom_21F3AB) > 0x47
	.error "gText_Rom_21F3AB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21F3AB) < 0x47
	.space 0x47 - (. - gText_Rom_21F3AB)
	.endif

	@ data/maps/BattleFrontier_OutsideWest/scripts.inc:393 BattleFrontier_OutsideWest_Text_FinallyArrivedAtFrontier
	.globl gText_Rom_21F3F2
gText_Rom_21F3F2: @ 0x0821F3F2
	.string "とうとう バトルフロンティアに きたわ!\pみんな あたしの つよさと うつくしさに\nくぎづけに なるわね!$"
	.if (. - gText_Rom_21F3F2) > 0x36
	.error "gText_Rom_21F3F2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21F3F2) < 0x36
	.space 0x36 - (. - gText_Rom_21F3F2)
	.endif

	@ data/maps/BattleFrontier_OutsideWest/scripts.inc:396 BattleFrontier_OutsideWest_Text_SquareFilledWithToughPeople
	.globl gText_Rom_21F428
gText_Rom_21F428: @ 0x0821F428
	.string "もぐ もぐ\pこの ひろば には\nつよいひと いっぱい らしいねえ\lもぐ もぐ$"
	.if (. - gText_Rom_21F428) > 0x27
	.error "gText_Rom_21F428 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21F428) < 0x27
	.space 0x27 - (. - gText_Rom_21F428)
	.endif

	@ data/maps/BattleFrontier_OutsideWest/scripts.inc:399 BattleFrontier_OutsideWest_Text_MetOlderGirlAtPike
	.globl gText_Rom_21F44F
gText_Rom_21F44F: @ 0x0821F44F
	.string "ぱく ぱく\pこのまえ バトルチューブで\nめつきが わるくて こわそうな\lおねえさんに あったんだよ\lぱく ぱく\pそしたら 「いつまで くってるの!」って\nおこられて ボコボコに やられちったよ\pいやあ こわかったなー\pぱく ぱく$"
	.if (. - gText_Rom_21F44F) > 0x73
	.error "gText_Rom_21F44F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21F44F) < 0x73
	.space 0x73 - (. - gText_Rom_21F44F)
	.endif

	@ data/maps/BattleFrontier_OutsideWest/scripts.inc:402 BattleFrontier_OutsideWest_Text_LastTimeOurEyesMet
	.globl gText_Rom_21F4C2
gText_Rom_21F4C2: @ 0x0821F4C2
	.string "はあっ!?\nあなた なに いって くれちゃってるの?\pわたし なんか\nこないだ おうえん してたら\lばーーーっちり めが あったんだからっ!$"
	.if (. - gText_Rom_21F4C2) > 0x47
	.error "gText_Rom_21F4C2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21F4C2) < 0x47
	.space 0x47 - (. - gText_Rom_21F4C2)
	.endif

	@ data/maps/BattleFrontier_OutsideWest/scripts.inc:405 BattleFrontier_OutsideWest_Text_DomeAceLookedBecauseOfMyCheering
	.globl gText_Rom_21F509
gText_Rom_21F509: @ 0x0821F509
	.string "なんだとぉー!?\pそれは となりに ぼくが\nいたから でしょっ!\pあのひとは ぼくの おうえんを\nきいて ふりむいて くれたんだ っつーの!$"
	.if (. - gText_Rom_21F509) > 0x47
	.error "gText_Rom_21F509 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21F509) < 0x47
	.space 0x47 - (. - gText_Rom_21F509)
	.endif

	@ data/maps/BattleFrontier_OutsideWest/scripts.inc:408 BattleFrontier_OutsideWest_Text_DomeAceIsMine
	.globl gText_Rom_21F550
gText_Rom_21F550: @ 0x0821F550
	.string "ああ うるさいっ! うるさいわっ!\pおみゃーら みたいな おこさまは\nどこぞの ジムリーダーでも\lおうえん しとけっ!!\pドームスーパースターは わしだけっ!\nわしだけの アイドルなのっ!!$"
	.if (. - gText_Rom_21F550) > 0x60
	.error "gText_Rom_21F550 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21F550) < 0x60
	.space 0x60 - (. - gText_Rom_21F550)
	.endif

	@ data/maps/BattleFrontier_OutsideWest/scripts.inc:411 BattleFrontier_OutsideWest_Text_FansOverThereUsedToBeTrainers
	.globl gText_Rom_21F5B0
gText_Rom_21F5B0: @ 0x0821F5B0
	.string "あそこで けんか してる ひとたち……\pあれでも もともとは すごく つよくて\nゆうめいな トレーナー だったんだよ\pだけど バトルトーナメントで\nあるトレーナーに ボコボコに まけてから\lみんな そのトレーナーの\lだいファンに なっちゃったんだ\pいまじゃ まいにち ちょうせんも しないで\nバトルドームに おうえんに かよってるよ$"
	.if (. - gText_Rom_21F5B0) > 0xa7
	.error "gText_Rom_21F5B0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21F5B0) < 0xa7
	.space 0xa7 - (. - gText_Rom_21F5B0)
	.endif

	@ data/maps/BattleFrontier_OutsideWest/scripts.inc:414 BattleFrontier_OutsideWest_Text_MonWithLongTailInFrontier
	.globl gText_Rom_21F657
gText_Rom_21F657: @ 0x0821F657
	.string "バトルフロンティアの どっかで\nえらく しっぽの ながーい ポケモンを\lみたって きいたわー!\pああ かわいい ポケモンに ちがいない……\pもうー ちょうせん よりも\nそのこ さがしに いきたいわぁー$"
	.if (. - gText_Rom_21F657) > 0x65
	.error "gText_Rom_21F657 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21F657) < 0x65
	.space 0x65 - (. - gText_Rom_21F657)
	.endif
	.incbin "baserom.gba", 0x21f6bc, 0xedf

	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:930 BattleFrontier_BattleTowerLobby_Text_DirectYouToBattleRoom
	.globl gText_Rom_22059B
gText_Rom_22059B: @ 0x0822059B
	.string "それでは バトルルームへ\nごあんない します!$"
	.if (. - gText_Rom_22059B) > 0x18
	.error "gText_Rom_22059B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22059B) < 0x18
	.space 0x18 - (. - gText_Rom_22059B)
	.endif

	@ data/maps/BattleFrontier_BattleDomeLobby/scripts.inc:510 BattleFrontier_BattleDomeLobby_Text_DidntSaveBeforeQuitting (+1 aliases)
	.globl gText_Rom_2205B3
gText_Rom_2205B3: @ 0x082205B3
	.string "おきゃくさま!\pぜんかい ちゃんと レポートを かいて\nしゅうりょう しませんでしたね?\pもうしわけ ありませんが そのばあい\nちょうせんは むこうと なります$"
	.if (. - gText_Rom_2205B3) > 0x51
	.error "gText_Rom_2205B3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2205B3) < 0x51
	.space 0x51 - (. - gText_Rom_2205B3)
	.endif

	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:936 BattleFrontier_BattleTowerLobby_Text_CongratsBeatenSeven
	.globl gText_Rom_220604
gText_Rom_220604: @ 0x08220604
	.string "おめでとう ございます!\nみごと 7にんぬき されましたね!\p$"
	.if (. - gText_Rom_220604) > 0x20
	.error "gText_Rom_220604 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_220604) < 0x20
	.space 0x20 - (. - gText_Rom_220604)
	.endif

	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:940 BattleFrontier_BattleTowerLobby_Text_EarnedFabulousPrize
	.globl gText_Rom_220624
gText_Rom_220624: @ 0x08220624
	.string "7にんぬきを たっせい されましたので\nこの しょうひんを さしあげます!\p$"
	.if (. - gText_Rom_220624) > 0x27
	.error "gText_Rom_220624 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_220624) < 0x27
	.space 0x27 - (. - gText_Rom_220624)
	.endif

	@ data/maps/BattleFrontier_BattleArenaLobby/scripts.inc:461 BattleFrontier_BattleArenaLobby_Text_ReceivedPrize (+6 aliases)
	.globl gText_Rom_22064B
gText_Rom_22064B: @ 0x0822064B
	.string "{PLAYER}は\n{STR_VAR_1}を もらった!$"
	.if (. - gText_Rom_22064B) > 0xe
	.error "gText_Rom_22064B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22064B) < 0xe
	.space 0xe - (. - gText_Rom_22064B)
	.endif

	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:947 BattleFrontier_BattleTowerLobby_Text_BagFullMakeRoom
	.globl gText_Rom_220659
gText_Rom_220659: @ 0x08220659
	.string "…あら どうぐが いっぱいですね\pどうぐを せいりしてから\nまたおこしください$"
	.if (. - gText_Rom_220659) > 0x28
	.error "gText_Rom_220659 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_220659) < 0x28
	.space 0x28 - (. - gText_Rom_220659)
	.endif

	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:950 BattleFrontier_BattleTowerLobby_Text_ThankYouForPlaying
	.globl gText_Rom_220681
gText_Rom_220681: @ 0x08220681
	.string "おつかれさまでした!\p$"
	.if (. - gText_Rom_220681) > 0xc
	.error "gText_Rom_220681 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_220681) < 0xc
	.space 0xc - (. - gText_Rom_220681)
	.endif

	@ data/maps/BattleFrontier_BattleDomeLobby/scripts.inc:540 BattleFrontier_BattleDomeLobby_Text_RecordWillBeSaved (+1 aliases)
	.globl gText_Rom_22068D
gText_Rom_22068D: @ 0x0822068D
	.string "せいせきを レポートに かきますので\nおまちください$"
	.if (. - gText_Rom_22068D) > 0x1b
	.error "gText_Rom_22068D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22068D) < 0x1b
	.space 0x1b - (. - gText_Rom_22068D)
	.endif

	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:956 BattleFrontier_BattleTowerLobby_Text_WeveBeenWaitingForYou
	.globl gText_Rom_2206A8
gText_Rom_2206A8: @ 0x082206A8
	.string "おまちしておりました!\p$"
	.if (. - gText_Rom_2206A8) > 0xd
	.error "gText_Rom_2206A8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2206A8) < 0xd
	.space 0xd - (. - gText_Rom_2206A8)
	.endif

	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:959 BattleFrontier_BattleTowerLobby_Text_ProgressWillBeSaved
	.globl gText_Rom_2206B5
gText_Rom_2206B5: @ 0x082206B5
	.string "バトルルームに ごあんないする まえに\nレポートを かきますので おまちください$"
	.if (. - gText_Rom_2206B5) > 0x29
	.error "gText_Rom_2206B5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2206B5) < 0x29
	.space 0x29 - (. - gText_Rom_2206B5)
	.endif

	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:962 BattleFrontier_BattleTowerLobby_Text_AboutToFace50thTrainer
	.globl gText_Rom_2206DE
gText_Rom_2206DE: @ 0x082206DE
	.string "いよいよ つぎは 50にんめの\nトレーナー ですね!\pこれからは 7にんを かちぬく たびに\nあなたの ポケモンに きねんリボンが\lおくられますので がんばって くださいね!$"
	.if (. - gText_Rom_2206DE) > 0x58
	.error "gText_Rom_2206DE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2206DE) < 0x58
	.space 0x58 - (. - gText_Rom_2206DE)
	.endif

	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:965 BattleFrontier_BattleTowerLobby_Text_HereAreSomeRibbons
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_220736
gText_Rom_220736: @ 0x08220736
	.string "つよい トレーナー 7にんを\nかちぬいた きねんの リボンを どうぞ!\p{PLAYER}は リボンを もらった!$"
	.if (. - gText_Rom_220736) != 0x33
	.error "gText_Rom_220736 must retain its original byte length"
	.endif
	.globl gText_Rom_22075A
	.set gText_Rom_22075A, gText_Rom_220736 + 0x24

	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:968 BattleFrontier_BattleTowerLobby_Text_PutRibbonOnMons
	.globl gText_Rom_220769
gText_Rom_220769: @ 0x08220769
	.string "{PLAYER}は ポケモンに\nリボンを つけて あげた!$"
	.if (. - gText_Rom_220769) > 0x18
	.error "gText_Rom_220769 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_220769) < 0x18
	.space 0x18 - (. - gText_Rom_220769)
	.endif

	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:971 BattleFrontier_BattleTowerLobby_Text_DescribeFeelingsAboutBattleTower
	.globl gText_Rom_220781
gText_Rom_220781: @ 0x08220781
	.string "ねえねえ!\pバトルタワーで これから しょうぶだ!\n……ってとき とか\pかったり まけたり したときって\nどんな きもち なのか おしえてよ!$"
	.if (. - gText_Rom_220781) > 0x48
	.error "gText_Rom_220781 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_220781) < 0x48
	.space 0x48 - (. - gText_Rom_220781)
	.endif

	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:974 BattleFrontier_BattleTowerLobby_Text_FeelWhatWhenYouBegin
	.globl gText_Rom_2207C9
gText_Rom_2207C9: @ 0x082207C9
	.string "じゃあ さっそく\nしょうぶに いどむときの きもちを……$"
	.if (. - gText_Rom_2207C9) > 0x1d
	.error "gText_Rom_2207C9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2207C9) < 0x1d
	.space 0x1d - (. - gText_Rom_2207C9)
	.endif

	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:977 BattleFrontier_BattleTowerLobby_Text_FeelWhatWhenYouveWon
	.globl gText_Rom_2207E6
gText_Rom_2207E6: @ 0x082207E6
	.string "じゃあ しょうぶに かったときの\nきもちを きかせて もらおうかなー$"
	.if (. - gText_Rom_2207E6) > 0x23
	.error "gText_Rom_2207E6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2207E6) < 0x23
	.space 0x23 - (. - gText_Rom_2207E6)
	.endif

	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:980 BattleFrontier_BattleTowerLobby_Text_FeelWhatWhenYouveLost
	.globl gText_Rom_220809
gText_Rom_220809: @ 0x08220809
	.string "しょうぶに まけちゃったとき\nどんな きもちを なるか きかせて!$"
	.if (. - gText_Rom_220809) > 0x22
	.error "gText_Rom_220809 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_220809) < 0x22
	.space 0x22 - (. - gText_Rom_220809)
	.endif

	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:983 BattleFrontier_BattleTowerLobby_Text_DontThinkMuchAboutIt
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_22082B
gText_Rom_22082B: @ 0x0822082B
	.string "とくに なにも おもわないって こと?\nきみって クールなんだね$"
	.if (. - gText_Rom_22082B) != 0x21
	.error "gText_Rom_22082B must retain its original byte length"
	.endif
	.globl gText_Rom_220847
	.set gText_Rom_220847, gText_Rom_22082B + 0x1c

	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:986 BattleFrontier_BattleTowerLobby_Text_ChangedYourMind
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_22084C
gText_Rom_22084C: @ 0x0822084C
	.string "あれ? やっぱり やめたの?\nきみって きまぐれ なんだね$"
	.if (. - gText_Rom_22084C) != 0x1e
	.error "gText_Rom_22084C must retain its original byte length"
	.endif
	.globl gText_Rom_220865
	.set gText_Rom_220865, gText_Rom_22084C + 0x19

	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:989 BattleFrontier_BattleTowerLobby_Text_ThatsHowYouFeel
	.globl gText_Rom_22086A
gText_Rom_22086A: @ 0x0822086A
	.string "へえ そんな きぶんに なるんだ!\nなかなか こせいてき だね……\pどうも ありがと!$"
	.if (. - gText_Rom_22086A) > 0x2c
	.error "gText_Rom_22086A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22086A) < 0x2c
	.space 0x2c - (. - gText_Rom_22086A)
	.endif

	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:992 BattleFrontier_BattleTowerLobby_Text_WinsInRowRecorded
	.globl gText_Rom_220896
gText_Rom_220896: @ 0x08220896
	.string "かちぬいた トレーナーの にんずうは\nきろく されて いるのよ!\pはずかしく ない たたかいを\nしなきゃ……!$"
	.if (. - gText_Rom_220896) > 0x38
	.error "gText_Rom_220896 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_220896) < 0x38
	.space 0x38 - (. - gText_Rom_220896)
	.endif

	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:995 BattleFrontier_BattleTowerLobby_Text_CanLeaveUntilLossOrSevenWins
	.globl gText_Rom_2208CE
gText_Rom_2208CE: @ 0x082208CE
	.string "いちど バトルタワーに はいれば\nとちゅうで まけちゃうか\l7にん かちぬくまでは\lでられなく なっちゃうんだ!\pかくごして チャレンジ しないとね!$"
	.if (. - gText_Rom_2208CE) > 0x4c
	.error "gText_Rom_2208CE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2208CE) < 0x4c
	.space 0x4c - (. - gText_Rom_2208CE)
	.endif

	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:999 BattleFrontier_BattleTowerLobby_Text_DoubleBattleRoomConstruction
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_22091A
gText_Rom_22091A: @ 0x0822091A
	.string "バトルタワー ダブルバトルコーナーへ\nようこそ!\pげんざい バトルルームは こうじちゅうです\nかんせいまで しばらく おまちください$"
	.if (. - gText_Rom_22091A) != 0x43
	.error "gText_Rom_22091A must retain its original byte length"
	.endif
	.globl gText_Rom_220950
	.set gText_Rom_220950, gText_Rom_22091A + 0x36

	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:1003 BattleFrontier_BattleTowerLobby_Text_MultiBattleRoomConstruction
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_22095D
gText_Rom_22095D: @ 0x0822095D
	.string "バトルタワー マルチバトルコーナーへ\nようこそ!\pげんざい バトルルームは こうじちゅうです\nかんせいまで しばらく おまちください$"
	.if (. - gText_Rom_22095D) != 0x43
	.error "gText_Rom_22095D must retain its original byte length"
	.endif
	.globl gText_Rom_220993
	.set gText_Rom_220993, gText_Rom_22095D + 0x36

	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:1006 BattleFrontier_BattleTowerLobby_Text_LookForwardToAnotherChallenge
	.globl gText_Rom_2209A0
gText_Rom_2209A0: @ 0x082209A0
	.string "またの ちょうせんを\nおまちして おります!$"
	.if (. - gText_Rom_2209A0) > 0x17
	.error "gText_Rom_2209A0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2209A0) < 0x17
	.space 0x17 - (. - gText_Rom_2209A0)
	.endif

	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:1009 BattleFrontier_BattleTowerLobby_Text_WhichLevelMode
	.globl gText_Rom_2209B7
gText_Rom_2209B7: @ 0x082209B7
	.string "バトルルームには\nレベル50と オープンレベルと ありますが\lどちらに はいりますか?$"
	.if (. - gText_Rom_2209B7) > 0x2c
	.error "gText_Rom_2209B7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2209B7) < 0x2c
	.space 0x2c - (. - gText_Rom_2209B7)
	.endif

	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:1013 BattleFrontier_BattleTowerLobby_Text_PleaseSelectMons
	.globl gText_Rom_2209E3
gText_Rom_2209E3: @ 0x082209E3
	.string "では さんかする ポケモンを\nおえらび ください!$"
	.if (. - gText_Rom_2209E3) > 0x1a
	.error "gText_Rom_2209E3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2209E3) < 0x1a
	.space 0x1a - (. - gText_Rom_2209E3)
	.endif

	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:1016 BattleFrontier_BattleTowerLobby_Text_OkayToSaveBeforeEntering
	.globl gText_Rom_2209FD
gText_Rom_2209FD: @ 0x082209FD
	.string "ごあんないする まえに\nレポートを かきますが よろしいですか?$"
	.if (. - gText_Rom_2209FD) > 0x21
	.error "gText_Rom_2209FD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2209FD) < 0x21
	.space 0x21 - (. - gText_Rom_2209FD)
	.endif

	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:1019 BattleFrontier_BattleTowerLobby_Text_ShowYouToBattleRoom
	.globl gText_Rom_220A1E
gText_Rom_220A1E: @ 0x08220A1E
	.string "それでは {STR_VAR_1} バトルルームに\nごあんない いたします!$"
	.if (. - gText_Rom_220A1E) > 0x1d
	.error "gText_Rom_220A1E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_220A1E) < 0x1d
	.space 0x1d - (. - gText_Rom_220A1E)
	.endif

	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:1022 BattleFrontier_BattleTowerLobby_Text_RecordLastMatch
	.globl gText_Rom_220A3B
gText_Rom_220A3B: @ 0x08220A3B
	.string "バトルタワーで\nさいごに おこなった たたかいを\lフロンティアパスに きろく しますか?$"
	.if (. - gText_Rom_220A3B) > 0x2d
	.error "gText_Rom_220A3B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_220A3B) < 0x2d
	.space 0x2d - (. - gText_Rom_220A3B)
	.endif
	.incbin "baserom.gba", 0x220a68, 0x95

	@ data/maps/BattleFrontier_BattleDomeLobby/scripts.inc:494 BattleFrontier_BattleDomeLobby_Text_NotEnoughValidMonsEnd (+1 aliases)
	.globl gText_Rom_220AFD
gText_Rom_220AFD: @ 0x08220AFD
	.string "じゅんびが できましたら\nまた おこし ください$"
	.if (. - gText_Rom_220AFD) > 0x19
	.error "gText_Rom_220AFD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_220AFD) < 0x19
	.space 0x19 - (. - gText_Rom_220AFD)
	.endif
	.incbin "baserom.gba", 0x220b16, 0x8a

	@ data/maps/BattleFrontier_BattleDomeLobby/scripts.inc:494 BattleFrontier_BattleDomeLobby_Text_NotEnoughValidMonsEnd (+1 aliases)
	.globl gText_Rom_220BA0
gText_Rom_220BA0: @ 0x08220BA0
	.string "じゅんびが できましたら\nまた おこし ください$"
	.if (. - gText_Rom_220BA0) > 0x19
	.error "gText_Rom_220BA0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_220BA0) < 0x19
	.space 0x19 - (. - gText_Rom_220BA0)
	.endif

	@ field-script:0x2200B2 FieldScriptText_220BB9
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_220BB9
gText_Rom_220BB9: @ 0x08220BB9
	.string "おきゃくさま！\pさんかできる　ポケモンが　3ひき　いません！\pさんかする　ためには　レベルが　50いかで\nすべて　ちがうしゅるいの　ポケモンを\l3ひき　よういして　ください\pまた　もたせる　どうぐも\nすべて　ちがう　どうぐに　してください！\pなお　タマゴ{0xFD}{0x02}さんか　させることは　できません！\pじゅんびが　できましたら\nまた　おこし　ください$"
	.if (. - gText_Rom_220BB9) != 0xac
	.error "gText_Rom_220BB9 must retain its original byte length"
	.endif
	.globl gText_Rom_220C4C
	.set gText_Rom_220C4C, gText_Rom_220BB9 + 0x93

	@ field-script:0x2200F7 FieldScriptText_220C65
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_220C65
gText_Rom_220C65: @ 0x08220C65
	.string "おきゃくさま！\pさんかできる　ポケモンが　3ひき　いません！\pさんかする　ためには\nすべて　ちがうしゅるいの　ポケモンを\l3ひき　よういして　ください\pまた　もたせる　どうぐも\nすべて　ちがう　どうぐに　してください！\pなお　タマゴ{0xFD}{0x02}さんか　させることは　できません！\pじゅんびが　できましたら\nまた　おこし　ください$"
	.if (. - gText_Rom_220C65) != 0xa1
	.error "gText_Rom_220C65 must retain its original byte length"
	.endif
	.globl gText_Rom_220CED
	.set gText_Rom_220CED, gText_Rom_220C65 + 0x88

	@ field-script:0x2200C0 FieldScriptText_220D06
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_220D06
gText_Rom_220D06: @ 0x08220D06
	.string "おきゃくさま！\pさんかできる　ポケモンが　4ひき　いません！\pさんかする　ためには　レベルが　50いかで\nすべて　ちがうしゅるいの　ポケモンを\l4ひき　よういして　ください\pまた　もたせる　どうぐも\nすべて　ちがう　どうぐに　してください！\pなお　タマゴ{0xFD}{0x02}さんか　させることは　できません！\pじゅんびが　できましたら\nまた　おこし　ください$"
	.if (. - gText_Rom_220D06) != 0xac
	.error "gText_Rom_220D06 must retain its original byte length"
	.endif
	.globl gText_Rom_220D99
	.set gText_Rom_220D99, gText_Rom_220D06 + 0x93

	@ field-script:0x220105 FieldScriptText_220DB2
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_220DB2
gText_Rom_220DB2: @ 0x08220DB2
	.string "おきゃくさま！\pさんかできる　ポケモンが　4ひき　いません！\pさんかする　ためには\nすべて　ちがうしゅるいの　ポケモンを\l4ひき　よういして　ください\pまた　もたせる　どうぐも\nすべて　ちがう　どうぐに　してください！\pなお　タマゴ{0xFD}{0x02}さんか　させることは　できません！\pじゅんびが　できましたら\nまた　おこし　ください$"
	.if (. - gText_Rom_220DB2) != 0xa1
	.error "gText_Rom_220DB2 must retain its original byte length"
	.endif
	.globl gText_Rom_220E3A
	.set gText_Rom_220E3A, gText_Rom_220DB2 + 0x88

	@ field-script:0x2200A4 FieldScriptText_220E53
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_220E53
gText_Rom_220E53: @ 0x08220E53
	.string "おきゃくさま！\pさんかできる　ポケモンが　2ひき　いません！\pさんかする　ためには　レベルが　50いかで\nすべて　ちがうしゅるいの　ポケモンを\l2ひき　よういして　ください\pまた　もたせる　どうぐも\nすべて　ちがう　どうぐに　してください！\pなお　タマゴ{0xFD}{0x02}さんか　させることは　できません！\pじゅんびが　できましたら\nまた　おこし　ください$"
	.if (. - gText_Rom_220E53) != 0xac
	.error "gText_Rom_220E53 must retain its original byte length"
	.endif
	.globl gText_Rom_220EE6
	.set gText_Rom_220EE6, gText_Rom_220E53 + 0x93

	@ field-script:0x2200E9 FieldScriptText_220EFF
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_220EFF
gText_Rom_220EFF: @ 0x08220EFF
	.string "おきゃくさま！\pさんかできる　ポケモンが　2ひき　いません！\pさんかする　ためには\nすべて　ちがうしゅるいの　ポケモンを\l2ひき　よういして　ください\pまた　もたせる　どうぐも\nすべて　ちがう　どうぐに　してください！\pなお　タマゴ{0xFD}{0x02}さんか　させることは　できません！\pじゅんびが　できましたら\nまた　おこし　ください$"
	.if (. - gText_Rom_220EFF) != 0xa1
	.error "gText_Rom_220EFF must retain its original byte length"
	.endif
	.globl gText_Rom_220F87
	.set gText_Rom_220F87, gText_Rom_220EFF + 0x88

	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:1054 BattleFrontier_BattleTowerLobby_Text_WelcomSingleBattle
	.globl gText_Rom_220FA0
gText_Rom_220FA0: @ 0x08220FA0
	.string "トレーナーの さいのうを はかる ばしょ!\nバトルタワーへ ようこそ!\pこちらでは シングル バトルルームの\nごあんないを しております!$"
	.if (. - gText_Rom_220FA0) > 0x46
	.error "gText_Rom_220FA0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_220FA0) < 0x46
	.space 0x46 - (. - gText_Rom_220FA0)
	.endif

	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:1057 BattleFrontier_BattleTowerLobby_Text_TakeSinglesChallenge
	.globl gText_Rom_220FE6
gText_Rom_220FE6: @ 0x08220FE6
	.string "シングル バトルルームに\nちょうせん されますか?$"
	.if (. - gText_Rom_220FE6) > 0x1a
	.error "gText_Rom_220FE6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_220FE6) < 0x1a
	.space 0x1a - (. - gText_Rom_220FE6)
	.endif

	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:1060 BattleFrontier_BattleTowerLobby_Text_ExplainSinglesChallenge
	.globl gText_Rom_221000
gText_Rom_221000: @ 0x08221000
	.string "バトルタワー シングル バトルルームは\n3ひきの ポケモンで\lシングルバトルを おこなう しせつです!\pタワーには シングル バトルルーム という\nたいせんの ための へやが\lたくさん ようい されています!\pそれぞれの シングル バトルルームには\n7にんの トレーナーが いて\lあなたの チャレンジを まっています!\pみごと その 7にんを たおせたら\nバトルポイントを しんてい いたします!\pまた とちゅうで ちょうせんを\nちゅうだん したい ばあいは しっかりと\lレポートに かいて おわらせないと\lちょうせんは むこうに なってしまうので\lじゅうぶん ちゅうい してください!$"
	.if (. - gText_Rom_221000) > 0x126
	.error "gText_Rom_221000 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_221000) < 0x126
	.space 0x126 - (. - gText_Rom_221000)
	.endif

	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:1063 BattleFrontier_BattleTowerLobby_Text_SelectThreeMons
	.globl gText_Rom_221126
gText_Rom_221126: @ 0x08221126
	.string "では さんかする ポケモンを\n3ひき おえらび ください!$"
	.if (. - gText_Rom_221126) > 0x1e
	.error "gText_Rom_221126 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_221126) < 0x1e
	.space 0x1e - (. - gText_Rom_221126)
	.endif

	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:1066 BattleFrontier_BattleTowerLobby_Text_WelcomeDoubleBattle
	.globl gText_Rom_221144
gText_Rom_221144: @ 0x08221144
	.string "トレーナーの さいのうを はかる ばしょ!\nバトルタワーへ ようこそ!\pこちらでは ダブル バトルルームの\nごあんないを しております!$"
	.if (. - gText_Rom_221144) > 0x45
	.error "gText_Rom_221144 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_221144) < 0x45
	.space 0x45 - (. - gText_Rom_221144)
	.endif

	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:1069 BattleFrontier_BattleTowerLobby_Text_TakeDoublesChallenge
	.globl gText_Rom_221189
gText_Rom_221189: @ 0x08221189
	.string "ダブル バトルルームに\nちょうせん されますか?$"
	.if (. - gText_Rom_221189) > 0x19
	.error "gText_Rom_221189 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_221189) < 0x19
	.space 0x19 - (. - gText_Rom_221189)
	.endif

	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:1072 BattleFrontier_BattleTowerLobby_Text_ExplainDoublesChallenge
	.globl gText_Rom_2211A2
gText_Rom_2211A2: @ 0x082211A2
	.string "バトルタワー ダブル バトルルームは\n4ひきの ポケモンで\lダブルバトルを おこなう しせつです!\pタワーには ダブル バトルルーム という\nたいせんの ための へやが\lたくさん ようい されています!\pそれぞれの ダブル バトルルームには\n7にんの トレーナーが いて\lあなたの チャレンジを まっています!\pみごと その 7にんを たおせたら\nバトルポイントを しんてい いたします!\pまた とちゅうで ちょうせんを\nちゅうだん したい ばあいは しっかりと\lレポートに かいて おわらせないと\lちょうせんは むこうに なってしまうので\lじゅうぶん ちゅうい してください!$"
	.if (. - gText_Rom_2211A2) > 0x122
	.error "gText_Rom_2211A2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2211A2) < 0x122
	.space 0x122 - (. - gText_Rom_2211A2)
	.endif

	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:1075 BattleFrontier_BattleTowerLobby_Text_PleaseSelectFourMons
	.globl gText_Rom_2212C4
gText_Rom_2212C4: @ 0x082212C4
	.string "では さんかする ポケモンを\n4ひき おえらび ください!$"
	.if (. - gText_Rom_2212C4) > 0x1e
	.error "gText_Rom_2212C4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2212C4) < 0x1e
	.space 0x1e - (. - gText_Rom_2212C4)
	.endif

	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:1078 BattleFrontier_BattleTowerLobby_Text_WelcomeMultiBattle
	.globl gText_Rom_2212E2
gText_Rom_2212E2: @ 0x082212E2
	.string "トレーナーの さいのうを はかる ばしょ!\nバトルタワーへ ようこそ!\pこちらでは マルチ バトルルームの\nごあんないを しております!$"
	.if (. - gText_Rom_2212E2) > 0x45
	.error "gText_Rom_2212E2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2212E2) < 0x45
	.space 0x45 - (. - gText_Rom_2212E2)
	.endif

	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:1081 BattleFrontier_BattleTowerLobby_Text_TakeMultisChallenge
	.globl gText_Rom_221327
gText_Rom_221327: @ 0x08221327
	.string "マルチ バトルルームに\nちょうせん されますか?$"
	.if (. - gText_Rom_221327) > 0x19
	.error "gText_Rom_221327 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_221327) < 0x19
	.space 0x19 - (. - gText_Rom_221327)
	.endif

	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:1084 BattleFrontier_BattleTowerLobby_Text_ExplainMultisChallenge
	.globl gText_Rom_221340
gText_Rom_221340: @ 0x08221340
	.string "マルチ バトルルームは タワーに いる\nトレーナーと きょうりょくして\lポケモンを 2ひきずつ もちより\lマルチバトルで たたかう しせつです!\pタワーないには バトルサロン という\nトレーナーの あつまる へやが\lようい されています!\pここで いっしょに タッグを くみたい\nトレーナーを みつけて ください!\pタッグが くめたところで\nマルチ バトルルームへ おつれします!\pこの マルチ バトルルームには\n7くみの タッグ トレーナーが いて\lあなたの チャレンジを まっています!\pみごと その 7くみを たおせたら\nバトルポイントを しんてい いたします!\pまた とちゅうで ちょうせんを\nちゅうだん したい ばあいは しっかりと\lレポートに かいて おわらせないと\lちょうせんは むこうに なってしまうので\lじゅうぶん ちゅうい してください!$"
	.if (. - gText_Rom_221340) > 0x17c
	.error "gText_Rom_221340 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_221340) < 0x17c
	.space 0x17c - (. - gText_Rom_221340)
	.endif

	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:1087 BattleFrontier_BattleTowerLobby_Text_PleaseSelectTwoMons (+1 aliases)
	.globl gText_Rom_2214BC
gText_Rom_2214BC: @ 0x082214BC
	.string "では さんかする ポケモンを\n2ひき おえらび ください!$"
	.if (. - gText_Rom_2214BC) > 0x1e
	.error "gText_Rom_2214BC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2214BC) < 0x1e
	.space 0x1e - (. - gText_Rom_2214BC)
	.endif

	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:1090 BattleFrontier_BattleTowerLobby_Text_WelcomeLinkMultiBattle
	.globl gText_Rom_2214DA
gText_Rom_2214DA: @ 0x082214DA
	.string "トレーナーの さいのうを はかる ばしょ!\nバトルタワーへ ようこそ!\pこちらでは\nつうしんマルチ バトルルームの\lごあんないを しております!$"
	.if (. - gText_Rom_2214DA) > 0x49
	.error "gText_Rom_2214DA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2214DA) < 0x49
	.space 0x49 - (. - gText_Rom_2214DA)
	.endif

	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:1093 BattleFrontier_BattleTowerLobby_Text_TakeLinkMultisChallenge
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_221523
gText_Rom_221523: @ 0x08221523
	.string "つうしんマルチ バトルルームに\nちょうせん されますか?$"
	.if (. - gText_Rom_221523) != 0x1d
	.error "gText_Rom_221523 must retain its original byte length"
	.endif
	.globl gText_Rom_221527
	.set gText_Rom_221527, gText_Rom_221523 + 0x4

	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:1096 BattleFrontier_BattleTowerLobby_Text_ExplainLinkMultisChallenge
	.globl gText_Rom_221540
gText_Rom_221540: @ 0x08221540
	.string "つうしんマルチ バトルルームは\nワイヤレスアダプタや つうしんケーブルを\lつないだ ともだちと ふたりで\lちがう しゅるいの ポケモンを\l2ひきずつ もちより\lマルチバトルで たたかう しせつです!\pタワーないには マルチ バトルルームという\nたいせんの ための へやが\lたくさん ようい されています!\pそれぞれ マルチ バトルルームには\n7くみの タッグ トレーナーが いて\lあなたと ともだちの タッグでの\lチャレンジを まっています!\pみごと その 7くみを たおせたら\nバトルポイントを しんてい いたします!\pまた ほかの しせつと ちがって\nここでは とちゅうで ちょうせんを\lちゅうだん できません!\p7かい れんぞくで たたかうことに なるので\nじゅうぶん ちゅうい してください!$"
	.if (. - gText_Rom_221540) > 0x15f
	.error "gText_Rom_221540 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_221540) < 0x15f
	.space 0x15f - (. - gText_Rom_221540)
	.endif

	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:1087 BattleFrontier_BattleTowerLobby_Text_PleaseSelectTwoMons (+1 aliases)
	.globl gText_Rom_22169F
gText_Rom_22169F: @ 0x0822169F
	.string "では さんかする ポケモンを\n2ひき おえらび ください!$"
	.if (. - gText_Rom_22169F) > 0x1e
	.error "gText_Rom_22169F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22169F) < 0x1e
	.space 0x1e - (. - gText_Rom_22169F)
	.endif

	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:1103 BattleFrontier_BattleTowerLobby_Text_ChoseSameMonAsFriend
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2216BD
gText_Rom_2216BD: @ 0x082216BD
	.string "ともだちと\nおなじ ポケモンを えらんでいます!\pともだちの ポケモンと\nちがう しゅるいの ポケモンを\l2ひき えらび\lさんかする レベルを あわせて\lとうろくを やりなおして ください!$"
	.if (. - gText_Rom_2216BD) != 0x60
	.error "gText_Rom_2216BD must retain its original byte length"
	.endif
	.globl gText_Rom_2216D6
	.set gText_Rom_2216D6, gText_Rom_2216BD + 0x19

	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:1106 BattleFrontier_BattleTowerLobby_Text_LinkMultiOnlyForTwoPlayers
	.globl gText_Rom_22171D
gText_Rom_22171D: @ 0x0822171D
	.string "つうしんマルチ バトルルームは\n{STR_VAR_1}にん では ちょうせん できません!$"
	.if (. - gText_Rom_22171D) > 0x25
	.error "gText_Rom_22171D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22171D) < 0x25
	.space 0x25 - (. - gText_Rom_22171D)
	.endif

	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:1109 BattleFrontier_BattleTowerLobby_Text_FriendAlsoSelectedMon
	.globl gText_Rom_221742
gText_Rom_221742: @ 0x08221742
	.string "ともだちも\n{STR_VAR_1}を えらんでいます!$"
	.if (. - gText_Rom_221742) > 0x13
	.error "gText_Rom_221742 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_221742) < 0x13
	.space 0x13 - (. - gText_Rom_221742)
	.endif

	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:1112 BattleFrontier_BattleTowerLobby_Text_FriendAlsoSelectedMons
	.globl gText_Rom_221755
gText_Rom_221755: @ 0x08221755
	.string "ともだちも\n{STR_VAR_1}と {STR_VAR_2}を\lえらんでいます!$"
	.if (. - gText_Rom_221755) > 0x17
	.error "gText_Rom_221755 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_221755) < 0x17
	.space 0x17 - (. - gText_Rom_221755)
	.endif

	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:1115 BattleFrontier_BattleTowerLobby_Text_FriendChoseDifferentLvlMode
	.globl gText_Rom_22176C
gText_Rom_22176C: @ 0x0822176C
	.string "ともだちと\nえらんだ レベルが ちがいます!$"
	.if (. - gText_Rom_22176C) > 0x17
	.error "gText_Rom_22176C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22176C) < 0x17
	.space 0x17 - (. - gText_Rom_22176C)
	.endif

	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:1119 BattleFrontier_BattleTowerLobby_Text_FriendChoseDifferentLvlModeSameMon
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_221783
gText_Rom_221783: @ 0x08221783
	.string "ともだちと\nえらんだ レベルが ちがいます!\pともだちも\n{STR_VAR_1}を えらんでいます!$"
	.if (. - gText_Rom_221783) != 0x2a
	.error "gText_Rom_221783 must retain its original byte length"
	.endif
	.globl gText_Rom_22179A
	.set gText_Rom_22179A, gText_Rom_221783 + 0x17

	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:1123 BattleFrontier_BattleTowerLobby_Text_FriendChoseDifferentLvlModeSameMons
	.globl gText_Rom_2217AD
gText_Rom_2217AD: @ 0x082217AD
	.string "ともだちと\nえらんだ レベルが ちがいます!\pともだちも\n{STR_VAR_1}と {STR_VAR_2}を\lえらんでいます$"
	.if (. - gText_Rom_2217AD) > 0x2d
	.error "gText_Rom_2217AD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2217AD) < 0x2d
	.space 0x2d - (. - gText_Rom_2217AD)
	.endif

	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:1126 BattleFrontier_BattleTowerLobby_Text_ChooseDifferentMonsMatchLvlMode
	.globl gText_Rom_2217DA
gText_Rom_2217DA: @ 0x082217DA
	.string "ともだちの ポケモンと\nちがう しゅるいの ポケモンを\l2ひき えらび\lさんかする レベルを あわせて\lとうろくを やりなおして ください!$"
	.if (. - gText_Rom_2217DA) > 0x47
	.error "gText_Rom_2217DA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2217DA) < 0x47
	.space 0x47 - (. - gText_Rom_2217DA)
	.endif

	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:1129 BattleFrontier_BattleTowerLobby_Text_SaveGameBeforeShowingIn
	.globl gText_Rom_221821
gText_Rom_221821: @ 0x08221821
	.string "ごあんないする まえに レポートを かきます\nしばらく おまちください!$"
	.if (. - gText_Rom_221821) > 0x25
	.error "gText_Rom_221821 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_221821) < 0x25
	.space 0x25 - (. - gText_Rom_221821)
	.endif

	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:1132 BattleFrontier_BattleTowerLobby_Text_CongratsDefeatedMaiden
	.globl gText_Rom_221846
gText_Rom_221846: @ 0x08221846
	.string "おめでとう ございます!\nタワータイクーンを たおし\lみごと 7にんぬき されましたね!$"
	.if (. - gText_Rom_221846) > 0x2d
	.error "gText_Rom_221846 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_221846) < 0x2d
	.space 0x2d - (. - gText_Rom_221846)
	.endif

	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:1135 BattleFrontier_BattleTowerLobby_Text_AwardYouTheseBattlePoints
	.globl gText_Rom_221873
gText_Rom_221873: @ 0x08221873
	.string "おきゃくさまの\nかぎりない さいのうを たたえ\lバトルポイントを しんてい します!$"
	.if (. - gText_Rom_221873) > 0x2b
	.error "gText_Rom_221873 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_221873) < 0x2b
	.space 0x2b - (. - gText_Rom_221873)
	.endif

	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:1138 BattleFrontier_Text_ObtainedXBattlePoints
	.globl gText_Rom_22189E
gText_Rom_22189E: @ 0x0822189E
	.string "{PLAYER}は バトルポイントを\n{STR_VAR_1} BP てにいれた!$"
	.if (. - gText_Rom_22189E) > 0x1a
	.error "gText_Rom_22189E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22189E) < 0x1a
	.space 0x1a - (. - gText_Rom_22189E)
	.endif

	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:1141 BattleFrontier_BattleTowerLobby_Text_RulesAreListed
	.globl gText_Rom_2218B8
gText_Rom_2218B8: @ 0x082218B8
	.string "バトルタワーの\nルールが かかれている!$"
	.if (. - gText_Rom_2218B8) > 0x15
	.error "gText_Rom_2218B8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2218B8) < 0x15
	.space 0x15 - (. - gText_Rom_2218B8)
	.endif

	@ data/maps/BattleFrontier_BattleArenaLobby/scripts.inc:521 BattleFrontier_BattleArenaLobby_Text_ReadWhichHeading (+7 aliases)
	.globl gText_Rom_2218CD
gText_Rom_2218CD: @ 0x082218CD
	.string "どの せつめいを よみますか?$"
	.if (. - gText_Rom_2218CD) > 0x10
	.error "gText_Rom_2218CD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2218CD) < 0x10
	.space 0x10 - (. - gText_Rom_2218CD)
	.endif

	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:1147 BattleFrontier_BattleTowerLobby_Text_ExplainTowerRules
	.globl gText_Rom_2218DD
gText_Rom_2218DD: @ 0x082218DD
	.string "バトルタワーは\nシングルバトル ダブルバトル マルチバトル\lつうしんマルチバトル というように\l4つの たたかいが\lおこなわれる しせつです\pそれぞれの たたかい ごとに\nバトルルームと よばれる\lたいせんの へやが ようい されています\pちょうせん したい たたかいの うけつけに\nはなしかけて いどみましょう$"
	.if (. - gText_Rom_2218DD) > 0x9d
	.error "gText_Rom_2218DD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2218DD) < 0x9d
	.space 0x9d - (. - gText_Rom_2218DD)
	.endif

	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:1150 BattleFrontier_BattleTowerLobby_Text_ExplainMonRules
	.globl gText_Rom_22197A
gText_Rom_22197A: @ 0x0822197A
	.string "ちょうせんする バトルルーム ごとに\nつれていく ポケモンの かずが かわります\pシングルでは 3ひき\nダブルでは 4ひき\lマルチでは 2ひき と なっています$"
	.if (. - gText_Rom_22197A) > 0x51
	.error "gText_Rom_22197A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22197A) < 0x51
	.space 0x51 - (. - gText_Rom_22197A)
	.endif

	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:1153 BattleFrontier_BattleTowerLobby_Text_ExplainSalonRules
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2219CB
gText_Rom_2219CB: @ 0x082219CB
	.string "バトルサロンは マルチバトルで\nタッグを くむ あいてを さがす へやです\pトレーナーの ポケモンや わざなどを みて\nベストな あいてを えらびましょう\pまた タッグを くむ あいては\n7れんしょう ごとに えらび なおします$"
	.if (. - gText_Rom_2219CB) != 0x73
	.error "gText_Rom_2219CB must retain its original byte length"
	.endif
	.globl gText_Rom_221A3A
	.set gText_Rom_221A3A, gText_Rom_2219CB + 0x6f

	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:1156 BattleFrontier_BattleTowerLobby_Text_ExplainMultiLinkRules
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_221A3E
gText_Rom_221A3E: @ 0x08221A3E
	.string "つうしんマルチ では\nワイヤレスアダプタや つうしんケーブルを\lつないだ ともだちと ふたりで\lちょうせん することが できます\pうけつけで 2ひきを えらびますが\nともだちと おなじ ポケモンでは\lさんかする ことが できません\pまた ここでは たたかいの とちゅうで\nやすむ ことは できません$"
	.if (. - gText_Rom_221A3E) != 0x96
	.error "gText_Rom_221A3E must retain its original byte length"
	.endif
	.globl gText_Rom_221AD0
	.set gText_Rom_221AD0, gText_Rom_221A3E + 0x92
	.incbin "baserom.gba", 0x221ad4, 0x837

	@ data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.inc:434 BattleFrontier_BattleTowerBattleRoom_Text_RestoreMonsToFullHealth
	.globl gText_Rom_22230B
gText_Rom_22230B: @ 0x0822230B
	.string "ポケモンの たいりょくを\nかいふくして さしあげます$"
	.if (. - gText_Rom_22230B) > 0x1b
	.error "gText_Rom_22230B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22230B) < 0x1b
	.space 0x1b - (. - gText_Rom_22230B)
	.endif

	@ data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.inc:439 BattleFrontier_BattleTowerBattleRoom_Text_ReadyForOpponent
	.globl gText_Rom_222326
gText_Rom_222326: @ 0x08222326
	.string "つぎは {STR_VAR_1}にんめの あいてです\nじゅんびは いいですか?$"
	.if (. - gText_Rom_222326) > 0x1e
	.error "gText_Rom_222326 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_222326) < 0x1e
	.space 0x1e - (. - gText_Rom_222326)
	.endif

	@ data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.inc:443 BattleFrontier_BattleTowerBattleRoom_Text_ReadyFor2ndOpponent
	.globl gText_Rom_222344
gText_Rom_222344: @ 0x08222344
	.string "つぎは 2にんめの あいてです\nじゅんびは いいですか?$"
	.if (. - gText_Rom_222344) > 0x1d
	.error "gText_Rom_222344 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_222344) < 0x1d
	.space 0x1d - (. - gText_Rom_222344)
	.endif

	@ data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.inc:447 BattleFrontier_BattleTowerBattleRoom_Text_ReadyFor3rdOpponent
	.globl gText_Rom_222361
gText_Rom_222361: @ 0x08222361
	.string "つぎは 3にんめの あいてです\nじゅんびは いいですか?$"
	.if (. - gText_Rom_222361) > 0x1d
	.error "gText_Rom_222361 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_222361) < 0x1d
	.space 0x1d - (. - gText_Rom_222361)
	.endif

	@ data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.inc:451 BattleFrontier_BattleTowerBattleRoom_Text_ReadyFor4thOpponent
	.globl gText_Rom_22237E
gText_Rom_22237E: @ 0x0822237E
	.string "つぎは 4にんめの あいてです\nじゅんびは いいですか?$"
	.if (. - gText_Rom_22237E) > 0x1d
	.error "gText_Rom_22237E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22237E) < 0x1d
	.space 0x1d - (. - gText_Rom_22237E)
	.endif

	@ data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.inc:455 BattleFrontier_BattleTowerBattleRoom_Text_ReadyFor5thOpponent
	.globl gText_Rom_22239B
gText_Rom_22239B: @ 0x0822239B
	.string "つぎは 5にんめの あいてです\nじゅんびは いいですか?$"
	.if (. - gText_Rom_22239B) > 0x1d
	.error "gText_Rom_22239B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22239B) < 0x1d
	.space 0x1d - (. - gText_Rom_22239B)
	.endif

	@ data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.inc:459 BattleFrontier_BattleTowerBattleRoom_Text_ReadyFor6thOpponent
	.globl gText_Rom_2223B8
gText_Rom_2223B8: @ 0x082223B8
	.string "つぎは 6にんめの あいてです\nじゅんびは いいですか?$"
	.if (. - gText_Rom_2223B8) > 0x1d
	.error "gText_Rom_2223B8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2223B8) < 0x1d
	.space 0x1d - (. - gText_Rom_2223B8)
	.endif

	@ data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.inc:463 BattleFrontier_BattleTowerBattleRoom_Text_ReadyFor7thOpponent
	.globl gText_Rom_2223D5
gText_Rom_2223D5: @ 0x082223D5
	.string "つぎは 7にんめの あいてです\nじゅんびは いいですか?$"
	.if (. - gText_Rom_2223D5) > 0x1d
	.error "gText_Rom_2223D5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2223D5) < 0x1d
	.space 0x1d - (. - gText_Rom_2223D5)
	.endif

	@ data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.inc:364 BattleFrontier_BattleDomePreBattleRoom_Text_RecordLastMatch (+2 aliases)
	.globl gText_Rom_2223F2
gText_Rom_2223F2: @ 0x082223F2
	.string "さきほどの たたかいを\nフロンティアパスに きろく しますか?$"
	.if (. - gText_Rom_2223F2) > 0x20
	.error "gText_Rom_2223F2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2223F2) < 0x20
	.space 0x20 - (. - gText_Rom_2223F2)
	.endif

