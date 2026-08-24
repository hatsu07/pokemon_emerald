	@ data/maps/SootopolisCity_Gym_B1F/scripts.inc:54 SootopolisCity_Gym_B1F_Text_AndreaIntro (+1 aliases)
	.globl gText_Rom_20EBAD
gText_Rom_20EBAD: @ 0x0820EBAD
	.string "ジムリーダー アダンさまに おしえてもらった\nかれいな テクニックを みせたげる!{EOS}"
	.if (. - gText_Rom_20EBAD) > 0x2a
	.error "gText_Rom_20EBAD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20EBAD) < 0x2a
	.space 0x2a - (. - gText_Rom_20EBAD)
	.endif
	@ data/maps/SootopolisCity_Gym_B1F/scripts.inc:57 SootopolisCity_Gym_B1F_Text_AndreaDefeat (+1 aliases)
	.globl gText_Rom_20EBD7
gText_Rom_20EBD7: @ 0x0820EBD7
	.string "アダンさま ごめんね……{EOS}"
	.if (. - gText_Rom_20EBD7) > 0xd
	.error "gText_Rom_20EBD7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20EBD7) < 0xd
	.space 0xd - (. - gText_Rom_20EBD7)
	.endif
	@ data/maps/SootopolisCity_Gym_B1F/scripts.inc:60 SootopolisCity_Gym_B1F_Text_AndreaPostBattle
	.globl gText_Rom_20EBE4
gText_Rom_20EBE4: @ 0x0820EBE4
	.string "すべての ゆかに ヒビを いれると\nなにかが おこるわよ{EOS}"
	.if (. - gText_Rom_20EBE4) > 0x1d
	.error "gText_Rom_20EBE4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20EBE4) < 0x1d
	.space 0x1d - (. - gText_Rom_20EBE4)
	.endif
	@ data/maps/SootopolisCity_Gym_B1F/scripts.inc:63 SootopolisCity_Gym_B1F_Text_CrissyIntro (+1 aliases)
	.globl gText_Rom_20EC01
gText_Rom_20EC01: @ 0x0820EC01
	.string "せっかく ここまで これたのに\nあたしに まけるから\lアダンさまに あえないわね!{EOS}"
	.if (. - gText_Rom_20EC01) > 0x2a
	.error "gText_Rom_20EC01 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20EC01) < 0x2a
	.space 0x2a - (. - gText_Rom_20EC01)
	.endif
	@ data/maps/SootopolisCity_Gym_B1F/scripts.inc:66 SootopolisCity_Gym_B1F_Text_CrissyDefeat (+1 aliases)
	.globl gText_Rom_20EC2B
gText_Rom_20EC2B: @ 0x0820EC2B
	.string "つよい じゃない!!\nかわいい みために だまされたわ{EOS}"
	.if (. - gText_Rom_20EC2B) > 0x1c
	.error "gText_Rom_20EC2B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20EC2B) < 0x1c
	.space 0x1c - (. - gText_Rom_20EC2B)
	.endif
	@ data/maps/SootopolisCity_Gym_B1F/scripts.inc:69 SootopolisCity_Gym_B1F_Text_CrissyPostBattle
	.globl gText_Rom_20EC47
gText_Rom_20EC47: @ 0x0820EC47
	.string "あなたなら アダンさまと たたかっても\nいちげきで やられなくて すむかもね{EOS}"
	.if (. - gText_Rom_20EC47) > 0x27
	.error "gText_Rom_20EC47 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20EC47) < 0x27
	.space 0x27 - (. - gText_Rom_20EC47)
	.endif
	@ data/maps/SootopolisCity_Gym_B1F/scripts.inc:72 SootopolisCity_Gym_B1F_Text_DaphneIntro (+1 aliases)
	.globl gText_Rom_20EC6E
gText_Rom_20EC6E: @ 0x0820EC6E
	.string "アダンさまの たたかう すがた……\pその うつくしさに こころ うばわれ\nわたくしも ポケモンを はじめましてよ{EOS}"
	.if (. - gText_Rom_20EC6E) > 0x39
	.error "gText_Rom_20EC6E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20EC6E) < 0x39
	.space 0x39 - (. - gText_Rom_20EC6E)
	.endif
	@ data/maps/SootopolisCity_Gym_B1F/scripts.inc:75 SootopolisCity_Gym_B1F_Text_DaphneDefeat (+1 aliases)
	.globl gText_Rom_20ECA7
gText_Rom_20ECA7: @ 0x0820ECA7
	.string "たたかう すがたの\nうつくしさで まけましたわ……{EOS}"
	.if (. - gText_Rom_20ECA7) > 0x1a
	.error "gText_Rom_20ECA7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20ECA7) < 0x1a
	.space 0x1a - (. - gText_Rom_20ECA7)
	.endif
	@ data/maps/SootopolisCity_Gym_B1F/scripts.inc:78 SootopolisCity_Gym_B1F_Text_DaphnePostBattle
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_20ECC1
gText_Rom_20ECC1: @ 0x0820ECC1
	.string "あなたさまの たたかう すがたも\nすばらしくってよ\pああっ……!\nポケモンに であえて よかったですわ{EOS}"
	.if (. - gText_Rom_20ECC1) != 0x34
	.error "gText_Rom_20ECC1 must retain its original byte length"
	.endif
	.globl gText_Rom_20ECF1
	.set gText_Rom_20ECF1, gText_Rom_20ECC1 + 0x30
	@ data/maps/SootopolisCity_Gym_B1F/scripts.inc:81 SootopolisCity_Gym_B1F_Text_ConnieIntro (+1 aliases)
	.globl gText_Rom_20ECF5
gText_Rom_20ECF5: @ 0x0820ECF5
	.string "おねえさんが しょうぶの きびしさ\nいろいろと おしえて あげちゃおっかな{EOS}"
	.if (. - gText_Rom_20ECF5) > 0x26
	.error "gText_Rom_20ECF5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20ECF5) < 0x26
	.space 0x26 - (. - gText_Rom_20ECF5)
	.endif
	@ data/maps/SootopolisCity_Gym_B1F/scripts.inc:84 SootopolisCity_Gym_B1F_Text_ConnieDefeat (+1 aliases)
	.globl gText_Rom_20ED1B
gText_Rom_20ED1B: @ 0x0820ED1B
	.string "なんだ\nつよいんだ{EOS}"
	.if (. - gText_Rom_20ED1B) > 0xa
	.error "gText_Rom_20ED1B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20ED1B) < 0xa
	.space 0xa - (. - gText_Rom_20ED1B)
	.endif
	@ data/maps/SootopolisCity_Gym_B1F/scripts.inc:87 SootopolisCity_Gym_B1F_Text_ConniePostBattle
	.globl gText_Rom_20ED25
gText_Rom_20ED25: @ 0x0820ED25
	.string "いいこと おしえて あげるね\pアダンさまに あいたいのなら\nすべての ゆかを 1かいずつ\lあるいて いけば いいの{EOS}"
	.if (. - gText_Rom_20ED25) > 0x3a
	.error "gText_Rom_20ED25 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20ED25) < 0x3a
	.space 0x3a - (. - gText_Rom_20ED25)
	.endif
	@ data/maps/SootopolisCity_Gym_B1F/scripts.inc:90 SootopolisCity_Gym_B1F_Text_BridgetIntro (+1 aliases)
	.globl gText_Rom_20ED5F
gText_Rom_20ED5F: @ 0x0820ED5F
	.string "ホウエンちほうで いちばん\nレベルの たかい ポケモンジム……\pそれが ここ ルネジムよ!{EOS}"
	.if (. - gText_Rom_20ED5F) > 0x2e
	.error "gText_Rom_20ED5F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20ED5F) < 0x2e
	.space 0x2e - (. - gText_Rom_20ED5F)
	.endif
	@ data/maps/SootopolisCity_Gym_B1F/scripts.inc:93 SootopolisCity_Gym_B1F_Text_BridgetDefeat (+1 aliases)
	.globl gText_Rom_20ED8D
gText_Rom_20ED8D: @ 0x0820ED8D
	.string "なんて レベルの たかい……{EOS}"
	.if (. - gText_Rom_20ED8D) > 0xf
	.error "gText_Rom_20ED8D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20ED8D) < 0xf
	.space 0xf - (. - gText_Rom_20ED8D)
	.endif
	@ data/maps/SootopolisCity_Gym_B1F/scripts.inc:96 SootopolisCity_Gym_B1F_Text_BridgetPostBattle
	.globl gText_Rom_20ED9C
gText_Rom_20ED9C: @ 0x0820ED9C
	.string "レベルの たかい ジムに いることに\nまんぞく しないで\lほかにも しゅぎょうに いくほうが\lつよくなれそうだし なにより たのしそうね{EOS}"
	.if (. - gText_Rom_20ED9C) > 0x45
	.error "gText_Rom_20ED9C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20ED9C) < 0x45
	.space 0x45 - (. - gText_Rom_20ED9C)
	.endif
	@ data/maps/SootopolisCity_Gym_B1F/scripts.inc:99 SootopolisCity_Gym_B1F_Text_OliviaIntro (+1 aliases)
	.globl gText_Rom_20EDE1
gText_Rom_20EDE1: @ 0x0820EDE1
	.string "アダンさまと いっしょに\nポケモンを きたえて いるの\pかんたんに たおせると おもわないでね{EOS}"
	.if (. - gText_Rom_20EDE1) > 0x30
	.error "gText_Rom_20EDE1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20EDE1) < 0x30
	.space 0x30 - (. - gText_Rom_20EDE1)
	.endif
	@ data/maps/SootopolisCity_Gym_B1F/scripts.inc:102 SootopolisCity_Gym_B1F_Text_OliviaDefeat (+1 aliases)
	.globl gText_Rom_20EE11
gText_Rom_20EE11: @ 0x0820EE11
	.string "たおされちゃった……{EOS}"
	.if (. - gText_Rom_20EE11) > 0xb
	.error "gText_Rom_20EE11 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20EE11) < 0xb
	.space 0xb - (. - gText_Rom_20EE11)
	.endif
	@ data/maps/SootopolisCity_Gym_B1F/scripts.inc:105 SootopolisCity_Gym_B1F_Text_OliviaPostBattle
	.globl gText_Rom_20EE1C
gText_Rom_20EE1C: @ 0x0820EE1C
	.string "あなた みどころ あると おもうの\nいっしょに ここで ポケモン きたえない?{EOS}"
	.if (. - gText_Rom_20EE1C) > 0x28
	.error "gText_Rom_20EE1C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20EE1C) < 0x28
	.space 0x28 - (. - gText_Rom_20EE1C)
	.endif
	@ data/maps/SootopolisCity_Gym_B1F/scripts.inc:108 SootopolisCity_Gym_B1F_Text_TiffanyIntro (+1 aliases)
	.globl gText_Rom_20EE44
gText_Rom_20EE44: @ 0x0820EE44
	.string "こおりの うえでの ひとふでがき\pそれが できる トレーナーは\nエレガントに うつくしいのよ!{EOS}"
	.if (. - gText_Rom_20EE44) > 0x30
	.error "gText_Rom_20EE44 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20EE44) < 0x30
	.space 0x30 - (. - gText_Rom_20EE44)
	.endif
	@ data/maps/SootopolisCity_Gym_B1F/scripts.inc:111 SootopolisCity_Gym_B1F_Text_TiffanyDefeat (+1 aliases)
	.globl gText_Rom_20EE74
gText_Rom_20EE74: @ 0x0820EE74
	.string "ちょっとー!?{EOS}"
	.if (. - gText_Rom_20EE74) > 0x8
	.error "gText_Rom_20EE74 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20EE74) < 0x8
	.space 0x8 - (. - gText_Rom_20EE74)
	.endif
	@ data/maps/SootopolisCity_Gym_B1F/scripts.inc:114 SootopolisCity_Gym_B1F_Text_TiffanyPostBattle
	.globl gText_Rom_20EE7C
gText_Rom_20EE7C: @ 0x0820EE7C
	.string "あたりまえ だけど\nポケモンの つよさに\lおとなも こどもも かんけい ないよ{EOS}"
	.if (. - gText_Rom_20EE7C) > 0x28
	.error "gText_Rom_20EE7C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20EE7C) < 0x28
	.space 0x28 - (. - gText_Rom_20EE7C)
	.endif
	@ data/maps/SootopolisCity_Gym_B1F/scripts.inc:117 SootopolisCity_Gym_B1F_Text_BethanyIntro (+1 aliases)
	.globl gText_Rom_20EEA4
gText_Rom_20EEA4: @ 0x0820EEA4
	.string "ポケモンと いっしょに いると\nじかんが あっ というまに すぎるのよ!{EOS}"
	.if (. - gText_Rom_20EEA4) > 0x25
	.error "gText_Rom_20EEA4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20EEA4) < 0x25
	.space 0x25 - (. - gText_Rom_20EEA4)
	.endif
	@ data/maps/SootopolisCity_Gym_B1F/scripts.inc:120 SootopolisCity_Gym_B1F_Text_BethanyDefeat (+1 aliases)
	.globl gText_Rom_20EEC9
gText_Rom_20EEC9: @ 0x0820EEC9
	.string "あっ!{EOS}"
	.if (. - gText_Rom_20EEC9) > 0x4
	.error "gText_Rom_20EEC9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20EEC9) < 0x4
	.space 0x4 - (. - gText_Rom_20EEC9)
	.endif
	@ data/maps/SootopolisCity_Gym_B1F/scripts.inc:123 SootopolisCity_Gym_B1F_Text_BethanyPostBattle
	.globl gText_Rom_20EECD
gText_Rom_20EECD: @ 0x0820EECD
	.string "まけた しょうぶも\nあっ というまに わすれたい……{EOS}"
	.if (. - gText_Rom_20EECD) > 0x1b
	.error "gText_Rom_20EECD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20EECD) < 0x1b
	.space 0x1b - (. - gText_Rom_20EECD)
	.endif
	@ data/maps/SootopolisCity_Gym_B1F/scripts.inc:126 SootopolisCity_Gym_B1F_Text_AnnikaIntro (+1 aliases)
	.globl gText_Rom_20EEE8
gText_Rom_20EEE8: @ 0x0820EEE8
	.string "すっごく めずらしい ポケモンちゃんで\nたたかって あげても いいわよー!{EOS}"
	.if (. - gText_Rom_20EEE8) > 0x26
	.error "gText_Rom_20EEE8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20EEE8) < 0x26
	.space 0x26 - (. - gText_Rom_20EEE8)
	.endif
	@ data/maps/SootopolisCity_Gym_B1F/scripts.inc:129 SootopolisCity_Gym_B1F_Text_AnnikaDefeat (+1 aliases)
	.globl gText_Rom_20EF0E
gText_Rom_20EF0E: @ 0x0820EF0E
	.string "ちょっと!\nポケモンちゃんも ちゃんと みてくれた?{EOS}"
	.if (. - gText_Rom_20EF0E) > 0x1b
	.error "gText_Rom_20EF0E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20EF0E) < 0x1b
	.space 0x1b - (. - gText_Rom_20EF0E)
	.endif
	@ data/maps/SootopolisCity_Gym_B1F/scripts.inc:132 SootopolisCity_Gym_B1F_Text_AnnikaPostBattle
	.globl gText_Rom_20EF29
gText_Rom_20EF29: @ 0x0820EF29
	.string "わたしが このジムに いるのは\nアダンさんが わたしの ポケモンちゃんを\lほめて くれたから なのよぉ\pあーあ ダンナに であうまえに\nアダンさんに であっていれば いまごろは…{EOS}"
	.if (. - gText_Rom_20EF29) > 0x5a
	.error "gText_Rom_20EF29 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20EF29) < 0x5a
	.space 0x5a - (. - gText_Rom_20EF29)
	.endif
	@ data/maps/SootopolisCity_Gym_B1F/scripts.inc:135 SootopolisCity_Gym_B1F_Text_BriannaIntro (+1 aliases)
	.globl gText_Rom_20EF83
gText_Rom_20EF83: @ 0x0820EF83
	.string "うふふ……\nその ひっしな おかおが ステキよ{EOS}"
	.if (. - gText_Rom_20EF83) > 0x18
	.error "gText_Rom_20EF83 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20EF83) < 0x18
	.space 0x18 - (. - gText_Rom_20EF83)
	.endif
	@ data/maps/SootopolisCity_Gym_B1F/scripts.inc:138 SootopolisCity_Gym_B1F_Text_BriannaDefeat (+1 aliases)
	.globl gText_Rom_20EF9B
gText_Rom_20EF9B: @ 0x0820EF9B
	.string "あら\nてかげん しすぎて しまいましたわ……{EOS}"
	.if (. - gText_Rom_20EF9B) > 0x17
	.error "gText_Rom_20EF9B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20EF9B) < 0x17
	.space 0x17 - (. - gText_Rom_20EF9B)
	.endif
	@ data/maps/SootopolisCity_Gym_B1F/scripts.inc:141 SootopolisCity_Gym_B1F_Text_BriannaPostBattle
	.globl gText_Rom_20EFB2
gText_Rom_20EFB2: @ 0x0820EFB2
	.string "あなたでは アダンさまには\nきっと はが たちませんわよ うふふ……{EOS}"
	.if (. - gText_Rom_20EFB2) > 0x23
	.error "gText_Rom_20EFB2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20EFB2) < 0x23
	.space 0x23 - (. - gText_Rom_20EFB2)
	.endif
	@ analyzed canonical ROM range 0x0820EFD5-0x0820F045
	@ semantic recovery: script_data; byte-verified against linked ROM
gMapScriptDispatch_SootopolisCity_PokemonCenter_1F_OnTransition_OnResume: @ 0x0820EFD5
	@ map script dispatch table
	.byte 0x03
	.4byte EventScript_JP_0820EFE0
	.byte 0x05
	.4byte SharedMapScript_0824790F
	.byte 0
EventScript_JP_0820EFE0: @ 0x0820EFE0
	setrespawn 0x000A
	end
.globl EventScript_JP_0820EFE4
EventScript_JP_0820EFE4: @ 0x0820EFE4
	setvar 0x800B, 0x0001
	call 0x082429B8
	waitmessage
	waitbuttonpress
	release
	end
.globl EventScript_JP_0820EFF2
EventScript_JP_0820EFF2: @ 0x0820EFF2
	lock
	faceplayer
	compare_var_to_value 0x40CA, 0x0002
	goto_if 0x04, EventScript_JP_0820F012
	checkflag 0x0081
	goto_if 0x00, EventScript_JP_0820F012
	loadword 0x00, gText_Rom_20F0D5
	callstd 0x04
	release
	end
EventScript_JP_0820F012: @ 0x0820F012
	loadword 0x00, gText_Rom_20F046
	callstd 0x04
	release
	end
.globl EventScript_JP_0820F01C
EventScript_JP_0820F01C: @ 0x0820F01C
	lock
	faceplayer
	compare_var_to_value 0x40CA, 0x0002
	goto_if 0x04, EventScript_JP_0820F03C
	checkflag 0x0081
	goto_if 0x00, EventScript_JP_0820F03C
	loadword 0x00, gText_Rom_20F15E
	callstd 0x04
	release
	end
EventScript_JP_0820F03C: @ 0x0820F03C
	loadword 0x00, gText_Rom_20F117
	callstd 0x04
	release
	end
