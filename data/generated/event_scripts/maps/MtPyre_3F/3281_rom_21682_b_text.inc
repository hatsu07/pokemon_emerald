
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
	.globl MtPyre_3F_Text_WilliamDefeat
MtPyre_3F_Text_WilliamDefeat: @ 0x082166BB
	.string "アップ アップ……{EOS}"
	.if (. - MtPyre_3F_Text_WilliamDefeat) > 0xa
	.error "MtPyre_3F_Text_WilliamDefeat may not grow beyond its original slot"
	.endif
	.if (. - MtPyre_3F_Text_WilliamDefeat) < 0xa
	.space 0xa - (. - MtPyre_3F_Text_WilliamDefeat)
	.endif
	@ data/maps/MtPyre_3F/scripts.inc:44 MtPyre_3F_Text_WilliamPostBattle
	.globl MtPyre_3F_Text_WilliamPostBattle
MtPyre_3F_Text_WilliamPostBattle: @ 0x082166C5
	.string "わたしの サイコパワーは かくじつに\nつよく なっている はずなのに……{EOS}"
	.if (. - MtPyre_3F_Text_WilliamPostBattle) > 0x25
	.error "MtPyre_3F_Text_WilliamPostBattle may not grow beyond its original slot"
	.endif
	.if (. - MtPyre_3F_Text_WilliamPostBattle) < 0x25
	.space 0x25 - (. - MtPyre_3F_Text_WilliamPostBattle)
	.endif
	@ data/maps/MtPyre_3F/scripts.inc:48 MtPyre_3F_Text_KaylaIntro (+1 aliases)
	.globl MtPyre_3F_Text_KaylaIntro
MtPyre_3F_Text_KaylaIntro: @ 0x082166EA
	.string "おほほほほっ!\pここは あなたの ような こどもが\nくる ばしょ では ないのよっ!{EOS}"
	.if (. - MtPyre_3F_Text_KaylaIntro) > 0x2b
	.error "MtPyre_3F_Text_KaylaIntro may not grow beyond its original slot"
	.endif
	.if (. - MtPyre_3F_Text_KaylaIntro) < 0x2b
	.space 0x2b - (. - MtPyre_3F_Text_KaylaIntro)
	.endif
	@ data/maps/MtPyre_3F/scripts.inc:53 MtPyre_3F_Text_KaylaDefeat (+1 aliases)
	.globl MtPyre_3F_Text_KaylaDefeat
MtPyre_3F_Text_KaylaDefeat: @ 0x08216715
	.string "あっさり まけたわっ……!{EOS}"
	.if (. - MtPyre_3F_Text_KaylaDefeat) > 0xe
	.error "MtPyre_3F_Text_KaylaDefeat may not grow beyond its original slot"
	.endif
	.if (. - MtPyre_3F_Text_KaylaDefeat) < 0xe
	.space 0xe - (. - MtPyre_3F_Text_KaylaDefeat)
	.endif
	@ data/maps/MtPyre_3F/scripts.inc:56 MtPyre_3F_Text_KaylaPostBattle
	.globl MtPyre_3F_Text_KaylaPostBattle
MtPyre_3F_Text_KaylaPostBattle: @ 0x08216723
	.string "まだまだ しゅぎょうが たりないのね……\nさんちょうを めざすわよ……!\pファイト! わたし!{EOS}"
	.if (. - MtPyre_3F_Text_KaylaPostBattle) > 0x30
	.error "MtPyre_3F_Text_KaylaPostBattle may not grow beyond its original slot"
	.endif
	.if (. - MtPyre_3F_Text_KaylaPostBattle) < 0x30
	.space 0x30 - (. - MtPyre_3F_Text_KaylaPostBattle)
	.endif
	@ data/maps/MtPyre_3F/scripts.inc:63 MtPyre_3F_Text_GabrielleIntro (+1 aliases)
	.globl MtPyre_3F_Text_GabrielleIntro
MtPyre_3F_Text_GabrielleIntro: @ 0x08216753
	.string "あなたは なぜ ここへ……?{EOS}"
	.if (. - MtPyre_3F_Text_GabrielleIntro) > 0xf
	.error "MtPyre_3F_Text_GabrielleIntro may not grow beyond its original slot"
	.endif
	.if (. - MtPyre_3F_Text_GabrielleIntro) < 0xf
	.space 0xf - (. - MtPyre_3F_Text_GabrielleIntro)
	.endif
	@ data/maps/MtPyre_3F/scripts.inc:66 MtPyre_3F_Text_GabrielleDefeat (+1 aliases)
	.globl MtPyre_3F_Text_GabrielleDefeat
MtPyre_3F_Text_GabrielleDefeat: @ 0x08216762
	.string "すごいわ!\nあなたは すてきな トレーナーさんね{EOS}"
	.if (. - MtPyre_3F_Text_GabrielleDefeat) > 0x19
	.error "MtPyre_3F_Text_GabrielleDefeat may not grow beyond its original slot"
	.endif
	.if (. - MtPyre_3F_Text_GabrielleDefeat) < 0x19
	.space 0x19 - (. - MtPyre_3F_Text_GabrielleDefeat)
	.endif
	@ data/maps/MtPyre_3F/scripts.inc:70 MtPyre_3F_Text_GabriellePostBattle
	.globl MtPyre_3F_Text_GabriellePostBattle
MtPyre_3F_Text_GabriellePostBattle: @ 0x0821677B
	.string "いまはもう いない ポケモン\nいま いっしょに いる ポケモン\pそれに\nこれから であう ポケモン……\pすべて たいせつな ポケモン なのよ\nおぼえて おいて くださいね{EOS}"
	.if (. - MtPyre_3F_Text_GabriellePostBattle) > 0x56
	.error "MtPyre_3F_Text_GabriellePostBattle may not grow beyond its original slot"
	.endif
	.if (. - MtPyre_3F_Text_GabriellePostBattle) < 0x56
	.space 0x56 - (. - MtPyre_3F_Text_GabriellePostBattle)
	.endif
	@ data/maps/MtPyre_3F/scripts.inc:78 MtPyre_3F_Text_GabrielleRegister
	.globl MtPyre_3F_Text_GabrielleRegister
MtPyre_3F_Text_GabrielleRegister: @ 0x082167D1
	.string "あなたの ポケモンが そだったら\nみてみたいわ……\lさあ ポケナビを だして{EOS}"
	.if (. - MtPyre_3F_Text_GabrielleRegister) > 0x27
	.error "MtPyre_3F_Text_GabrielleRegister may not grow beyond its original slot"
	.endif
	.if (. - MtPyre_3F_Text_GabrielleRegister) < 0x27
	.space 0x27 - (. - MtPyre_3F_Text_GabrielleRegister)
	.endif
	@ data/maps/MtPyre_3F/scripts.inc:83 MtPyre_3F_Text_GabrielleRematchIntro (+1 aliases)
	.globl MtPyre_3F_Text_GabrielleRematchIntro
MtPyre_3F_Text_GabrielleRematchIntro: @ 0x082167F8
	.string "あら あなたは……\nそだてた ポケモン みせてくれるの?{EOS}"
	.if (. - MtPyre_3F_Text_GabrielleRematchIntro) > 0x1d
	.error "MtPyre_3F_Text_GabrielleRematchIntro may not grow beyond its original slot"
	.endif
	.if (. - MtPyre_3F_Text_GabrielleRematchIntro) < 0x1d
	.space 0x1d - (. - MtPyre_3F_Text_GabrielleRematchIntro)
	.endif
	@ data/maps/MtPyre_3F/scripts.inc:88 MtPyre_3F_Text_GabrielleRematchDefeat (+1 aliases)
	.globl MtPyre_3F_Text_GabrielleRematchDefeat
MtPyre_3F_Text_GabrielleRematchDefeat: @ 0x08216815
	.string "ほんとうに すごいわ!\nあなたは すてきね{EOS}"
	.if (. - MtPyre_3F_Text_GabrielleRematchDefeat) > 0x16
	.error "MtPyre_3F_Text_GabrielleRematchDefeat may not grow beyond its original slot"
	.endif
	.if (. - MtPyre_3F_Text_GabrielleRematchDefeat) < 0x16
	.space 0x16 - (. - MtPyre_3F_Text_GabrielleRematchDefeat)
	.endif
	@ data/maps/MtPyre_3F/scripts.inc:92 MtPyre_3F_Text_GabriellePostRematch
	.globl MtPyre_3F_Text_GabriellePostRematch
MtPyre_3F_Text_GabriellePostRematch: @ 0x0821682B
	.string "いまはもう いない ポケモン\nいま いっしょに いる ポケモン\pそれに\nこれから であう ポケモン……\pすべて たいせつな ポケモン なのよ\nおぼえて くれて いたのね{EOS}"
	.if (. - MtPyre_3F_Text_GabriellePostRematch) > 0x55
	.error "MtPyre_3F_Text_GabriellePostRematch may not grow beyond its original slot"
	.endif
	.if (. - MtPyre_3F_Text_GabriellePostRematch) < 0x55
	.space 0x55 - (. - MtPyre_3F_Text_GabriellePostRematch)
	.endif
	@ Embedded ROM bytes: file offset 0x216880, size 0x18
	@ semanticized-mass: resolved embedded ROM pointers
	.byte 0x00, 0x5C, 0x00, 0xBE, 0x00, 0x00, 0x00
	.4byte MtPyre_5F_Text_AtsushiIntro @ ROM pointer 0x08216898
	.4byte MtPyre_5F_Text_AtsushiDefeat @ ROM pointer 0x082168BC
	.byte 0x0F, 0x00, 0xCE, 0x68, 0x21, 0x08, 0x09, 0x06, 0x02
