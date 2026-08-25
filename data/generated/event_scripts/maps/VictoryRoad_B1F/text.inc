	@ data/maps/VictoryRoad_B1F/scripts.inc:29 VictoryRoad_B1F_Text_SamuelIntro (+1 aliases)
	.globl VictoryRoad_B1F_Text_SamuelIntro
VictoryRoad_B1F_Text_SamuelIntro: @ 0x082199E2
	.string "ポケモンリーグに ちかづいていると おもうと\nなんだか ドキドキ してきたよ……"
	.byte EOS
	.if (. - VictoryRoad_B1F_Text_SamuelIntro) > 0x29
	.error "VictoryRoad_B1F_Text_SamuelIntro may not grow beyond its original slot"
	.endif
	.if (. - VictoryRoad_B1F_Text_SamuelIntro) < 0x29
	.space 0x29 - (. - VictoryRoad_B1F_Text_SamuelIntro)
	.endif
	@ data/maps/VictoryRoad_B1F/scripts.inc:32 VictoryRoad_B1F_Text_SamuelDefeat (+1 aliases)
	.globl VictoryRoad_B1F_Text_SamuelDefeat
VictoryRoad_B1F_Text_SamuelDefeat: @ 0x08219A0B
	.string "なにも できなかった……"
	.byte EOS
	.if (. - VictoryRoad_B1F_Text_SamuelDefeat) > 0xd
	.error "VictoryRoad_B1F_Text_SamuelDefeat may not grow beyond its original slot"
	.endif
	.if (. - VictoryRoad_B1F_Text_SamuelDefeat) < 0xd
	.space 0xd - (. - VictoryRoad_B1F_Text_SamuelDefeat)
	.endif
	@ data/maps/VictoryRoad_B1F/scripts.inc:35 VictoryRoad_B1F_Text_SamuelPostBattle
	.globl VictoryRoad_B1F_Text_SamuelPostBattle
VictoryRoad_B1F_Text_SamuelPostBattle: @ 0x08219A18
	.string "ポケモンリーグが とおのいたよ……\nなんだか がっかり するな……"
	.byte EOS
	.if (. - VictoryRoad_B1F_Text_SamuelPostBattle) > 0x22
	.error "VictoryRoad_B1F_Text_SamuelPostBattle may not grow beyond its original slot"
	.endif
	.if (. - VictoryRoad_B1F_Text_SamuelPostBattle) < 0x22
	.space 0x22 - (. - VictoryRoad_B1F_Text_SamuelPostBattle)
	.endif
	@ data/maps/VictoryRoad_B1F/scripts.inc:38 VictoryRoad_B1F_Text_ShannonIntro (+1 aliases)
	.globl VictoryRoad_B1F_Text_ShannonIntro
VictoryRoad_B1F_Text_ShannonIntro: @ 0x08219A3A
	.string "ポケモンリーグで かちぬくには\nポケモンへの しんらいが ひつよう なの"
	.byte EOS
	.if (. - VictoryRoad_B1F_Text_ShannonIntro) > 0x25
	.error "VictoryRoad_B1F_Text_ShannonIntro may not grow beyond its original slot"
	.endif
	.if (. - VictoryRoad_B1F_Text_ShannonIntro) < 0x25
	.space 0x25 - (. - VictoryRoad_B1F_Text_ShannonIntro)
	.endif
	@ data/maps/VictoryRoad_B1F/scripts.inc:41 VictoryRoad_B1F_Text_ShannonDefeat (+1 aliases)
	.globl VictoryRoad_B1F_Text_ShannonDefeat
VictoryRoad_B1F_Text_ShannonDefeat: @ 0x08219A5F
	.string "しんらい かんけい バッチリね!"
	.byte EOS
	.if (. - VictoryRoad_B1F_Text_ShannonDefeat) > 0x11
	.error "VictoryRoad_B1F_Text_ShannonDefeat may not grow beyond its original slot"
	.endif
	.if (. - VictoryRoad_B1F_Text_ShannonDefeat) < 0x11
	.space 0x11 - (. - VictoryRoad_B1F_Text_ShannonDefeat)
	.endif
	@ data/maps/VictoryRoad_B1F/scripts.inc:44 VictoryRoad_B1F_Text_ShannonPostBattle
	.globl VictoryRoad_B1F_Text_ShannonPostBattle
VictoryRoad_B1F_Text_ShannonPostBattle: @ 0x08219A70
	.string "いつも いっしょに いることで\nポケモンと トレーナーとの あいだに\lしんらい かんけいが できるの"
	.byte EOS
	.if (. - VictoryRoad_B1F_Text_ShannonPostBattle) > 0x33
	.error "VictoryRoad_B1F_Text_ShannonPostBattle may not grow beyond its original slot"
	.endif
	.if (. - VictoryRoad_B1F_Text_ShannonPostBattle) < 0x33
	.space 0x33 - (. - VictoryRoad_B1F_Text_ShannonPostBattle)
	.endif
	@ data/maps/VictoryRoad_B1F/scripts.inc:47 VictoryRoad_B1F_Text_MichelleIntro (+1 aliases)
	.globl VictoryRoad_B1F_Text_MichelleIntro
VictoryRoad_B1F_Text_MichelleIntro: @ 0x08219AA3
	.string "ここは ゴール じゃないの\nポケモンリーグへの つうかてん よ!"
	.byte EOS
	.if (. - VictoryRoad_B1F_Text_MichelleIntro) > 0x21
	.error "VictoryRoad_B1F_Text_MichelleIntro may not grow beyond its original slot"
	.endif
	.if (. - VictoryRoad_B1F_Text_MichelleIntro) < 0x21
	.space 0x21 - (. - VictoryRoad_B1F_Text_MichelleIntro)
	.endif
	@ data/maps/VictoryRoad_B1F/scripts.inc:50 VictoryRoad_B1F_Text_MichelleDefeat (+1 aliases)
	.globl VictoryRoad_B1F_Text_MichelleDefeat
VictoryRoad_B1F_Text_MichelleDefeat: @ 0x08219AC4
	.string "その ちょうし!"
	.byte EOS
	.if (. - VictoryRoad_B1F_Text_MichelleDefeat) > 0x9
	.error "VictoryRoad_B1F_Text_MichelleDefeat may not grow beyond its original slot"
	.endif
	.if (. - VictoryRoad_B1F_Text_MichelleDefeat) < 0x9
	.space 0x9 - (. - VictoryRoad_B1F_Text_MichelleDefeat)
	.endif
	@ data/maps/VictoryRoad_B1F/scripts.inc:53 VictoryRoad_B1F_Text_MichellePostBattle
	.globl VictoryRoad_B1F_Text_MichellePostBattle
VictoryRoad_B1F_Text_MichellePostBattle: @ 0x08219ACD
	.string "あなたなら だいじょうぶよ きっと!\nポケモンも やるき まんまん だしね!"
	.byte EOS
	.if (. - VictoryRoad_B1F_Text_MichellePostBattle) > 0x27
	.error "VictoryRoad_B1F_Text_MichellePostBattle may not grow beyond its original slot"
	.endif
	.if (. - VictoryRoad_B1F_Text_MichellePostBattle) < 0x27
	.space 0x27 - (. - VictoryRoad_B1F_Text_MichellePostBattle)
	.endif
	@ data/maps/VictoryRoad_B1F/scripts.inc:56 VictoryRoad_B1F_Text_MitchellIntro (+1 aliases)
	.globl VictoryRoad_B1F_Text_MitchellIntro
VictoryRoad_B1F_Text_MitchellIntro: @ 0x08219AF4
	.string "わたしの ポケモンは すばらしいですよ!"
	.byte EOS
	.if (. - VictoryRoad_B1F_Text_MitchellIntro) > 0x15
	.error "VictoryRoad_B1F_Text_MitchellIntro may not grow beyond its original slot"
	.endif
	.if (. - VictoryRoad_B1F_Text_MitchellIntro) < 0x15
	.space 0x15 - (. - VictoryRoad_B1F_Text_MitchellIntro)
	.endif
	@ data/maps/VictoryRoad_B1F/scripts.inc:59 VictoryRoad_B1F_Text_MitchellDefeat (+1 aliases)
	.globl VictoryRoad_B1F_Text_MitchellDefeat
VictoryRoad_B1F_Text_MitchellDefeat: @ 0x08219B09
	.string "あなた みたいな かた\nはじめて です"
	.byte EOS
	.if (. - VictoryRoad_B1F_Text_MitchellDefeat) > 0x14
	.error "VictoryRoad_B1F_Text_MitchellDefeat may not grow beyond its original slot"
	.endif
	.if (. - VictoryRoad_B1F_Text_MitchellDefeat) < 0x14
	.space 0x14 - (. - VictoryRoad_B1F_Text_MitchellDefeat)
	.endif
	@ data/maps/VictoryRoad_B1F/scripts.inc:62 VictoryRoad_B1F_Text_MitchellPostBattle
	.globl VictoryRoad_B1F_Text_MitchellPostBattle
VictoryRoad_B1F_Text_MitchellPostBattle: @ 0x08219B1D
	.string "あなたと あなたの ポケモンが\nいっしょに いるだけで\lすごい パワーを かんじます"
	.byte EOS
	.if (. - VictoryRoad_B1F_Text_MitchellPostBattle) > 0x2b
	.error "VictoryRoad_B1F_Text_MitchellPostBattle may not grow beyond its original slot"
	.endif
	.if (. - VictoryRoad_B1F_Text_MitchellPostBattle) < 0x2b
	.space 0x2b - (. - VictoryRoad_B1F_Text_MitchellPostBattle)
	.endif
	@ data/maps/VictoryRoad_B1F/scripts.inc:65 VictoryRoad_B1F_Text_HalleIntro (+1 aliases)
	.globl VictoryRoad_B1F_Text_HalleIntro
VictoryRoad_B1F_Text_HalleIntro: @ 0x08219B48
	.string "オーケイ そんなに かまえないで!\nリラックス して いきましょ!"
	.byte EOS
	.if (. - VictoryRoad_B1F_Text_HalleIntro) > 0x22
	.error "VictoryRoad_B1F_Text_HalleIntro may not grow beyond its original slot"
	.endif
	.if (. - VictoryRoad_B1F_Text_HalleIntro) < 0x22
	.space 0x22 - (. - VictoryRoad_B1F_Text_HalleIntro)
	.endif
	@ data/maps/VictoryRoad_B1F/scripts.inc:68 VictoryRoad_B1F_Text_HalleDefeat (+1 aliases)
	.globl VictoryRoad_B1F_Text_HalleDefeat
VictoryRoad_B1F_Text_HalleDefeat: @ 0x08219B6A
	.string "ワンダフル!"
	.byte EOS
	.if (. - VictoryRoad_B1F_Text_HalleDefeat) > 0x7
	.error "VictoryRoad_B1F_Text_HalleDefeat may not grow beyond its original slot"
	.endif
	.if (. - VictoryRoad_B1F_Text_HalleDefeat) < 0x7
	.space 0x7 - (. - VictoryRoad_B1F_Text_HalleDefeat)
	.endif
	@ data/maps/VictoryRoad_B1F/scripts.inc:71 VictoryRoad_B1F_Text_HallePostBattle
	.globl VictoryRoad_B1F_Text_HallePostBattle
VictoryRoad_B1F_Text_HallePostBattle: @ 0x08219B71
	.string "チャンピオンロード だって\nいままでの みちのりと かわらないわ\lのこりも エンジョイしてね"
	.byte EOS
	.if (. - VictoryRoad_B1F_Text_HallePostBattle) > 0x2f
	.error "VictoryRoad_B1F_Text_HallePostBattle may not grow beyond its original slot"
	.endif
	.if (. - VictoryRoad_B1F_Text_HallePostBattle) < 0x2f
	.space 0x2f - (. - VictoryRoad_B1F_Text_HallePostBattle)
	.endif
	@ Embedded ROM bytes: file offset 0x219BA0, size 0x8B
	@ semanticized-mass: resolved embedded ROM pointers
	@ semanticized-mass: resolved embedded ROM pointers
	.byte 0x00, 0x5C, 0x00, 0x52, 0x00, 0x00, 0x00
	.4byte VictoryRoad_B2F_Text_VitoIntro @ ROM pointer 0x08219C2B
	.4byte VictoryRoad_B2F_Text_VitoDefeat @ ROM pointer 0x08219C55
	.byte 0x0F, 0x00
	.4byte VictoryRoad_B2F_Text_VitoPostBattle
	.byte 0x09, 0x06, 0x02, 0x5C, 0x00, 0x53, 0x00, 0x00, 0x00
	.4byte VictoryRoad_B2F_Text_OwenIntro @ ROM pointer 0x08219CBE
	.4byte VictoryRoad_B2F_Text_OwenDefeat @ ROM pointer 0x08219CE1
	@ semanticized-mass: resolved embedded ROM pointers
	.byte 0x0F, 0x00
	.4byte VictoryRoad_B2F_Text_OwenPostBattle @ ROM pointer 0x08219CEB
	.byte 0x09, 0x06, 0x02, 0x5C, 0x00, 0x63, 0x00, 0x00, 0x00
	.4byte VictoryRoad_B2F_Text_CarolineIntro
	.4byte VictoryRoad_B2F_Text_CarolineDefeat
	.byte 0x0F, 0x00
	.4byte VictoryRoad_B2F_Text_CarolinePostBattle
	.byte 0x09, 0x06, 0x02, 0x5C, 0x00, 0x64, 0x00, 0x00, 0x00
	.4byte VictoryRoad_B2F_Text_JulieIntro @ ROM pointer 0x08219D68
	.4byte VictoryRoad_B2F_Text_JulieDefeat @ ROM pointer 0x08219D98
	.byte 0x0F, 0x00
	.4byte VictoryRoad_B2F_Text_JuliePostBattle @ ROM pointer 0x08219DA6
	@ semanticized-mass: resolved embedded ROM pointers
	.byte 0x09, 0x06, 0x02, 0x5C, 0x00, 0x26, 0x00, 0x00, 0x00
	.4byte VictoryRoad_B2F_Text_FelixIntro @ ROM pointer 0x08219DCF
	.4byte VictoryRoad_B2F_Text_FelixDefeat @ ROM pointer 0x08219DED
	.byte 0x0F, 0x00
	.4byte VictoryRoad_B2F_Text_FelixPostBattle
	.byte 0x09, 0x06, 0x02, 0x5C, 0x00, 0xA1, 0x01, 0x00, 0x00
	.4byte VictoryRoad_B2F_Text_DianneIntro @ ROM pointer 0x08219E31
	.4byte VictoryRoad_B2F_Text_DianneDefeat @ ROM pointer 0x08219E56
	.byte 0x0F, 0x00, 0x68, 0x9E, 0x21, 0x08, 0x09, 0x06, 0x02
