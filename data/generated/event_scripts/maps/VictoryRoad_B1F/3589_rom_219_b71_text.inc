	@ data/maps/VictoryRoad_B1F/scripts.inc:29 VictoryRoad_B1F_Text_SamuelIntro (+1 aliases)
	.globl gText_Rom_2199E2
gText_Rom_2199E2: @ 0x082199E2
	.string "ポケモンリーグに ちかづいていると おもうと\nなんだか ドキドキ してきたよ……"
	.byte EOS
	.if (. - gText_Rom_2199E2) > 0x29
	.error "gText_Rom_2199E2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2199E2) < 0x29
	.space 0x29 - (. - gText_Rom_2199E2)
	.endif
	@ data/maps/VictoryRoad_B1F/scripts.inc:32 VictoryRoad_B1F_Text_SamuelDefeat (+1 aliases)
	.globl gText_Rom_219A0B
gText_Rom_219A0B: @ 0x08219A0B
	.string "なにも できなかった……"
	.byte EOS
	.if (. - gText_Rom_219A0B) > 0xd
	.error "gText_Rom_219A0B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_219A0B) < 0xd
	.space 0xd - (. - gText_Rom_219A0B)
	.endif
	@ data/maps/VictoryRoad_B1F/scripts.inc:35 VictoryRoad_B1F_Text_SamuelPostBattle
	.globl gText_Rom_219A18
gText_Rom_219A18: @ 0x08219A18
	.string "ポケモンリーグが とおのいたよ……\nなんだか がっかり するな……"
	.byte EOS
	.if (. - gText_Rom_219A18) > 0x22
	.error "gText_Rom_219A18 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_219A18) < 0x22
	.space 0x22 - (. - gText_Rom_219A18)
	.endif
	@ data/maps/VictoryRoad_B1F/scripts.inc:38 VictoryRoad_B1F_Text_ShannonIntro (+1 aliases)
	.globl gText_Rom_219A3A
gText_Rom_219A3A: @ 0x08219A3A
	.string "ポケモンリーグで かちぬくには\nポケモンへの しんらいが ひつよう なの"
	.byte EOS
	.if (. - gText_Rom_219A3A) > 0x25
	.error "gText_Rom_219A3A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_219A3A) < 0x25
	.space 0x25 - (. - gText_Rom_219A3A)
	.endif
	@ data/maps/VictoryRoad_B1F/scripts.inc:41 VictoryRoad_B1F_Text_ShannonDefeat (+1 aliases)
	.globl gText_Rom_219A5F
gText_Rom_219A5F: @ 0x08219A5F
	.string "しんらい かんけい バッチリね!"
	.byte EOS
	.if (. - gText_Rom_219A5F) > 0x11
	.error "gText_Rom_219A5F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_219A5F) < 0x11
	.space 0x11 - (. - gText_Rom_219A5F)
	.endif
	@ data/maps/VictoryRoad_B1F/scripts.inc:44 VictoryRoad_B1F_Text_ShannonPostBattle
	.globl gText_Rom_219A70
gText_Rom_219A70: @ 0x08219A70
	.string "いつも いっしょに いることで\nポケモンと トレーナーとの あいだに\lしんらい かんけいが できるの"
	.byte EOS
	.if (. - gText_Rom_219A70) > 0x33
	.error "gText_Rom_219A70 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_219A70) < 0x33
	.space 0x33 - (. - gText_Rom_219A70)
	.endif
	@ data/maps/VictoryRoad_B1F/scripts.inc:47 VictoryRoad_B1F_Text_MichelleIntro (+1 aliases)
	.globl gText_Rom_219AA3
gText_Rom_219AA3: @ 0x08219AA3
	.string "ここは ゴール じゃないの\nポケモンリーグへの つうかてん よ!"
	.byte EOS
	.if (. - gText_Rom_219AA3) > 0x21
	.error "gText_Rom_219AA3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_219AA3) < 0x21
	.space 0x21 - (. - gText_Rom_219AA3)
	.endif
	@ data/maps/VictoryRoad_B1F/scripts.inc:50 VictoryRoad_B1F_Text_MichelleDefeat (+1 aliases)
	.globl gText_Rom_219AC4
gText_Rom_219AC4: @ 0x08219AC4
	.string "その ちょうし!"
	.byte EOS
	.if (. - gText_Rom_219AC4) > 0x9
	.error "gText_Rom_219AC4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_219AC4) < 0x9
	.space 0x9 - (. - gText_Rom_219AC4)
	.endif
	@ data/maps/VictoryRoad_B1F/scripts.inc:53 VictoryRoad_B1F_Text_MichellePostBattle
	.globl gText_Rom_219ACD
gText_Rom_219ACD: @ 0x08219ACD
	.string "あなたなら だいじょうぶよ きっと!\nポケモンも やるき まんまん だしね!"
	.byte EOS
	.if (. - gText_Rom_219ACD) > 0x27
	.error "gText_Rom_219ACD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_219ACD) < 0x27
	.space 0x27 - (. - gText_Rom_219ACD)
	.endif
	@ data/maps/VictoryRoad_B1F/scripts.inc:56 VictoryRoad_B1F_Text_MitchellIntro (+1 aliases)
	.globl gText_Rom_219AF4
gText_Rom_219AF4: @ 0x08219AF4
	.string "わたしの ポケモンは すばらしいですよ!"
	.byte EOS
	.if (. - gText_Rom_219AF4) > 0x15
	.error "gText_Rom_219AF4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_219AF4) < 0x15
	.space 0x15 - (. - gText_Rom_219AF4)
	.endif
	@ data/maps/VictoryRoad_B1F/scripts.inc:59 VictoryRoad_B1F_Text_MitchellDefeat (+1 aliases)
	.globl gText_Rom_219B09
gText_Rom_219B09: @ 0x08219B09
	.string "あなた みたいな かた\nはじめて です"
	.byte EOS
	.if (. - gText_Rom_219B09) > 0x14
	.error "gText_Rom_219B09 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_219B09) < 0x14
	.space 0x14 - (. - gText_Rom_219B09)
	.endif
	@ data/maps/VictoryRoad_B1F/scripts.inc:62 VictoryRoad_B1F_Text_MitchellPostBattle
	.globl gText_Rom_219B1D
gText_Rom_219B1D: @ 0x08219B1D
	.string "あなたと あなたの ポケモンが\nいっしょに いるだけで\lすごい パワーを かんじます"
	.byte EOS
	.if (. - gText_Rom_219B1D) > 0x2b
	.error "gText_Rom_219B1D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_219B1D) < 0x2b
	.space 0x2b - (. - gText_Rom_219B1D)
	.endif
	@ data/maps/VictoryRoad_B1F/scripts.inc:65 VictoryRoad_B1F_Text_HalleIntro (+1 aliases)
	.globl gText_Rom_219B48
gText_Rom_219B48: @ 0x08219B48
	.string "オーケイ そんなに かまえないで!\nリラックス して いきましょ!"
	.byte EOS
	.if (. - gText_Rom_219B48) > 0x22
	.error "gText_Rom_219B48 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_219B48) < 0x22
	.space 0x22 - (. - gText_Rom_219B48)
	.endif
	@ data/maps/VictoryRoad_B1F/scripts.inc:68 VictoryRoad_B1F_Text_HalleDefeat (+1 aliases)
	.globl gText_Rom_219B6A
gText_Rom_219B6A: @ 0x08219B6A
	.string "ワンダフル!"
	.byte EOS
	.if (. - gText_Rom_219B6A) > 0x7
	.error "gText_Rom_219B6A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_219B6A) < 0x7
	.space 0x7 - (. - gText_Rom_219B6A)
	.endif
	@ data/maps/VictoryRoad_B1F/scripts.inc:71 VictoryRoad_B1F_Text_HallePostBattle
	.globl gText_Rom_219B71
gText_Rom_219B71: @ 0x08219B71
	.string "チャンピオンロード だって\nいままでの みちのりと かわらないわ\lのこりも エンジョイしてね"
	.byte EOS
	.if (. - gText_Rom_219B71) > 0x2f
	.error "gText_Rom_219B71 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_219B71) < 0x2f
	.space 0x2f - (. - gText_Rom_219B71)
	.endif
	@ Embedded ROM bytes: file offset 0x219BA0, size 0x8B
	@ semanticized-mass: resolved embedded ROM pointers
	@ semanticized-mass: resolved embedded ROM pointers
	.byte 0x00, 0x5C, 0x00, 0x52, 0x00, 0x00, 0x00
	.4byte gText_Rom_219C2B @ ROM pointer 0x08219C2B
	.4byte gText_Rom_219C55 @ ROM pointer 0x08219C55
	.byte 0x0F, 0x00, 0x75, 0x9C, 0x21, 0x08, 0x09, 0x06, 0x02, 0x5C, 0x00, 0x53, 0x00, 0x00, 0x00
	.4byte gText_Rom_219CBE @ ROM pointer 0x08219CBE
	.4byte gText_Rom_219CE1 @ ROM pointer 0x08219CE1
	@ semanticized-mass: resolved embedded ROM pointers
	.byte 0x0F, 0x00
	.4byte gText_Rom_219CEB @ ROM pointer 0x08219CEB
	.byte 0x09, 0x06, 0x02, 0x5C, 0x00, 0x63, 0x00, 0x00, 0x00, 0x19, 0x9D, 0x21, 0x08, 0x29, 0x9D, 0x21
	.byte 0x08, 0x0F, 0x00, 0x37, 0x9D, 0x21, 0x08, 0x09, 0x06, 0x02, 0x5C, 0x00, 0x64, 0x00, 0x00, 0x00
	.4byte gText_Rom_219D68 @ ROM pointer 0x08219D68
	.4byte gText_Rom_219D98 @ ROM pointer 0x08219D98
	.byte 0x0F, 0x00
	.4byte gText_Rom_219DA6 @ ROM pointer 0x08219DA6
	@ semanticized-mass: resolved embedded ROM pointers
	.byte 0x09, 0x06, 0x02, 0x5C, 0x00, 0x26, 0x00, 0x00, 0x00
	.4byte gText_Rom_219DCF @ ROM pointer 0x08219DCF
	.4byte gText_Rom_219DED @ ROM pointer 0x08219DED
	.byte 0x0F, 0x00, 0xF6, 0x9D, 0x21, 0x08, 0x09, 0x06, 0x02, 0x5C, 0x00, 0xA1, 0x01, 0x00, 0x00
	.4byte gText_Rom_219E31 @ ROM pointer 0x08219E31
	.4byte gText_Rom_219E56 @ ROM pointer 0x08219E56
	.byte 0x0F, 0x00, 0x68, 0x9E, 0x21, 0x08, 0x09, 0x06, 0x02
