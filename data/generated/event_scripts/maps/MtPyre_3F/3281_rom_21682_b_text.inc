
	@ trainerbattle-cfg:0x2165F2 TrainerBattleText_216682
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_216682
gText_Rom_216682: @ 0x08216682
	.string "れいげん　あらたかな　やまの　ちからで\nサイコパワーの　アップした　わたしに\lこどもの　おまえが　かてるかな！？{EOS}"
	.if (. - gText_Rom_216682) != 0x39
	.error "gText_Rom_216682 must retain its original byte length"
	.endif
	.globl gText_Rom_216687
	.set gText_Rom_216687, gText_Rom_216682 + 0x5
	@ data/maps/MtPyre_3F/scripts.inc:41 MtPyre_3F_Text_WilliamDefeat (+1 aliases)
	.globl gText_Rom_2166BB
gText_Rom_2166BB: @ 0x082166BB
	.string "アップ アップ……{EOS}"
	.if (. - gText_Rom_2166BB) > 0xa
	.error "gText_Rom_2166BB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2166BB) < 0xa
	.space 0xa - (. - gText_Rom_2166BB)
	.endif
	@ data/maps/MtPyre_3F/scripts.inc:44 MtPyre_3F_Text_WilliamPostBattle
	.globl gText_Rom_2166C5
gText_Rom_2166C5: @ 0x082166C5
	.string "わたしの サイコパワーは かくじつに\nつよく なっている はずなのに……{EOS}"
	.if (. - gText_Rom_2166C5) > 0x25
	.error "gText_Rom_2166C5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2166C5) < 0x25
	.space 0x25 - (. - gText_Rom_2166C5)
	.endif
	@ data/maps/MtPyre_3F/scripts.inc:48 MtPyre_3F_Text_KaylaIntro (+1 aliases)
	.globl gText_Rom_2166EA
gText_Rom_2166EA: @ 0x082166EA
	.string "おほほほほっ!\pここは あなたの ような こどもが\nくる ばしょ では ないのよっ!{EOS}"
	.if (. - gText_Rom_2166EA) > 0x2b
	.error "gText_Rom_2166EA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2166EA) < 0x2b
	.space 0x2b - (. - gText_Rom_2166EA)
	.endif
	@ data/maps/MtPyre_3F/scripts.inc:53 MtPyre_3F_Text_KaylaDefeat (+1 aliases)
	.globl gText_Rom_216715
gText_Rom_216715: @ 0x08216715
	.string "あっさり まけたわっ……!{EOS}"
	.if (. - gText_Rom_216715) > 0xe
	.error "gText_Rom_216715 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_216715) < 0xe
	.space 0xe - (. - gText_Rom_216715)
	.endif
	@ data/maps/MtPyre_3F/scripts.inc:56 MtPyre_3F_Text_KaylaPostBattle
	.globl gText_Rom_216723
gText_Rom_216723: @ 0x08216723
	.string "まだまだ しゅぎょうが たりないのね……\nさんちょうを めざすわよ……!\pファイト! わたし!{EOS}"
	.if (. - gText_Rom_216723) > 0x30
	.error "gText_Rom_216723 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_216723) < 0x30
	.space 0x30 - (. - gText_Rom_216723)
	.endif
	@ data/maps/MtPyre_3F/scripts.inc:63 MtPyre_3F_Text_GabrielleIntro (+1 aliases)
	.globl gText_Rom_216753
gText_Rom_216753: @ 0x08216753
	.string "あなたは なぜ ここへ……?{EOS}"
	.if (. - gText_Rom_216753) > 0xf
	.error "gText_Rom_216753 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_216753) < 0xf
	.space 0xf - (. - gText_Rom_216753)
	.endif
	@ data/maps/MtPyre_3F/scripts.inc:66 MtPyre_3F_Text_GabrielleDefeat (+1 aliases)
	.globl gText_Rom_216762
gText_Rom_216762: @ 0x08216762
	.string "すごいわ!\nあなたは すてきな トレーナーさんね{EOS}"
	.if (. - gText_Rom_216762) > 0x19
	.error "gText_Rom_216762 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_216762) < 0x19
	.space 0x19 - (. - gText_Rom_216762)
	.endif
	@ data/maps/MtPyre_3F/scripts.inc:70 MtPyre_3F_Text_GabriellePostBattle
	.globl gText_Rom_21677B
gText_Rom_21677B: @ 0x0821677B
	.string "いまはもう いない ポケモン\nいま いっしょに いる ポケモン\pそれに\nこれから であう ポケモン……\pすべて たいせつな ポケモン なのよ\nおぼえて おいて くださいね{EOS}"
	.if (. - gText_Rom_21677B) > 0x56
	.error "gText_Rom_21677B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21677B) < 0x56
	.space 0x56 - (. - gText_Rom_21677B)
	.endif
	@ data/maps/MtPyre_3F/scripts.inc:78 MtPyre_3F_Text_GabrielleRegister
	.globl gText_Rom_2167D1
gText_Rom_2167D1: @ 0x082167D1
	.string "あなたの ポケモンが そだったら\nみてみたいわ……\lさあ ポケナビを だして{EOS}"
	.if (. - gText_Rom_2167D1) > 0x27
	.error "gText_Rom_2167D1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2167D1) < 0x27
	.space 0x27 - (. - gText_Rom_2167D1)
	.endif
	@ data/maps/MtPyre_3F/scripts.inc:83 MtPyre_3F_Text_GabrielleRematchIntro (+1 aliases)
	.globl gText_Rom_2167F8
gText_Rom_2167F8: @ 0x082167F8
	.string "あら あなたは……\nそだてた ポケモン みせてくれるの?{EOS}"
	.if (. - gText_Rom_2167F8) > 0x1d
	.error "gText_Rom_2167F8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2167F8) < 0x1d
	.space 0x1d - (. - gText_Rom_2167F8)
	.endif
	@ data/maps/MtPyre_3F/scripts.inc:88 MtPyre_3F_Text_GabrielleRematchDefeat (+1 aliases)
	.globl gText_Rom_216815
gText_Rom_216815: @ 0x08216815
	.string "ほんとうに すごいわ!\nあなたは すてきね{EOS}"
	.if (. - gText_Rom_216815) > 0x16
	.error "gText_Rom_216815 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_216815) < 0x16
	.space 0x16 - (. - gText_Rom_216815)
	.endif
	@ data/maps/MtPyre_3F/scripts.inc:92 MtPyre_3F_Text_GabriellePostRematch
	.globl gText_Rom_21682B
gText_Rom_21682B: @ 0x0821682B
	.string "いまはもう いない ポケモン\nいま いっしょに いる ポケモン\pそれに\nこれから であう ポケモン……\pすべて たいせつな ポケモン なのよ\nおぼえて くれて いたのね{EOS}"
	.if (. - gText_Rom_21682B) > 0x55
	.error "gText_Rom_21682B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21682B) < 0x55
	.space 0x55 - (. - gText_Rom_21682B)
	.endif
	@ Embedded ROM bytes: file offset 0x216880, size 0x18
	@ semanticized-mass: resolved embedded ROM pointers
	.byte 0x00, 0x5C, 0x00, 0xBE, 0x00, 0x00, 0x00
	.4byte gText_Rom_216898 @ ROM pointer 0x08216898
	.4byte gText_Rom_2168BC @ ROM pointer 0x082168BC
	.byte 0x0F, 0x00, 0xCE, 0x68, 0x21, 0x08, 0x09, 0x06, 0x02
